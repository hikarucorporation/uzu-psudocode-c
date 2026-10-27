// Function : fromAttributes
// Namespace: Steinberg:String
// Entry    : 00182eb0
// Prototype: ulong fromAttributes(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, String * this, long * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00182eb0 - 00182f3a


/* Steinberg::String::fromAttributes(Steinberg::IAttributes*, char const*) */

ulong __thiscall
Steinberg::String::fromAttributes
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,String *this,
          long *param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  ulong local_18;
  long *plStack_10;
  
  local_18 = 0;
  plStack_10 = (long *)0x0;
  lVar3 = *param_10;
                    /* try { // try from 00182ec2 to 00182eeb has its CatchHandler @ 00182f43 */
  iVar1 = (**(code **)(lVar3 + 0x30))(param_10,param_11,&local_18);
  if (iVar1 == 0) {
    uVar2 = fromVariant(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2_00,param_3,param_4,
                        param_5,param_6,param_7,param_8,this,(uint *)&local_18,extraout_RDX,lVar3,
                        param_13,param_14);
    uVar2 = uVar2 & 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  if ((local_18 & 0x10) != 0) {
    if (((((ushort)local_18 & 4) != 0) && (plStack_10 != (long *)0x0)) ||
       ((((ushort)local_18 & 0x20) != 0 && (plStack_10 != (long *)0x0)))) {
      free(plStack_10);
      return uVar2;
    }
    if ((((ushort)local_18 & 8) != 0) && (plStack_10 != (long *)0x0)) {
                    /* try { // try from 00182f30 to 00182f32 has its CatchHandler @ 00182f3b */
      (**(code **)(*plStack_10 + 0x10))();
    }
  }
  return uVar2;
}


