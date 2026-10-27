// Function : glob_finderror
// Namespace: 
// Entry    : 00548170
// Prototype: undefined glob_finderror(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00548170 - 005481b9


void glob_finderror(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *in_RCX;
  undefined8 extraout_RDX;
  undefined1 *puVar1;
  char *in_R8;
  undefined *in_R9;
  undefined8 uVar2;
  
  if (error_object == (long *)0x0) {
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"no findable error yet");
    return;
  }
  uVar2 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               "last trackable error:");
  puVar1 = error_string;
  uVar2 = post(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%s");
  canvas_finderror(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,error_object,puVar1
                   ,extraout_RDX,in_RCX,in_R8,in_R9);
  return;
}


