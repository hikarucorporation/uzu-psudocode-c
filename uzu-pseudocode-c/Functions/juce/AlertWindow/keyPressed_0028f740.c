// Function : keyPressed
// Namespace: juce:AlertWindow
// Entry    : 0028f740
// Prototype: undefined8 keyPressed(AlertWindow * this, wint_t * param_1)
// Body     : 0028f740 - 0028f86b


/* juce::AlertWindow::keyPressed(juce::KeyPress const&) */

undefined8 __thiscall juce::AlertWindow::keyPressed(AlertWindow *this,wint_t *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  wint_t wVar4;
  wint_t wVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  if ((long)*(int *)(this + 0x39c) != 0) {
    plVar8 = *(long **)(this + 0x390);
    plVar1 = plVar8 + *(int *)(this + 0x39c);
    do {
      plVar7 = (long *)*plVar8;
      iVar2 = *(int *)((long)plVar7 + 0x14c);
      if ((long)iVar2 != 0) {
        lVar3 = plVar7[0x28];
        lVar9 = 0;
        do {
          if ((param_1[1] == *(wint_t *)(lVar3 + 4 + lVar9)) &&
             (((wVar4 = *(wint_t *)(lVar3 + 8 + lVar9), wVar4 == 0 || (param_1[2] == 0)) ||
              (param_1[2] == wVar4)))) {
            wVar4 = *param_1;
            if (wVar4 == *(wint_t *)(lVar3 + lVar9)) goto LAB_0028f819;
            if (((int)wVar4 < 0x100) && ((int)*(wint_t *)(lVar3 + lVar9) < 0x100)) {
              wVar4 = towlower(wVar4);
              wVar5 = towlower(*(wint_t *)(lVar3 + lVar9));
              if (wVar4 == wVar5) goto LAB_0028f819;
            }
          }
          lVar9 = lVar9 + 0xc;
        } while ((long)iVar2 * 0xc != lVar9);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  if ((*param_1 == 0x1b) && (this[0x428] != (AlertWindow)0x0)) {
    uVar6 = Component::exitModalState((Component *)this,0);
  }
  else {
    if (*param_1 != 0xd) {
      return 0;
    }
    if (*(int *)(this + 0x39c) != 1) {
      return 0;
    }
    plVar7 = (long *)**(long **)(this + 0x390);
LAB_0028f819:
    uVar6 = (**(code **)(*plVar7 + 0x198))();
  }
  return CONCAT71((int7)((ulong)uVar6 >> 8),1);
}


