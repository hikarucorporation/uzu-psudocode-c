// Function : handleMouseEvent
// Namespace: juce:ComponentPeer
// Entry    : 002ccd10
// Prototype: undefined handleMouseEvent(undefined4 param_1, undefined8 param_2, undefined8 param_3, long * param_4, uint param_5, long param_6)
// Body     : 002ccd10 - 002ccf08


/* WARNING: Unknown calling convention: __cdecl */
/* juce::ComponentPeer::handleMouseEvent(juce::MouseInputSource::InputSourceType,
   juce::Point<float>, juce::ModifierKeys, float, float, long long, juce::PenDetails, int) */

void __cdecl
juce::ComponentPeer::handleMouseEvent
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4,uint param_5,
          long param_6)

{
  int iVar1;
  long lVar2;
  MouseInputSourceImpl *this;
  bool bVar3;
  Desktop *pDVar4;
  long lVar5;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Db;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 local_38;
  
  if (Desktop::instance == (Desktop *)0x0) {
    local_38 = param_1;
    pDVar4 = operator_new(0x1d0);
                    /* try { // try from 002ccd52 to 002ccd59 has its CatchHandler @ 002ccf39 */
    Desktop::Desktop(pDVar4);
    lVar2 = *(long *)(pDVar4 + 0x40);
    iVar1 = *(int *)(lVar2 + 0x44);
    Desktop::instance = pDVar4;
    param_1 = local_38;
  }
  else {
    lVar2 = *(long *)(Desktop::instance + 0x40);
    iVar1 = *(int *)(lVar2 + 0x44);
  }
  if ((long)iVar1 != 0) {
    lVar5 = 0;
    do {
      this = *(MouseInputSourceImpl **)(*(long *)(lVar2 + 0x38) + lVar5);
      if (*(int *)(this + 0x14) == 0) {
        *(long *)(this + 0xf0) = param_6;
        *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
        local_58 = (**(code **)(*param_4 + 0x50))(param_1,param_4);
        uVar6 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0;
        if (((*(ushort *)(this + 0x3c) & 0x1f0) != 0) && ((param_5 & 0x1f0) != 0))
        goto LAB_002ccde4;
        uVar6 = detail::MouseInputSourceImpl::setPeer
                          (0,param_2,param_3,this,param_4,&local_58,param_6);
        lVar2 = *(long *)(this + 0x58);
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002cce29 to 002cce32 has its CatchHandler @ 002ccf31 */
          pDVar4 = operator_new(0x1d0);
                    /* try { // try from 002cce36 to 002cce3d has its CatchHandler @ 002ccf1e */
          uVar6 = Desktop::Desktop(pDVar4);
          iVar1 = *(int *)(pDVar4 + 0xdc);
          Desktop::instance = pDVar4;
        }
        else {
          iVar1 = *(int *)(Desktop::instance + 0xdc);
        }
        if ((long)iVar1 == 0) goto LAB_002cce6f;
        lVar5 = 0;
        goto LAB_002cce60;
      }
      lVar5 = lVar5 + 8;
    } while ((long)iVar1 * 8 != lVar5);
  }
  detail::MouseInputSourceList::addSource(lVar2);
  return;
  while (lVar5 = lVar5 + 8, (long)iVar1 * 8 != lVar5) {
LAB_002cce60:
    if (*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar5) == lVar2) {
      if (*(long *)(this + 0x58) == 0) {
        return;
      }
      bVar3 = detail::MouseInputSourceImpl::setButtons
                        (uVar6,param_2,this,&local_58,param_6,param_5 & 0x1f0);
      uVar6 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      if (bVar3) {
        return;
      }
      lVar2 = *(long *)(this + 0x58);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002cceb0 to 002cceb9 has its CatchHandler @ 002ccf1c */
        pDVar4 = operator_new(0x1d0);
                    /* try { // try from 002ccebd to 002ccec4 has its CatchHandler @ 002ccf09 */
        uVar6 = Desktop::Desktop(pDVar4);
        Desktop::instance = pDVar4;
      }
      if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
        lVar5 = 0;
        do {
          if (*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar5) == lVar2) {
            if (*(long *)(this + 0x58) == 0) {
              return;
            }
LAB_002ccde4:
            detail::MouseInputSourceImpl::setPointerState
                      (uVar6,param_2,this,(float *)&local_58,param_6,'\0');
            return;
          }
          lVar5 = lVar5 + 8;
        } while ((long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar5);
      }
      break;
    }
  }
LAB_002cce6f:
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


