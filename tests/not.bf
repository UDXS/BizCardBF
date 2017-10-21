[not.bf: Binary Not(0/1) in brainf*** By UDXS (Davit Markarian) @ udxs.me
shortened: [[-]+>]<-[[-]+>]<[put your code here]
]
Put input here: 

First, we reduce any number >= 1 to 1
[
[-] subtract until it equals 0
+> add 1 and then move to the next cell so the loop ends
]
< go back to the number (it is either 0 or 1 at this point)
- subtract 1 because then 0(false) will become 255(true) and 1(true) will become 0(false)
Now we reduce 255 to 1 so it outputs either 0 or 1
[
[-] subtract until it equals 0
+> add 1 and then move to the next cell so the loop ends
]
< move back to the working cell
[ execute any code needed here (here is an example)
 -> set 1 to 0, then move to next cell
 +++ +++ +++ +++ +++ +++ +++ +++ +++ +++ +++ add 30 to 0
 . print it out
 < move back to end the loop
]