
#include <string>
using std::string;

class GradeBook
{
    private:
        string courseName;
        
    public:
        void setCourseName(string);
        
        GradeBook(string);
        
        string getCourseName();
        
        void displayMessage();
        
};