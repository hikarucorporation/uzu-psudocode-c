// Function : class_new64
// Namespace: 
// Entry    : 00537900
// Prototype: undefined8 class_new64(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9)
// Body     : 00537900 - 0053795c


undefined8
class_new64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
           undefined8 *param_9)

{
  undefined1 in_AL;
  undefined8 in_R9;
  
  if (param_9 == (undefined8 *)0x0) {
    logpost(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,3,
            "refusing to load unnamed %dbit-float object into %dbit-float Pd",0x40,0x20,in_R9,in_AL)
    ;
    return 0;
  }
  logpost(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
          (uint)class_new64_loglevel * 3,
          "refusing to load %dbit-float object \'%s\' into %dbit-float Pd",0x40,*param_9,0x20,in_AL)
  ;
  class_new64_loglevel = 1;
  return 0;
}


