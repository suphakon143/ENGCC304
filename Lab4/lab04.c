<<<<<<< HEAD
#include <stdio.h>

int main() {
    char emp_id[11] ;
    int hours ;
    float salary_per_hour , total_salary ;

    printf( "Input the Employees ID(Max. 10 chars ): \n" ) ;
    scanf( "%s" , emp_id ) ;

    printf( "Input the working hrs: \n" ) ;
    scanf( "%d" , & hours );

    printf( "Salary amount/hr: \n" ) ;
    scanf( "%f" ,  & salary_per_hour ) ;

    total_salary = hours * salary_per_hour ;

    printf( "Employees ID = %s \n" , emp_id ) ;
    printf( "Salary = U$ %.2f \n" , total_salary ) ;

    return 0 ;
} //end function
=======
#include <stdio.h>

int main() {
    char emp_id[11] ;
    int hours ;
    float salary_per_hour , total_salary ;

    printf( "Input the Employees ID(Max. 10 chars ): \n" ) ;
    scanf( "%s" , emp_id ) ;

    printf( "Input the working hrs: \n" ) ;
    scanf( "%d" , & hours );

    printf( "Salary amount/hr: \n" ) ;
    scanf( "%f" ,  & salary_per_hour ) ;

    total_salary = hours * salary_per_hour ;

    printf( "Employees ID = %s \n" , emp_id ) ;
    printf( "Salary = U$ %.2f \n" , total_salary ) ;

    return 0 ;
} //end function
>>>>>>> 462a0a7e8766a3a5774ca7880bb87c4083f1586c
