import time
db = {}
times = [0]

def newuser():
    prompt = 'login desired: '
    while True:
        name = raw_input(prompt)
        if db.has_key(name):
            prompt = 'name taken, try another: '
            continue
        else:
            break
    pwd = raw_input('passwd: ')
    db[name] = pwd



def olduser():
    name = raw_input('login: ')
    pwd = raw_input('passwd: ')
    passwd = db.get(name)
    if passwd == pwd:
        times.append(time.time())
        print 'welcome back', name
        if (times[1] - times[0]) <= 14400.0:
            print 'You already logged in at <%d>' %times[0]
        times.remove(times[0])
    else:
        print 'login incorrect'

def manage():
    prompt = "delete user or view all the user?"
    print 'please login firstly'
    olduser()
    t = False
    while not t:
        choose = raw_input(prompt).strip()[0].lower()
        if choose == 'd':
            name = raw_input('login: ')
            pwd = raw_input('passwd: ')
            passwd = db.get(name)
            if passwd == pwd:
                print 'have delete the', db[name]
                del db[name]
                t = True
            else:
                'login again'
        elif choose == 'v':
            print db
            t = True



def showmenu():
    prompt = """
    (N)ew User Login
    (E)xisting User Login
    (Q)uit
    (M)anage
Enter choice: """

    done = False
    while not done:
        chosen = False
        while not chosen:
            try:
                choice = raw_input(prompt).strip()[0].lower()
            except (EOFError, KeyboardInterrupt):
                choice = 'q'
            print '\nYou picked: [%s]' % choice
            if choice not in 'neqm':
                print 'invaid option, try again'
            else:
                chosen = True

            if choice == 'q': done = True
            if choice == 'n': newuser()
            if choice == 'm': manage()
            if choice == 'e': olduser()

if __name__ == '__main__':
    showmenu()
