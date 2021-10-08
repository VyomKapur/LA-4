flag!=7){
        cout<<"--MENU--\n1)Push\n2)Pop\n3)Is Empty\n4)Is Full\n5)Display\n6)Peek\n7)Exit\nINPUT: ";
        cin>>flag;
        switch (flag)
        {
        case 1:
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            if(isEmpty()){