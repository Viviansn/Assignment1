Name: Vivian Nguyen
FSUID: vsn17

---

I merged the development and master branches incorrectly. Here is the output
of the command "git reflog --all", as Javier stated to do.

vivia@DESKTOP-87BRBET MINGW64 ~/git/GitHub/Assignment1 (master)
$ git reflog --all
6387ce4 (HEAD -> master, origin/master, origin/development, origin/HEAD, development) refs/remotes/origin/master@{0}: update by push
6387ce4 (HEAD -> master, origin/master, origin/development, origin/HEAD, development) refs/heads/master@{0}: merge development: Fast-forward
6387ce4 (HEAD -> master, origin/master, origin/development, origin/HEAD, development) HEAD@{0}: merge development: Fast-forward
673c1bb HEAD@{1}: checkout: moving from development to master
6387ce4 (HEAD -> master, origin/master, origin/development, origin/HEAD, development) refs/remotes/origin/development@{0}: update by push
6387ce4 (HEAD -> master, origin/master, origin/development, origin/HEAD, development) refs/heads/development@{0}: commit: EDIT: ANSWERS.TXT (INCLUDED ANSWER TO QUESTION 5)
6387ce4 (HEAD -> master, origin/master, origin/development, origin/HEAD, development) HEAD@{2}: commit: EDIT: ANSWERS.TXT (INCLUDED ANSWER TO QUESTION 5)
6fcdee6 refs/remotes/origin/development@{1}: update by push
6fcdee6 refs/heads/development@{1}: commit: EDIT: RAREKRAGLE.H (FIXED SYNTAX ERROR)
6fcdee6 HEAD@{3}: commit: EDIT: RAREKRAGLE.H (FIXED SYNTAX ERROR)
fecd39b refs/remotes/origin/development@{2}: update by push
fecd39b refs/heads/development@{2}: commit: EDIT: WEAPONFACTORY.CPP (ADDED HEADER FILES)
fecd39b HEAD@{4}: commit: EDIT: WEAPONFACTORY.CPP (ADDED HEADER FILES)
de9716f refs/remotes/origin/development@{3}: update by push
de9716f refs/heads/development@{3}: commit: EDIT: MAIN.CPP TO TEST NEW WEAPONS ADDED
de9716f HEAD@{5}: commit: EDIT: MAIN.CPP TO TEST NEW WEAPONS ADDED
8ce419b refs/remotes/origin/development@{4}: update by push
8ce419b refs/heads/development@{4}: commit: EDIT: WEAPONFACTORY.CPP (NEW WEAPONS ADDED)
8ce419b HEAD@{6}: commit: EDIT: WEAPONFACTORY.CPP (NEW WEAPONS ADDED)
783d28e refs/remotes/origin/development@{5}: update by push
783d28e refs/heads/development@{5}: commit: RAREKRAGLE.CPP FILE IMPLEMENTED
783d28e HEAD@{7}: commit: RAREKRAGLE.CPP FILE IMPLEMENTED
73ecc5c refs/remotes/origin/development@{6}: update by push
73ecc5c refs/heads/development@{6}: commit: RAREKRAGLE.H FILE ADDED
73ecc5c HEAD@{8}: commit: RAREKRAGLE.H FILE ADDED
e02ea14 refs/remotes/origin/development@{7}: update by push
e02ea14 refs/heads/development@{7}: commit: CRAZYRANDOMSWORD.CPP FILE IMPLEMENTED
e02ea14 HEAD@{9}: commit: CRAZYRANDOMSWORD.CPP FILE IMPLEMENTED
6b21374 refs/remotes/origin/development@{8}: update by push
6b21374 refs/heads/development@{8}: commit: CRAZYRANDOMSWORD.H FILE CREATED
6b21374 HEAD@{10}: commit: CRAZYRANDOMSWORD.H FILE CREATED
88af856 refs/remotes/origin/development@{9}: update by push
88af856 refs/heads/development@{9}: commit: EDIT: FIXED SYNTAX ERROR IN SIMPLEHAMMER.CPP
88af856 HEAD@{11}: commit: EDIT: FIXED SYNTAX ERROR IN SIMPLEHAMMER.CPP
d24ef8b refs/remotes/origin/development@{10}: update by push
d24ef8b refs/heads/development@{10}: commit: EDIT: SIMPLEHAMMER.H
d24ef8b HEAD@{12}: commit: EDIT: SIMPLEHAMMER.H
d91ed48 refs/remotes/origin/development@{11}: update by push
d91ed48 refs/heads/development@{11}: commit: SIMPLEHAMMER.CPP IMPLEMENTION FILE FINISHED
d91ed48 HEAD@{13}: commit: SIMPLEHAMMER.CPP IMPLEMENTION FILE FINISHED
9bd5da4 refs/remotes/origin/development@{12}: update by push
9bd5da4 refs/heads/development@{12}: commit: SIMPLEHAMMER.H HEADER FILE CREATED
9bd5da4 HEAD@{14}: commit: SIMPLEHAMMER.H HEADER FILE CREATED
673c1bb refs/heads/development@{13}: branch: Created from origin/development
673c1bb HEAD@{15}: checkout: moving from master to development
673c1bb refs/remotes/origin/development@{13}: fetch --progress --prune origin: storing head
673c1bb refs/remotes/origin/master@{1}: update by push
673c1bb refs/heads/master@{1}: commit: UPDATED ANSWERS.TXT
673c1bb HEAD@{16}: commit: UPDATED ANSWERS.TXT
4f21f09 refs/remotes/origin/master@{2}: update by push
4f21f09 refs/heads/master@{2}: commit: NEW FILE ANSWERS.TXT ADDED
4f21f09 HEAD@{17}: commit: NEW FILE ANSWERS.TXT ADDED
2636ccb refs/remotes/origin/master@{3}: update by push
2636ccb refs/heads/master@{3}: commit: UPDATED STATUS.TXT
2636ccb HEAD@{18}: commit: UPDATED STATUS.TXT
2968947 refs/heads/master@{4}: commit: Updated README.md file
2968947 HEAD@{19}: commit: Updated README.md file
3d373c9 (upstream/master) refs/remotes/upstream/master@{0}: fetch --progress --prune upstream: storing head
3d373c9 (upstream/master) refs/heads/master@{5}: clone: from https://github.com/Viviansn/Assignment1.git
3d373c9 (upstream/master) refs/remotes/origin/HEAD@{0}: clone: from https://github.com/Viviansn/Assignment1.git
3d373c9 (upstream/master) HEAD@{20}: clone: from https://github.com/Viviansn/Assignment1.git
