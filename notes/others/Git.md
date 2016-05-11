git 是分布式版本控制系统
安装git : `ubuntu :  sudo apt-get install git`
然后进行配置: 

```
git config --global user.name"Your name"
git config --global user.email"Your email"
```

版本库，英文`repository`

先创建一个版本库，选择一個文件夹然后`git init`对这个版本库进行初始化将其变成Git可以管理的仓库。
git只是告诉你**每次的改动**，并不知道你每次改动的**内容**。
在ubuntu可以使用vim在版本库里面创建一个文件。
然后

```
git diff --cached
查看已缓存的与未缓的改动，告诉我们有那些内容已经写入缓存。此命令显示的是接下来要写入快照的内容
```

```
git add filename
git commit -m"对这次改动的一些说明” (提交到仓库）
```

使用`git status` 实时查看当前git状态。如果做了一些改动。那么它将会告诉你改动了,要查看改动了什么内容，可以使用git diff 这个命令查看改动的内容。

要查看近期所做的提交，使用`git log` 查看提交日志。
要将log信息一行显示，使用`git log --pretty=oneline`
前面的一串数字是从commit的版本号，每提交一次commit, Git就会将他们串成一条时间线。

**Git里面HEAD表示当前版本，上一个版本就是HEAD^上上个就是HEAD^^还能写成HEAD~100**

要想回到上一个版本我们可以使用`git reset --hard HEAD^`

但是这时回到就版本之后，如果要想回到以前的版本那就需要commit版本号了，所以不能关闭终端，找到对应的版本号只需要前七位就行。然后`git reset --hard *******`

git回退版本速度非常快，因为在Git内部的HEAD指针。但我们回退版本时，仅仅是改变了HEAD的指向，将HEAD指向了`append GPL`

如果你快关闭了终端，你可以通过`git reflog`找到原来的commit id然后去回退版本

工作区就是指当前我们工作的目录，我们能看见的目录，比如我们新建的GIT就是一个工作区，工作区里面有个隐藏的文件夹，叫.git，这个是Git的版本库，版本库里面有很多东西，最重要的就是stage（也叫index）就是暂存区。还有自动创建的一个分支叫master，和指向master的一个指针HEAD

将文件添加到版本库里面分为两个步骤，首先将文件的用add修改添加到暂存区，然后用commit提交更改，实际上就是暂存区内容提交到当前分支。就是王master上面提交更改\

Git跟踪并管理的是修改而不是文件

使用`git diff HEAD -- readme.txt`可以查看工作区和版本库里面最新版本的区别

git 如果不add到暂存区里面那就不会加入到commit里面。所以就必须先在暂存区里面才能commit到版本库

在修改了文件但是没有add前可以使用`git checkout -- filename`来丢弃对工作区的修改。意思就是撤销。回到最近的一次修改。

同样的，如果你修改了而且commit了你可以使用`git reset HEAD file`把暂存区的修改撤销掉，重新放回工作区。

在工作区里面直接rm一个文件Git就知道你删除了一个文件，这时候，但你`git status`就会发现Git告诉你你删除了一个文件。

所以这时候就工作区和版本库就不一致了，这时候你可以删除版本库里面的文件（`git rm filenema`)也可以回到原来的版本就是还原这个文件（`git checkout -- filename`)。

Git分布式控制系统，同一个git仓库可以分布到不同的机器上，每台机器上的版本库都一样，没有主次之分，一台电脑可以从一台机器上clone版本库。

github就是提供git仓库托管服务的。所以github就是你的远程仓库。

在本地Git仓库与远程github建立联系，首先创建SSH Key 
`ssh-keygen -t rsa -C"email"`

在户主目录下面也就是`home/(name)/.ssh`下面会有公匙和私钥，
登陆github添加SSH公匙
如果同时有好几台机器想要同时commit，只需要将机器的**公匙添加到github的ssh里面就行了**

在github上面创建了一个仓库后，我们可以从这个仓库clone出新的仓库也可以把一个已有的仓库与之关联。
现在我们将一个已经在本地的仓库与远程库关联
首先**git remote add origin** 这里加上github仓库复制下来的地址
添加后，**远程库的名字就是origin**，这是git默认的叫法。下一步，就可以把本地仓库的内容推送到远程库上面了
**`git push -u origin master`**（相当于把当前的主分支推送上去。为后面的分支管理做铺垫。）
但是这里出现了一个问题，说是再次推送前，先与远程变更合并，这时通过网络搜索，进行强行push就是`git push origin +master`至此，远程库与本地库就一样了。\

把本地库推送到远程库用`git push`命令，实际上是把**master推送到远程**。

从远程clone一个库，首先在github creat一个repo，然后复制地址，到终端命令如下
`git clone git@github.com:xiahei/GITTWO.git`
然后进入cd GITTWO就得到了一个和这哦功能短一模一样的本地库。

分支管理，提高效率，降低风险。

HEAD 指向commit 而commit才是指向提交。所以ＨＥＡＤ指的就是当前分支

新建一个分支。-->  `git checkout -b branch_name`新建并且切换到这个分支。想到于`git branch branch_name` 然后 `git checkout branch_name`
然后`git status`查看当前分支。

在一个分支上的改变不会出现在另一个分支上面，也就是合并前，每个分支是独立的。
切换回分支，`git checkout ***`
将某分支branch_1合并到当前分支 `git merge dev`
然后删除某分支 `git branch -d ***`


当两个分支的内容相冲突的时候，两个分支不能合并，而且Git会提示你对文件进行更改然后提交，

`git log --graph --pretty=oneline --abbrev-commit`能显示分支的合并情况。

当你在一个分支上工作的时候需要进行其他工作的时候，这\时候可以用`git stash`进行工作现场的保存，保存之后就能进行其他工作了，之后回来继续工作的时候用`git stash list`命令查看或者`git stash pop`恢复的同时也吧stash删了

强制丢弃一个为合并的分支用`git branch -D ***`

查看远程库的信息。`git remote`或者`git remote -v`

推送到远程库 `git push origin` （加上你要推送的分支名称）

多人协作时，大家可以往master和dev上推送各自的修改，注意要把SSH key添加到Github上。

多人协作时，先`git push origin branch-name`先推送自己的修改，如果推送失败，那么在远程库已经比你的本地库更新了，需要先`git pull`试图合并，如果合并没有冲突，则解决冲突，并在本地提交，然后push上去就行了。有冲突时只需要先pull下来然后git status一下然后进行冲突的接囧。

标签管理，发布某一个版本时，先打上一个标签，这样就可以唯一的切丁了一个版本，将来无论那个版本多可以取出来，相当于这个版本的一个快照。使用`git tag ***`进行标签的mark，然后`git tag`可以查看所有的标签。

同时还能通过`commit  id`进行打标签。
可以使用`git show ***`查看标签信息。

通过`git push origin` （tag name)推送标签。或者一次性全部推送，`git push origin --tags`

如果标签已经推送到远程，这时候要i删除标签就比较难了，具体方法自行google
