load 7 ; acc = 7
store $1 ; $1 = acc
load 0 ; acc = 0
store $2 ; $2 = acc
load 1 ; acc = 1
store $3 ; $3 = acc
store $4 ; $4 = acc
#FOR:
    load $1 ; acc = $1
    jz #ENDFOR
    dec ; acc--
    store $1 ; $1 = acc
    load $2 ; acc = $2
    add $3 ; acc += $3
    store $4 ; $4 = acc
    load $3 ; acc = $3
    store $2 ; $2 = acc
    load $4 ; acc = $4
    store $3 ; $3 = acc
    jmp #FOR
#ENDFOR:
load $4 ; acc = $4
hlt
