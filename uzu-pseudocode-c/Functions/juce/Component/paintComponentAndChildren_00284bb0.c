// Function : paintComponentAndChildren
// Namespace: juce:Component
// Entry    : 00284bb0
// Prototype: undefined paintComponentAndChildren(Component * this, long param_1)
// Body     : 00284bb0 - 002850cd


/* juce::Component::paintComponentAndChildren(juce::Graphics&) */

void __thiscall juce::Component::paintComponentAndChildren(Component *this,long param_1)

{
  Component *pCVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  auVar18 = (**(code **)(**(long **)(param_1 + 8) + 0x60))();
  uVar9 = auVar18._0_8_;
  uVar15 = *(uint *)(this + 100);
  if ((((byte)this[0xea] & 1) != 0) && (uVar15 == 0)) {
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    goto LAB_00284cad;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
    uVar15 = *(uint *)(this + 100);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  if ((int)uVar15 < 1) {
LAB_00284c82:
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
  }
  else {
    uVar13 = (ulong)uVar15 + 1;
    bVar11 = 0;
    do {
      uVar15 = uVar15 - 1;
                    /* try { // try from 00284c4b to 00284c5d has its CatchHandler @ 002850f8 */
      bVar5 = detail::ComponentHelpers::clipChildComponent
                        (*(ComponentHelpers **)(*(long *)(this + 0x58) + (ulong)uVar15 * 8),param_1,
                         uVar9,auVar18._8_8_,0);
      bVar11 = bVar11 | bVar5;
      uVar13 = uVar13 - 1;
    } while (1 < uVar13);
    if ((bVar11 & 1) == 0) goto LAB_00284c82;
                    /* try { // try from 00284c7b to 00284c91 has its CatchHandler @ 002850ea */
    cVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
    if (cVar6 == '\0') goto LAB_00284c82;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
                    /* try { // try from 00284caa to 00284cac has its CatchHandler @ 002850d6 */
    (**(code **)(**(long **)(param_1 + 8) + 0x78))();
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
LAB_00284cad:
  if (0 < *(int *)(this + 100)) {
    local_40 = uVar9 >> 0x20;
    local_48 = auVar18._8_8_ >> 0x20;
    lVar17 = 1;
    lVar16 = 0;
    local_38 = uVar9;
    do {
      pCVar1 = *(Component **)(*(long *)(this + 0x58) + lVar16 * 8);
      if ((*(ushort *)(pCVar1 + 0xe8) & 2) == 0) goto LAB_00284d0b;
      lVar12 = *(long *)(pCVar1 + 0x50);
      if (lVar12 == 0) {
        iVar10 = (int)*(undefined8 *)(pCVar1 + 0x38);
        if ((iVar10 < auVar18._8_4_ + auVar18._0_4_) &&
           (iVar8 = (int)((ulong)*(undefined8 *)(pCVar1 + 0x38) >> 0x20),
           iVar8 < auVar18._12_4_ + auVar18._4_4_)) {
          iVar7 = (int)*(undefined8 *)(pCVar1 + 0x40);
          if ((int)local_38 < iVar10 + iVar7) {
            iVar10 = (int)((ulong)*(undefined8 *)(pCVar1 + 0x40) >> 0x20);
            if ((((iVar8 + iVar10 <= (int)local_40) || (auVar18._8_4_ < 1)) || ((int)local_48 < 1))
               || ((iVar7 < 1 || (iVar10 < 1)))) goto LAB_00284d0b;
            if (*(char *)(param_1 + 0x10) != '\0') {
              *(undefined1 *)(param_1 + 0x10) = 0;
              (**(code **)(**(long **)(param_1 + 8) + 0x70))();
            }
            *(undefined1 *)(param_1 + 0x10) = 1;
            uVar2 = *(undefined8 *)(pCVar1 + 0x38);
            if (((byte)pCVar1[0xea] & 1) == 0) {
              uStack_50 = *(undefined8 *)(pCVar1 + 0x40);
              *(undefined1 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00284ee0 to 00284ef2 has its CatchHandler @ 002850ee */
              local_58 = uVar2;
              (**(code **)(**(long **)(param_1 + 8) + 0x70))();
              cVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x30))
                                (*(long **)(param_1 + 8),&local_58);
              if (cVar6 != '\0') {
                uVar9 = (ulong)*(int *)(this + 100);
                if (lVar16 + 1 < (long)uVar9) {
                  bVar14 = true;
                  lVar12 = lVar17;
                  do {
                    lVar4 = *(long *)(*(long *)(this + 0x58) + lVar12 * 8);
                    if (((~*(ushort *)(lVar4 + 0xe8) & 6) == 0) && (*(long *)(lVar4 + 0x50) == 0)) {
                      local_58 = *(undefined8 *)(lVar4 + 0x38);
                      uStack_50 = *(undefined8 *)(lVar4 + 0x40);
                      if (*(char *)(param_1 + 0x10) != '\0') {
                        *(undefined1 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00284f68 to 00284f7a has its CatchHandler @ 002850e8 */
                        (**(code **)(**(long **)(param_1 + 8) + 0x70))();
                      }
                      (**(code **)(**(long **)(param_1 + 8) + 0x40))();
                      uVar9 = (ulong)*(uint *)(this + 100);
                      bVar14 = false;
                    }
                    lVar12 = lVar12 + 1;
                  } while ((int)lVar12 < (int)uVar9);
                  if (!bVar14) {
                    /* try { // try from 00285000 to 00285053 has its CatchHandler @ 002850de */
                    cVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
                    if (cVar6 != '\0') goto LAB_00285054;
                  }
                }
                uVar2 = *(undefined8 *)(pCVar1 + 0x38);
                if (*(char *)(param_1 + 0x10) != '\0') {
                  *(undefined1 *)(param_1 + 0x10) = 0;
                  (**(code **)(**(long **)(param_1 + 8) + 0x70))();
                }
                (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),uVar2);
                plVar3 = *(long **)(pCVar1 + 0x88);
                if (plVar3 == (long *)0x0) {
                  paintEntireComponent(pCVar1,param_1);
                }
                else {
                  (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
                }
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00284fbd to 00284fef has its CatchHandler @ 002850ee */
              (**(code **)(**(long **)(param_1 + 8) + 0x70))();
              (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),uVar2);
              plVar3 = *(long **)(pCVar1 + 0x88);
              if (plVar3 == (long *)0x0) {
                paintEntireComponent(pCVar1,param_1);
              }
              else {
                (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
              }
            }
LAB_00285054:
            if (*(char *)(param_1 + 0x10) == '\0') {
                    /* try { // try from 00285068 to 0028506a has its CatchHandler @ 002850ce */
              (**(code **)(**(long **)(param_1 + 8) + 0x78))();
              goto LAB_00284d0b;
            }
            goto LAB_00284d00;
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x10) != '\0') {
          *(undefined1 *)(param_1 + 0x10) = 0;
          (**(code **)(**(long **)(param_1 + 8) + 0x70))();
          lVar12 = *(long *)(pCVar1 + 0x50);
        }
        *(undefined1 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00284d6b to 00284e19 has its CatchHandler @ 002850fa */
        (**(code **)(**(long **)(param_1 + 8) + 0x70))();
        (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),lVar12);
        if (((byte)pCVar1[0xea] & 1) == 0) {
LAB_00284d9c:
          local_58 = *(undefined8 *)(pCVar1 + 0x38);
          uStack_50 = *(undefined8 *)(pCVar1 + 0x40);
          if (*(char *)(param_1 + 0x10) != '\0') {
            *(undefined1 *)(param_1 + 0x10) = 0;
            (**(code **)(**(long **)(param_1 + 8) + 0x70))();
          }
          cVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),&local_58);
          if (cVar6 != '\0') goto LAB_00284dd6;
        }
        else {
          cVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
          if (cVar6 != '\0') goto LAB_00284d9c;
LAB_00284dd6:
          uVar2 = *(undefined8 *)(pCVar1 + 0x38);
          if (*(char *)(param_1 + 0x10) != '\0') {
            *(undefined1 *)(param_1 + 0x10) = 0;
            (**(code **)(**(long **)(param_1 + 8) + 0x70))();
          }
          (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),uVar2);
          plVar3 = *(long **)(pCVar1 + 0x88);
          if (plVar3 == (long *)0x0) {
                    /* try { // try from 00284f83 to 00284f8d has its CatchHandler @ 002850fa */
            paintEntireComponent(pCVar1,param_1);
          }
          else {
            (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
          }
        }
        if (*(char *)(param_1 + 0x10) == '\0') {
                    /* try { // try from 00284fa2 to 00284fa4 has its CatchHandler @ 002850f0 */
          (**(code **)(**(long **)(param_1 + 8) + 0x78))();
        }
        else {
LAB_00284d00:
          *(undefined1 *)(param_1 + 0x10) = 0;
        }
      }
LAB_00284d0b:
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 1;
    } while (lVar16 < *(int *)(this + 100));
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
                    /* try { // try from 00285098 to 002850a3 has its CatchHandler @ 002850ec */
  (**(code **)(*(long *)this + 0x100))(this,param_1);
  if (*(char *)(param_1 + 0x10) == '\0') {
                    /* try { // try from 002850bc to 002850be has its CatchHandler @ 002850e0 */
    (**(code **)(**(long **)(param_1 + 8) + 0x78))();
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}


