The pointer's main point is "address":
For example,we can control the pointer's value--its address,which is actually 'variable''s address
and is diffrerent from that pointer's address,to do something like change the 'variable''s value.
Important:pointer's use in child function can show its value!
  
"&variable" is an operation to get the variable's address.
"*pointer" is an operation to get  the variable's value of this pointer's value.'*p' itself means value of certain address.
Only pointer can use * to calculate.
  
So,if we define 'int a = 1' and 'int *p':
(PS:1.p actually is a variable because it save a value(another variable's address),and *p is a calculation rather than a pointer.
    and the '*p' in define is nothing but a symbol of pointer.
    2.As you can imagine,a pointer also should have a address because it is a variable.For example,p's value is a's address
    --2000;p's address can be 3000.)
  1.p = &a; \\is equal to
    *p = a;
    First sen means we put the a's address into p's value--like address 3000;
    Second sen means we make a's value be p's pointing object.
                                                       
  2.after p = &a(or *p = a,as you like),if we then:
    &*p;  \\it means we firstly get p's pointing object,then get this object's address.So,the result is equal to &a(or p's value).
                                                                                                                    
    *&p;  \\it means we firstly get p's address like 3000,then we get 3000's pointing object--so it's equal to p(but not &a).
                                                                                                                    
    *&a;  \\it means we firstly get a's address like 2000,then get 2000's value like 1,which is equal to a.
                                                                                                                    
    &*a;  \\*a is illegal because 'a' is not a pointer.
                                                                                                                    
  3.after define int group[10];p =group; if we then:
    (PS:1.because group is already a address,so we use 'p = group' or 'p=&group[0]' instead of p = &group
        2.p+1 in group means it will point the next one)
    (*p)++; \\ *p = a, so it means a++ --a's value add 1.
                                                                                                                    
    *p++; \\is *(p++),but ++ is to add 1 after other operation,so we first get *p(group[0]), and then p++ to group[1].
                                                                                                                    
    *++p  \\is *(++p),means p's pointing--group[0] first change to group[1] ,then get group[1]'s value.
                                                                                                                    
    ++*p  \\is ++(*p),means first get group[0],then group[0]'s value+1.
    
    p+n vs. p++   \\p++ is p move to next number;p+n is p don't move.                                                                                                                 
