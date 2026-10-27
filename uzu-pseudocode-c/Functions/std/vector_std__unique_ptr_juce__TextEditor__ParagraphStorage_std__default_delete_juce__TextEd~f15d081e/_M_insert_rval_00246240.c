// Function : _M_insert_rval
// Namespace: std:vector_std__unique_ptr_juce__TextEditor__ParagraphStorage_std__default_delete_juce__TextEd~f15d081e
// Entry    : 00246240
// Prototype: undefined _M_insert_rval(vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 00246240 - 002467ab


/* std::vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,
   std::default_delete<juce::TextEditor::ParagraphStorage> >,
   std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,
   std::default_delete<juce::TextEditor::ParagraphStorage> > >
   >::_M_insert_rval(__gnu_cxx::__normal_iterator<std::unique_ptr<juce::TextEditor::ParagraphStorage,
   std::default_delete<juce::TextEditor::ParagraphStorage> > const*,
   std::vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,
   std::default_delete<juce::TextEditor::ParagraphStorage> >,
   std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,
   std::default_delete<juce::TextEditor::ParagraphStorage> > > > >,
   std::unique_ptr<juce::TextEditor::ParagraphStorage,
   std::default_delete<juce::TextEditor::ParagraphStorage> >&&) */

void __thiscall
std::
vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>>
::_M_insert_rval(vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>>
                 *this,undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  default_delete<juce::TextEditor::ParagraphStorage> *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  
  puVar2 = *(undefined8 **)this;
  puVar14 = *(undefined8 **)(this + 8);
  lVar19 = (long)param_1 - (long)puVar2 >> 3;
  if (puVar14 != *(undefined8 **)(this + 0x10)) {
    if (puVar14 == param_1) {
      *param_1 = *param_2;
      *param_2 = 0;
      *(long *)(this + 8) = *(long *)(this + 8) + 8;
      return;
    }
    puVar2 = puVar2 + lVar19;
    *puVar14 = puVar14[-1];
    puVar14[-1] = 0;
    lVar19 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar19 + 8;
    puVar14 = (undefined8 *)(lVar19 + -8);
    if (0 < (long)puVar14 - (long)puVar2) {
      lVar19 = ((ulong)((long)puVar14 - (long)puVar2) >> 3) + 1;
      do {
        uVar3 = puVar14[-1];
        pdVar4 = (default_delete<juce::TextEditor::ParagraphStorage> *)*puVar14;
        puVar14[-1] = 0;
        *puVar14 = uVar3;
        if (pdVar4 != (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
          default_delete<juce::TextEditor::ParagraphStorage>::operator()(pdVar4);
        }
        puVar14 = puVar14 + -1;
        lVar19 = lVar19 + -1;
      } while (1 < lVar19);
    }
    uVar3 = *param_2;
    *param_2 = 0;
    pdVar4 = (default_delete<juce::TextEditor::ParagraphStorage> *)*puVar2;
    *puVar2 = uVar3;
    if (pdVar4 == (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
      return;
    }
    default_delete<juce::TextEditor::ParagraphStorage>::operator()(pdVar4);
    return;
  }
  lVar7 = (long)puVar14 - (long)puVar2;
  if (lVar7 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar10 = lVar7 >> 3;
  uVar11 = 1;
  if (lVar7 != 0) {
    uVar11 = uVar10;
  }
  uVar15 = uVar11 + uVar10;
  if (uVar15 >> 0x3c != 0) {
    uVar15 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar11,uVar10)) {
    uVar15 = 0xfffffffffffffff;
  }
  if (uVar15 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = operator_new(uVar15 * 8);
  }
  puVar9 = puVar2 + lVar19;
  puVar8[lVar19] = *param_2;
  *param_2 = 0;
  puVar16 = puVar8;
  if ((long)param_1 - (long)puVar2 != 0) {
    uVar11 = (long)puVar9 + (-8 - (long)puVar2);
    puVar13 = puVar2;
    if (0x17 < uVar11) {
      uVar11 = (uVar11 >> 3) + 1;
      uVar17 = uVar11 & 0xfffffffffffffffc;
      uVar10 = (uVar17 - 4 >> 2) + 1;
      if (uVar17 - 4 == 0) {
        lVar19 = 0;
LAB_00246551:
        uVar3 = (puVar2 + lVar19)[1];
        uVar5 = puVar2[lVar19 + 2];
        uVar6 = (puVar2 + lVar19 + 2)[1];
        puVar8[lVar19] = puVar2[lVar19];
        (puVar8 + lVar19)[1] = uVar3;
        puVar8[lVar19 + 2] = uVar5;
        (puVar8 + lVar19 + 2)[1] = uVar6;
        puVar2[lVar19 + 2] = 0;
        (puVar2 + lVar19 + 2)[1] = 0;
        puVar2[lVar19] = 0;
        (puVar2 + lVar19)[1] = 0;
      }
      else {
        uVar12 = (uVar10 & 0x7ffffffffffffffe) - 2;
        uVar18 = (uVar12 >> 1) + 1;
        if (uVar12 == 0) {
          lVar19 = 0;
LAB_002464fe:
          uVar3 = (puVar2 + lVar19)[1];
          uVar5 = puVar2[lVar19 + 2];
          uVar6 = (puVar2 + lVar19 + 2)[1];
          puVar8[lVar19] = puVar2[lVar19];
          (puVar8 + lVar19)[1] = uVar3;
          puVar8[lVar19 + 2] = uVar5;
          (puVar8 + lVar19 + 2)[1] = uVar6;
          uVar12 = lVar19 * 8 | 0x20;
          puVar2[lVar19 + 2] = 0;
          (puVar2 + lVar19 + 2)[1] = 0;
          puVar2[lVar19] = 0;
          (puVar2 + lVar19)[1] = 0;
          uVar3 = ((undefined8 *)((long)puVar2 + uVar12))[1];
          puVar16 = (undefined8 *)((long)puVar2 + uVar12 + 0x10);
          uVar5 = *puVar16;
          uVar6 = puVar16[1];
          *(undefined8 *)((long)puVar8 + uVar12) = *(undefined8 *)((long)puVar2 + uVar12);
          ((undefined8 *)((long)puVar8 + uVar12))[1] = uVar3;
          puVar16 = (undefined8 *)((long)puVar8 + uVar12 + 0x10);
          *puVar16 = uVar5;
          puVar16[1] = uVar6;
          lVar19 = lVar19 + 8;
          puVar16 = (undefined8 *)((long)puVar2 + uVar12 + 0x10);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)((long)puVar2 + uVar12) = 0;
          ((undefined8 *)((long)puVar2 + uVar12))[1] = 0;
        }
        else {
          uVar12 = uVar18 & 0xfffffffffffffffe;
          lVar7 = 0;
          do {
            uVar3 = (puVar2 + lVar7)[1];
            uVar5 = puVar2[lVar7 + 2];
            uVar6 = (puVar2 + lVar7 + 2)[1];
            puVar8[lVar7] = puVar2[lVar7];
            (puVar8 + lVar7)[1] = uVar3;
            puVar8[lVar7 + 2] = uVar5;
            (puVar8 + lVar7 + 2)[1] = uVar6;
            puVar2[lVar7 + 2] = 0;
            (puVar2 + lVar7 + 2)[1] = 0;
            puVar2[lVar7] = 0;
            (puVar2 + lVar7)[1] = 0;
            uVar3 = (puVar2 + lVar7 + 4)[1];
            uVar5 = puVar2[lVar7 + 6];
            uVar6 = (puVar2 + lVar7 + 6)[1];
            puVar8[lVar7 + 4] = puVar2[lVar7 + 4];
            (puVar8 + lVar7 + 4)[1] = uVar3;
            puVar8[lVar7 + 6] = uVar5;
            (puVar8 + lVar7 + 6)[1] = uVar6;
            puVar2[lVar7 + 6] = 0;
            (puVar2 + lVar7 + 6)[1] = 0;
            puVar2[lVar7 + 4] = 0;
            (puVar2 + lVar7 + 4)[1] = 0;
            uVar3 = (puVar2 + lVar7 + 8)[1];
            uVar5 = puVar2[lVar7 + 10];
            uVar6 = (puVar2 + lVar7 + 10)[1];
            puVar8[lVar7 + 8] = puVar2[lVar7 + 8];
            (puVar8 + lVar7 + 8)[1] = uVar3;
            puVar8[lVar7 + 10] = uVar5;
            (puVar8 + lVar7 + 10)[1] = uVar6;
            puVar2[lVar7 + 10] = 0;
            (puVar2 + lVar7 + 10)[1] = 0;
            puVar2[lVar7 + 8] = 0;
            (puVar2 + lVar7 + 8)[1] = 0;
            uVar3 = (puVar2 + lVar7 + 0xc)[1];
            uVar5 = puVar2[lVar7 + 0xe];
            uVar6 = (puVar2 + lVar7 + 0xe)[1];
            puVar8[lVar7 + 0xc] = puVar2[lVar7 + 0xc];
            (puVar8 + lVar7 + 0xc)[1] = uVar3;
            puVar8[lVar7 + 0xe] = uVar5;
            (puVar8 + lVar7 + 0xe)[1] = uVar6;
            lVar19 = lVar7 + 0x10;
            puVar2[lVar7 + 0xe] = 0;
            (puVar2 + lVar7 + 0xe)[1] = 0;
            puVar2[lVar7 + 0xc] = 0;
            (puVar2 + lVar7 + 0xc)[1] = 0;
            uVar12 = uVar12 - 2;
            lVar7 = lVar19;
          } while (uVar12 != 0);
          if ((uVar18 & 1) != 0) goto LAB_002464fe;
        }
        if ((uVar10 & 1) != 0) goto LAB_00246551;
      }
      puVar16 = puVar8 + uVar17;
      if (uVar11 == uVar17) goto LAB_0024659a;
      puVar13 = puVar2 + uVar17;
    }
    do {
      *puVar16 = *puVar13;
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    } while (puVar13 != puVar9);
  }
LAB_0024659a:
  puVar13 = puVar16 + 1;
  if ((long)puVar14 - (long)puVar9 == 0) goto LAB_0024676b;
  uVar11 = ((long)puVar14 - (long)puVar9) - 8;
  if (0x17 < uVar11) {
    uVar17 = (uVar11 >> 3) + 1;
    uVar11 = uVar17 & 0xfffffffffffffffc;
    uVar10 = (uVar11 - 4 >> 2) + 1;
    if (uVar11 - 4 == 0) {
      lVar19 = 0;
LAB_00246719:
      uVar3 = (puVar9 + lVar19)[1];
      uVar5 = puVar9[lVar19 + 2];
      uVar6 = (puVar9 + lVar19 + 2)[1];
      puVar13[lVar19] = puVar9[lVar19];
      (puVar13 + lVar19)[1] = uVar3;
      puVar16[lVar19 + 3] = uVar5;
      (puVar16 + lVar19 + 3)[1] = uVar6;
      puVar9[lVar19 + 2] = 0;
      (puVar9 + lVar19 + 2)[1] = 0;
      puVar9[lVar19] = 0;
      (puVar9 + lVar19)[1] = 0;
    }
    else {
      uVar12 = (uVar10 & 0x7ffffffffffffffe) - 2;
      uVar18 = (uVar12 >> 1) + 1;
      if (uVar12 == 0) {
        lVar19 = 0;
LAB_002466c8:
        uVar3 = (puVar9 + lVar19)[1];
        uVar5 = puVar9[lVar19 + 2];
        uVar6 = (puVar9 + lVar19 + 2)[1];
        puVar13[lVar19] = puVar9[lVar19];
        (puVar13 + lVar19)[1] = uVar3;
        puVar16[lVar19 + 3] = uVar5;
        (puVar16 + lVar19 + 3)[1] = uVar6;
        uVar12 = lVar19 * 8 | 0x20;
        puVar9[lVar19 + 2] = 0;
        (puVar9 + lVar19 + 2)[1] = 0;
        puVar9[lVar19] = 0;
        (puVar9 + lVar19)[1] = 0;
        uVar3 = ((undefined8 *)((long)puVar9 + uVar12))[1];
        puVar1 = (undefined8 *)((long)puVar9 + uVar12 + 0x10);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        *(undefined8 *)((long)puVar13 + uVar12) = *(undefined8 *)((long)puVar9 + uVar12);
        ((undefined8 *)((long)puVar13 + uVar12))[1] = uVar3;
        puVar1 = (undefined8 *)((long)puVar16 + uVar12 + 0x18);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        lVar19 = lVar19 + 8;
        puVar1 = (undefined8 *)((long)puVar9 + uVar12 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar9 + uVar12) = 0;
        ((undefined8 *)((long)puVar9 + uVar12))[1] = 0;
      }
      else {
        uVar12 = uVar18 & 0xfffffffffffffffe;
        lVar7 = 0;
        do {
          uVar3 = (puVar9 + lVar7)[1];
          uVar5 = puVar9[lVar7 + 2];
          uVar6 = (puVar9 + lVar7 + 2)[1];
          puVar16[lVar7 + 1] = puVar9[lVar7];
          (puVar16 + lVar7 + 1)[1] = uVar3;
          puVar16[lVar7 + 3] = uVar5;
          (puVar16 + lVar7 + 3)[1] = uVar6;
          puVar9[lVar7 + 2] = 0;
          (puVar9 + lVar7 + 2)[1] = 0;
          puVar9[lVar7] = 0;
          (puVar9 + lVar7)[1] = 0;
          uVar3 = (puVar9 + lVar7 + 4)[1];
          uVar5 = puVar9[lVar7 + 6];
          uVar6 = (puVar9 + lVar7 + 6)[1];
          puVar16[lVar7 + 5] = puVar9[lVar7 + 4];
          (puVar16 + lVar7 + 5)[1] = uVar3;
          puVar16[lVar7 + 7] = uVar5;
          (puVar16 + lVar7 + 7)[1] = uVar6;
          puVar9[lVar7 + 6] = 0;
          (puVar9 + lVar7 + 6)[1] = 0;
          puVar9[lVar7 + 4] = 0;
          (puVar9 + lVar7 + 4)[1] = 0;
          uVar3 = (puVar9 + lVar7 + 8)[1];
          uVar5 = puVar9[lVar7 + 10];
          uVar6 = (puVar9 + lVar7 + 10)[1];
          puVar16[lVar7 + 9] = puVar9[lVar7 + 8];
          (puVar16 + lVar7 + 9)[1] = uVar3;
          puVar16[lVar7 + 0xb] = uVar5;
          (puVar16 + lVar7 + 0xb)[1] = uVar6;
          puVar9[lVar7 + 10] = 0;
          (puVar9 + lVar7 + 10)[1] = 0;
          puVar9[lVar7 + 8] = 0;
          (puVar9 + lVar7 + 8)[1] = 0;
          uVar3 = (puVar9 + lVar7 + 0xc)[1];
          uVar5 = puVar9[lVar7 + 0xe];
          uVar6 = (puVar9 + lVar7 + 0xe)[1];
          puVar16[lVar7 + 0xd] = puVar9[lVar7 + 0xc];
          (puVar16 + lVar7 + 0xd)[1] = uVar3;
          puVar16[lVar7 + 0xf] = uVar5;
          (puVar16 + lVar7 + 0xf)[1] = uVar6;
          lVar19 = lVar7 + 0x10;
          puVar9[lVar7 + 0xe] = 0;
          (puVar9 + lVar7 + 0xe)[1] = 0;
          puVar9[lVar7 + 0xc] = 0;
          (puVar9 + lVar7 + 0xc)[1] = 0;
          uVar12 = uVar12 - 2;
          lVar7 = lVar19;
        } while (uVar12 != 0);
        if ((uVar18 & 1) != 0) goto LAB_002466c8;
      }
      if ((uVar10 & 1) != 0) goto LAB_00246719;
    }
    puVar13 = puVar13 + uVar11;
    if (uVar17 == uVar11) goto LAB_0024676b;
    puVar9 = puVar9 + uVar11;
  }
  do {
    *puVar13 = *puVar9;
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  } while (puVar9 != puVar14);
LAB_0024676b:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  *(undefined8 **)this = puVar8;
  *(undefined8 **)(this + 8) = puVar13;
  *(undefined8 **)(this + 0x10) = puVar8 + uVar15;
  return;
}


