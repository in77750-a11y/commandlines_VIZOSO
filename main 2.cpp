//
//  Command_lines_lab.cpp
//  Command lines lab
//
//  Created by Andres Vizoso on 3/17/26.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char * argv[]) {
    
    bool verbose_dash_h = false;
    bool verbose_dash_x1 = false;
    bool verbose_parallel = false;
    bool verbose_perpendicular = false;
    bool just_dash_x1 = false;

    string x1_for_point1 = "";
    string y1_for_point1 = "";

    
    string x2_for_point2 = "";
    string y2_for_point2 = "";
    
    string x3_for_point3 = "";
    string y3_for_point3 = "";
    
    string x4_for_point4 = "";
    string y4_for_point4 = "";
    
    string dash_y1 = "-y1";
    string dash_x1 = "-x1";
    
    string dash_y2 = "-y2";
    string dash_x2 = "-x2";
    
    string perpendicular = "perpendicular";
    string parallel = "parallel";
    
    string Perpendicular = "Perpendicular";
    string Parallel = "Parallel";
    
//    int x1 = stoi(x1_for_point1);
//    double double_x1 = static_cast<double>(x1);
//               
//    int y1 = stoi(y1_for_point1);
//    double double_y1 = static_cast<double>(y1);
//           
//    int x2 = stoi(x2_for_point2);
//    double double_x2 = static_cast<double>(x2);
//               
//    int y2 = stoi(y2_for_point2);
//    double double_y2 = static_cast<double>(y2);
//               
//    int x3 = stoi(x3_for_point3);
//    double double_x3 = static_cast<double>(x3);
//               
//    int y3 = stoi(y3_for_point3);
//    double double_y3 = static_cast<double>(y3);
//               
//    int x4 = stoi(x4_for_point4);
//    double double_x4 = static_cast<double>(x4);
//               
//    int y4  = stoi(y4_for_point4);
//    double double_y4 = static_cast<double>(y4);
//               
//    double first_slope = (double_y2 - double_y1)/(double_x2 - double_x1);
//               
//    int numerator_slope1 = (y2 - y1);
//    int denominator_slope1 = (x2 - x1);
//               
//    int numerator_slope2 = (y4 - y3);
//    int denominator_slope2 = (x4 - x3);
//               
//    double second_slope = (double_y4 - double_y3)/(double_x4 - double_x3);
    
    for(int i = 0; i < argc; i++){

        string s = argv[i];
        
        //cout << argv[i] << endl;
        
        if(s == "-h" || s == "-H"){
            verbose_dash_h = true;
        }
        
        else if((s == "-m" || s == "-M") && i < argc - 1){
            
            if(parallel == argv[i + 1] || Parallel == argv[i + 1]){
                verbose_parallel = true;
            }
            else if (perpendicular == argv[i + 1] || Perpendicular == argv[i + 1]){
                verbose_perpendicular = true;
            }
            
            else{
                cout << "ERROR!" << endl;
            }

        }
        
        else if( (s == "-x1" && i < argc - 1 && i < argc - 2) ){
            just_dash_x1 = true;
            x1_for_point1 = argv[i + 1];
            x2_for_point2 = argv[i + 2];
        
            

        }
        
        else if( (s == "-y1" && i < argc - 1 && i < argc - 2) ){
            just_dash_x1 = true;
            y1_for_point1 = argv[i + 1];
            y2_for_point2 = argv[i + 2];
        
            

        }
        

        
        else if( s == "-x2" && i < argc - 1 && i < argc - 2 ){
            just_dash_x1 = true;
            x3_for_point3 = argv[i + 1];
            x4_for_point4 = argv[i + 2];
            
        
            
        }
        
        else if( s == "-y2" && i < argc - 1 && i < argc - 2 ){
            just_dash_x1 = true;
            y3_for_point3 = argv[i + 1];
            y4_for_point4 = argv[i + 2];
            
            
            
        }
        
        
        //cout << argv[i] << endl;

    }

    if (verbose_dash_h) {
                cout << "you must enter -x1 as an argument for two x coordinates for the first point" << endl;
                cout << "you must enter -y1 as an argument for two y coordinates for the second point" << endl;
                cout << endl;
                cout << "you must enter -x2 as an argument for two x coordinates for the third point" << endl;
                cout << "you must enter -y2 as an argument for two y coordinates for the fourth point" << endl;
        cout << "You must enter -m as well as parallel or perpendicular as the next argument" << endl;
        
            }
            
            
            else if (verbose_parallel){
                
                    int x1 = stoi(x1_for_point1);
                    double double_x1 = static_cast<double>(x1);
                
                    int y1 = stoi(y1_for_point1);
                    double double_y1 = static_cast<double>(y1);
                
                    int x2 = stoi(x2_for_point2);
                    double double_x2 = static_cast<double>(x2);
                
                    int y2 = stoi(y2_for_point2);
                    double double_y2 = static_cast<double>(y2);
                
                    int x3 = stoi(x3_for_point3);
                    double double_x3 = static_cast<double>(x3);
                
                    int y3 = stoi(y3_for_point3);
                    double double_y3 = static_cast<double>(y3);
                
                    int x4 = stoi(x4_for_point4);
                    double double_x4 = static_cast<double>(x4);
                
                    int y4  = stoi(y4_for_point4);
                    double double_y4 = static_cast<double>(y4);
                
                    double first_slope = (double_y2 - double_y1)/(double_x2 - double_x1);
                
                    int numerator_slope1 = (y2 - y1);
                    int denominator_slope1 = (x2 - x1);
                
                    int numerator_slope2 = (y4 - y3);
                    int denominator_slope2 = (x4 - x3);
                
                    double second_slope = (double_y4 - double_y3)/(double_x4 - double_x3);
                
                if( (numerator_slope1 / denominator_slope1) == (numerator_slope2/ denominator_slope2) ) {
                    cout << "First line: (" << x1_for_point1 << " , " << y1_for_point1 << ") --- (" << x2_for_point2 << " , " << y2_for_point2 << ")" << endl;
                                    
                                            cout << endl;
                                    
                    cout << "second line: (" << x3_for_point3 << " , " << y3_for_point3 << ") --- (" << x4_for_point4 << " , " << y4_for_point4 << ")" << endl;

                    
                    cout << "Both lines are parallel" << endl;
                }
                else {
                    cout << "error! both lines aren't parallel." << endl;
                }
                
                
            }
    
            else if(verbose_perpendicular){
                
                
                    int x1 = stoi(x1_for_point1);
                    double double_x1 = static_cast<double>(x1);
                
                    int y1 = stoi(y1_for_point1);
                    double double_y1 = static_cast<double>(y1);
                
                    int x2 = stoi(x2_for_point2);
                    double double_x2 = static_cast<double>(x2);
                
                    int y2 = stoi(y2_for_point2);
                    double double_y2 = static_cast<double>(y2);
                
                    int x3 = stoi(x3_for_point3);
                    double double_x3 = static_cast<double>(x3);
                
                    int y3 = stoi(y3_for_point3);
                    double double_y3 = static_cast<double>(y3);
                
                    int x4 = stoi(x4_for_point4);
                    double double_x4 = static_cast<double>(x4);
                
                    int y4  = stoi(y4_for_point4);
                    double double_y4 = static_cast<double>(y4);
                
                    
                
                    int numerator_slope1 = (y2 - y1);
                    int denominator_slope1 = (x2 - x1);
                    int first_slope_int = (numerator_slope1/denominator_slope1);
                    double first_slope = (double_y2 - double_y1)/(double_x2 - double_x1);
                
                    int numerator_slope2 = (y4 - y3);
                    int denominator_slope2 = (x4 - x3);
                    int second_slope_int = (numerator_slope2/denominator_slope2);
                    double second_slope = (double_y4 - double_y3)/(double_x4 - double_x3);
                
                
                
                
                cout << numerator_slope1 << "/" << denominator_slope1 << endl;
                            cout << endl;
                cout << numerator_slope2 << "/" << denominator_slope2 << endl;
                
                cout << "slope 1: " << first_slope_int << endl;
                cout << "slope 2: " << second_slope_int << endl;
                
                cout << "result: " << first_slope_int * second_slope_int << endl;
                cout << endl;
                
                
                
                
                if( first_slope_int * second_slope_int == -1){
                    
                    cout << "First line: (" << x1_for_point1 << " , " << y1_for_point1 << ") --- (" << x2_for_point2 << " , " << y2_for_point2 << ")" << endl;
                                    
                                            cout << endl;
                                    
                    cout << "second line: (" << x3_for_point3 << " , " << y3_for_point3 << ") --- (" << x4_for_point4 << " , " << y4_for_point4 << ")" << endl;
                    
                    cout << "Both Lines are perpendicular" << endl;
                }
                
                else if( denominator_slope1 == 0 && numerator_slope2 == 0){
                    
                        cout << "First line: (" << x1_for_point1 << " , " << y1_for_point1 << ") --- (" << x2_for_point2 << " , " << y2_for_point2 << ")  --> This line is Vertical." << endl;
                        
                        cout << endl;
                        
                        cout << "second line: (" << x3_for_point3 << " , " << y3_for_point3 << ") --- (" << x4_for_point4 << " , " << y4_for_point4 << ")  --> This line is Horizontal." << endl;
                        
                        cout << "Both lines are perpendicular, the only difference is that one line is vertical and the other is horizontal" << endl;
                        
                    }
                                
                else if( numerator_slope1 == 0 && denominator_slope2 == 0){
                    
                    cout << "First line: (" << x1_for_point1 << " , " << y1_for_point1 << ") --- (" << x2_for_point2 << " , " << y2_for_point2 << ")  --> This line is Horizontal." << endl;
                    
                    cout << endl;
                    
                    cout << "second line: (" << x3_for_point3 << " , " << y3_for_point3 << ") --- (" << x4_for_point4 << " , " << y4_for_point4 << ")  --> This line is Vertial." << endl;
                    
                    cout << "Both lines are perpendicular, the only difference is that one line is vertical and the other is horizontal" << endl;
                    
            }
                
                else {
                    
                    cout << "First line: (" << x1_for_point1 << " , " << y1_for_point1 << ") --- (" << x2_for_point2 << " , " << y2_for_point2 << ")" << endl;
                                    
                                            cout << endl;
                                    
                    cout << "second line: (" << x3_for_point3 << " , " << y3_for_point3 << ") --- (" << x4_for_point4 << " , " << y4_for_point4 << ")" << endl;
                    cout << endl;
                    cout << "ERROR, The lines aren't perpendicular!" << endl;
                }
                
            }
    
            else if(just_dash_x1){
                
            }
    
            
        
            else {
                cout << "ERROR try again" << endl;
            }
}
