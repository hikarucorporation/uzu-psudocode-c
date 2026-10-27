// Function : __insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::{lambda(auto:1_const&,auto:2_const&)#1}>>
// Namespace: std
// Entry    : 00302bf0
// Prototype: void __insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::{lambda(auto:1_const&,auto:2_const&)#1}>>(long * param_1, long * param_2)
// Body     : 00302bf0 - 003033c9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   std::__insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >*,
   std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >,
   std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> > > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray
   const&)::{lambda(auto:1 const&, auto:2 const&)#1}>
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >*,
   std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >,
   std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >*,
   std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >,
   std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> > > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray
   const&)::{lambda(auto:1 const&, auto:2 const&)#1}>) */

void __cdecl
std::
__insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::_lambda(auto:1_const&,auto:2_const&)_1_>>
          (long *param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  long lVar23;
  byte *pbVar24;
  char cVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  long *plVar31;
  ulong local_70;
  long *local_68;
  
  if ((param_1 != param_2) && (plVar18 = param_1 + 1, plVar18 != param_2)) {
    local_70 = 8;
    local_68 = param_1;
    do {
      uVar19 = juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::
               {lambda(auto:1_const&,auto:2_const&)#1}::operator()(*plVar18,param_1);
      lVar9 = *plVar18;
      *plVar18 = 0;
      if ((char)uVar19 == '\0') {
        plVar31 = plVar18;
LAB_00302d20:
        iVar5 = *(int *)(lVar9 + 0x18);
        pbVar11 = *(byte **)(lVar9 + 0x10);
        pbVar1 = pbVar11 + -0x10;
        if (pbVar1 != (byte *)&juce::emptyString) {
          LOCK();
          *(int *)pbVar1 = *(int *)pbVar1 + 1;
          UNLOCK();
        }
        plVar14 = plVar31 + -1;
        iVar6 = *(int *)(lVar9 + 0x1c);
        pbVar29 = *(byte **)(lVar9 + 8);
        pbVar2 = pbVar29 + -0x10;
        if (pbVar2 != (byte *)&juce::emptyString) {
          LOCK();
          *(int *)pbVar2 = *(int *)pbVar2 + 1;
          UNLOCK();
        }
        lVar23 = *plVar14;
        iVar7 = *(int *)(lVar23 + 0x18);
        pbVar12 = *(byte **)(lVar23 + 0x10);
        pbVar26 = pbVar12 + -0x10;
        if (pbVar26 != (byte *)&juce::emptyString) {
          LOCK();
          *(int *)pbVar26 = *(int *)pbVar26 + 1;
          UNLOCK();
        }
        iVar8 = *(int *)(lVar23 + 0x1c);
        pbVar28 = *(byte **)(lVar23 + 8);
        pbVar3 = pbVar28 + -0x10;
        if (pbVar3 != (byte *)&juce::emptyString) {
          LOCK();
          *(int *)pbVar3 = *(int *)pbVar3 + 1;
          UNLOCK();
        }
        pbVar21 = pbVar28;
        pbVar27 = pbVar26;
        pbVar30 = pbVar29;
        do {
          pbVar24 = pbVar30 + 1;
          bVar4 = *pbVar30;
          uVar20 = (uint)bVar4;
          if ((char)bVar4 < '\0') {
            if ((bVar4 & 0x40) == 0) {
              uVar20 = uVar20 & 0x7f;
              goto LAB_00302e00;
            }
            if ((bVar4 & 0x20) == 0) {
              uVar22 = 0x3f;
              lVar23 = 0;
              bVar15 = false;
              bVar16 = false;
            }
            else {
              bVar15 = true;
              if ((bVar4 & 0x10) == 0) {
                uVar22 = 0x1f;
                lVar23 = 1;
                bVar16 = false;
              }
              else {
                uVar22 = 0xf;
                lVar23 = 2;
                bVar16 = true;
              }
            }
            uVar20 = uVar20 & uVar22;
            if ((pbVar30[1] & 0xffffffc0) == 0x80) {
              uVar20 = pbVar30[1] & 0x3f | uVar20 << 6;
              if (bVar15) {
                bVar4 = pbVar30[2];
                if ((bVar4 & 0xc0) != 0x80) {
                  bVar4 = *pbVar21;
                  pbVar30 = pbVar30 + 2;
                  goto joined_r0x00302e0c;
                }
                uVar20 = bVar4 & 0x3f | uVar20 << 6;
                if (bVar16) {
                  pbVar24 = pbVar30 + 3;
                  if ((*pbVar24 & 0xffffffc0) != 0x80) goto LAB_00302ee0;
                  uVar20 = uVar20 << 6 | *pbVar24 & 0x3f;
                }
              }
              bVar4 = *pbVar21;
              pbVar30 = pbVar30 + lVar23 + 2;
            }
            else {
LAB_00302ee0:
              bVar4 = *pbVar21;
              pbVar30 = pbVar24;
            }
          }
          else {
LAB_00302e00:
            bVar4 = *pbVar21;
            pbVar30 = pbVar24;
          }
joined_r0x00302e0c:
          uVar22 = (uint)bVar4;
          pbVar24 = pbVar21 + 1;
          if ((char)bVar4 < '\0') {
            pbVar24 = pbVar21 + 1;
            if ((bVar4 & 0x40) == 0) {
              uVar22 = bVar4 & 0x7f;
            }
            else {
              if ((bVar4 & 0x20) == 0) {
                uVar22 = 0x3f;
                lVar23 = 0;
                bVar15 = false;
                bVar16 = false;
              }
              else {
                bVar15 = true;
                if ((bVar4 & 0x10) == 0) {
                  uVar22 = 0x1f;
                  lVar23 = 1;
                  bVar16 = false;
                }
                else {
                  uVar22 = 0xf;
                  lVar23 = 2;
                  bVar16 = true;
                }
              }
              uVar22 = bVar4 & uVar22;
              if ((pbVar21[1] & 0xffffffc0) == 0x80) {
                pbVar24 = pbVar21 + lVar23 + 2;
                uVar22 = pbVar21[1] & 0x3f | uVar22 << 6;
                if (bVar15) {
                  bVar4 = pbVar21[2];
                  if ((bVar4 & 0xc0) == 0x80) {
                    uVar22 = bVar4 & 0x3f | uVar22 << 6;
                    if (bVar16) {
                      bVar4 = pbVar21[3];
                      if ((bVar4 & 0xc0) == 0x80) {
                        uVar22 = uVar22 << 6 | bVar4 & 0x3f;
                      }
                      else {
                        pbVar24 = pbVar21 + 3;
                      }
                    }
                  }
                  else {
                    pbVar24 = pbVar21 + 2;
                  }
                }
              }
            }
          }
          pbVar21 = pbVar24;
          cVar25 = (uVar20 == 0) * '\x02';
          pbVar27 = (byte *)((ulong)pbVar27 & 0xffffffff);
          if (uVar20 - uVar22 != 0) {
            pbVar27 = (byte *)(ulong)((int)(uVar20 - uVar22) >> 0x1f | 1);
            cVar25 = '\x01';
          }
        } while (cVar25 == '\0');
        if ((cVar25 == '\x01') && ((int)pbVar27 < 0)) {
          cVar25 = -1;
        }
        else {
          do {
            pbVar30 = pbVar28 + 1;
            bVar4 = *pbVar28;
            uVar20 = (uint)bVar4;
            if ((char)bVar4 < '\0') {
              if ((bVar4 & 0x40) == 0) {
                uVar20 = uVar20 & 0x7f;
                goto LAB_00303100;
              }
              if ((bVar4 & 0x20) == 0) {
                uVar22 = 0x3f;
                lVar23 = 0;
                bVar15 = false;
                bVar16 = false;
              }
              else {
                bVar15 = true;
                if ((bVar4 & 0x10) == 0) {
                  uVar22 = 0x1f;
                  lVar23 = 1;
                  bVar16 = false;
                }
                else {
                  uVar22 = 0xf;
                  lVar23 = 2;
                  bVar16 = true;
                }
              }
              uVar20 = uVar20 & uVar22;
              if ((pbVar28[1] & 0xffffffc0) != 0x80) goto LAB_00303100;
              pbVar30 = pbVar28 + lVar23 + 2;
              uVar20 = pbVar28[1] & 0x3f | uVar20 << 6;
              if (!bVar15) goto LAB_00303100;
              bVar4 = pbVar28[2];
              if ((bVar4 & 0xc0) == 0x80) {
                uVar20 = bVar4 & 0x3f | uVar20 << 6;
                if (!bVar16) goto LAB_00303100;
                pbVar28 = pbVar28 + 3;
                if ((*pbVar28 & 0xffffffc0) == 0x80) {
                  uVar20 = uVar20 << 6 | *pbVar28 & 0x3f;
                  goto LAB_00303100;
                }
                goto LAB_00303103;
              }
              bVar4 = *pbVar29;
              pbVar28 = pbVar28 + 2;
            }
            else {
LAB_00303100:
              pbVar28 = pbVar30;
LAB_00303103:
              bVar4 = *pbVar29;
            }
            uVar22 = (uint)bVar4;
            pbVar30 = pbVar29 + 1;
            if ((char)bVar4 < '\0') {
              pbVar30 = pbVar29 + 1;
              if ((bVar4 & 0x40) == 0) {
                uVar22 = uVar22 & 0x7f;
              }
              else {
                if ((bVar4 & 0x20) == 0) {
                  uVar17 = 0x3f;
                  lVar23 = 0;
                  bVar15 = false;
                  bVar16 = false;
                }
                else {
                  bVar15 = true;
                  if ((bVar4 & 0x10) == 0) {
                    uVar17 = 0x1f;
                    lVar23 = 1;
                    bVar16 = false;
                  }
                  else {
                    uVar17 = 0xf;
                    lVar23 = 2;
                    bVar16 = true;
                  }
                }
                uVar22 = uVar22 & uVar17;
                if ((pbVar29[1] & 0xc0) == 0x80) {
                  pbVar21 = pbVar29 + lVar23 + 2;
                  uVar22 = pbVar29[1] & 0x3f | uVar22 << 6;
                  pbVar30 = pbVar21;
                  if (bVar15) {
                    pbVar30 = pbVar29 + 2;
                    if ((*pbVar30 & 0xc0) == 0x80) {
                      uVar22 = *pbVar30 & 0x3f | uVar22 << 6;
                      pbVar30 = pbVar21;
                      if (bVar16) {
                        pbVar30 = pbVar29 + 3;
                        if ((*pbVar30 & 0xc0) == 0x80) {
                          uVar22 = uVar22 << 6 | *pbVar30 & 0x3f;
                          pbVar30 = pbVar21;
                        }
                      }
                    }
                  }
                }
              }
            }
            cVar25 = (uVar20 == 0) * '\x02';
            if (uVar20 - uVar22 != 0) {
              pbVar27 = (byte *)(ulong)((int)(uVar20 - uVar22) >> 0x1f | 1);
              cVar25 = '\x01';
            }
            pbVar29 = pbVar30;
          } while (cVar25 == '\0');
          if ((cVar25 == '\x01') && ((int)pbVar27 < 0)) {
            cVar25 = '\x01';
          }
          else if (iVar6 == iVar8) {
            uVar20 = juce::CharacterFunctions::
                     compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>(pbVar11,pbVar12);
            if ((int)uVar20 < 0) {
              cVar25 = -1;
            }
            else {
              uVar20 = juce::CharacterFunctions::
                       compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>(pbVar12,pbVar11);
              if ((int)uVar20 < 0) {
                cVar25 = '\x01';
              }
              else {
                cVar25 = (iVar7 <= iVar5) * '\x02' + -1;
                if (iVar5 == iVar7) {
                  cVar25 = '\0';
                }
              }
            }
          }
          else {
            cVar25 = (iVar8 <= iVar6) * '\x02' + -1;
          }
        }
        if (pbVar3 != (byte *)&juce::emptyString) {
          LOCK();
          iVar5 = *(int *)pbVar3;
          *(int *)pbVar3 = *(int *)pbVar3 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            operator_delete__(pbVar3);
          }
        }
        if (pbVar26 != (byte *)&juce::emptyString) {
          LOCK();
          iVar5 = *(int *)pbVar26;
          *(int *)pbVar26 = *(int *)pbVar26 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            operator_delete__(pbVar26);
          }
        }
        if (pbVar2 != (byte *)&juce::emptyString) {
          LOCK();
          iVar5 = *(int *)pbVar2;
          *(int *)pbVar2 = *(int *)pbVar2 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            operator_delete__(pbVar2);
          }
        }
        if (pbVar1 != (byte *)&juce::emptyString) {
          LOCK();
          iVar5 = *(int *)pbVar1;
          *(int *)pbVar1 = *(int *)pbVar1 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            operator_delete__(pbVar1);
          }
        }
        if (cVar25 < '\0') {
          lVar23 = plVar31[-1];
          plVar13 = (long *)*plVar31;
          plVar31[-1] = 0;
          *plVar31 = lVar23;
          plVar31 = plVar14;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 8))();
          }
          goto LAB_00302d20;
        }
        plVar14 = (long *)*plVar31;
        *plVar31 = lVar9;
      }
      else {
        if (0 < (long)plVar18 - (long)param_1) {
          lVar23 = 1;
          do {
            lVar10 = local_68[lVar23 + -1];
            plVar31 = (long *)local_68[lVar23];
            local_68[lVar23 + -1] = 0;
            local_68[lVar23] = lVar10;
            if (plVar31 != (long *)0x0) {
              (**(code **)(*plVar31 + 8))();
            }
            lVar10 = (local_70 >> 3) + lVar23;
            lVar23 = lVar23 + -1;
          } while (1 < lVar10 + -1);
        }
        plVar14 = (long *)*param_1;
        *param_1 = lVar9;
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))();
      }
      plVar18 = plVar18 + 1;
      local_70 = local_70 + 8;
      local_68 = local_68 + 1;
    } while (plVar18 != param_2);
  }
  return;
}


