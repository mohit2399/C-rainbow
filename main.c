#include <stdio.h>

void introduction();

void character_set();

void keyword();

void whitespace();

void datatype();

void constants();

void primary_constant();

void secondary_constant();
int main() {
    printf("\033[0;30m""\nINTRODUCTION TO C\n");
    printf("topics:\n"
           "1. introduction\n"
           "2. character_set\n"
           "3. keywords\n"
           "4: whitespace\n"
           "5: datatype\n"
           "6: constants\n");
    printf("please enter the code which you want to study:");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1: {
            introduction();
        }
            break;
        case 2: {
            character_set();
        }
            break;
        case 3: {
            keyword();
        }
            break;
        case 4: {
            whitespace();
        }
            break;
        case 5: {
            datatype();
        }
            break;
        case 6: {
            constants();
        }
            break;
            /*case 7:
            {

            }
            break;
            case 6:
            {

            }break;
            case 6:
            {

            }break;
            case 6:
            {

            }break;
            case 6:
            {

            }break;
            case 6:
            {

            }break;
            case 6:
            {

            }break;
            case 6:
            {

            }break;
    */

        default: {
            printf("invalid value");
        }

    }
    return 0;
}

void introduction() {

    printf("C is a very powerful and flexible general purpose language that has\n"
           "gained world wide acceptance over the year,c has its origin in the early\n"
           "1970s in Basic Combined Programming language,a project shared by AT&T Bell labs,USA,\n "
           "and developed by Martin Richard\n"
           "\033[0m"
           "\033[1;30m"
           "\nc is widely accepted for its performance ,portability ,versatility ,simplicity and modularity\n"
           "\033[0m");
}

void character_set() {

    printf("\033[0;31m""\n\nC CHARACTER SET\n"
           "\033[0m"
           "As a language c is a set of character that the c programming language recognizes.\nIt includes:"
           "\033[1;31m"
           "\n all (small and capital) alphabets \nnumeric digits\nspecial characters(/*-+!@#%^&*()_?:~)etc\n"
           "\033[0m");
}

void keyword() {
    printf("\033[0;33m"
           "\n\nC KEYWORDS :\nc keyword are reserved which are for any special purpose.\nin c their is 32 keywords\n"
           "\033[0m"
           "\033[1;33m"
           "examples:\n auto ,static ,register ,extern,typedef,void,char,long,int,short,\nfloat,double,signed,unsigned,"
           "const,volatile,enum,\n struct,union,if,else,for,while,do,switch,case,default,continue,break,goto,return,sizeof"
           "\033[0m");
}

void whitespace() {
    printf("\033[0;34m"
           "\n\nWHITESPACE IN C:\n any combination of spaces,tab or newline is called whitespace in c.\n"
           "c is a free form language so the c compiler recognizes the whitespace and ignore it ");
}

void datatype() {
    printf("\033[1;34m""\n\n DATATYPE IN C:\nc has usual simple datatypes:\n character,integer,fractional values\n"
           "that is char,int,float,double(represents double precision in the float values \n"
           "their are some type modifier to increase the capability of the modifiers\n"
           "1. SHORT:\n the length of the short variable is at least 16 bits\n only used with the int datatype.\n "
           "2. LONG:\n the length of the long variable is at least 32 bits\n only used with the int datatype."
           "\n3. SIGNED:\n signed numbers are positive ,negative,or zero.\n used with char and int both with or without short and long modifiers"
           "\n4. UNSIGNED:\n unsigned numbers are only positive""\033[0m");
}

void constants() {
    printf("\033[0;35m""\n\n CONSTANTS IN C\n"
           "as from its name constants are those values which don't change\n"
           "constants in c are stored in memory locations.In c constants are divided in two categories:\n");
    printf("enter y or n to check the categories");
    char y_n;
    scanf("%c", &y_n);
    switch (y_n) {
        case 1: {
            primary_constant();
        }
            break;
        case 2: {
            secondary_constant();
        }
            break;
        default: {
            printf("invalid value");
        }
    }
}

void primary_constant() {
    printf("\n1. PRIMARY CONSTANTS:"

           "\na. INTEGER CONSTANTS:\n includes one or more digits without any point"
           "\nb. REAL CONSTANTS:\n>*. fractional form:\none or more digits with any point and with a preceding +ve or -ve sign or no sign"
           "\n>*. EXPONENTIAL CONSTANTS:\nin this we represent the real constant in two parts\n"
           "exponent and mantissa,separated by 'e'"
           "\nc. CHARACTER CONSTANT:\nit is a single alphanumeric or a single symbol enclosed with in single quotes");
}


