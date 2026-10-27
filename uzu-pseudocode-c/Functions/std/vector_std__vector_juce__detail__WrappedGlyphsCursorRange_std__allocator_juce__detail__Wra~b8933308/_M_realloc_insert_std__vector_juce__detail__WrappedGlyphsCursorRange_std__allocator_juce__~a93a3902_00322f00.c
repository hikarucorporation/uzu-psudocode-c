// Function : _M_realloc_insert<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&>
// Namespace: std:vector_std__vector_juce__detail__WrappedGlyphsCursorRange_std__allocator_juce__detail__Wra~b8933308
// Entry    : 00322f00
// Prototype: void _M_realloc_insert<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&>(vector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>> * this, undefined8 * param_1, long * param_2)
// Body     : 00322f00 - 00323124


/* void std::vector<std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> >,
   std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> > >
   >::_M_realloc_insert<std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> >
   const&>(__gnu_cxx::__normal_iterator<std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> >*,
   std::vector<std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> >,
   std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> > > > >,
   std::vector<juce::detail::WrappedGlyphsCursorRange,
   std::allocator<juce::detail::WrappedGlyphsCursorRange> > const&) */

void __thiscall
std::
vector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>>
::
_M_realloc_insert<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&>
          (vector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>>
           *this,undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  lVar11 = (long)puVar2 - (long)puVar1;
  if (lVar11 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar15 = (lVar11 >> 3) * -0x5555555555555555;
  uVar17 = 1;
  if (lVar11 != 0) {
    uVar17 = uVar15;
  }
  uVar18 = uVar17 + uVar15;
  if (0x555555555555555 < uVar18) {
    uVar18 = 0x555555555555555;
  }
  if (CARRY8(uVar17,uVar15)) {
    uVar18 = 0x555555555555555;
  }
  lVar11 = (long)param_1 - (long)puVar1 >> 3;
  if (uVar18 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar12 = operator_new(uVar18 * 0x18);
  }
  puVar16 = (undefined8 *)*param_2;
  puVar14 = (undefined8 *)param_2[1];
  uVar17 = (long)puVar14 - (long)puVar16 >> 6;
  puVar12[lVar11] = 0;
  (puVar12 + lVar11)[1] = 0;
  puVar12[lVar11 + 2] = 0;
  if ((long)puVar14 - (long)puVar16 == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17;
    if (SUB168(auVar3 * ZEXT816(0x40),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00323120 to 00323124 has its CatchHandler @ 00323125 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 00322ff3 to 00322ffa has its CatchHandler @ 00323125 */
    puVar13 = operator_new(SUB168(auVar3 * ZEXT816(0x40),0));
    puVar16 = (undefined8 *)*param_2;
    puVar14 = (undefined8 *)param_2[1];
  }
  puVar12[lVar11] = puVar13;
  puVar12[lVar11 + 1] = puVar13;
  puVar12[lVar11 + 2] = puVar13 + uVar17 * 8;
  for (; puVar16 != puVar14; puVar16 = puVar16 + 8) {
    uVar4 = *puVar16;
    uVar5 = puVar16[1];
    uVar6 = puVar16[2];
    uVar7 = puVar16[3];
    uVar8 = puVar16[4];
    uVar9 = puVar16[5];
    uVar10 = puVar16[7];
    puVar13[6] = puVar16[6];
    puVar13[7] = uVar10;
    puVar13[4] = uVar8;
    puVar13[5] = uVar9;
    puVar13[2] = uVar6;
    puVar13[3] = uVar7;
    *puVar13 = uVar4;
    puVar13[1] = uVar5;
    puVar13 = puVar13 + 8;
  }
  (puVar12 + lVar11)[1] = puVar13;
  puVar16 = puVar12;
  if (puVar1 != param_1) {
    puVar14 = puVar1;
    do {
      uVar4 = puVar14[1];
      *puVar16 = *puVar14;
      puVar16[1] = uVar4;
      puVar16[2] = puVar14[2];
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar16 = puVar16 + 3;
      puVar14 = puVar14 + 3;
    } while (puVar14 != param_1);
  }
  for (; puVar16 = puVar16 + 3, puVar2 != param_1; param_1 = param_1 + 3) {
    uVar4 = param_1[1];
    *puVar16 = *param_1;
    puVar16[1] = uVar4;
    puVar16[2] = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  *(undefined8 **)this = puVar12;
  *(undefined8 **)(this + 8) = puVar16;
  *(undefined8 **)(this + 0x10) = puVar12 + uVar18 * 3;
  return;
}


