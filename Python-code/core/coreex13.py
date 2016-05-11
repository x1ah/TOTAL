#!/usr/bin/env python
# coding=utf-8

# 13-1
# 面对对象编程增强了结构化编程，实现了数据与动作的融合，数据层和逻辑层现在由一个可用以创建这些对象的简单抽象层来描述，可重用性。

# 13-2
# 方法指在类里面的函数，方法：在对象里面，而函数本身就是对象[stackoverflow](http://stackoverflow.com/questions/155609/difference-between-a-method-and-a-function)

# 13-3

class MoneyFmt(object):

    '''
    A class of translate dollar
    '''

    def __init__(self, money, minus=True):
        self.money = float(money)
        self.minus = minus
    def update(self, value, minus=True):
        self.money = float(value)
        self.minus = minus
    def __nonzero__(self):
        return abs(self.money) > 0.5
    def __str__(self):
        if self.minus == True and self.money < 0:
            return '-$%.2f' % abs(self.money)
        elif self.minus == False and self.money < 0:
            return '$<%.2f>' % self.money
        else:
            return '$%.2f' % self.money
    __repr__ = __str__

#  13-4
import time
import os
import shelve
class UserDateBase(object):
    '''
    A system of user's name, password and last login time
    '''
    def __init__(self, datefile):
        '''initialise the instance'''
        self.datefile = shelve.open(datefile)
        self.temp_datebase = datefile   # save the file temporary
        self.main()
    def __del__(self):
        '''while rocover update the datebase'''
        # datebase = shelve.open(self.temp_datebase, flag='c', protocol=None, iteback=False)
        datebase.update(other=None)
        datebase.close()
    def up(self):
        '''everytime after some operate, update the datebase save the date'''
        self.datefile.close()
        # self.datefile = shelve.open(self.temp_datebase, flag='c', otocol=None, writeback=False)
    def delete(self, name):
        '''delete the date'''
        try:
            del(self.datefile[name])
            return 'Deleted....'
            self.up()
        except:
            return 'some error occured....delete failed.'
    def update(self, name, password):
        '''convenient client to add date'''
        self.datefile[name] = [password, time.time()]
        self.up()
    def preview(self):
        '''preview all date by dict order'''
        for item in sorted(self.datefile.keys()):
            print '%s:\t password :%s\t\tlast login time: %s' \
             % (item, self.datefile[item][0], self.datefile[item][1])
        self.up()
    def quit(self):
        '''quit the datebase'''
        self.up()
        print 'C U'
    def close(self):
        '''close the datebase'''
        self.datefile.close()
    def main(self):
        choice = '''
  -------------------------------
  | which operate do you want?  |
  |                             |
  |     [a]dd or update         |
  |     [d]elete                |
  |     [p]rebiew               |
  |     [q]uit                  |
  -------------------------------
    '''
        while True:
            c = raw_input(choice+'===>')
            if c == 'a':
                name = raw_input('Input the name you want add:  ')
                password = raw_input('Input the password:  ')
                self.update(name, password)
            elif c == 'd':
                try:
                    name = raw_input('Which date you want delete: ')
                    self.delete(name)
                except:
                    print 'delete failed...'
            elif c == 'p':
                self.preview()
            elif c == 'q':
                self.quit()
                break
            else:
                print 'Please choice correct...'
# 13-5
from math import sqrt
class point(object):
    def __init__(self, x1=0, y1=0, x2=0, y2=0):
        self.x1 = x1
        self.y1 = y1
        self.x2 = x2
        self.y2 = y2
        self.length = sqrt((x1-x2)**2 + (y1-y2)**2)
        self.slope = (y2-y1) / (x2-x1)
        print 'x1= %s, y1= %s, x2= %s, y2= %s' % \
        (self.x1, self.y1, self.x2, self.y2)
    def __repr__(self):
        return '((%s, %s), (%s, %s))' % (self.x1, self.y1, self.x1, self.y2)
    __str__ = __repr__
13-7
import time
class newtime(object):
    def __init__(self, second=time.time(), time_type=0):
        self.second = second
        self.type = time_type
    def update(self, up_time=time.time()):
        self.second = up_time
    def display(self):
        time_type_dict = {'MDY': r'%b/%d/%y',
                        'MDYY': r'%b/%d/%Y',
                        'DMY': r'%d/%m/%y',
                        'DMYY': r'%d/%m/%Y',
                        'MODYY': r'%m %d, %Y'
                        }
        if self.type in time_type_dict:
            return time.strftime(time_type_dict[self.type], time.localtime())
        else:
            return time.ctime()
# 13-8
class stack(list):
    def __init__(self, stack=[]):
        self.stack = stack
    def push(self, item):
        self.stack.append(item)
        print 'push succeed...'
    def pop(self):
        self.stack.pop()
        print 'pop succeed...'
    def peek(self):
        print self.stack[-1]
    def isempty(self):
        if len(self.stack) == 0:
            return 1
        else:
            return 0
    def __str__(self):
        return 'stack:%s' % self.stack
    __repr__ = __str__
# 13-9
class queue(list):
    def __init__(self, queue=[]):
        self.queue = queue
    def enqueue(self, item):
        self.queue.append(item)
        print 'add completed...'
    def dequeue(self):
        self.queue.pop(0)
        print 'abstrack completed...'
    def __str__(self):
        return 'queue:%s' % self.queue
    __repr__ = __str__
# 13-10
class stack_queue(list):
    def __init__(self, item=[]):
        self.item = item
    def shift(self):
        self.item.pop(0)
        print 'pop finished...'
    def unshift(self, element):
        self.item.insert(0, element)
        print 'insert finished...'
    def push(self, element):
        self.item.append(element)
        print 'add finished...'
    def pop(self):
        self.item.pop()
        print 'delete finished...'
    def __str__(self):
        return 'stack and queue: %s' % self.item
    __repr__ = __str__
