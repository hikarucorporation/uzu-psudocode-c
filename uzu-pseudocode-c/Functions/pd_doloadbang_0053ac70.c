// Function : pd_doloadbang
// Namespace: 
// Entry    : 0053ac70
// Prototype: undefined pd_doloadbang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053ac70 - 0053acab


void pd_doloadbang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  double unaff_RBX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  
  lVar1 = lastpopped;
  if (lastpopped != 0) {
    puVar2 = gensym("loadbang");
    pd_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,puVar2,
             0x651ee3,0,in_R8,in_R9,unaff_RBX);
  }
  lastpopped = 0;
  return;
}


