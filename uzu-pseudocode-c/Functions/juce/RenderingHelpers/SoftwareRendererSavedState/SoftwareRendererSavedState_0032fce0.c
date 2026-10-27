// Function : SoftwareRendererSavedState
// Namespace: juce:RenderingHelpers:SoftwareRendererSavedState
// Entry    : 0032fce0
// Prototype: undefined SoftwareRendererSavedState(SoftwareRendererSavedState * this, long * param_1, undefined8 param_2)
// Body     : 0032fce0 - 0032feb3


/* juce::RenderingHelpers::SoftwareRendererSavedState::SoftwareRendererSavedState(juce::Image
   const&, juce::Rectangle<int>) */

void __thiscall
juce::RenderingHelpers::SoftwareRendererSavedState::SoftwareRendererSavedState
          (SoftwareRendererSavedState *this,long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  long local_88;
  long local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  void *local_58;
  
  puVar4 = operator_new(0x20);
  *puVar4 = &PTR__RectangleListRegion_00711b08;
  puVar4[2] = 0;
  puVar4[3] = 0;
  if ((0 < (int)param_2) && (0xffffffff < param_2)) {
    puVar5 = malloc(0x80);
    puVar4[2] = puVar5;
    puVar4[3] = &DAT_100000008;
    *puVar5 = 0;
    puVar5[1] = param_2;
  }
  *(undefined8 **)this = puVar4;
  *(undefined4 *)(puVar4 + 1) = 1;
  uVar3 = DAT_005d9038;
  *(undefined1 (*) [16])(this + 8) = ZEXT416(DAT_005d9038);
  *(undefined8 *)(this + 0x18) = 0x3f800000;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined2 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x30) = 0xff000000;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined1 (*) [16])(this + 0x48) = ZEXT416(uVar3);
  *(undefined8 *)(this + 0x58) = 0x3f800000;
  *(undefined8 *)(this + 0x60) = 0x3f80000000000001;
  lVar2 = *param_1;
  *(long *)(this + 0x68) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
                    /* try { // try from 0032fdbe to 0032fdcf has its CatchHandler @ 0032fec1 */
  FontOptions::FontOptions(DAT_005d9064,(FontOptions *)&local_88,0);
                    /* try { // try from 0032fdd5 to 0032fddc has its CatchHandler @ 0032feb4 */
  Font::Font((Font *)(this + 0x70),&local_88);
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
  }
  plVar6 = local_70;
  if (local_70 != local_68) {
    do {
      piVar7 = (int *)(*plVar6 + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar7);
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_68);
  }
  if (local_70 != (long *)0x0) {
    operator_delete(local_70);
  }
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar6 = local_78 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*local_78 + 8))();
    }
  }
  piVar7 = (int *)(local_80 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar7);
    }
  }
  piVar7 = (int *)(local_88 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar7);
    }
  }
  return;
}


