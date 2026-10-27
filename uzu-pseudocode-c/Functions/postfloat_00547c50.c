// Function : postfloat
// Namespace: 
// Entry    : 00547c50
// Prototype: undefined postfloat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00547c50 - 00547c8a


void postfloat(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 in_RCX;
  undefined8 extraout_RDX;
  char *pcVar1;
  char *in_R8;
  undefined8 in_R9;
  undefined8 uVar2;
  int aiStack_608 [128];
  undefined1 uVar3;
  char local_3f8 [1008];
  
  uVar3 = 1;
  pcVar1 = local_3f8;
  uVar2 = atom_string(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      aiStack_608 + 0x80,local_3f8,(uint *)0x3e8,in_RCX,in_R8,in_R9,1);
  poststring(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_3f8,pcVar1,
             extraout_RDX,in_RCX,in_R8,in_R9,uVar3);
  return;
}


