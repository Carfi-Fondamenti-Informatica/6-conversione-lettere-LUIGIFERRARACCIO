#include "lib.h"
bool conversione (char &a) {
  bool t=true;
  if (a>65 and a<=90){
    a=a+32;
    return a;
  } else {
    a=a-32;
    return a;
  }
}else{
  t=false;
}
return t;
}
return t;
} 
