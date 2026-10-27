// Function : toVariant
// Namespace: Steinberg:String
// Entry    : 00182df0
// Prototype: undefined toVariant(String * this, ushort * param_1)
// Body     : 00182df0 - 00182ea9


/* Steinberg::String::toVariant(Steinberg::FVariant&) const */

void __thiscall Steinberg::String::toVariant(String *this,ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  if (((byte)this[0x13] & 0x40) == 0) {
    uVar2 = (**(code **)(*(long *)this + 0x18))();
    uVar1 = *param_1;
    if ((uVar1 & 0x10) != 0) {
      if ((((uVar1 & 4) == 0) || (pvVar3 = *(void **)(param_1 + 4), pvVar3 == (void *)0x0)) &&
         (((uVar1 & 0x20) == 0 || (pvVar3 = *(void **)(param_1 + 4), pvVar3 == (void *)0x0)))) {
        if (((uVar1 & 8) != 0) && (*(long **)(param_1 + 4) != (long *)0x0)) {
          (**(code **)(**(long **)(param_1 + 4) + 0x10))();
        }
      }
      else {
        free(pvVar3);
      }
    }
    param_1[0] = 4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    uVar2 = (**(code **)(*(long *)this + 0x20))();
    uVar1 = *param_1;
    if ((uVar1 & 0x10) != 0) {
      if ((((uVar1 & 4) != 0) && (pvVar3 = *(void **)(param_1 + 4), pvVar3 != (void *)0x0)) ||
         (((uVar1 & 0x20) != 0 && (pvVar3 = *(void **)(param_1 + 4), pvVar3 != (void *)0x0)))) {
        free(pvVar3);
        param_1[0] = 0x20;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_00182e89;
      }
      if (((uVar1 & 8) != 0) && (*(long **)(param_1 + 4) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 4) + 0x10))();
      }
    }
    param_1[0] = 0x20;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
LAB_00182e89:
  *(undefined8 *)(param_1 + 4) = uVar2;
  return;
}


