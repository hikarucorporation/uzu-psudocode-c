// Function : toVariant
// Namespace: Steinberg:ConstString
// Entry    : 0017e7e0
// Prototype: undefined toVariant(ConstString * this, ushort * param_1)
// Body     : 0017e7e0 - 0017e88f


/* Steinberg::ConstString::toVariant(Steinberg::FVariant&) const */

void __thiscall Steinberg::ConstString::toVariant(ConstString *this,ushort *param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (((byte)this[0x13] & 0x40) == 0) {
    uVar3 = *(undefined8 *)(this + 8);
    uVar1 = *param_1;
    if ((uVar1 & 0x10) != 0) {
      if ((((uVar1 & 4) == 0) || (pvVar2 = *(void **)(param_1 + 4), pvVar2 == (void *)0x0)) &&
         (((uVar1 & 0x20) == 0 || (pvVar2 = *(void **)(param_1 + 4), pvVar2 == (void *)0x0)))) {
        if (((uVar1 & 8) != 0) && (*(long **)(param_1 + 4) != (long *)0x0)) {
          (**(code **)(**(long **)(param_1 + 4) + 0x10))();
        }
      }
      else {
        free(pvVar2);
      }
    }
    param_1[0] = 4;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(this + 8);
    uVar1 = *param_1;
    if ((uVar1 & 0x10) != 0) {
      if ((((uVar1 & 4) != 0) && (pvVar2 = *(void **)(param_1 + 4), pvVar2 != (void *)0x0)) ||
         (((uVar1 & 0x20) != 0 && (pvVar2 = *(void **)(param_1 + 4), pvVar2 != (void *)0x0)))) {
        free(pvVar2);
        param_1[0] = 0x20;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_0017e86f;
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
LAB_0017e86f:
  *(undefined8 *)(param_1 + 4) = uVar3;
  return;
}


