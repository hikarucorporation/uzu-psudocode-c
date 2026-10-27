// Function : operator()
// Namespace: juce:detail:findSuitableFontsForText_juce__Font_const__juce__Span_wchar_t_const_18446744073709551615ul~296b35a2:__65
// Entry    : 00324d10
// Prototype: long operator()($_65 * this)
// Body     : 00324d10 - 00325151


/* juce::detail::findSuitableFontsForText(juce::Font const&, juce::Span<wchar_t const,
   18446744073709551615ul>, juce::String const&)::$_65::TEMPNAMEPLACEHOLDERVALUE() const */

long __thiscall
juce::detail::
findSuitableFontsForText(juce::Font_const&,juce::Span<wchar_t_const,18446744073709551615ul>,juce::String_const&)
::$_65::operator()(__65 *this)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  char *pcVar14;
  ulong *extraout_RDX;
  ulong *puVar15;
  ulong uVar16;
  ulong *extraout_RDX_00;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  char *pcVar20;
  uint *in_R8;
  long *plVar21;
  ulong in_R9;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong *local_88;
  long *local_78;
  char local_70;
  long local_68;
  ulong *local_60;
  ulong *local_58;
  ulong *local_50;
  ulong local_48;
  char *local_40;
  ulong local_38;
  
  puVar3 = *(undefined8 **)this;
  puVar12 = (ulong *)*puVar3;
  puVar15 = (ulong *)puVar3[1];
  if (puVar15 != puVar12) {
    lVar10 = puVar3[3];
    puVar22 = (ulong *)0x0;
    local_88 = (ulong *)0x0;
    puVar13 = (ulong *)0x0;
    puVar18 = puVar12;
    local_68 = lVar10;
    local_60 = puVar15;
    local_58 = puVar12;
LAB_00324d84:
    uVar23 = *puVar18;
    local_38 = puVar18[1];
    if (((long)uVar23 < (long)local_38) &&
       (lVar19 = ((long)puVar18 - (long)puVar12 >> 4) * 0x10, *(char *)(lVar10 + 8 + lVar19) != '\0'
       )) {
      pcVar14 = (char *)(lVar10 + lVar19 + 8);
      local_50 = puVar18;
      local_40 = pcVar14;
      do {
                    /* try { // try from 00324de1 to 00324e9f has its CatchHandler @ 0032517c */
        uVar11 = isFontSuitableForCodepoint
                           ((long *)(lVar19 + lVar10),
                            *(int *)(*(long *)(*(long *)(this + 8) + 8) + uVar23 * 4),puVar15,
                            pcVar14,in_R8,in_R9);
        puVar15 = extraout_RDX;
        if ((char)uVar11 == '\0') {
          if (local_88 != puVar13) {
            *local_88 = uVar23;
            puVar15 = local_88 + 1;
            local_88 = puVar15;
            goto joined_r0x00324e33;
          }
          lVar24 = (long)local_88 - (long)puVar22;
          if (lVar24 == 0x7ffffffffffffff8) {
                    /* try { // try from 00325146 to 00325151 has its CatchHandler @ 0032517a */
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          uVar17 = lVar24 >> 3;
          uVar11 = uVar17;
          if (lVar24 == 0) {
            uVar11 = 1;
          }
          local_48 = uVar11 + uVar17;
          pcVar14 = (char *)0xfffffffffffffff;
          if (0xfffffffffffffff < local_48) {
            local_48 = 0xfffffffffffffff;
          }
          if (CARRY8(uVar11,uVar17)) {
            local_48 = 0xfffffffffffffff;
          }
          puVar15 = local_88;
          if (local_48 == 0) {
            puVar12 = (ulong *)0x0;
            *(ulong *)(uVar17 * 8) = uVar23;
            if (lVar24 < 1) goto LAB_00324f0e;
LAB_00324eb1:
            puVar18 = puVar12;
            if (puVar22 != local_88) {
              puVar13 = puVar22;
              if (0x17 < lVar24 - 8U) {
                uVar25 = (lVar24 - 8U >> 3) + 1;
                uVar11 = uVar25 & 0xfffffffffffffffc;
                puVar15 = (ulong *)((uVar11 - 4 >> 2) + 1);
                uVar17 = (ulong)((uint)puVar15 & 3);
                if (uVar11 - 4 < 0xc) {
                  lVar24 = 0;
                }
                else {
                  uVar16 = (ulong)puVar15 & 0x7ffffffffffffffc;
                  lVar24 = 0;
                  do {
                    uVar4 = (puVar22 + lVar24)[1];
                    uVar5 = puVar22[lVar24 + 2];
                    uVar6 = (puVar22 + lVar24 + 2)[1];
                    puVar12[lVar24] = puVar22[lVar24];
                    (puVar12 + lVar24)[1] = uVar4;
                    puVar12[lVar24 + 2] = uVar5;
                    (puVar12 + lVar24 + 2)[1] = uVar6;
                    uVar4 = (puVar22 + lVar24 + 4)[1];
                    uVar5 = puVar22[lVar24 + 6];
                    uVar6 = (puVar22 + lVar24 + 6)[1];
                    puVar12[lVar24 + 4] = puVar22[lVar24 + 4];
                    (puVar12 + lVar24 + 4)[1] = uVar4;
                    puVar12[lVar24 + 6] = uVar5;
                    (puVar12 + lVar24 + 6)[1] = uVar6;
                    uVar4 = (puVar22 + lVar24 + 8)[1];
                    uVar5 = puVar22[lVar24 + 10];
                    uVar6 = (puVar22 + lVar24 + 10)[1];
                    puVar12[lVar24 + 8] = puVar22[lVar24 + 8];
                    (puVar12 + lVar24 + 8)[1] = uVar4;
                    puVar12[lVar24 + 10] = uVar5;
                    (puVar12 + lVar24 + 10)[1] = uVar6;
                    uVar4 = (puVar22 + lVar24 + 0xc)[1];
                    uVar5 = puVar22[lVar24 + 0xe];
                    uVar6 = (puVar22 + lVar24 + 0xe)[1];
                    puVar12[lVar24 + 0xc] = puVar22[lVar24 + 0xc];
                    (puVar12 + lVar24 + 0xc)[1] = uVar4;
                    puVar12[lVar24 + 0xe] = uVar5;
                    (puVar12 + lVar24 + 0xe)[1] = uVar6;
                    lVar24 = lVar24 + 0x10;
                    uVar16 = uVar16 - 4;
                    puVar15 = (ulong *)0x0;
                  } while (uVar16 != 0);
                }
                pcVar14 = (char *)0x0;
                if (uVar17 != 0) {
                  puVar15 = puVar12 + lVar24 + 2;
                  pcVar14 = (char *)(uVar17 * 0x20);
                  pcVar20 = (char *)0x0;
                  do {
                    pcVar2 = (char *)((long)(puVar22 + lVar24) + (long)pcVar20);
                    uVar7 = *(undefined8 *)(pcVar2 + 8);
                    pcVar1 = (char *)((long)(puVar22 + lVar24 + 2) + (long)pcVar20);
                    uVar8 = *(undefined8 *)pcVar1;
                    uVar9 = *(undefined8 *)(pcVar1 + 8);
                    *(undefined8 *)((long)(puVar15 + -2) + (long)pcVar20) = *(undefined8 *)pcVar2;
                    *(undefined8 *)((char *)((long)(puVar15 + -2) + (long)pcVar20) + 8) = uVar7;
                    *(undefined8 *)((long)puVar15 + (long)pcVar20) = uVar8;
                    *(undefined8 *)((char *)((long)puVar15 + (long)pcVar20) + 8) = uVar9;
                    pcVar20 = pcVar20 + 0x20;
                  } while (pcVar14 != pcVar20);
                }
                puVar18 = puVar12 + uVar11;
                if (uVar25 == uVar11) goto LAB_00325023;
                puVar13 = puVar22 + uVar11;
              }
              do {
                pcVar14 = (char *)*puVar13;
                *puVar18 = (ulong)pcVar14;
                puVar13 = puVar13 + 1;
                puVar18 = puVar18 + 1;
                puVar15 = local_88;
              } while (puVar13 != local_88);
            }
          }
          else {
            puVar12 = operator_new(local_48 * 8);
            puVar12[uVar17] = uVar23;
            if (0 < lVar24) goto LAB_00324eb1;
LAB_00324f0e:
            puVar18 = puVar12 + uVar17;
          }
LAB_00325023:
          if (puVar22 != (ulong *)0x0) {
            operator_delete(puVar22);
            puVar15 = extraout_RDX_00;
          }
          local_88 = puVar18 + 1;
          puVar13 = puVar12 + local_48;
          uVar23 = uVar23 + 1;
          puVar22 = puVar12;
          if (uVar23 == local_38) goto LAB_00324d60;
        }
        else {
joined_r0x00324e33:
          uVar23 = uVar23 + 1;
          if (uVar23 == local_38) goto LAB_00324d60;
        }
        while (*local_40 == '\0') {
          uVar23 = uVar23 + 1;
          if (uVar23 == local_38) goto LAB_00324d60;
        }
      } while( true );
    }
    goto LAB_00324d77;
  }
  local_88 = (ulong *)0x0;
LAB_0032512d:
  puVar22 = (ulong *)0x0;
LAB_00325130:
  return (long)local_88 - (long)puVar22 >> 3;
LAB_00324d60:
  lVar10 = local_68;
  puVar12 = local_58;
  puVar15 = local_60;
  puVar18 = local_50;
LAB_00324d77:
  puVar18 = puVar18 + 2;
  if (puVar18 == puVar15) goto LAB_00325085;
  goto LAB_00324d84;
LAB_00325085:
  if (puVar22 != local_88) {
    plVar21 = *(long **)(this + 0x10);
    puVar12 = puVar22;
    do {
      local_70 = '\0';
                    /* try { // try from 003250d1 to 003250d8 has its CatchHandler @ 00325152 */
      RangedValues<std::optional<juce::Font>>::set<juce::detail::MergeEqualItemsYes>
                (*(RangedValues<std::optional<juce::Font>> **)this,*puVar12,*puVar12 + 1,
                 (long *)&local_78,plVar21);
      if ((local_70 != '\0') && (local_70 = '\0', local_78 != (long *)0x0)) {
        LOCK();
        plVar21 = local_78 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)(*local_78 + 8))();
        }
      }
      plVar21 = *(long **)(this + 0x10);
      if (plVar21[1] != *plVar21) {
        plVar21[1] = *plVar21;
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != local_88);
  }
  if (puVar22 != (ulong *)0x0) {
    operator_delete(puVar22);
    goto LAB_00325130;
  }
  goto LAB_0032512d;
}


