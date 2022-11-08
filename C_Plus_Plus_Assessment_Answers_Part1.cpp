# https://technorj.com/linkedin-skill-assessment-c-skill-assessment-answers/
# What is printed from this code?
vector<int> v(22);
bool b = (v[6]);
printf(“%d”, !b);
# Answer: 1

# Which of the following is a reason why using this line is considered a bad practice? (Alternative: Why is using this line considered a bad practice?)
# Answer: If the code uses a function defined in two different libraries with the same prototype but possibly with different implementations, there will be a compilation error due to ambiguity.

# What is the smallest size a variable of the type child_t may occupy in memory?
typedef struct{
unsigned int age : 4;
unsigned char gender : 1;
unsigned int size : 2;
}child_t;
# Answer: 7 bits.

# Which of the following shows the contents of vector v1 and v2 after running this code?
std::vector<int> v1{1,2,3},v2;
v2=v1;
v1.push_back(4);
v2.push_back(5);
# Answer: v1:{1,2,3,4}; v2:{1,2,3,5};
