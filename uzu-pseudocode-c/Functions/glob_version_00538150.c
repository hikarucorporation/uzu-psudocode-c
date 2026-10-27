// Function : glob_version
// Namespace: 
// Entry    : 00538150
// Prototype: undefined8 glob_version(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00538150 - 0053819c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
glob_version(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 in_RAX;
  double dVar1;
  
  dVar1 = (double)param_1;
  if (_DAT_00656810 < dVar1) {
    if (glob_version_warned < 1) {
      post(dVar1,_DAT_00656818,param_3,param_4,param_5,param_6,param_7,param_8,
           "warning: file format (%g) newer than this version (%g) of Pd");
    }
    else if (glob_version_warned == 1) {
      post(dVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "(... more file format messages suppressed)");
    }
    glob_version_warned = glob_version_warned + 1;
  }
  return in_RAX;
}


