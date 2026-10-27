// Function : setValue
// Namespace: juce:Slider:Pimpl
// Entry    : 002d9300
// Prototype: ulong setValue(double param_1, Pimpl * this, int param_3)
// Body     : 002d9300 - 002d968a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::Pimpl::setValue(double, juce::NotificationType) */

ulong __thiscall juce::Slider::Pimpl::setValue(double param_1,Pimpl *this,int param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  double dVar5;
  ulong in_XMM0_Qb;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  ulong extraout_XMM0_Qb_01;
  ulong extraout_XMM0_Qb_02;
  double dVar6;
  double dVar7;
  undefined1 *local_78;
  double local_70;
  double local_68;
  ulong uStack_60;
  double local_58;
  ulong uStack_50;
  long local_48;
  undefined1 local_40 [8];
  double local_38;
  ulong uStack_30;
  double local_28;
  
  if (*(long *)(this + 0x170) == 0) {
    local_68 = *(double *)(this + 0xf8);
    uStack_60 = 0;
    dVar6 = *(double *)(this + 0x108);
    if (0.0 < dVar6) {
      uStack_60 = 0;
      local_58 = dVar6;
      dVar6 = floor((param_1 - local_68) / dVar6 + DAT_005db338);
      param_1 = dVar6 * local_58 + local_68;
      in_XMM0_Qb = extraout_XMM0_Qb_00;
    }
    if ((local_68 < param_1) && (dVar6 = *(double *)(this + 0x100), local_68 < dVar6)) {
      local_68 = (double)(~-(ulong)(dVar6 <= param_1) & (ulong)param_1 |
                         (ulong)dVar6 & -(ulong)(dVar6 <= param_1));
      uStack_60 = in_XMM0_Qb;
    }
  }
  else {
    local_78 = *(undefined1 **)(this + 0xf8);
    local_48 = *(long *)(this + 0x100);
                    /* try { // try from 002d9342 to 002d9354 has its CatchHandler @ 002d96f7 */
    local_28 = param_1;
    local_68 = (double)(**(code **)(this + 0x178))(this + 0x160,&local_78,&local_48,&local_28);
    uStack_60 = extraout_XMM0_Qb;
  }
  uVar4 = (ulong)(*(int *)(this + 0x20) - 0xbU);
  if (*(int *)(this + 0x20) - 0xbU < 2) {
    (**(code **)(**(long **)(this + 0x80) + 0x10))(&local_78);
                    /* try { // try from 002d93fd to 002d9408 has its CatchHandler @ 002d96ef */
    local_58 = (double)(**(code **)(local_78 + 0x20))(&local_70);
                    /* try { // try from 002d9413 to 002d941a has its CatchHandler @ 002d96d2 */
    uStack_50 = extraout_XMM0_Qb_01;
    (**(code **)(**(long **)(this + 0xb0) + 0x10))(&local_48);
                    /* try { // try from 002d9425 to 002d9430 has its CatchHandler @ 002d96ca */
    local_38 = (double)(**(code **)(local_48 + 0x20))(local_40);
                    /* try { // try from 002d9436 to 002d943b has its CatchHandler @ 002d96c2 */
    uStack_30 = extraout_XMM0_Qb_02;
    (**(code **)(local_48 + 0x58))(local_40);
                    /* try { // try from 002d9440 to 002d9445 has its CatchHandler @ 002d96ba */
    uVar4 = (**(code **)(local_78 + 0x58))(&local_70);
    dVar6 = local_38;
    if (local_68 <= local_38) {
      dVar6 = local_68;
    }
    local_68 = (double)(-(ulong)(local_68 < local_58) & (ulong)local_58 |
                       ~-(ulong)(local_68 < local_58) & (ulong)dVar6);
    uStack_60 = uStack_60 & uStack_50 | ~uStack_60 & uStack_30;
  }
  dVar6 = *(double *)(this + 0xe0);
  local_58 = (double)((ulong)local_68 & _DAT_005d91b0);
  uStack_50 = uStack_60 & _UNK_005d91b8;
  if ((local_58 == DAT_005d94e0) ||
     (dVar5 = (double)(_DAT_005d91b0 & (ulong)dVar6), dVar5 == DAT_005d94e0)) {
    if ((local_68 == dVar6) && (!NAN(local_68) && !NAN(dVar6))) {
      return uVar4;
    }
  }
  else {
    dVar6 = (double)((ulong)(local_68 - dVar6) & _DAT_005d91b0);
    if (dVar6 <= DAT_005db368) {
      return uVar4;
    }
    if (dVar5 <= local_58) {
      dVar5 = local_58;
    }
    if (dVar6 <= dVar5 * DAT_005db370) {
      return uVar4;
    }
  }
  if (*(Label **)(this + 600) != (Label *)0x0) {
    Label::hideEditor(*(Label **)(this + 600),'\x01');
  }
  *(double *)(this + 0xe0) = local_68;
  (**(code **)(**(long **)(this + 0x50) + 0x10))(&local_78);
                    /* try { // try from 002d952c to 002d9537 has its CatchHandler @ 002d96b2 */
  local_38 = (double)(**(code **)(local_78 + 0x20))(&local_70);
                    /* try { // try from 002d953c to 002d9541 has its CatchHandler @ 002d96aa */
  (**(code **)(local_78 + 0x58))(&local_70);
  dVar6 = (double)(_DAT_005d91b0 & (ulong)local_38);
  if ((dVar6 == DAT_005d94e0) || (local_58 == DAT_005d94e0)) {
    if ((local_38 == local_68) && (!NAN(local_38) && !NAN(local_68))) goto LAB_002d95e7;
  }
  else {
    dVar5 = (double)((ulong)(local_38 - local_68) & _DAT_005d91b0);
    if (dVar5 <= DAT_005db368) goto LAB_002d95e7;
    dVar7 = local_58;
    if (local_58 <= dVar6) {
      dVar7 = dVar6;
    }
    if (dVar5 <= dVar7 * DAT_005db370) goto LAB_002d95e7;
  }
  if ((!NAN(local_38)) || (!NAN(local_68))) {
    local_78 = &var::Instance::attributesDouble;
    local_70 = local_68;
                    /* try { // try from 002d95d7 to 002d95dc has its CatchHandler @ 002d9693 */
    (**(code **)(**(long **)(this + 0x50) + 0x18))();
                    /* try { // try from 002d95e1 to 002d95e6 has its CatchHandler @ 002d968b */
    (**(code **)(local_78 + 0x58))(&local_70);
  }
LAB_002d95e7:
  updateText(this);
  uVar4 = Component::internalRepaintUnchecked
                    (*(long *)(this + 0x18),0,*(ulong *)(*(long *)(this + 0x18) + 0x40),'\x01');
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


