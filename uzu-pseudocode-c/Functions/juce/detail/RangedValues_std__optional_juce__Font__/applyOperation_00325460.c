// Function : applyOperation
// Namespace: juce:detail:RangedValues_std__optional_juce__Font__
// Entry    : 00325460
// Prototype: undefined applyOperation(RangedValues<std::optional<juce::Font>> * this, long * param_1, undefined8 * param_2)
// Body     : 00325460 - 003256fa


/* juce::detail::RangedValues<std::optional<juce::Font>
   >::applyOperation(std::variant<juce::detail::Ranges::Ops::New, juce::detail::Ranges::Ops::Split,
   juce::detail::Ranges::Ops::Erase, juce::detail::Ranges::Ops::Change> const&,
   std::optional<juce::Font>) */

void __thiscall
juce::detail::RangedValues<std::optional<juce::Font>>::applyOperation
          (RangedValues<std::optional<juce::Font>> *this,long *param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  
  cVar1 = (char)param_1[5];
  if (cVar1 == '\x02') {
    std::vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>>::_M_erase
              ((vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> *)
               (this + 0x18),(long *)(*param_1 * 0x10 + *(long *)(this + 0x18)),
               (long *)(param_1[1] * 0x10 + *(long *)(this + 0x18)));
    return;
  }
  if (cVar1 == '\x01') {
    plVar9 = (long *)(*param_1 * 0x10 + *(long *)(this + 0x18));
    std::vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>>::insert
              ((vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> *)
               (this + 0x18),plVar9,plVar9);
    return;
  }
  if (cVar1 == '\0') {
    pvVar2 = *(void **)(this + 0x18);
    puVar3 = *(undefined8 **)(this + 0x20);
    lVar12 = *param_1;
    lVar14 = lVar12 * 0x10;
    puVar10 = (undefined8 *)((long)pvVar2 + lVar14);
    if (puVar3 == *(undefined8 **)(this + 0x28)) {
      lVar5 = (long)puVar3 - (long)pvVar2;
      if (lVar5 == 0x7ffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar8 = lVar5 >> 4;
      uVar6 = 1;
      if (lVar5 != 0) {
        uVar6 = uVar8;
      }
      uVar11 = uVar6 + uVar8;
      if (uVar11 >> 0x3b != 0) {
        uVar11 = 0x7ffffffffffffff;
      }
      if (CARRY8(uVar6,uVar8)) {
        uVar11 = 0x7ffffffffffffff;
      }
      if (uVar11 == 0) {
        puVar7 = (undefined8 *)0x0;
        *(undefined1 *)(lVar14 + 8) = 0;
        cVar1 = *(char *)(param_2 + 1);
      }
      else {
        puVar7 = operator_new(uVar11 << 4);
        *(undefined1 *)(puVar7 + lVar12 * 2 + 1) = 0;
        cVar1 = *(char *)(param_2 + 1);
      }
      if (cVar1 != '\0') {
        puVar7[lVar12 * 2] = *param_2;
        *param_2 = 0;
        *(undefined1 *)(puVar7 + lVar12 * 2 + 1) = 1;
      }
      puVar13 = puVar7;
      if (lVar12 != 0) {
        lVar12 = 0;
        do {
          *(undefined1 *)((long)puVar7 + lVar12 + 8) = 0;
          if (*(char *)((long)pvVar2 + lVar12 + 8) != '\0') {
            *(undefined8 *)((long)puVar7 + lVar12) = *(undefined8 *)((long)pvVar2 + lVar12);
            *(undefined8 *)((long)pvVar2 + lVar12) = 0;
            *(undefined1 *)((long)puVar7 + lVar12 + 8) = 1;
            *(undefined1 *)((long)pvVar2 + lVar12 + 8) = 0;
          }
          lVar12 = lVar12 + 0x10;
        } while (lVar14 != lVar12);
        puVar13 = (undefined8 *)(lVar12 + (long)puVar7);
      }
      for (; puVar4 = puVar13 + 2, puVar3 != puVar10; puVar10 = puVar10 + 2) {
        *(undefined1 *)(puVar13 + 3) = 0;
        if (*(char *)(puVar10 + 1) != '\0') {
          *puVar4 = *puVar10;
          *puVar10 = 0;
          *(undefined1 *)(puVar13 + 3) = 1;
          *(undefined1 *)(puVar10 + 1) = 0;
        }
        puVar13 = puVar4;
      }
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      *(undefined8 **)(this + 0x18) = puVar7;
      *(undefined8 **)(this + 0x20) = puVar4;
      *(undefined8 **)(this + 0x28) = puVar7 + uVar11 * 2;
    }
    else {
      if (puVar3 != puVar10) {
        std::vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>>::
        _M_insert_aux<std::optional<juce::Font>>
                  ((vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> *)
                   (this + 0x18),puVar10,param_2);
        return;
      }
      *(undefined1 *)((long)pvVar2 + lVar14 + 8) = 0;
      if (*(char *)(param_2 + 1) != '\0') {
        *puVar10 = *param_2;
        *param_2 = 0;
        *(undefined1 *)((long)pvVar2 + lVar14 + 8) = 1;
        puVar10 = *(undefined8 **)(this + 0x20);
      }
      *(undefined8 **)(this + 0x20) = puVar10 + 2;
    }
  }
  return;
}


