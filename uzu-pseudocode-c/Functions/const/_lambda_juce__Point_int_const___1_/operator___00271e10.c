// Function : operator()
// Namespace: const:_lambda_juce__Point_int_const___1_
// Entry    : 00271e10
// Prototype: _func_TEMPNAMEPLACEHOLDERVALUE * operator()({lambda(juce::Point<int>const&)#1} * this, long param_1)
// Body     : 00271e10 - 00271f68


/* juce::RectangleList<int>::subtract<juce::Rectangle<int> >(juce::Array<juce::Rectangle<int>,
   juce::DummyCriticalSection, 0>&, juce::Rectangle<int>)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(juce::Point<int> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(juce::Point<int> const&)
   const */

_func_TEMPNAMEPLACEHOLDERVALUE * __thiscall
const::{lambda(juce::Point<int>const&)#1}::operator()
          (_lambda_juce__Point<int>const___1_ *this,long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  _func_TEMPNAMEPLACEHOLDERVALUE *p_Var4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  ulong local_40;
  ulong local_38;
  
  plVar1 = *(long **)this;
  lVar13 = (long)(int)**(uint **)(this + 8) + 1;
  uVar12 = (uint)lVar13;
  **(uint **)(this + 8) = uVar12;
  uVar2 = **(ulong **)(this + 0x10);
  local_40 = (*(ulong **)(this + 0x10))[1];
  *(undefined4 *)((long)&local_40 + *(long *)**(undefined8 **)(this + 0x18)) =
       *(undefined4 *)(param_1 + *(long *)**(undefined8 **)(this + 0x18));
  uVar6 = local_40;
  uVar11 = local_40 >> 0x20;
  uVar16 = *(uint *)((long)plVar1 + 0xc);
  if ((int)*(uint *)(plVar1 + 1) <= (int)uVar16) {
    uVar16 = uVar16 + ((int)((uVar16 - ((int)(uVar16 + 1) >> 0x1f)) + 1) >> 1) + 9 & 0xfffffff8;
    local_38 = uVar11;
    if (*(uint *)(plVar1 + 1) != uVar16) {
      if ((int)uVar16 < 1) {
        free((void *)*plVar1);
        *plVar1 = 0;
      }
      else {
        pvVar8 = realloc((void *)*plVar1,(ulong)uVar16 << 4);
        *plVar1 = (long)pvVar8;
      }
    }
    *(uint *)(plVar1 + 1) = uVar16;
    uVar16 = *(uint *)((long)plVar1 + 0xc);
    uVar11 = local_38;
  }
  lVar3 = *plVar1;
  if (uVar16 < uVar12 || uVar16 - uVar12 == 0) {
    puVar14 = (undefined4 *)(lVar3 + (long)(int)uVar16 * 0x10);
  }
  else {
    lVar13 = lVar13 * 0x10;
    memmove((void *)(lVar3 + lVar13 + 0x10),(void *)(lVar3 + lVar13),
            (long)(int)(uVar16 - uVar12) << 4);
    puVar14 = (undefined4 *)(lVar13 + *plVar1);
  }
  iVar15 = (int)uVar6;
  iVar7 = (int)uVar2 - iVar15;
  uVar5 = uVar2;
  if (iVar7 != 0 && iVar15 <= (int)uVar2) {
    uVar5 = uVar6;
  }
  iVar15 = (int)(uVar2 >> 0x20);
  iVar10 = (int)uVar11;
  iVar9 = iVar15 - iVar10;
  if (iVar9 != 0 && iVar10 <= iVar15) {
    iVar15 = iVar10;
  }
  iVar10 = -iVar9;
  if (-iVar9 < 0) {
    iVar10 = iVar9;
  }
  iVar9 = -iVar7;
  if (-iVar7 < 0) {
    iVar9 = iVar7;
  }
  *puVar14 = (int)uVar5;
  puVar14[1] = iVar15;
  puVar14[2] = iVar9;
  puVar14[3] = iVar10;
  *(int *)((long)plVar1 + 0xc) = *(int *)((long)plVar1 + 0xc) + 1;
  p_Var4 = *(_func_TEMPNAMEPLACEHOLDERVALUE **)(this + 8);
  *(int *)p_Var4 = *(int *)p_Var4 + 1;
  return p_Var4;
}


