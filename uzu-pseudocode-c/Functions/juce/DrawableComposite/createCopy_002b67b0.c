// Function : createCopy
// Namespace: juce:DrawableComposite
// Entry    : 002b67b0
// Prototype: undefined createCopy(undefined8 * param_1, long param_2)
// Body     : 002b67b0 - 002b68d3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DrawableComposite::createCopy() const */

void __cdecl juce::DrawableComposite::createCopy(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  Component *pCVar8;
  Drawable *this;
  long *plVar9;
  long lVar10;
  Component *local_40;
  undefined8 *local_38;
  
  local_38 = param_1;
  this = operator_new(400);
                    /* try { // try from 002b67d3 to 002b67dd has its CatchHandler @ 002b68d4 */
  Drawable::Drawable(this,param_2);
  *(undefined ***)this = &PTR__DrawableComposite_00707d08;
  uVar7 = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(this + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(this + 0x168) = uVar7;
  *(undefined8 *)(this + 0x170) = *(undefined8 *)(param_2 + 0x170);
  uVar4 = *(undefined4 *)(param_2 + 0x17c);
  uVar5 = *(undefined4 *)(param_2 + 0x180);
  uVar6 = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(this + 0x17c) = uVar4;
  *(undefined4 *)(this + 0x180) = uVar5;
  *(undefined4 *)(this + 0x184) = uVar6;
  this[0x188] = (Drawable)0x0;
  iVar1 = *(int *)(param_2 + 100);
  if ((long)iVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x58);
    lVar10 = 0;
    do {
      lVar3 = *(long *)(lVar2 + lVar10);
      if (lVar3 != 0) {
        plVar9 = (long *)__dynamic_cast(lVar3,&Component::typeinfo,&Drawable::typeinfo,0);
        if (plVar9 != (long *)0x0) {
                    /* try { // try from 002b686c to 002b6879 has its CatchHandler @ 002b68d9 */
          (**(code **)(*plVar9 + 0x198))(&local_40,plVar9);
          pCVar8 = local_40;
          local_40 = (Component *)0x0;
          if (pCVar8 != (Component *)0x0) {
                    /* try { // try from 002b6890 to 002b68aa has its CatchHandler @ 002b68de */
            (**(code **)(*(long *)pCVar8 + 0x60))(pCVar8,1);
            Component::addChildComponent((Component *)this,pCVar8,0xffffffff);
            if (local_40 != (Component *)0x0) {
              (**(code **)(*(long *)local_40 + 8))();
            }
          }
        }
      }
      lVar10 = lVar10 + 8;
    } while ((long)iVar1 * 8 != lVar10);
  }
  *local_38 = this;
  return;
}


