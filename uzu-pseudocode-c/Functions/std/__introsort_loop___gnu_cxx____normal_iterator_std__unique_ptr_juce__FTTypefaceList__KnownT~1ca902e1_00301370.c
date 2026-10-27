// Function : __introsort_loop<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::{lambda(auto:1_const&,auto:2_const&)#1}>>
// Namespace: std
// Entry    : 00301370
// Prototype: void __introsort_loop<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::{lambda(auto:1_const&,auto:2_const&)#1}>>(byte * param_1, byte * param_2, long param_3)
// Body     : 00301370 - 00302bc6


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   std::__introsort_loop<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >*,
   std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> >,
   std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,
   std::default_delete<juce::FTTypefaceList::KnownTypeface> > > > >, long,
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
   std::default_delete<juce::FTTypefaceList::KnownTypeface> > > > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray
   const&)::{lambda(auto:1 const&, auto:2 const&)#1}>) */

void __cdecl
std::
__introsort_loop<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::_lambda(auto:1_const&,auto:2_const&)_1_>>
          (byte *param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  char cVar14;
  byte *pbVar15;
  undefined7 uVar18;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  ulong uVar27;
  byte *pbVar28;
  bool bVar29;
  long *local_80;
  int local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  byte *local_68;
  byte *local_60;
  byte *local_58;
  byte *local_50;
  byte *local_48;
  long local_40;
  byte *local_38;
  
  uVar27 = (long)param_2 - (long)param_1;
  if (0x80 < (long)uVar27) {
    local_60 = param_1 + 8;
    do {
      if (param_3 == 0) {
        uVar22 = (uVar27 >> 3) - 2 >> 1;
        do {
          local_80 = *(long **)(param_1 + uVar22 * 8);
          pbVar25 = param_1 + uVar22 * 8;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
                    /* try { // try from 00302b15 to 00302b22 has its CatchHandler @ 00302bc9 */
          __adjust_heap<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,long,std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::_lambda(auto:1_const&,auto:2_const&)_1_>>
                    ((long)param_1,uVar22,uVar27 >> 3,(long *)&local_80);
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 8))();
          }
          local_80 = (long *)0x0;
          bVar29 = uVar22 != 0;
          uVar22 = uVar22 - 1;
        } while (bVar29);
        lVar21 = (long)param_2 - (long)param_1;
        do {
          param_2 = param_2 + -8;
          plVar3 = *(long **)param_2;
          param_2[0] = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          plVar4 = *(long **)param_2;
          *(long *)param_2 = *(long *)param_1;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          lVar21 = lVar21 + -8;
          local_80 = plVar3;
                    /* try { // try from 00302b97 to 00302ba5 has its CatchHandler @ 00302bc7 */
          __adjust_heap<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,long,std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::_lambda(auto:1_const&,auto:2_const&)_1_>>
                    ((long)param_1,0,lVar21 >> 3,(long *)&local_80);
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 8))();
          }
        } while (8 < lVar21);
        return;
      }
      pbVar19 = param_1 + (uVar27 >> 4) * 8;
      pbVar25 = param_2 + -8;
      local_50 = param_2;
      local_40 = param_3 + -1;
      uVar27 = juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::
               {lambda(auto:1_const&,auto:2_const&)#1}::operator()
                         (*(long *)(param_1 + 8),(long *)pbVar19);
      pbVar15 = local_60;
      if ((char)uVar27 == '\0') {
        uVar27 = juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::
                 {lambda(auto:1_const&,auto:2_const&)#1}::operator()
                           (*(long *)local_60,(long *)pbVar25);
        cVar14 = (char)uVar27;
        pbVar13 = pbVar19;
        pbVar19 = pbVar15;
      }
      else {
        uVar27 = juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::
                 {lambda(auto:1_const&,auto:2_const&)#1}::operator()
                           (*(long *)pbVar19,(long *)pbVar25);
        cVar14 = (char)uVar27;
        pbVar13 = local_60;
      }
      if (cVar14 == '\0') {
        uVar27 = juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::
                 {lambda(auto:1_const&,auto:2_const&)#1}::operator()
                           (*(long *)pbVar13,(long *)pbVar25);
        pbVar19 = pbVar13;
        if ((char)uVar27 != '\0') {
          pbVar19 = pbVar25;
        }
      }
      local_58 = local_50;
      pbVar15 = param_1;
      pbVar25 = local_60;
      do {
        lVar21 = *(long *)pbVar15;
        *(long *)pbVar15 = *(long *)pbVar19;
        *(long *)pbVar19 = lVar21;
        do {
          lVar21 = *(long *)pbVar25;
          local_74 = *(int *)(lVar21 + 0x18);
          pbVar13 = *(byte **)(lVar21 + 0x10);
          pbVar19 = pbVar13 + -0x10;
          if (pbVar19 != (byte *)&juce::emptyString) {
            LOCK();
            *(int *)pbVar19 = *(int *)pbVar19 + 1;
            UNLOCK();
          }
          local_6c = *(uint *)(lVar21 + 0x1c);
          pbVar12 = *(byte **)(lVar21 + 8);
          pbVar1 = pbVar12 + -0x10;
          if (pbVar1 != (byte *)&juce::emptyString) {
            LOCK();
            *(int *)pbVar1 = *(int *)pbVar1 + 1;
            UNLOCK();
          }
          lVar21 = *(long *)param_1;
          local_78 = *(int *)(lVar21 + 0x18);
          local_68 = *(byte **)(lVar21 + 0x10);
          pbVar28 = local_68 + -0x10;
          if (pbVar28 != (byte *)&juce::emptyString) {
            LOCK();
            *(int *)pbVar28 = *(int *)pbVar28 + 1;
            UNLOCK();
          }
          local_70 = *(uint *)(lVar21 + 0x1c);
          pbVar16 = *(byte **)(lVar21 + 8);
          pbVar20 = pbVar16 + -0x10;
          if (pbVar20 != (byte *)&juce::emptyString) {
            LOCK();
            *(int *)pbVar20 = *(int *)pbVar20 + 1;
            UNLOCK();
          }
          pbVar7 = pbVar16;
          pbVar17 = pbVar12;
          do {
            bVar2 = *pbVar17;
            uVar27 = (ulong)bVar2;
            if ((char)bVar2 < '\0') {
              if ((bVar2 & 0x40) == 0) {
                uVar27 = (ulong)(bVar2 & 0x7f);
                goto LAB_00301680;
              }
              if ((bVar2 & 0x20) == 0) {
                uVar26 = 0x3f;
                lVar21 = 0;
                bVar29 = false;
                bVar5 = false;
              }
              else {
                bVar29 = true;
                if ((bVar2 & 0x10) == 0) {
                  uVar26 = 0x1f;
                  lVar21 = 1;
                  bVar5 = false;
                }
                else {
                  uVar26 = 0xf;
                  lVar21 = 2;
                  bVar5 = true;
                }
              }
              uVar26 = bVar2 & uVar26;
              uVar27 = (ulong)uVar26;
              if ((pbVar17[1] & 0xffffffc0) != 0x80) goto LAB_00301680;
              uVar26 = pbVar17[1] & 0x3f | uVar26 << 6;
              uVar27 = (ulong)uVar26;
              if (bVar29) {
                pbVar10 = pbVar17 + 2;
                if ((*pbVar10 & 0xffffffc0) == 0x80) {
                  uVar26 = *pbVar10 & 0x3f | uVar26 << 6;
                  uVar27 = (ulong)uVar26;
                  if (bVar5) {
                    bVar2 = pbVar17[3];
                    pbVar10 = pbVar17 + 3;
                    if ((bVar2 & 0xc0) != 0x80) goto LAB_0030177c;
                    uVar27 = (ulong)(uVar26 << 6 | bVar2 & 0x3f);
                  }
                  goto LAB_00301678;
                }
              }
              else {
LAB_00301678:
                pbVar10 = pbVar17 + lVar21 + 2;
              }
LAB_0030177c:
              bVar2 = *pbVar7;
              pbVar17 = pbVar10;
            }
            else {
LAB_00301680:
              bVar2 = *pbVar7;
              pbVar17 = pbVar17 + 1;
            }
            uVar26 = (uint)bVar2;
            pbVar10 = pbVar7 + 1;
            if ((char)bVar2 < '\0') {
              pbVar10 = pbVar7 + 1;
              if ((bVar2 & 0x40) == 0) {
                uVar26 = bVar2 & 0x7f;
              }
              else {
                if ((bVar2 & 0x20) == 0) {
                  uVar26 = 0x3f;
                  lVar21 = 0;
                  bVar29 = false;
                  bVar5 = false;
                }
                else {
                  bVar29 = true;
                  if ((bVar2 & 0x10) == 0) {
                    uVar26 = 0x1f;
                    lVar21 = 1;
                    bVar5 = false;
                  }
                  else {
                    uVar26 = 0xf;
                    lVar21 = 2;
                    bVar5 = true;
                  }
                }
                uVar26 = bVar2 & uVar26;
                if ((pbVar7[1] & 0xffffffc0) == 0x80) {
                  pbVar10 = pbVar7 + lVar21 + 2;
                  uVar26 = pbVar7[1] & 0x3f | uVar26 << 6;
                  pbVar11 = pbVar10;
                  if (bVar29) {
                    pbVar11 = pbVar7 + 2;
                    if ((*pbVar11 & 0xc0) == 0x80) {
                      uVar26 = *pbVar11 & 0x3f | uVar26 << 6;
                      pbVar11 = pbVar10;
                      if (bVar5) {
                        uVar9 = (uint)pbVar7[3];
                        if ((uVar9 & 0xffffffc0) == 0x80) {
                          uVar26 = uVar26 << 6 | uVar9 & 0x3f;
                        }
                        else {
                          pbVar10 = pbVar7 + 3;
                        }
                        goto LAB_00301570;
                      }
                    }
                  }
                  pbVar10 = pbVar11;
                }
              }
            }
LAB_00301570:
            pbVar7 = pbVar10;
            iVar6 = (int)uVar27 - uVar26;
            cVar14 = ((int)uVar27 == 0) * '\x02';
            pbVar15 = (byte *)((ulong)pbVar15 & 0xffffffff);
            if (iVar6 != 0) {
              pbVar15 = (byte *)(ulong)(iVar6 >> 0x1f | 1);
              cVar14 = '\x01';
            }
          } while (cVar14 == '\0');
          if ((cVar14 == '\x01') && ((int)pbVar15 < 0)) {
LAB_00301ec0:
            pbVar15 = (byte *)CONCAT71((int7)((ulong)pbVar15 >> 8),0xff);
          }
          else {
            do {
              pbVar17 = pbVar16 + 1;
              bVar2 = *pbVar16;
              uVar26 = (uint)bVar2;
              if ((char)bVar2 < '\0') {
                if ((bVar2 & 0x40) == 0) {
                  uVar26 = bVar2 & 0x7f;
                  goto LAB_003018d0;
                }
                if ((bVar2 & 0x20) == 0) {
                  uVar26 = 0x3f;
                  lVar21 = 0;
                  bVar29 = false;
                  uVar27 = 0;
                }
                else {
                  bVar29 = true;
                  if ((bVar2 & 0x10) == 0) {
                    uVar26 = 0x1f;
                    lVar21 = 1;
                    uVar27 = 0;
                  }
                  else {
                    uVar26 = 0xf;
                    lVar21 = 2;
                    uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                  }
                }
                uVar26 = bVar2 & uVar26;
                if ((pbVar16[1] & 0xffffffc0) != 0x80) goto LAB_003018d0;
                pbVar17 = pbVar16 + lVar21 + 2;
                uVar26 = pbVar16[1] & 0x3f | uVar26 << 6;
                if (!bVar29) goto LAB_003018d0;
                uVar9 = (uint)pbVar16[2];
                if ((uVar9 & 0xffffffc0) == 0x80) {
                  uVar26 = uVar9 & 0x3f | uVar26 << 6;
                  if ((char)uVar27 == '\0') goto LAB_003018d0;
                  pbVar16 = pbVar16 + 3;
                  if ((*pbVar16 & 0xffffffc0) == 0x80) {
                    uVar26 = uVar26 << 6 | *pbVar16 & 0x3f;
                    goto LAB_003018d0;
                  }
                  goto LAB_003018d3;
                }
                bVar2 = *pbVar12;
                pbVar16 = pbVar16 + 2;
              }
              else {
LAB_003018d0:
                pbVar16 = pbVar17;
LAB_003018d3:
                bVar2 = *pbVar12;
              }
              uVar9 = (uint)bVar2;
              pbVar17 = pbVar12 + 1;
              if ((char)bVar2 < '\0') {
                pbVar17 = pbVar12 + 1;
                if ((bVar2 & 0x40) == 0) {
                  uVar9 = uVar9 & 0x7f;
                }
                else {
                  if ((bVar2 & 0x20) == 0) {
                    uVar23 = 0x3f;
                    lVar21 = 0;
                    bVar29 = false;
                    uVar27 = 0;
                  }
                  else {
                    bVar29 = true;
                    if ((bVar2 & 0x10) == 0) {
                      uVar23 = 0x1f;
                      lVar21 = 1;
                      uVar27 = 0;
                    }
                    else {
                      uVar23 = 0xf;
                      lVar21 = 2;
                      uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                    }
                  }
                  uVar9 = uVar9 & uVar23;
                  if ((pbVar12[1] & 0xffffffc0) == 0x80) {
                    pbVar7 = pbVar12 + lVar21 + 2;
                    uVar9 = pbVar12[1] & 0x3f | uVar9 << 6;
                    pbVar17 = pbVar7;
                    if (bVar29) {
                      pbVar17 = pbVar12 + 2;
                      if ((*pbVar17 & 0xc0) == 0x80) {
                        uVar9 = *pbVar17 & 0x3f | uVar9 << 6;
                        pbVar17 = pbVar7;
                        if ((char)uVar27 != '\0') {
                          uVar23 = (uint)pbVar12[3];
                          if ((uVar23 & 0xffffffc0) == 0x80) {
                            uVar9 = uVar9 << 6 | uVar23 & 0x3f;
                          }
                          else {
                            pbVar17 = pbVar12 + 3;
                          }
                        }
                      }
                    }
                  }
                }
              }
              cVar14 = (uVar26 == 0) * '\x02';
              if (uVar26 - uVar9 != 0) {
                pbVar15 = (byte *)(ulong)((int)(uVar26 - uVar9) >> 0x1f | 1);
                cVar14 = '\x01';
              }
              pbVar12 = pbVar17;
            } while (cVar14 == '\0');
            uVar18 = (undefined7)((ulong)pbVar15 >> 8);
            if ((cVar14 == '\x01') && ((int)pbVar15 < 0)) {
              pbVar15 = (byte *)CONCAT71(uVar18,1);
            }
            else if (local_6c == local_70) {
              pbVar15 = local_68;
              pbVar12 = pbVar13;
              uVar26 = local_70;
              do {
                bVar2 = *pbVar12;
                uVar9 = (uint)bVar2;
                if ((char)bVar2 < '\0') {
                  if ((bVar2 & 0x40) == 0) {
                    uVar9 = uVar9 & 0x7f;
                    goto LAB_00301b30;
                  }
                  if ((bVar2 & 0x20) == 0) {
                    uVar23 = 0x3f;
                    lVar21 = 0;
                    bVar29 = false;
                    uVar27 = 0;
                  }
                  else {
                    bVar29 = true;
                    if ((bVar2 & 0x10) == 0) {
                      uVar23 = 0x1f;
                      lVar21 = 1;
                      uVar27 = 0;
                    }
                    else {
                      uVar23 = 0xf;
                      lVar21 = 2;
                      uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                    }
                  }
                  uVar9 = uVar9 & uVar23;
                  if ((pbVar12[1] & 0xffffffc0) != 0x80) goto LAB_00301b30;
                  uVar9 = pbVar12[1] & 0x3f | uVar9 << 6;
                  if (bVar29) {
                    pbVar16 = pbVar12 + 2;
                    if ((*pbVar16 & 0xffffffc0) == 0x80) {
                      uVar9 = *pbVar16 & 0x3f | uVar9 << 6;
                      if ((char)uVar27 != '\0') {
                        uVar23 = (uint)pbVar12[3];
                        pbVar16 = pbVar12 + 3;
                        if ((uVar23 & 0xffffffc0) != 0x80) goto LAB_00301c10;
                        uVar9 = uVar9 << 6 | uVar23 & 0x3f;
                      }
                      goto LAB_00301b1d;
                    }
                  }
                  else {
LAB_00301b1d:
                    pbVar16 = pbVar12 + lVar21 + 2;
                  }
LAB_00301c10:
                  bVar2 = *pbVar15;
                  pbVar12 = pbVar16;
                }
                else {
LAB_00301b30:
                  bVar2 = *pbVar15;
                  pbVar12 = pbVar12 + 1;
                }
                uVar23 = (uint)bVar2;
                pbVar16 = pbVar15 + 1;
                if ((char)bVar2 < '\0') {
                  pbVar16 = pbVar15 + 1;
                  if ((bVar2 & 0x40) == 0) {
                    uVar23 = uVar23 & 0x7f;
                  }
                  else {
                    if ((bVar2 & 0x20) == 0) {
                      uVar24 = 0x3f;
                      lVar21 = 0;
                      bVar29 = false;
                      uVar27 = 0;
                    }
                    else {
                      bVar29 = true;
                      if ((bVar2 & 0x10) == 0) {
                        uVar24 = 0x1f;
                        lVar21 = 1;
                        uVar27 = 0;
                      }
                      else {
                        uVar24 = 0xf;
                        lVar21 = 2;
                        uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                      }
                    }
                    uVar23 = uVar23 & uVar24;
                    if ((pbVar15[1] & 0xffffffc0) == 0x80) {
                      pbVar16 = pbVar15 + lVar21 + 2;
                      uVar23 = pbVar15[1] & 0x3f | uVar23 << 6;
                      if (bVar29) {
                        bVar2 = pbVar15[2];
                        if ((bVar2 & 0xc0) == 0x80) {
                          uVar23 = bVar2 & 0x3f | uVar23 << 6;
                          if ((char)uVar27 != '\0') {
                            bVar2 = pbVar15[3];
                            if ((bVar2 & 0xc0) == 0x80) {
                              uVar23 = uVar23 << 6 | bVar2 & 0x3f;
                            }
                            else {
                              pbVar16 = pbVar15 + 3;
                            }
                          }
                        }
                        else {
                          pbVar16 = pbVar15 + 2;
                        }
                      }
                    }
                  }
                }
                pbVar15 = pbVar16;
                cVar14 = (uVar9 == 0) * '\x02';
                if (uVar9 - uVar23 != 0) {
                  cVar14 = '\x01';
                  uVar26 = (int)(uVar9 - uVar23) >> 0x1f | 1;
                }
              } while (cVar14 == '\0');
              pbVar12 = local_68;
              if ((cVar14 == '\x01') && ((int)uVar26 < 0)) goto LAB_00301ec0;
              do {
                pbVar16 = pbVar12 + 1;
                bVar2 = *pbVar12;
                uVar9 = (uint)bVar2;
                if ((char)bVar2 < '\0') {
                  if ((bVar2 & 0x40) == 0) {
                    uVar9 = uVar9 & 0x7f;
                    goto LAB_00301d70;
                  }
                  if ((bVar2 & 0x20) == 0) {
                    uVar23 = 0x3f;
                    pbVar15 = (byte *)0x0;
                    bVar29 = false;
                    uVar27 = 0;
                  }
                  else {
                    bVar29 = true;
                    if ((bVar2 & 0x10) == 0) {
                      uVar23 = 0x1f;
                      pbVar15 = (byte *)0x1;
                      uVar27 = 0;
                    }
                    else {
                      uVar23 = 0xf;
                      pbVar15 = (byte *)0x2;
                      uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                    }
                  }
                  uVar9 = uVar9 & uVar23;
                  if ((pbVar12[1] & 0xffffffc0) != 0x80) goto LAB_00301d70;
                  pbVar16 = pbVar12 + (long)pbVar15 + 2;
                  uVar9 = pbVar12[1] & 0x3f | uVar9 << 6;
                  if (!bVar29) goto LAB_00301d70;
                  pbVar17 = pbVar12 + 2;
                  if ((*pbVar17 & 0xffffffc0) == 0x80) {
                    uVar9 = *pbVar17 & 0x3f | uVar9 << 6;
                    if ((char)uVar27 == '\0') goto LAB_00301d70;
                    pbVar17 = pbVar12 + 3;
                    if ((*pbVar17 & 0xffffffc0) == 0x80) {
                      uVar9 = uVar9 << 6 | *pbVar17 & 0x3f;
                      goto LAB_00301d70;
                    }
                    goto LAB_00301d73;
                  }
                  bVar2 = *pbVar13;
                }
                else {
LAB_00301d70:
                  pbVar17 = pbVar16;
LAB_00301d73:
                  bVar2 = *pbVar13;
                }
                uVar23 = (uint)bVar2;
                pbVar16 = pbVar13 + 1;
                if ((char)bVar2 < '\0') {
                  pbVar16 = pbVar13 + 1;
                  if ((bVar2 & 0x40) == 0) {
                    uVar23 = uVar23 & 0x7f;
                  }
                  else {
                    if ((bVar2 & 0x20) == 0) {
                      uVar24 = 0x3f;
                      lVar21 = 0;
                      bVar29 = false;
                      uVar27 = 0;
                    }
                    else {
                      bVar29 = true;
                      if ((bVar2 & 0x10) == 0) {
                        uVar24 = 0x1f;
                        lVar21 = 1;
                        uVar27 = 0;
                      }
                      else {
                        uVar24 = 0xf;
                        lVar21 = 2;
                        uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                      }
                    }
                    uVar23 = uVar23 & uVar24;
                    pbVar15 = (byte *)0x0;
                    if ((pbVar13[1] & 0xffffffc0) == 0x80) {
                      pbVar12 = pbVar13 + lVar21 + 2;
                      pbVar15 = (byte *)0x0;
                      uVar23 = pbVar13[1] & 0x3f | uVar23 << 6;
                      pbVar16 = pbVar12;
                      if (bVar29) {
                        pbVar16 = pbVar13 + 2;
                        pbVar15 = (byte *)0x0;
                        if ((*pbVar16 & 0xffffffc0) == 0x80) {
                          pbVar15 = (byte *)0x0;
                          uVar23 = *pbVar16 & 0x3f | uVar23 << 6;
                          pbVar16 = pbVar12;
                          if ((char)uVar27 != '\0') {
                            pbVar16 = pbVar13 + 3;
                            if ((*pbVar16 & 0xffffffc0) == 0x80) {
                              uVar23 = uVar23 << 6 | *pbVar16 & 0x3f;
                              pbVar16 = pbVar12;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                cVar14 = (uVar9 == 0) * '\x02';
                if (uVar9 - uVar23 != 0) {
                  cVar14 = '\x01';
                  uVar26 = (int)(uVar9 - uVar23) >> 0x1f | 1;
                }
                pbVar12 = pbVar17;
                pbVar13 = pbVar16;
              } while (cVar14 == '\0');
              if ((cVar14 == '\x01') && ((int)uVar26 < 0)) {
                pbVar15 = (byte *)CONCAT71((int7)((ulong)pbVar15 >> 8),1);
              }
              else {
                pbVar15 = (byte *)(ulong)(byte)((local_78 <= local_74) * '\x02' - 1);
                if (local_74 == local_78) {
                  pbVar15 = (byte *)0x0;
                }
              }
            }
            else {
              pbVar15 = (byte *)CONCAT71(uVar18,((int)local_70 <= (int)local_6c) * '\x02' + -1);
            }
          }
          local_48 = pbVar25;
          if (pbVar20 != (byte *)&juce::emptyString) {
            LOCK();
            iVar6 = *(int *)pbVar20;
            *(int *)pbVar20 = *(int *)pbVar20 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(pbVar20);
            }
          }
          if (pbVar28 != (byte *)&juce::emptyString) {
            LOCK();
            iVar6 = *(int *)pbVar28;
            *(int *)pbVar28 = *(int *)pbVar28 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(pbVar28);
            }
          }
          if (pbVar1 != (byte *)&juce::emptyString) {
            LOCK();
            iVar6 = *(int *)pbVar1;
            *(int *)pbVar1 = *(int *)pbVar1 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(pbVar1);
            }
          }
          if (pbVar19 != (byte *)&juce::emptyString) {
            LOCK();
            iVar6 = *(int *)pbVar19;
            *(int *)pbVar19 = *(int *)pbVar19 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(pbVar19);
            }
          }
          pbVar25 = local_48 + 8;
        } while ((char)pbVar15 < '\0');
        local_38 = pbVar25;
        do {
          lVar21 = *(long *)param_1;
          local_74 = *(int *)(lVar21 + 0x18);
          pbVar19 = *(byte **)(lVar21 + 0x10);
          pbVar25 = pbVar19 + -0x10;
          if (pbVar25 != (byte *)&juce::emptyString) {
            LOCK();
            *(int *)pbVar25 = *(int *)pbVar25 + 1;
            UNLOCK();
          }
          local_58 = local_58 + -8;
          local_6c = *(uint *)(lVar21 + 0x1c);
          pbVar13 = *(byte **)(lVar21 + 8);
          pbVar15 = pbVar13 + -0x10;
          if (pbVar15 != (byte *)&juce::emptyString) {
            LOCK();
            *(int *)pbVar15 = *(int *)pbVar15 + 1;
            UNLOCK();
          }
          lVar21 = *(long *)local_58;
          local_78 = *(int *)(lVar21 + 0x18);
          local_68 = *(byte **)(lVar21 + 0x10);
          pbVar1 = local_68 + -0x10;
          if (pbVar1 != (byte *)&juce::emptyString) {
            LOCK();
            *(int *)pbVar1 = *(int *)pbVar1 + 1;
            UNLOCK();
          }
          local_70 = *(uint *)(lVar21 + 0x1c);
          pbVar28 = *(byte **)(lVar21 + 8);
          pbVar12 = pbVar28 + -0x10;
          if (pbVar12 != (byte *)&juce::emptyString) {
            LOCK();
            *(int *)pbVar12 = *(int *)pbVar12 + 1;
            UNLOCK();
          }
          pbVar16 = pbVar28;
          pbVar20 = pbVar13;
          do {
            pbVar17 = pbVar20 + 1;
            bVar2 = *pbVar20;
            uVar26 = (uint)bVar2;
            if ((char)bVar2 < '\0') {
              if ((bVar2 & 0x40) == 0) {
                uVar26 = bVar2 & 0x7f;
                goto LAB_003021a0;
              }
              if ((bVar2 & 0x20) == 0) {
                uVar26 = 0x3f;
                lVar21 = 0;
                bVar29 = false;
                bVar5 = false;
              }
              else {
                bVar29 = true;
                if ((bVar2 & 0x10) == 0) {
                  uVar26 = 0x1f;
                  lVar21 = 1;
                  bVar5 = false;
                }
                else {
                  uVar26 = 0xf;
                  lVar21 = 2;
                  bVar5 = true;
                }
              }
              uVar26 = bVar2 & uVar26;
              if ((pbVar20[1] & 0xffffffc0) != 0x80) goto LAB_003021a0;
              pbVar17 = pbVar20 + lVar21 + 2;
              uVar26 = pbVar20[1] & 0x3f | uVar26 << 6;
              if (!bVar29) goto LAB_003021a0;
              uVar9 = (uint)pbVar20[2];
              if ((uVar9 & 0xffffffc0) == 0x80) {
                uVar26 = uVar9 & 0x3f | uVar26 << 6;
                if (!bVar5) goto LAB_003021a0;
                pbVar20 = pbVar20 + 3;
                if ((*pbVar20 & 0xffffffc0) == 0x80) {
                  uVar26 = uVar26 << 6 | *pbVar20 & 0x3f;
                  goto LAB_003021a0;
                }
                goto LAB_003021a3;
              }
              bVar2 = *pbVar16;
              pbVar20 = pbVar20 + 2;
            }
            else {
LAB_003021a0:
              pbVar20 = pbVar17;
LAB_003021a3:
              bVar2 = *pbVar16;
            }
            uVar9 = (uint)bVar2;
            pbVar17 = pbVar16 + 1;
            if ((char)bVar2 < '\0') {
              pbVar17 = pbVar16 + 1;
              if ((bVar2 & 0x40) == 0) {
                uVar9 = bVar2 & 0x7f;
              }
              else {
                if ((bVar2 & 0x20) == 0) {
                  uVar9 = 0x3f;
                  lVar21 = 0;
                  bVar29 = false;
                  bVar5 = false;
                }
                else {
                  bVar29 = true;
                  if ((bVar2 & 0x10) == 0) {
                    uVar9 = 0x1f;
                    lVar21 = 1;
                    bVar5 = false;
                  }
                  else {
                    uVar9 = 0xf;
                    lVar21 = 2;
                    bVar5 = true;
                  }
                }
                uVar9 = bVar2 & uVar9;
                if ((pbVar16[1] & 0xffffffc0) == 0x80) {
                  pbVar7 = pbVar16 + lVar21 + 2;
                  uVar9 = pbVar16[1] & 0x3f | uVar9 << 6;
                  pbVar17 = pbVar7;
                  if (bVar29) {
                    pbVar17 = pbVar16 + 2;
                    if ((*pbVar17 & 0xffffffc0) == 0x80) {
                      uVar9 = *pbVar17 & 0x3f | uVar9 << 6;
                      pbVar17 = pbVar7;
                      if (bVar5) {
                        pbVar17 = pbVar16 + 3;
                        if ((*pbVar17 & 0xffffffc0) == 0x80) {
                          uVar9 = uVar9 << 6 | *pbVar17 & 0x3f;
                          pbVar17 = pbVar7;
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar23 = 1;
            cVar14 = (uVar26 == 0) * '\x02';
            uVar27 = uVar27 & 0xffffffff;
            if (uVar26 - uVar9 != 0) {
              uVar27 = (ulong)((int)(uVar26 - uVar9) >> 0x1f | 1);
              cVar14 = '\x01';
            }
            pbVar16 = pbVar17;
          } while (cVar14 == '\0');
          if ((cVar14 == '\x01') && ((int)uVar27 < 0)) {
            cVar14 = -1;
          }
          else {
            do {
              pbVar16 = pbVar28 + 1;
              bVar2 = *pbVar28;
              uVar26 = (uint)bVar2;
              if ((char)bVar2 < '\0') {
                if ((bVar2 & 0x40) == 0) {
                  uVar26 = uVar26 & 0x7f;
                  goto LAB_003023e0;
                }
                if ((bVar2 & 0x20) == 0) {
                  uVar9 = 0x3f;
                  lVar21 = 0;
                  bVar29 = false;
                  uVar27 = 0;
                }
                else {
                  bVar29 = true;
                  if ((bVar2 & 0x10) == 0) {
                    uVar9 = 0x1f;
                    lVar21 = 1;
                    uVar27 = 0;
                  }
                  else {
                    uVar9 = 0xf;
                    lVar21 = 2;
                    uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                  }
                }
                uVar26 = uVar26 & uVar9;
                if ((pbVar28[1] & 0xffffffc0) != 0x80) goto LAB_003023e0;
                pbVar16 = pbVar28 + lVar21 + 2;
                uVar26 = pbVar28[1] & 0x3f | uVar26 << 6;
                if (!bVar29) goto LAB_003023e0;
                uVar9 = (uint)pbVar28[2];
                if ((uVar9 & 0xffffffc0) == 0x80) {
                  uVar26 = uVar9 & 0x3f | uVar26 << 6;
                  if ((char)uVar27 == '\0') goto LAB_003023e0;
                  pbVar28 = pbVar28 + 3;
                  if ((*pbVar28 & 0xffffffc0) == 0x80) {
                    uVar26 = uVar26 << 6 | *pbVar28 & 0x3f;
                    goto LAB_003023e0;
                  }
                  goto LAB_003023e3;
                }
                bVar2 = *pbVar13;
                pbVar28 = pbVar28 + 2;
              }
              else {
LAB_003023e0:
                pbVar28 = pbVar16;
LAB_003023e3:
                bVar2 = *pbVar13;
              }
              uVar9 = (uint)bVar2;
              pbVar16 = pbVar13 + 1;
              if ((char)bVar2 < '\0') {
                pbVar16 = pbVar13 + 1;
                if ((bVar2 & 0x40) == 0) {
                  uVar9 = uVar9 & 0x7f;
                }
                else {
                  if ((bVar2 & 0x20) == 0) {
                    uVar24 = 0x3f;
                    lVar21 = 0;
                    bVar29 = false;
                    uVar27 = 0;
                  }
                  else {
                    bVar29 = true;
                    if ((bVar2 & 0x10) == 0) {
                      uVar24 = 0x1f;
                      lVar21 = 1;
                      uVar27 = 0;
                    }
                    else {
                      uVar24 = 0xf;
                      lVar21 = 2;
                      uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                    }
                  }
                  uVar9 = uVar9 & uVar24;
                  if ((pbVar13[1] & 0xffffffc0) == 0x80) {
                    pbVar16 = pbVar13 + lVar21 + 2;
                    uVar9 = pbVar13[1] & 0x3f | uVar9 << 6;
                    if (bVar29) {
                      bVar2 = pbVar13[2];
                      if ((bVar2 & 0xc0) == 0x80) {
                        uVar9 = bVar2 & 0x3f | uVar9 << 6;
                        if ((char)uVar27 != '\0') {
                          uVar24 = (uint)pbVar13[3];
                          if ((uVar24 & 0xffffffc0) == 0x80) {
                            uVar9 = uVar9 << 6 | uVar24 & 0x3f;
                          }
                          else {
                            pbVar16 = pbVar13 + 3;
                          }
                        }
                      }
                      else {
                        pbVar16 = pbVar13 + 2;
                      }
                    }
                  }
                }
              }
              pbVar13 = pbVar16;
              cVar14 = (uVar26 == 0) * '\x02';
              pbVar20 = (byte *)((ulong)pbVar20 & 0xffffffff);
              if (uVar26 - uVar9 != 0) {
                pbVar20 = (byte *)(ulong)((int)(uVar26 - uVar9) >> 0x1f | 1);
                cVar14 = '\x01';
              }
            } while (cVar14 == '\0');
            if ((cVar14 == '\x01') && ((int)pbVar20 < 0)) {
              cVar14 = '\x01';
            }
            else if (local_6c == local_70) {
              pbVar28 = local_68;
              pbVar13 = pbVar19;
              uVar26 = local_70;
              do {
                pbVar20 = pbVar13 + 1;
                bVar2 = *pbVar13;
                uVar9 = (uint)bVar2;
                if ((char)bVar2 < '\0') {
                  if ((bVar2 & 0x40) == 0) {
                    uVar9 = bVar2 & 0x7f;
                    goto LAB_00302610;
                  }
                  if ((bVar2 & 0x20) == 0) {
                    uVar9 = 0x3f;
                    lVar21 = 0;
                    bVar29 = false;
                    uVar27 = 0;
                  }
                  else {
                    bVar29 = true;
                    if ((bVar2 & 0x10) == 0) {
                      uVar9 = 0x1f;
                      lVar21 = 1;
                      uVar27 = 0;
                    }
                    else {
                      uVar9 = 0xf;
                      lVar21 = 2;
                      uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                    }
                  }
                  uVar9 = bVar2 & uVar9;
                  if ((pbVar13[1] & 0xc0) != 0x80) goto LAB_00302610;
                  pbVar20 = pbVar13 + lVar21 + 2;
                  uVar9 = pbVar13[1] & 0x3f | uVar9 << 6;
                  if (!bVar29) goto LAB_00302610;
                  bVar2 = pbVar13[2];
                  if ((bVar2 & 0xc0) == 0x80) {
                    uVar9 = bVar2 & 0x3f | uVar9 << 6;
                    if ((char)uVar27 == '\0') goto LAB_00302610;
                    pbVar13 = pbVar13 + 3;
                    if ((*pbVar13 & 0xc0) == 0x80) {
                      uVar9 = uVar9 << 6 | *pbVar13 & 0x3f;
                      goto LAB_00302610;
                    }
                    goto LAB_00302613;
                  }
                  bVar2 = *pbVar28;
                  pbVar13 = pbVar13 + 2;
                }
                else {
LAB_00302610:
                  pbVar13 = pbVar20;
LAB_00302613:
                  bVar2 = *pbVar28;
                }
                uVar24 = (uint)bVar2;
                pbVar20 = pbVar28 + 1;
                if ((char)bVar2 < '\0') {
                  pbVar20 = pbVar28 + 1;
                  if ((bVar2 & 0x40) == 0) {
                    uVar24 = uVar24 & 0x7f;
                  }
                  else {
                    if ((bVar2 & 0x20) == 0) {
                      uVar8 = 0x3f;
                      lVar21 = 0;
                      bVar29 = false;
                      uVar27 = 0;
                    }
                    else {
                      bVar29 = true;
                      if ((bVar2 & 0x10) == 0) {
                        uVar8 = 0x1f;
                        lVar21 = 1;
                        uVar27 = 0;
                      }
                      else {
                        uVar8 = 0xf;
                        lVar21 = 2;
                        uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                      }
                    }
                    uVar24 = uVar24 & uVar8;
                    if ((pbVar28[1] & 0xffffffc0) == 0x80) {
                      pbVar20 = pbVar28 + lVar21 + 2;
                      uVar24 = pbVar28[1] & 0x3f | uVar24 << 6;
                      if (bVar29) {
                        bVar2 = pbVar28[2];
                        if ((bVar2 & 0xc0) == 0x80) {
                          uVar24 = bVar2 & 0x3f | uVar24 << 6;
                          if ((char)uVar27 != '\0') {
                            uVar8 = (uint)pbVar28[3];
                            if ((uVar8 & 0xffffffc0) == 0x80) {
                              uVar24 = uVar24 << 6 | uVar8 & 0x3f;
                            }
                            else {
                              pbVar20 = pbVar28 + 3;
                            }
                          }
                        }
                        else {
                          pbVar20 = pbVar28 + 2;
                        }
                      }
                    }
                  }
                }
                pbVar28 = pbVar20;
                cVar14 = (uVar9 == 0) * '\x02';
                if (uVar9 - uVar24 != 0) {
                  cVar14 = '\x01';
                  uVar26 = (int)(uVar9 - uVar24) >> 0x1f | 1;
                }
              } while (cVar14 == '\0');
              pbVar13 = local_68;
              if ((cVar14 == '\x01') && ((int)uVar26 < 0)) {
                cVar14 = -1;
              }
              else {
                do {
                  pbVar28 = pbVar13 + 1;
                  bVar2 = *pbVar13;
                  uVar26 = (uint)bVar2;
                  if ((char)bVar2 < '\0') {
                    if ((bVar2 & 0x40) == 0) {
                      uVar26 = bVar2 & 0x7f;
                      goto LAB_00302860;
                    }
                    if ((bVar2 & 0x20) == 0) {
                      uVar26 = 0x3f;
                      lVar21 = 0;
                      bVar29 = false;
                      uVar27 = 0;
                    }
                    else {
                      bVar29 = true;
                      if ((bVar2 & 0x10) == 0) {
                        uVar26 = 0x1f;
                        lVar21 = 1;
                        uVar27 = 0;
                      }
                      else {
                        uVar26 = 0xf;
                        lVar21 = 2;
                        uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                      }
                    }
                    uVar26 = bVar2 & uVar26;
                    if ((pbVar13[1] & 0xffffffc0) != 0x80) goto LAB_00302860;
                    pbVar28 = pbVar13 + lVar21 + 2;
                    uVar26 = pbVar13[1] & 0x3f | uVar26 << 6;
                    if (!bVar29) goto LAB_00302860;
                    pbVar20 = pbVar13 + 2;
                    if ((*pbVar20 & 0xffffffc0) == 0x80) {
                      uVar26 = *pbVar20 & 0x3f | uVar26 << 6;
                      if ((char)uVar27 == '\0') goto LAB_00302860;
                      pbVar20 = pbVar13 + 3;
                      if ((*pbVar20 & 0xffffffc0) == 0x80) {
                        uVar26 = uVar26 << 6 | *pbVar20 & 0x3f;
                        goto LAB_00302860;
                      }
                      goto LAB_00302863;
                    }
                    bVar2 = *pbVar19;
                  }
                  else {
LAB_00302860:
                    pbVar20 = pbVar28;
LAB_00302863:
                    bVar2 = *pbVar19;
                  }
                  uVar9 = (uint)bVar2;
                  pbVar28 = pbVar19 + 1;
                  if ((char)bVar2 < '\0') {
                    pbVar28 = pbVar19 + 1;
                    if ((bVar2 & 0x40) == 0) {
                      uVar9 = uVar9 & 0x7f;
                    }
                    else {
                      if ((bVar2 & 0x20) == 0) {
                        uVar24 = 0x3f;
                        lVar21 = 0;
                        bVar29 = false;
                        uVar27 = 0;
                      }
                      else {
                        bVar29 = true;
                        if ((bVar2 & 0x10) == 0) {
                          uVar24 = 0x1f;
                          lVar21 = 1;
                          uVar27 = 0;
                        }
                        else {
                          uVar24 = 0xf;
                          lVar21 = 2;
                          uVar27 = CONCAT71((int7)(uVar27 >> 8),1);
                        }
                      }
                      uVar9 = uVar9 & uVar24;
                      if ((pbVar19[1] & 0xffffffc0) == 0x80) {
                        pbVar13 = pbVar19 + lVar21 + 2;
                        uVar9 = pbVar19[1] & 0x3f | uVar9 << 6;
                        pbVar28 = pbVar13;
                        if (bVar29) {
                          pbVar28 = pbVar19 + 2;
                          if ((*pbVar28 & 0xffffffc0) == 0x80) {
                            uVar9 = *pbVar28 & 0x3f | uVar9 << 6;
                            pbVar28 = pbVar13;
                            if ((char)uVar27 != '\0') {
                              pbVar28 = pbVar19 + 3;
                              if ((*pbVar28 & 0xffffffc0) == 0x80) {
                                uVar9 = uVar9 << 6 | *pbVar28 & 0x3f;
                                pbVar28 = pbVar13;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  cVar14 = (uVar26 == 0) * '\x02';
                  if (uVar26 - uVar9 != 0) {
                    cVar14 = '\x01';
                    uVar23 = (int)(uVar26 - uVar9) >> 0x1f | 1;
                  }
                  pbVar13 = pbVar20;
                  pbVar19 = pbVar28;
                } while (cVar14 == '\0');
                if ((cVar14 == '\x01') && ((int)uVar23 < 0)) {
                  cVar14 = '\x01';
                }
                else {
                  cVar14 = (local_78 <= local_74) * '\x02' + -1;
                  if (local_74 == local_78) {
                    cVar14 = '\0';
                  }
                }
              }
            }
            else {
              cVar14 = ((int)local_70 <= (int)local_6c) * '\x02' + -1;
            }
          }
          if (pbVar12 != (byte *)&juce::emptyString) {
            LOCK();
            iVar6 = *(int *)pbVar12;
            *(int *)pbVar12 = *(int *)pbVar12 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(pbVar12);
            }
          }
          if (pbVar1 != (byte *)&juce::emptyString) {
            LOCK();
            iVar6 = *(int *)pbVar1;
            *(int *)pbVar1 = *(int *)pbVar1 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(pbVar1);
            }
          }
          if (pbVar15 != (byte *)&juce::emptyString) {
            LOCK();
            iVar6 = *(int *)pbVar15;
            *(int *)pbVar15 = *(int *)pbVar15 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(pbVar15);
            }
          }
          if (pbVar25 != (byte *)&juce::emptyString) {
            LOCK();
            iVar6 = *(int *)pbVar25;
            *(int *)pbVar25 = *(int *)pbVar25 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(pbVar25);
            }
          }
          param_3 = local_40;
          param_2 = local_48;
        } while (cVar14 < '\0');
        pbVar15 = local_48;
        pbVar19 = local_58;
        pbVar25 = local_38;
      } while (local_48 < local_58);
      __introsort_loop<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::_lambda(auto:1_const&,auto:2_const&)_1_>>
                (local_48,local_50,local_40);
      uVar27 = (long)param_2 - (long)param_1;
    } while (0x80 < (long)uVar27);
  }
  return;
}


