#ifndef POLIM_H
#define POLIM_H

class polim
{

protected:
   int r,g,b;




public:
   void setcolor(int r1,int g1 ,int b1){
       r=r1;
       g=g1;
       b=b1;
   }
   virtual int get_r(){
       return 0;
   }
   virtual int get_g(){
       return 0;
   }   virtual int get_b(){
       return 0;
   }

};

class colors: public polim
{




     int get_r(){
        return r;
    }
    int get_g(){
        return g;
    }    int get_b(){
        return b;
    }


};



#endif // POLIM_H
