// Function : setPeer
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 002ccf50
// Prototype: undefined setPeer(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, MouseInputSourceImpl * this, long * param_5, undefined8 * param_6, undefined8 param_7)
// Body     : 002ccf50 - 002cd057


/* juce::detail::MouseInputSourceImpl::setPeer(juce::ComponentPeer&, juce::detail::PointerState
   const&, juce::Time) */

void __thiscall
juce::detail::MouseInputSourceImpl::setPeer
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,MouseInputSourceImpl *this
          ,long *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  Component *pCVar3;
  Desktop *this_00;
  long lVar4;
  long *plVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 local_38;
  
  if ((*(long **)(this + 0x58) == param_5) ||
     ((pCVar3 = findComponentAt((int)*param_6,param_5), uVar6 = extraout_XMM0_Da,
      uVar7 = extraout_XMM0_Db, pCVar3 == (Component *)0x0 &&
      (pCVar3 = findComponentAt((int)*param_6,*(long **)(this + 0x58)), uVar6 = extraout_XMM0_Da_00,
      uVar7 = extraout_XMM0_Db_00, pCVar3 != (Component *)0x0)))) {
    return;
  }
  setComponentUnderMouse(CONCAT44(uVar7,uVar6),param_2_00,param_3,this,0,param_6,param_7);
  *(long **)(this + 0x58) = param_5;
  uVar1 = *param_6;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002ccfda to 002ccfe3 has its CatchHandler @ 002cd06b */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002ccfe7 to 002ccfee has its CatchHandler @ 002cd058 */
    Desktop::Desktop(this_00);
    iVar2 = *(int *)(this_00 + 0xdc);
    Desktop::instance = this_00;
  }
  else {
    iVar2 = *(int *)(Desktop::instance + 0xdc);
  }
  if ((long)iVar2 != 0) {
    lVar4 = 0;
    do {
      if (*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar4) == param_5) {
        plVar5 = *(long **)(this + 0x58);
        goto LAB_002cd031;
      }
      lVar4 = lVar4 + 8;
    } while ((long)iVar2 * 8 != lVar4);
  }
  *(undefined8 *)(this + 0x58) = 0;
  plVar5 = (long *)0x0;
LAB_002cd031:
  local_38 = (undefined4)uVar1;
  pCVar3 = findComponentAt(local_38,plVar5);
  setComponentUnderMouse
            (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2_00,param_3,this,(long)pCVar3,
             param_6,param_7);
  return;
}


