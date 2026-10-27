// Function : insert
// Namespace: std:vector_std__optional_juce__Font__std__allocator_std__optional_juce__Font___
// Entry    : 00325960
// Prototype: undefined insert(vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> * this, long * param_1, long * param_2)
// Body     : 00325960 - 00325bb9


/* std::vector<std::optional<juce::Font>, std::allocator<std::optional<juce::Font> >
   >::insert(__gnu_cxx::__normal_iterator<std::optional<juce::Font> const*,
   std::vector<std::optional<juce::Font>, std::allocator<std::optional<juce::Font> > > >,
   std::optional<juce::Font> const&) */

void __thiscall
std::vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>>::insert
          (vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> *this,
          long *param_1,long *param_2)

{
  char cVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *local_50;
  char local_48;
  ulong local_40;
  vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> *local_38;
  
  pvVar2 = *(void **)this;
  plVar7 = *(long **)(this + 8);
  lVar11 = (long)param_1 - (long)pvVar2 >> 4;
  if (plVar7 == *(long **)(this + 0x10)) {
    lVar4 = (long)plVar7 - (long)pvVar2;
    if (lVar4 == 0x7ffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    lVar12 = lVar11 * 0x10;
    uVar9 = lVar4 >> 4;
    uVar5 = 1;
    if (lVar4 != 0) {
      uVar5 = uVar9;
    }
    local_40 = uVar5 + uVar9;
    if (local_40 >> 0x3b != 0) {
      local_40 = 0x7ffffffffffffff;
    }
    if (CARRY8(uVar5,uVar9)) {
      local_40 = 0x7ffffffffffffff;
    }
    if (local_40 == 0) {
      plVar6 = (long *)0x0;
      *(undefined1 *)(lVar12 + 8) = 0;
      cVar1 = (char)param_2[1];
    }
    else {
      plVar6 = operator_new(local_40 << 4);
      *(undefined1 *)(plVar6 + lVar11 * 2 + 1) = 0;
      cVar1 = (char)param_2[1];
    }
    if (cVar1 != '\0') {
      lVar4 = *param_2;
      plVar6[lVar11 * 2] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      *(undefined1 *)(plVar6 + lVar11 * 2 + 1) = 1;
    }
    plVar8 = (long *)((long)pvVar2 + lVar12);
    plVar10 = plVar6;
    if ((long)param_1 - (long)pvVar2 != 0) {
      lVar11 = 0;
      do {
        *(undefined1 *)((long)plVar6 + lVar11 + 8) = 0;
        if (*(char *)((long)pvVar2 + lVar11 + 8) != '\0') {
          *(undefined8 *)((long)plVar6 + lVar11) = *(undefined8 *)((long)pvVar2 + lVar11);
          *(undefined8 *)((long)pvVar2 + lVar11) = 0;
          *(undefined1 *)((long)plVar6 + lVar11 + 8) = 1;
          *(undefined1 *)((long)pvVar2 + lVar11 + 8) = 0;
        }
        lVar11 = lVar11 + 0x10;
      } while (lVar12 != lVar11);
      plVar10 = (long *)(lVar11 + (long)plVar6);
    }
    for (; plVar3 = plVar10 + 2, plVar7 != plVar8; plVar8 = plVar8 + 2) {
      *(undefined1 *)(plVar10 + 3) = 0;
      if ((char)plVar8[1] != '\0') {
        *plVar3 = *plVar8;
        *plVar8 = 0;
        *(undefined1 *)(plVar10 + 3) = 1;
        *(undefined1 *)(plVar8 + 1) = 0;
      }
      plVar10 = plVar3;
    }
    local_38 = this;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(long **)local_38 = plVar6;
    *(long **)(local_38 + 8) = plVar3;
    *(long **)(local_38 + 0x10) = plVar6 + local_40 * 2;
  }
  else if (plVar7 == param_1) {
    *(undefined1 *)(param_1 + 1) = 0;
    plVar7 = param_1;
    if ((char)param_2[1] != '\0') {
      lVar11 = *param_2;
      *param_1 = lVar11;
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
        plVar7 = *(long **)(this + 8);
      }
      *(undefined1 *)(param_1 + 1) = 1;
    }
    *(long **)(this + 8) = plVar7 + 2;
  }
  else {
    local_50 = (long *)((ulong)local_50 & 0xffffffffffffff00);
    local_48 = '\0';
    if ((char)param_2[1] != '\0') {
      local_50 = (long *)*param_2;
      if (local_50 != (long *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      local_48 = '\x01';
    }
                    /* try { // try from 003259cb to 003259d5 has its CatchHandler @ 00325bba */
    _M_insert_aux<std::optional<juce::Font>>
              (this,(undefined8 *)((long)pvVar2 + lVar11 * 0x10),&local_50);
    if ((local_48 != '\0') && (local_48 = 0, local_50 != (long *)0x0)) {
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*local_50 + 8))();
      }
    }
  }
  return;
}


