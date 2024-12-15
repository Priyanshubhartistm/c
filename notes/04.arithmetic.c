// arithmetic instruction
/*
operator precedence(yani priority me jo upr ayega uski precedence high h..priority me jo niche ayega uski precedence low h.. priority order ko precedence khate h..):- 

*,/,%                                                                           precedence high
+,-,=(assignment operator, assign karna kise chiz ko usko de dena)              precedence low

if same precedence aa jaye to phle kn s solve hoga..(x=4*3/2*5)to iske liye hamre lye "associativity rule"(for same precedence).

left to right(means left se lkr right tk operation ko perform krte jao,agr same precedence h..to )

x=4*3/6*2                         (sbse phle 4 ko 3 se multiply kiya, fir iske ans ko 6se divide kiya,
fir iske output ko hmne 2 ke sath multiply kiya)
12/6
2*2=4

x= 4*3/6*2
x= (12/6)*2
x= 2*2
x=4

*/