void secondary_constant() {
    printf("\n\n2. SECONDARY CONSTANTS:\n string constants'etc;"

           "\033[0m"
           "\033[1;35m""\n\nSTRING CONSTANT:\n a sequence of characters enclosed within double quotes is a string."
           "note the the character and string are of different types as abide by in c."
           "\033[0m");
}

/*  void variable() {
      printf("\033[1;35m"
             "\n\n VARIABLES IN C:\na variable is a quantity that can be change."
             "every variable has its own datatype(also called domain)"
             "\n a variable is any combination of alphanumerics and underscores where"
             "the first character is an alphabet \nor an underscore"
             "no whitespaces are not allowed within \nthe variable name"
             "upper case and lower case  letters are distinct"
             "\033[0m");
  }

  void function() {
      printf("\033[0;36m""\n\nFUNCTION IN C:\n"
             "the c is based on the concept of the building blocks."
             "the building blocks are called functions"
             "\nA c program is a collection of one or more functions"
             "every c program has a main function"
             "\033[0m");
  }

  void naming() {
      printf("\033[1;36m""\n\nUSEFUL IDENTIFIER NAMING CONVENTIONS\n" "\033[0m"
             "\033[0;37m"
             "SOME BASIC AND USEFUL VARIABLE AND NAMING TECHNIQUES ARE LISTED BELOW "
             "\n 1. try using a meaningful a name is possible"
             "\n 2. avoid full words in a variable names if the name become too large "
             "(even if the compiler support to write long variable because it becomes a \npain to write long variable names"
             "\n 3. the trick is to balance the length of the variable names by using "
             "such a name which can express the content impressively"
             "\n 4. use of underscore (_)"
             "\033[0m");
  }
  void type_declaration() {
      printf("\033[1;37""\n\nTYPE _ DECLARATION VARIABLES\n"
             "statements and instruction are the program units contained in functions"
             "\n these statements define and declare the variables for their use in function and their types"
             "DATATYPE VARIABLE_IDENTIFIER {},VARIABLE_IDENTIFIER;""\033[0m");
  }
  void operator() {
      printf("\033[0;37m""\n\nOPERATORS"
             "\n the c language is rich in operators.An operator is a symbol that instructs the compiler to perform "
             "specific manipulation:\n_arithmetic,_logical or otherwise c has three general classes of operators "
             ",viz,arithmetic,relational,and logical,and bitwise"
             "\n example\na=b+c""\033[0m");
  }
  void arithmetic() {
      printf("\033[1;37m""\n\n1. ARITHMETIC OPERATORS:\nc provides the common binary arithmetic operators of addition"
             "(+),subtraction(-),multiplication(*),and division(/).\n in addition c also provides the unary minus(-)"
             "operator\n the precedence of all the operators are as below"
             "\n() > -(unary) > *,/ > +,- (highest to lowest)""\033[0m");
  }
  void assignment() {
      printf("\033[0;38m" "\n\n2. ASSIGNMENT OPERATOR:\n the assignment operator in C is '='.\n it is a binary operator used to assign"
             "value to the variables. \n general form of this operator:\n"
             "LValue = RValue;""\033[0m");
  }
  void increment_decrement() {
      printf("\033[1;38m""\n\n3. INCREMENT AND DECREMENT OPERATOR""\nfor increment (++) and for decrement (--) operator are used"
             "\n example\n++test (prefix form.> it first increment by 1 the value of test the use the test)"
             "\n test-- (postfix form.> it first use the value of test then increment it with 1""\033[0m");
  }
  void modulus() {
      printf("\033[0;39m""\n\nMODULUS DIVISION OPERATOR\nthe operator'%' is the modulo division operator in C"
             ".It can be used  \n only to integer types such as int and long,with or without type qualifiers "
             "EXAMPLE\nX=4;\nZ=X%2;"
             "\033[0m");
  }
  void shorthand() {
      printf("\033[1;39m""\n\nSHORTHAND OPERATORS\nc provides a number of shorthand operators,which combines "
             "the tasks of carrying out arithmetic operations as well as assignment."
             "\n this operator includes:>"
             "\n += , -= , *= , /= ,%=  \n"
             """\033[0m");
  }
  void relational() {
      printf("\033[0;40m""\n\nRELATIONAL AND LOGICAL OPERATORS"
             "\n the relational operators'=='(equal to),'!='(not equal to), '<' less than , '<=' less than or \nequal to),"
             "'>'(greater than), and '>='(greater than or equal to) are all binary.\nThe equality operator is indicated by '=='"
             "to avoid confusion from the assignment operator '='."
             "\n all relational operator take two expressions as operands and yield either the value zero or a \nnon zero once"
             "\nEXAMPLE\nA<5\nP-99==57*Q,....ETC ""\033[0m");
  }
  void bitwise() {
      printf("\033[1;40m""\n\nBITWISE OPERATORS\n"
             "C provides low level mechanisms to manipulate data at the level of individual bits\n\n"
             "\033[0m""\033[1;40m""\n bit is a single BInary digiT - a zero '0' or a on'1' \n""\033[0m"
             "\033[0;41m""\033[0;30m""\nBITWISE AND , OR , XOR , << (shift left) , >> (shift right), ~ (one's complement):\nC"
             "provides six operators for bit manipulation of integral data types.");
  }
  void ternary() {
      printf("\033[0m""\033[1;41m""\033[1;30m" "\n\nTERNARY CONDITIONAL OPERATORS"
             "C includes a very special types of operator called the ternary conditional operator.\nits basic syntax is:\n"
             "EXPRESSION1 ? EXPRESSION2 : EXPRESSION3;\n\n""\033[0m");
  }
  void size_of() {
      printf("\033[1;41m""\033[1;30m""SIZEOF OPERATOR :\n C provides the unary operator sizeof to find the number of bytes needed to store"
             "\nan object . It has the same precedence and associativity as the other unary \noperators of the form"
             "\n sizeof(object) is an integer that represents the number of bytes needed to \nsolve to store the object in memory\n\n"
             "\033[0m");
  }
  void type_casting() {
      printf("\033[0;42m""\033[1;30m""TYPE CASTING :\n the type of an expression can also be converted explicitly by\n"
             "type casting.the general form of a type cast is "
             "\n (Data Type) Expression\n"
             "int a =8;"
             "\n float p=5;"
             "\n...."
             "\np= (float)(a)/p;\n\n"
             "\033[0m");
  }
  void comments() {
      printf("\033[0;43m""\033[1;30m""COMMENTS:"
             "\n comments are written in C to enhance the readability of the program.\ncomments "
             "may be written to indicate the platform on which the program is written to run on,"
             "\n the author of the program ,the purpose of the program ,the purpose"
             "\n of a statement ,or any other documentation purpose."
             "\n\n comments are of two types:"

             "MULTI LINE COMMENT:"
             "\n/* and ends with *//* \n"

                         "SINGLE LINE COMMENTS :\n "
                         "starts with double backslash "
                         " and no need to close\n\n""\033[0m");
              }
              void fn_revist() {
                  printf("\033[1;44m""\033[1;30m""FUNCTION REVISITED:"
                         "\n a function in C are named so that they can be referenced \nusing the name of the function "
                         "It must not coincide with a variable name or a reversed keyword"
                         "\nReturnType FunctionName  (Argument List)"
                         "  {\n (Body of the function) \n  Declarations;\n statements;\n}\n\n""\033[0m");
              }
              void extra() {
                  printf("\033[1;45m""\033[1;30m""AT LAST SOME MAIN EXTRA POINTS :"
                         "\n c code is made readable by introducing commented\n"
                         "as and when required. the c compiler  ignores comments .To\n"
                         "facilitate i/o ,C provides formatted and un-formatted i/o functions.\n"
                         "the scanf() is a standard input function declared in stdio.h.\n\n ""\033[0m"
                         "\033[1;46m""\033[1;30m""the rules of the scope and visibility determine the access to variables \n"
                         "ina program . according ,there may be local and global variables. \n"
                         "compound statements are a group of statements logically grouped together\n\n""\033[0m"
                         "\033[1;47m""\033[1;30m""the storage class of a variable further determines the rules of scope\n"
                         ",visibility and storage. there are four storage classes-:"
                         "\n AUTOMATIC ,REGISTER ,STATIC and EXTERNAL.\n  "
                         "\033[0m"
                         "TO BE CONTINUED...............");
              }



*/