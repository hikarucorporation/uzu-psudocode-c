// Function : setMinValue
// Namespace: juce:Slider:Pimpl
// Entry    : 002d9700
// Prototype: ulong setMinValue(double param_1, Pimpl * this, int param_3, char param_4)
// Body     : 002d9700 - 002d9a09


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::Pimpl::setMinValue(double, juce::NotificationType, bool) */

ulong __thiscall
juce::Slider::Pimpl::setMinValue(double param_1,Pimpl *this,int param_3,char param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  double dVar5;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 *local_50;
  double local_48;
  double local_40;
  double local_38;
  undefined8 uStack_30;
  double local_28;
  undefined8 local_20;
  
  if (*(long *)(this + 0x170) == 0) {
    local_48 = *(double *)(this + 0xf8);
    dVar5 = *(double *)(this + 0x108);
    uVar8 = 0;
    if (0.0 < dVar5) {
      uStack_30 = 0;
      local_40 = dVar5;
      local_38 = local_48;
      dVar5 = floor((param_1 - local_48) / dVar5 + DAT_005db338);
      param_1 = dVar5 * local_40 + local_38;
      in_XMM0_Qb = extraout_XMM0_Qb_00;
      local_48 = local_38;
      uVar8 = uStack_30;
    }
    if ((local_48 < param_1) && (dVar5 = *(double *)(this + 0x100), local_48 < dVar5)) {
      local_48 = (double)(~-(ulong)(dVar5 <= param_1) & (ulong)param_1 |
                         (ulong)dVar5 & -(ulong)(dVar5 <= param_1));
      uVar8 = in_XMM0_Qb;
    }
  }
  else {
    local_50 = *(undefined1 **)(this + 0xf8);
    local_20 = *(undefined8 *)(this + 0x100);
                    /* try { // try from 002d9743 to 002d9757 has its CatchHandler @ 002d9a50 */
    local_28 = param_1;
    local_48 = (double)(**(code **)(this + 0x178))(this + 0x160,&local_50,&local_20,&local_28);
    uVar8 = extraout_XMM0_Qb;
  }
  uVar4 = (ulong)(*(int *)(this + 0x20) - 9U);
  if (*(int *)(this + 0x20) - 9U < 2) {
    local_38 = local_48;
    uStack_30 = uVar8;
    if (param_4 != '\0') {
      (**(code **)(**(long **)(this + 0xb0) + 0x10))(&local_50);
                    /* try { // try from 002d9808 to 002d9813 has its CatchHandler @ 002d9a12 */
      local_40 = (double)(**(code **)(local_50 + 0x20))(&local_48);
                    /* try { // try from 002d9819 to 002d981e has its CatchHandler @ 002d9a0a */
      (**(code **)(local_50 + 0x58))(&local_48);
      if (local_40 < local_38) {
        setMaxValue(local_38,this,param_3,'\0');
      }
    }
    (**(code **)(**(long **)(this + 0xb0) + 0x10))(&local_50);
                    /* try { // try from 002d985c to 002d9867 has its CatchHandler @ 002d9a48 */
    local_40 = (double)(**(code **)(local_50 + 0x20))(&local_48);
                    /* try { // try from 002d986d to 002d9872 has its CatchHandler @ 002d9a40 */
    uVar4 = (**(code **)(local_50 + 0x58))(&local_48);
    local_48 = local_38;
    if (local_40 <= local_38) {
      local_48 = local_40;
    }
  }
  else {
    dVar5 = *(double *)(this + 0xe0);
    if ((param_4 != '\0') && (dVar5 < local_48)) {
      local_38 = local_48;
      uStack_30 = uVar8;
      uVar4 = setValue(local_48,this,param_3);
      dVar5 = *(double *)(this + 0xe0);
      local_48 = local_38;
    }
    if (dVar5 <= local_48) {
      local_48 = dVar5;
    }
  }
  dVar5 = *(double *)(this + 0xe8);
  dVar7 = (double)((ulong)dVar5 & _DAT_005d91b0);
  if ((dVar7 == DAT_005d94e0) ||
     (dVar6 = (double)(_DAT_005d91b0 & (ulong)local_48), dVar6 == DAT_005d94e0)) {
    if ((dVar5 == local_48) && (!NAN(dVar5) && !NAN(local_48))) {
      return uVar4;
    }
  }
  else {
    dVar5 = (double)((ulong)(dVar5 - local_48) & _DAT_005d91b0);
    if (dVar5 <= DAT_005db368) {
      return uVar4;
    }
    if (dVar6 <= dVar7) {
      dVar6 = dVar7;
    }
    if (dVar5 <= dVar6 * DAT_005db370) {
      return uVar4;
    }
  }
  *(double *)(this + 0xe8) = local_48;
  local_50 = &var::Instance::attributesDouble;
                    /* try { // try from 002d9955 to 002d995c has its CatchHandler @ 002d9a22 */
  (**(code **)(**(long **)(this + 0x80) + 0x18))();
                    /* try { // try from 002d9962 to 002d9967 has its CatchHandler @ 002d9a1a */
  (**(code **)(local_50 + 0x58))(&local_48);
  Component::internalRepaintUnchecked
            (*(long *)(this + 0x18),0,*(ulong *)(*(long *)(this + 0x18) + 0x40),'\x01');
  uVar4 = updatePopupDisplay(this);
  if (param_3 != 0) {
    (**(code **)(**(long **)(this + 0x18) + 0x1a8))();
    if (param_3 == 2) {
      uVar4 = (**(code **)(*(long *)this + 0x10))(this);
    }
    else {
      uVar4 = 0;
      LOCK();
      uVar2 = *(uint *)(*(long *)(this + 8) + 0x18);
      if (uVar2 == 0) {
        *(uint *)(*(long *)(this + 8) + 0x18) = 1;
      }
      else {
        uVar4 = (ulong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        plVar3 = *(long **)(this + 8);
        if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
           (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
          uVar4 = *(ulong *)(this + 8);
          LOCK();
          *(undefined4 *)(uVar4 + 0x18) = 0;
          UNLOCK();
        }
        else {
          uVar4 = InternalMessageQueue::postMessage
                            ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                             (long)plVar3);
        }
      }
    }
  }
  return uVar4;
}


