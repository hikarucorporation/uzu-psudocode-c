// Function : addChildComponent
// Namespace: juce:Component
// Entry    : 00238ac0
// Prototype: undefined addChildComponent(Component * this, Component * param_1, uint param_2)
// Body     : 00238ac0 - 00238c7d


/* juce::Component::addChildComponent(juce::Component&, int) */

void __thiscall juce::Component::addChildComponent(Component *this,Component *param_1,uint param_2)

{
  Component *this_00;
  uint3 uVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  
  this_00 = *(Component **)(param_1 + 0x30);
  if (this_00 == this) {
    return;
  }
  if (this_00 == (Component *)0x0) {
    removeFromDesktop(param_1);
  }
  else {
    uVar7 = 0xffffffff;
    if ((long)*(int *)(this_00 + 100) != 0) {
      lVar2 = (long)*(int *)(this_00 + 100) << 3;
      lVar6 = 0;
      do {
        if (*(Component **)(*(long *)(this_00 + 0x58) + lVar6 * 8) == param_1) {
          uVar7 = (uint)lVar6;
          break;
        }
        lVar6 = lVar6 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    removeChildComponent(this_00,uVar7,'\x01',1);
  }
  *(Component **)(param_1 + 0x30) = this;
  uVar1 = *(uint3 *)(param_1 + 0xe8);
  if ((uVar1 & 2) != 0) {
    repaintParent(param_1);
    uVar1 = *(uint3 *)(param_1 + 0xe8);
  }
  if ((uVar1 & 0x800) == 0) {
    uVar7 = *(uint *)(this + 100);
    uVar4 = param_2;
    if ((int)uVar7 < (int)param_2) {
      uVar4 = uVar7;
    }
    if ((int)param_2 < 0) {
      uVar4 = uVar7;
    }
    uVar5 = (ulong)uVar4;
    param_2 = 0;
    if ((int)uVar4 < 0) {
      param_2 = uVar4;
    }
    do {
      if ((int)uVar5 < 1) goto LAB_00238bc8;
      lVar2 = uVar5 * 8;
      uVar5 = uVar5 - 1;
    } while ((*(ushort *)(*(long *)(*(long *)(this + 0x58) + -8 + lVar2) + 0xe8) & 0x800) != 0);
    param_2 = (int)uVar5 + 1;
  }
  else {
    uVar7 = *(uint *)(this + 100);
  }
LAB_00238bc8:
  if ((int)*(uint *)(this + 0x60) <= (int)uVar7) {
    uVar7 = uVar7 + ((int)((uVar7 - ((int)(uVar7 + 1) >> 0x1f)) + 1) >> 1) + 9 & 0xfffffff8;
    if (*(uint *)(this + 0x60) != uVar7) {
      if ((int)uVar7 < 1) {
        free(*(void **)(this + 0x58));
        *(undefined8 *)(this + 0x58) = 0;
      }
      else {
        pvVar3 = realloc(*(void **)(this + 0x58),(ulong)uVar7 << 3);
        *(void **)(this + 0x58) = pvVar3;
      }
    }
    *(uint *)(this + 0x60) = uVar7;
    uVar7 = *(uint *)(this + 100);
  }
  lVar2 = *(long *)(this + 0x58);
  if (uVar7 < param_2 || uVar7 - param_2 == 0) {
    puVar8 = (undefined8 *)(lVar2 + (long)(int)uVar7 * 8);
  }
  else {
    lVar6 = (long)(int)param_2;
    memmove((void *)(lVar2 + lVar6 * 8 + 8),(void *)(lVar2 + lVar6 * 8),
            (long)(int)(uVar7 - param_2) << 3);
    puVar8 = (undefined8 *)(lVar6 * 8 + *(long *)(this + 0x58));
    uVar7 = *(uint *)(this + 100);
  }
  *puVar8 = param_1;
  *(uint *)(this + 100) = uVar7 + 1;
  internalHierarchyChanged(param_1);
  internalChildrenChanged(this);
  return;
}


