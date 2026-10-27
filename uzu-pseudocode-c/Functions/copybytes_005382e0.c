// Function : copybytes
// Namespace: 
// Entry    : 005382e0
// Prototype: void * copybytes(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, void * param_9, size_t param_10)
// Body     : 005382e0 - 00538337


void * copybytes(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                void *param_9,size_t param_10)

{
  void *__dest;
  size_t __nmemb;
  undefined8 extraout_XMM0_Qa;
  
  __nmemb = param_10;
  if (param_10 == 0) {
    __nmemb = 1;
  }
  __dest = calloc(__nmemb,1);
  if (__dest == (void *)0x0) {
    post(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "pd: getbytes() failed -- out of memory");
  }
  else if (param_10 != 0) {
    memcpy(__dest,param_9,param_10);
  }
  return __dest;
}