# 13-11
class Item(object):
    goods = {'banana':100, 'apple':100, 'pear':100, 'bear':10}
    # def __init__(self, goods={'banana':100, 'apple':100, 'pear':100}):
        # self.goods = goods
    # def addgoods(self, goodsname, amount):
        # self.goods[goodsname] = amount
        # print 'add completed...'
#
    # def sellgoods(self, goodsname, amount):
        # self.goods[goodsname] -= amount
        # if self.goods[goodsname] < 0:
            # self.goods[goodsname] = 0
class Cart(object):
    def __init__(self, carname, username, goods={}):
        self.carname = carname
        self.goods = goods
        self.username = username
    def add_to_car(self, goodsname, amount):
        self.goods[goodsname] = amount
    def cut_to_car(self, goodsname, amount):
        if goodsname in self.goods:
            self.goods[goodsname] -= amount
            if self.goods[goodsname] < 0:
                self.goods[goodsname] = 0
    def all_goods(self):
        print 'the market have:', Item.goods
        print 'and %s\'s %s have:' % (self.username, self.carname)
        for good in self.goods:
            print good, '-'*20, self.goods[good]
class User(object):
    def __init__(self, username, carname):
        self.username = username
        self.carname = carname
        self.car = Cart(carname, username)
# 13-12
'''copy from bolg'''
class Message(object):
    def __init__(self, info='', isbroad=False, to='', froms=''):
        self.info = info
        self.isbroad = isbroad
        self.to = to
        self.froms = froms
    def __str__(self):
        if self.isbroad:
            msg = '%s say to everone: %s' % (self.froms, self.info)
        else:
            msg = '%s say to %s: %s' % (self.froms, self.to, self.info)
        return msg
class User(object):
    def __init__(self, name='', sex=True, age=18):
        self.name = name
        self.sex = sex
        self.age = age
    def __str__(self):
        return '%s %s %s' % (self.name, self.sex, self.age)
    def say(self, room, info, to=''):
        if to == '':
            msg = Message(info, True, '', self.name)
        else:
            msg = Message(info, False, to, self.name)
        room.receive(msg)
    def hear(self, msg):
        print msg
    def createroom(self, name):
        return Room(name)
class Room(object):
    def __init__(self, name):
        self.name = name
        self.userlist = []
    def add(self, user):
        self.userlist.append(user)
    def receive(self, msg):
        if msg.isbroad:
            print msg
        else:
            for user in self.userlist:
                if user.name == msg.to:
                    user.hear(msg)
if __name__ == '__main__':
    user1 = User('Tom', True, 16)
    user2 = User('Lily', False, 15)
    user3 = User('Lucy', False)
    room = user1.createroom('chatting room')
    room.add(user1)
    room.add(user2)
    room.add(user3)
    user1.say(room, 'Hi, Lily', 'Lily')
    user2.say(room, 'Hello, Tom', 'Tom')
    user3.say(room, 'Hey, you two')
# 13-13
import shelve
import time
class stock(object):
    def __init__(self):
        self.datebase = shelve.open('stock')
    def add(self, code):
        self.datebase[code] = [time.time()]
    def delete(self, code):
        try:
            del(self.datebase[code])
        except:
            return 'no this code'
    def preview(self):
        for item in self.datebase.keys():
            print item, self.datebase[item]
    def close(self):
        self.datebase.close()
# 13-14
import os
class DOS(object):
    def __init__(self):
        self.command = {'ls': 'dir', 'more': 'more', 'cat': 'type', 'cp': 'copy', 'mv': 'ren', 'rm': 'del'}
    def main(self):
        while True:
            try:
                Dir = os.getcwd()
                command = raw_input(Dir+'$ ')
                if command == 'exit':
                    break
                elif command.split()[0] in self.command:
                    for item in os.popen(command):
                        print item,
                else:
                    print 'uncorrect command...'
            except KeyboardInterrupt:
                print 'please input correct...'
            except:
                print 'Input error...'
# 13-16
def writelines(self, lines, newline=False):
    for line in lines:
        if newline:
            line += os.linesep
        self.file.write(line.upper())
# 13-18
class new_datebase(UserDateBase):
    def revisepswd(self, user):
        f = shelve.open(self.temp_datebase)
        password = input('input old password: ')
        if password == self.datefile[user]:
            new_pswd = input('Input the new password: ')
            f[name] = [new_pswd, time.time()]
        else:
            print 'password incorrect...'
        f.close()

# # 13-19
# 当key被调用时，返回的是经过排序（字典序）的键。

# 13-20
class Time60(object):

    'time60 - track hours and minutes'

    def __init__(self, hr=0, Min=0):
        'time60 constructor - track hours and minutes'
        if isinstance(hr, basestring):
            T = hr.split(':')
            self.hr = int(T[0])
            self.Min = int(T[1])
        elif type(hr) is dict:
            self.hr = hr['hr']
            self.Min = hr['min']
        else:
            self.hr = hr
            self.Min = Min

    def __str__(self):
        'time60 - string representation'
        return '%02d:%02d' % (self.hr, self.Min)

    __repr__ = __str__

    def __add__(self, other):
        'time60 - overloading the addition operator'
        Hr = self.hr + other.hr
        MIN = self.Min + other.Min
        temp_m = MIN % 60
        temp_hour = MIN / 60
        return self.__class__(Hr+temp_hour, temp_m)

    def __iadd__(self, other):
        'time60 - overloading in place addition'
        temp = (self.Min + other.Min)
        self.Min = temp % 60
        self.hr = self.hr + other.hr + temp/60
        return self
