// Function : bringModalComponentsToFront
// Namespace: juce:ModalComponentManager
// Entry    : 00224340
// Prototype: undefined bringModalComponentsToFront(ModalComponentManager * this, char param_1)
// Body     : 00224340 - 002244e9


/* juce::ModalComponentManager::bringModalComponentsToFront(bool) */

void __thiscall
juce::ModalComponentManager::bringModalComponentsToFront(ModalComponentManager *this,char param_1)

{
  int iVar1;
  long *plVar2;
  Desktop *this_00;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  
  uVar3 = (ulong)*(int *)(this + 0x24);
  if (uVar3 == 0) {
    return;
  }
  plVar2 = *(long **)(this + 0x18);
  plVar4 = plVar2 + uVar3;
  uVar9 = 0;
  plVar10 = (long *)0x0;
LAB_0022436c:
  uVar8 = 0;
  plVar7 = plVar2;
  do {
    uVar8 = uVar8 + *(byte *)(*plVar7 + 0x5c);
    plVar7 = plVar7 + 1;
  } while (plVar7 != plVar4);
  if (uVar8 <= uVar9) {
    return;
  }
  if ((int)uVar3 < 1) {
    return;
  }
  uVar3 = (uVar3 & 0xffffffff) + 1;
  uVar8 = 0;
  do {
    if (*(char *)(plVar2[(int)uVar3 - 2] + 0x5c) != '\0') {
      if (uVar8 == uVar9) break;
      uVar8 = uVar8 + 1;
    }
    uVar3 = uVar3 - 1;
    if (uVar3 < 2) {
      return;
    }
  } while( true );
  lVar6 = *(long *)(plVar2[(int)uVar3 - 2] + 0x40);
  if (lVar6 == 0) {
    return;
  }
  do {
    if ((*(ushort *)(lVar6 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00224416 to 0022441f has its CatchHandler @ 002244fd */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 00224423 to 0022442a has its CatchHandler @ 002244ea */
        Desktop::Desktop(this_00);
        iVar1 = *(int *)(this_00 + 0xdc);
        Desktop::instance = this_00;
      }
      else {
        iVar1 = *(int *)(Desktop::instance + 0xdc);
      }
      if ((long)iVar1 != 0) {
        lVar5 = 0;
        goto LAB_00224450;
      }
      break;
    }
    lVar6 = *(long *)(lVar6 + 0x30);
  } while (lVar6 != 0);
  goto LAB_00224490;
  while (lVar5 = lVar5 + 8, (long)iVar1 * 8 != lVar5) {
LAB_00224450:
    plVar7 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar5);
    if (plVar7[1] == lVar6) {
      if (plVar7 != plVar10) {
        if (plVar10 == (long *)0x0) {
          (**(code **)(*plVar7 + 0xd8))(plVar7);
          if (param_1 != '\0') {
            (**(code **)(*plVar7 + 0xf0))(plVar7);
          }
        }
        else {
          (**(code **)(*plVar7 + 0xe0))(plVar7);
        }
        goto LAB_00224493;
      }
      break;
    }
  }
LAB_00224490:
  plVar7 = plVar10;
LAB_00224493:
  uVar9 = uVar9 + 1;
  plVar2 = *(long **)(this + 0x18);
  uVar3 = (ulong)*(int *)(this + 0x24);
  plVar4 = plVar2 + uVar3;
  plVar10 = plVar7;
  if (uVar3 == 0) {
    return;
  }
  goto LAB_0022436c;
}


