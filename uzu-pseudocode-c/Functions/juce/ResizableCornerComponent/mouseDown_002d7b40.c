// Function : mouseDown
// Namespace: juce:ResizableCornerComponent
// Entry    : 002d7b40
// Prototype: undefined mouseDown(ResizableCornerComponent * this, long param_1)
// Body     : 002d7b40 - 002d7d43


/* juce::ResizableCornerComponent::mouseDown(juce::MouseEvent const&) */

void __thiscall
juce::ResizableCornerComponent::mouseDown(ResizableCornerComponent *this,long param_1)

{
  long *plVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Desktop *this_00;
  ulong uVar6;
  long lVar7;
  ResizableCornerComponent *pRVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 local_48 [2];
  ulong local_40;
  ResizableCornerComponent *local_38;
  ulong *local_30;
  
  lVar7 = *(long *)(this + 0xf0);
  if ((lVar7 != 0) && (lVar9 = *(long *)(lVar7 + 0x10), lVar9 != 0)) {
    uVar3 = *(undefined4 *)(lVar9 + 0x3c);
    uVar4 = *(undefined4 *)(lVar9 + 0x40);
    uVar5 = *(undefined4 *)(lVar9 + 0x44);
    *(undefined4 *)(this + 0x100) = *(undefined4 *)(lVar9 + 0x38);
    *(undefined4 *)(this + 0x104) = uVar3;
    *(undefined4 *)(this + 0x108) = uVar4;
    *(undefined4 *)(this + 0x10c) = uVar5;
    lVar7 = *(long *)(lVar7 + 0x10);
    do {
      if ((*(ushort *)(lVar7 + 0xe8) & 1) != 0) {
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d7ba5 to 002d7bae has its CatchHandler @ 002d7d57 */
          this_00 = operator_new(0x1d0);
                    /* try { // try from 002d7bb2 to 002d7bb9 has its CatchHandler @ 002d7d44 */
          Desktop::Desktop(this_00);
          Desktop::instance = this_00;
        }
        if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
          lVar9 = 0;
          goto LAB_002d7be0;
        }
        break;
      }
      lVar7 = *(long *)(lVar7 + 0x30);
    } while (lVar7 != 0);
LAB_002d7d24:
    if (*(long **)(this + 0xf8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xf8) + 0x18))();
    }
  }
  return;
LAB_002d7be0:
  plVar1 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar9);
  if (plVar1[1] != lVar7) goto code_r0x002d7beb;
  if (*(long *)(this + 0xf0) == 0) {
    if (lVar7 != 0) goto LAB_002d7d24;
  }
  else if (lVar7 != *(long *)(*(long *)(this + 0xf0) + 0x10)) goto LAB_002d7d24;
  uVar6 = *(ulong *)(param_1 + 8);
  pRVar8 = this;
  do {
    local_40 = uVar6;
    local_38 = pRVar8;
    local_30 = &local_40;
    uVar6 = detail::ComponentHelpers::
            convertToParentSpace<juce::Point<int>>(juce::Component_const&,juce::Point<int>)::
            {lambda()#1}::operator()((_lambda___1_ *)&local_38);
    pfVar2 = *(float **)(pRVar8 + 0x50);
    if (pfVar2 != (float *)0x0) {
      fVar11 = (float)(int)(uVar6 >> 0x20);
      uVar6 = CONCAT44((int)((float)(int)uVar6 * pfVar2[3] + fVar11 * pfVar2[4] + pfVar2[5]),
                       (int)(*pfVar2 * (float)(int)uVar6 + pfVar2[1] * fVar11 + pfVar2[2]));
    }
    pRVar8 = *(ResizableCornerComponent **)(pRVar8 + 0x30);
  } while (pRVar8 != (ResizableCornerComponent *)0x0);
  uVar10 = (**(code **)(*plVar1 + 0x58))((float)(int)uVar6,(float)(int)(uVar6 >> 0x20),plVar1);
  local_48[0] = 0xc;
  (**(code **)(*plVar1 + 0xa8))
            (plVar1,(ulong)((double)(float)uVar10 + DAT_005d9098) & 0xffffffff |
                    (long)((double)(float)((ulong)uVar10 >> 0x20) + DAT_005d9098) << 0x20,local_48);
  goto LAB_002d7d24;
code_r0x002d7beb:
  lVar9 = lVar9 + 8;
  if ((long)*(int *)(Desktop::instance + 0xdc) * 8 == lVar9) goto LAB_002d7d24;
  goto LAB_002d7be0;
}


