// Function : init0
// Namespace: hb_ot_shape_plan_t
// Entry    : 00418270
// Prototype: undefined8 init0(hb_ot_shape_plan_t * this, long param_1, uint * param_2, undefined8 param_3)
// Body     : 00418270 - 0041d19f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_ot_shape_plan_t::init0(hb_face_t*, hb_shape_plan_key_t const*) */

undefined8 __thiscall
hb_ot_shape_plan_t::init0(hb_ot_shape_plan_t *this,long param_1,uint *param_2,undefined8 param_3)

{
  short sVar1;
  hb_face_t *phVar2;
  undefined4 uVar3;
  pthread_mutex_t *ppVar4;
  bool bVar5;
  uint uVar6;
  short *psVar7;
  undefined7 extraout_var;
  accelerator_t *this_00;
  long lVar8;
  undefined1 *puVar9;
  accelerator_t<OT::Layout::GSUB> *this_01;
  ulong uVar10;
  void *pvVar11;
  accelerator_t *this_02;
  accelerator_t *this_03;
  undefined7 extraout_var_00;
  accelerator_t<OT::Layout::GPOS> *paVar12;
  ushort *puVar13;
  accelerator_t *paVar14;
  accelerator_t *this_04;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  byte bVar22;
  ushort uVar23;
  int iVar24;
  int iVar25;
  undefined **ppuVar26;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  ulong uVar32;
  int *piVar33;
  ulong uVar34;
  undefined **ppuVar35;
  uint *puVar36;
  undefined8 uVar37;
  long lVar38;
  int iVar39;
  byte bVar40;
  byte *pbVar41;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar42;
  int iVar43;
  byte *pbVar44;
  long lVar45;
  hb_ot_shape_plan_t *phVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  uint *puVar49;
  bool bVar50;
  bool bVar51;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  long local_180 [5];
  char local_158;
  int local_154;
  undefined4 local_150;
  hb_ot_shape_plan_t local_14c;
  hb_ot_shape_plan_t local_14b;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138 [2];
  undefined8 local_130;
  undefined1 *puStack_128;
  undefined8 local_120;
  void *pvStack_118;
  undefined8 local_110;
  void *pvStack_108;
  uint local_100;
  undefined **local_f8;
  byte *local_f0;
  hb_ot_shape_plan_t *local_e8;
  long local_e0;
  uint *local_d8;
  uint *local_d0;
  uint *local_c8;
  long local_c0;
  uint *local_b8;
  hb_ot_shape_plan_t *local_b0;
  undefined8 local_a8;
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  pthread_mutex_t *local_90;
  undefined1 local_88;
  undefined8 local_86;
  undefined2 uStack_7e;
  uint uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  void *local_70;
  undefined4 local_68;
  undefined4 local_64;
  pthread_mutex_t *local_60;
  undefined1 local_58;
  undefined2 local_56;
  undefined6 uStack_54;
  undefined2 uStack_4e;
  uint uStack_4c;
  undefined2 uStack_48;
  undefined2 uStack_46;
  void *local_40;
  uint local_38 [2];
  
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  local_1a0 = *(undefined8 *)param_2;
  uStack_198 = *(undefined8 *)(param_2 + 2);
  local_190 = *(undefined8 *)(param_2 + 4);
  uStack_188 = *(undefined8 *)(param_2 + 6);
  local_1a8 = param_1;
  local_d8 = param_2;
  hb_ot_map_builder_t::hb_ot_map_builder_t
            ((hb_ot_map_builder_t *)local_180,param_1,(undefined8 *)param_2,param_3);
  this_00 = *(accelerator_t **)(param_1 + 0x148);
  while (this_00 == (accelerator_t *)0x0) {
    lVar8 = *(long *)(param_1 + 0x68);
    if (lVar8 == 0) {
LAB_00419da6:
      this_00 = (accelerator_t *)&_hb_NullPool;
      break;
    }
    this_00 = calloc(1,0x18);
    if (this_00 == (accelerator_t *)0x0) {
      LOCK();
      bVar5 = *(long *)(param_1 + 0x148) == 0;
      if (bVar5) {
        *(long *)(param_1 + 0x148) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar5) goto LAB_00419da6;
    }
    else {
                    /* try { // try from 00419d5b to 00419d65 has its CatchHandler @ 0041d1ae */
      AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::accelerator_t::accelerator_t
                (this_00,lVar8);
      LOCK();
      bVar5 = *(long *)(param_1 + 0x148) == 0;
      if (bVar5) {
        *(long *)(param_1 + 0x148) = (long)this_00;
      }
      UNLOCK();
      if (bVar5) break;
      AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::accelerator_t::~accelerator_t
                (this_00);
      free(this_00);
    }
    this_00 = *(accelerator_t **)(param_1 + 0x148);
  }
  puVar20 = *(undefined4 **)this_00;
  psVar7 = (short *)&_hb_NullPool;
  if (puVar20 == (undefined4 *)0x0) {
    puVar20 = &_hb_NullPool;
  }
  if (7 < (uint)puVar20[6]) {
    psVar7 = *(short **)(puVar20 + 4);
  }
  if (*psVar7 == 0) {
    this_04 = *(accelerator_t **)(param_1 + 0x150);
    while (this_04 == (accelerator_t *)0x0) {
      lVar8 = *(long *)(param_1 + 0x68);
      if (lVar8 == 0) {
LAB_0041cd5a:
        this_04 = (accelerator_t *)&_hb_NullPool;
        break;
      }
      this_04 = calloc(1,0x18);
      if (this_04 == (accelerator_t *)0x0) {
        LOCK();
        bVar5 = *(long *)(param_1 + 0x150) == 0;
        if (bVar5) {
          *(long *)(param_1 + 0x150) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar5) goto LAB_0041cd5a;
      }
      else {
                    /* try { // try from 0041cd0f to 0041cd19 has its CatchHandler @ 0041d1a6 */
        AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::accelerator_t::accelerator_t
                  (this_04,lVar8);
        LOCK();
        bVar5 = *(long *)(param_1 + 0x150) == 0;
        if (bVar5) {
          *(long *)(param_1 + 0x150) = (long)this_04;
        }
        UNLOCK();
        if (bVar5) break;
        AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::accelerator_t::~accelerator_t
                  (this_04);
        free(this_04);
      }
      this_04 = *(accelerator_t **)(param_1 + 0x150);
    }
    puVar20 = *(undefined4 **)this_04;
    psVar7 = (short *)&_hb_NullPool;
    if (puVar20 == (undefined4 *)0x0) {
      puVar20 = &_hb_NullPool;
    }
    if (7 < (uint)puVar20[6]) {
      psVar7 = *(short **)(puVar20 + 4);
    }
    if (*psVar7 != 0) goto LAB_0041832f;
    bVar5 = false;
  }
  else {
LAB_0041832f:
    bVar5 = true;
    if ((*local_d8 & 0xfffffffe) != 4) {
                    /* try { // try from 00418343 to 0041834a has its CatchHandler @ 0041d1b4 */
      bVar5 = hb_ot_layout_has_substitution(param_1);
      bVar5 = (int)CONCAT71(extraout_var,bVar5) == 0;
    }
  }
  uVar28 = local_d8[1];
  ppuVar26 = (undefined **)&_hb_ot_shaper_default;
  if (0x4d656465 < (int)uVar28) {
    if ((int)uVar28 < 0x536f6764) {
      if ((int)uVar28 < 0x4f727961) {
        if ((int)uVar28 < 0x4d796d72) {
          if ((int)uVar28 < 0x4d6f6e67) {
            if (uVar28 != 0x4d656466) {
              if (uVar28 == 0x4d6c796d) goto LAB_00418a5d;
              if (uVar28 != 0x4d6f6469) goto LAB_00418adb;
            }
          }
          else if (((uVar28 != 0x4d6f6e67) && (uVar28 != 0x4d746569)) && (uVar28 != 0x4d756c74))
          goto LAB_00418adb;
          goto LAB_00418ab9;
        }
        if ((int)uVar28 < 0x4e657761) {
          if (uVar28 == 0x4d796d72) {
            if (((local_154 != 0x44464c54) && (local_154 != 0x6c61746e)) &&
               (local_154 != 0x6d796d72)) {
              ppuVar26 = &_hb_ot_shaper_myanmar;
            }
          }
          else if ((uVar28 == 0x4e61676d) || (uVar28 == 0x4e616e64)) goto LAB_00418ab9;
        }
        else if ((uVar28 == 0x4e657761) || ((uVar28 == 0x4e6b6f6f || (uVar28 == 0x4f6e616f))))
        goto LAB_00418ab9;
      }
      else if ((int)uVar28 < 0x526a6e67) {
        if ((int)uVar28 < 0x50686c70) {
          if (uVar28 == 0x4f727961) goto LAB_00418a5d;
          if ((uVar28 == 0x4f756772) || (uVar28 == 0x50686167)) goto LAB_00418ab9;
        }
        else {
          if ((uVar28 == 0x50686c70) || (uVar28 == 0x506c7264)) goto LAB_00418ab9;
          if (uVar28 == 0x51616167) {
            ppuVar26 = (undefined **)_hb_ot_shaper_myanmar_zawgyi;
          }
        }
      }
      else if ((int)uVar28 < 0x53687264) {
        if (((uVar28 == 0x526a6e67) || (uVar28 == 0x526f6867)) || (uVar28 == 0x53617572))
        goto LAB_00418ab9;
      }
      else if ((int)uVar28 < 0x53696e64) {
        if ((uVar28 == 0x53687264) || (uVar28 == 0x53696464)) goto LAB_00418ab9;
      }
      else if ((uVar28 == 0x53696e64) || (uVar28 == 0x53696e68)) goto LAB_00418ab9;
    }
    else if ((int)uVar28 < 0x54666e67) {
      if ((int)uVar28 < 0x53797263) {
        if ((int)uVar28 < 0x53756e64) {
          if (((uVar28 == 0x536f6764) || (uVar28 == 0x536f676f)) || (uVar28 == 0x536f796f))
          goto LAB_00418ab9;
        }
        else if (((uVar28 == 0x53756e64) || (uVar28 == 0x53756e75)) || (uVar28 == 0x53796c6f))
        goto LAB_00418ab9;
      }
      else if ((int)uVar28 < 0x54616c65) {
        if (uVar28 == 0x53797263) {
LAB_00419cb1:
          ppuVar35 = &_hb_ot_shaper_arabic;
          if ((*local_d8 & 0xfffffffe) != 4) {
            ppuVar35 = (undefined **)&_hb_ot_shaper_default;
          }
          ppuVar26 = (undefined **)&_hb_ot_shaper_default;
          if (local_154 != 0x44464c54) {
            ppuVar26 = ppuVar35;
          }
          if (uVar28 == 0x41726162) {
            ppuVar26 = ppuVar35;
          }
        }
        else if ((uVar28 == 0x54616762) || (uVar28 == 0x54616b72)) goto LAB_00418ab9;
      }
      else if ((int)uVar28 < 0x54617674) {
        if (uVar28 == 0x54616c65) goto LAB_00418ab9;
        if (uVar28 == 0x54616d6c) goto LAB_00418a5d;
      }
      else {
        if (uVar28 == 0x54617674) goto LAB_00418ab9;
        if (uVar28 == 0x54656c75) {
LAB_00418a5d:
          if (((local_154 != 0x44464c54) && (local_154 != 0x6c61746e)) &&
             (ppuVar26 = &_hb_ot_shaper_indic, (char)local_154 == '3')) {
            ppuVar26 = &_hb_ot_shaper_use;
          }
        }
      }
    }
    else if ((int)uVar28 < 0x546f6472) {
      if ((int)uVar28 < 0x54696274) {
        if ((uVar28 == 0x54666e67) || (uVar28 == 0x54676c67)) goto LAB_00418ab9;
        if (uVar28 == 0x54686169) goto LAB_004187f3;
      }
      else if (((uVar28 == 0x54696274) || (uVar28 == 0x54697268)) || (uVar28 == 0x546e7361))
      goto LAB_00418ab9;
    }
    else if ((int)uVar28 < 0x56697468) {
      if (((uVar28 == 0x546f6472) || (uVar28 == 0x546f746f)) || (uVar28 == 0x54757467))
      goto LAB_00418ab9;
    }
    else if ((int)uVar28 < 0x59657a69) {
      if ((uVar28 == 0x56697468) || (uVar28 == 0x5763686f)) goto LAB_00418ab9;
    }
    else if ((uVar28 == 0x59657a69) || (uVar28 == 0x5a616e62)) goto LAB_00418ab9;
    goto LAB_00418adb;
  }
  if ((int)uVar28 < 0x47756b68) {
    if ((int)uVar28 < 0x43687273) {
      if ((int)uVar28 < 0x42686b73) {
        if ((int)uVar28 < 0x42616c69) {
          if ((uVar28 == 0x41646c6d) || (uVar28 == 0x41686f6d)) goto LAB_00418ab9;
          if (uVar28 == 0x41726162) goto LAB_00419cb1;
        }
        else {
          if ((uVar28 == 0x42616c69) || (uVar28 == 0x4261746b)) goto LAB_00418ab9;
          if (uVar28 == 0x42656e67) goto LAB_00418a5d;
        }
      }
      else if ((int)uVar28 < 0x42756864) {
        if (((uVar28 == 0x42686b73) || (uVar28 == 0x42726168)) || (uVar28 == 0x42756769))
        goto LAB_00418ab9;
      }
      else if (((uVar28 == 0x42756864) || (uVar28 == 0x43616b6d)) || (uVar28 == 0x4368616d))
      goto LAB_00418ab9;
    }
    else if ((int)uVar28 < 0x45677970) {
      if ((int)uVar28 < 0x4469616b) {
        if ((uVar28 == 0x43687273) || (uVar28 == 0x43706d6e)) goto LAB_00418ab9;
        if (uVar28 == 0x44657661) goto LAB_00418a5d;
      }
      else if (((uVar28 == 0x4469616b) || (uVar28 == 0x446f6772)) || (uVar28 == 0x4475706c))
      goto LAB_00418ab9;
    }
    else if ((int)uVar28 < 0x476f6e67) {
      if (((uVar28 == 0x45677970) || (uVar28 == 0x456c796d)) || (uVar28 == 0x47617261))
      goto LAB_00418ab9;
    }
    else if ((int)uVar28 < 0x4772616e) {
      if ((uVar28 == 0x476f6e67) || (uVar28 == 0x476f6e6d)) goto LAB_00418ab9;
    }
    else {
      if (uVar28 == 0x4772616e) goto LAB_00418ab9;
      if (uVar28 == 0x47756a72) goto LAB_00418a5d;
    }
  }
  else {
    if (0x4b697472 < (int)uVar28) {
      if ((int)uVar28 < 0x4c657063) {
        if ((int)uVar28 < 0x4b746869) {
          if (uVar28 != 0x4b697473) {
            if (uVar28 == 0x4b6e6461) goto LAB_00418a5d;
            if (uVar28 != 0x4b726169) goto LAB_00418adb;
          }
        }
        else if ((uVar28 != 0x4b746869) && (uVar28 != 0x4c616e61)) {
          if (uVar28 == 0x4c616f6f) {
LAB_004187f3:
            ppuVar26 = (undefined **)_hb_ot_shaper_thai;
          }
          goto LAB_00418adb;
        }
      }
      else {
        if (0x4d616b60 < (int)uVar28) {
          if ((int)uVar28 < 0x4d616e69) {
            if ((uVar28 == 0x4d616b61) || (uVar28 == 0x4d616e64)) goto LAB_00418ab9;
          }
          else if ((uVar28 == 0x4d616e69) || (uVar28 == 0x4d617263)) goto LAB_00418ab9;
          goto LAB_00418adb;
        }
        if (((uVar28 != 0x4c657063) && (uVar28 != 0x4c696d62)) && (uVar28 != 0x4d61686a))
        goto LAB_00418adb;
      }
      goto LAB_00418ab9;
    }
    if ((int)uVar28 < 0x486d6e70) {
      if ((int)uVar28 < 0x48616e6f) {
        if (uVar28 == 0x47756b68) goto LAB_00418ab9;
        if (uVar28 == 0x47757275) goto LAB_00418a5d;
        if (uVar28 == 0x48616e67) {
          ppuVar26 = &_hb_ot_shaper_hangul;
        }
      }
      else if (uVar28 == 0x48616e6f) {
LAB_00418ab9:
        ppuVar26 = &_hb_ot_shaper_use;
        if (local_154 == 0x44464c54) {
          ppuVar26 = (undefined **)&_hb_ot_shaper_default;
        }
        if (local_154 == 0x6c61746e) {
          ppuVar26 = (undefined **)&_hb_ot_shaper_default;
        }
      }
      else if (uVar28 == 0x48656272) {
        ppuVar26 = (undefined **)_hb_ot_shaper_hebrew;
      }
      else if (uVar28 == 0x486d6e67) goto LAB_00418ab9;
    }
    else if ((int)uVar28 < 0x4b617769) {
      if (((uVar28 == 0x486d6e70) || (uVar28 == 0x4a617661)) || (uVar28 == 0x4b616c69))
      goto LAB_00418ab9;
    }
    else if ((int)uVar28 < 0x4b686d72) {
      if ((uVar28 == 0x4b617769) || (uVar28 == 0x4b686172)) goto LAB_00418ab9;
    }
    else if (uVar28 == 0x4b686d72) {
      ppuVar26 = &_hb_ot_shaper_khmer;
    }
    else if (uVar28 == 0x4b686f6a) goto LAB_00418ab9;
  }
LAB_00418adb:
  local_100 = CONCAT31(local_100._1_3_,
                       *(char *)((long)ppuVar26 + 0x5c) << 2 |
                       (*(int *)(ppuVar26 + 0xb) != 0) * '\x02' | (byte)local_100 & 0xf8 | bVar5);
  local_f8 = ppuVar26;
  if ((bVar5 != false) && (ppuVar26 != (undefined **)&_hb_ot_shaper_default)) {
    local_f8 = (undefined **)_hb_ot_shaper_dumber;
  }
  pbVar44 = *(byte **)(local_d8 + 8);
  uVar28 = local_d8[10];
  local_158 = '\x01';
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_00419e0f:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_00419e06:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_00419e0f;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00418b5d;
          uVar6 = local_130._4_4_;
          goto LAB_00419e06;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00418b5d:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x7276726e;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x100000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_120._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  if ((int)(uint)local_120 < 0) {
LAB_00419e81:
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar31 = (uint *)&_hb_CrapPool;
  }
  else {
    if ((uint)local_120 < uVar27) {
      uVar6 = (uint)local_120;
      do {
        uVar6 = uVar6 + (uVar6 >> 1) + 8;
      } while (uVar6 < uVar27);
      if (0xfffffff < uVar6) {
LAB_00419e78:
        local_120 = CONCAT44(local_120._4_4_,~(uint)local_120);
        goto LAB_00419e81;
      }
      if (uVar6 == 0) {
        free(pvStack_118);
        pvVar11 = (void *)0x0;
      }
      else {
        pvVar11 = realloc(pvStack_118,(ulong)uVar6 << 4);
        if (pvVar11 == (void *)0x0) {
          if (uVar6 <= (uint)local_120) goto LAB_00418c07;
          goto LAB_00419e78;
        }
      }
      local_120 = CONCAT44(local_120._4_4_,uVar6);
      pvStack_118 = pvVar11;
    }
LAB_00418c07:
    if ((local_120._4_4_ < uVar27) && (uVar6 = (uVar27 - local_120._4_4_) * 0x10, uVar6 != 0)) {
      memset((void *)((ulong)local_120._4_4_ * 0x10 + (long)pvStack_118),0,(ulong)uVar6);
    }
    local_120 = CONCAT44(uVar27,(uint)local_120);
    puVar31 = (uint *)((ulong)(uVar27 - 1) * 0x10 + (long)pvStack_118);
  }
  *puVar31 = local_138[0];
  puVar31[2] = 0;
  puVar31[3] = 0;
  local_138[0] = local_138[0] + 1;
  if ((uint)local_1a0 == 4) {
    uVar47 = 1;
    uVar48 = 0x6c74726d;
    uVar18 = 0x6c747261;
LAB_00418c92:
    uVar27 = local_130._4_4_ + 1;
    if ((int)uVar27 < 0) {
      uVar27 = 0;
    }
    uVar6 = local_130._4_4_;
    if ((int)(uint)local_130 < 0) {
LAB_0041c928:
      DAT_0071cd90._0_4_ = 0;
      DAT_0071cd90._4_4_ = 0;
      DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      DAT_0071cd88 = 0;
      _DAT_0071cd8c = 0;
      puVar21 = &_hb_CrapPool;
    }
    else {
      if ((uint)local_130 < uVar27) {
        uVar29 = (uint)local_130;
        do {
          uVar29 = uVar29 + (uVar29 >> 1) + 8;
        } while (uVar29 < uVar27);
        local_f0 = pbVar44;
        if (0x9249249 < uVar29) {
LAB_0041c917:
          local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
          pbVar44 = local_f0;
          goto LAB_0041c928;
        }
        if (uVar29 == 0) {
          free(puStack_128);
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
          if (puVar9 == (undefined1 *)0x0) {
            pbVar44 = local_f0;
            if (uVar29 <= (uint)local_130) goto LAB_00418cba;
            uVar6 = local_130._4_4_;
            goto LAB_0041c917;
          }
        }
        local_130 = CONCAT44(local_130._4_4_,uVar29);
        pbVar44 = local_f0;
        puStack_128 = puVar9;
      }
LAB_00418cba:
      if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
        memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
      }
      local_130 = CONCAT44(uVar27,(uint)local_130);
      puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
      uVar6 = uVar27;
    }
    *(undefined4 *)puVar21 = uVar18;
    *(uint *)((long)puVar21 + 4) = uVar6;
    puVar21[1] = 0x100000001;
    *(undefined4 *)(puVar21 + 2) = 1;
    *(uint *)((long)puVar21 + 0x14) = local_138[0];
    *(uint *)(puVar21 + 3) = local_138[1];
    uVar27 = local_130._4_4_ + 1;
    if ((int)uVar27 < 0) {
      uVar27 = 0;
    }
    uVar6 = local_130._4_4_;
    if ((int)(uint)local_130 < 0) {
LAB_0041c9a8:
      DAT_0071cd90._0_4_ = 0;
      DAT_0071cd90._4_4_ = 0;
      DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      DAT_0071cd88 = 0;
      _DAT_0071cd8c = 0;
      puVar21 = &_hb_CrapPool;
    }
    else {
      if ((uint)local_130 < uVar27) {
        uVar29 = (uint)local_130;
        do {
          uVar29 = uVar29 + (uVar29 >> 1) + 8;
        } while (uVar29 < uVar27);
        if (0x9249249 < uVar29) {
LAB_0041c99f:
          local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
          goto LAB_0041c9a8;
        }
        if (uVar29 == 0) {
          free(puStack_128);
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
          if (puVar9 == (undefined1 *)0x0) {
            if (uVar29 <= (uint)local_130) goto LAB_00418d58;
            uVar6 = local_130._4_4_;
            goto LAB_0041c99f;
          }
        }
        local_130 = CONCAT44(local_130._4_4_,uVar29);
        puStack_128 = puVar9;
      }
LAB_00418d58:
      if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
        memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
      }
      local_130 = CONCAT44(uVar27,(uint)local_130);
      puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
      uVar6 = uVar27;
    }
    *(undefined4 *)puVar21 = uVar48;
    *(uint *)((long)puVar21 + 4) = uVar6;
    *(undefined4 *)(puVar21 + 1) = 1;
    *(undefined4 *)((long)puVar21 + 0xc) = uVar47;
    *(undefined4 *)(puVar21 + 2) = uVar47;
    *(uint *)((long)puVar21 + 0x14) = local_138[0];
    *(uint *)(puVar21 + 3) = local_138[1];
  }
  else if ((uint)local_1a0 == 5) {
    uVar47 = 0;
    uVar48 = 0x72746c6d;
    uVar18 = 0x72746c61;
    goto LAB_00418c92;
  }
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_00419ef8:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_00419eef:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_00419ef8;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00418dfb;
          uVar6 = local_130._4_4_;
          goto LAB_00419eef;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00418dfb:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x66726163;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 1;
  *(undefined4 *)(puVar21 + 2) = 0;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_00419f78:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_00419f6f:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_00419f78;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00418ea1;
          uVar6 = local_130._4_4_;
          goto LAB_00419f6f;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00418ea1:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x6e756d72;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 1;
  *(undefined4 *)(puVar21 + 2) = 0;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_00419ff8:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_00419fef:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_00419ff8;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00418f47;
          uVar6 = local_130._4_4_;
          goto LAB_00419fef;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00418f47:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x646e6f6d;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 1;
  *(undefined4 *)(puVar21 + 2) = 0;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a078:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a06f:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a078;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00418fed;
          uVar6 = local_130._4_4_;
          goto LAB_0041a06f;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00418fed:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x72616e64;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x21000000ff;
  *(undefined4 *)(puVar21 + 2) = 0xff;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a0f8:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a0ef:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a0f8;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00419099;
          uVar6 = local_130._4_4_;
          goto LAB_0041a0ef;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00419099:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x7472616b;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x300000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a178:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a16f:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a178;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00419145;
          uVar6 = local_130._4_4_;
          goto LAB_0041a16f;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00419145:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x48617266;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x100000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a1f8:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a1ef:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a1f8;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_004191e7;
          uVar6 = local_130._4_4_;
          goto LAB_0041a1ef;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_004191e7:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x48415246;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x100000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  if ((code *)*local_f8 != (code *)0x0) {
    local_158 = '\0';
                    /* try { // try from 00419276 to 0041927c has its CatchHandler @ 0041d1d5 */
    (*(code *)*local_f8)(&local_1a8);
  }
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a278:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a26f:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a278;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_004192a5;
          uVar6 = local_130._4_4_;
          goto LAB_0041a26f;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_004192a5:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x42757a7a;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x100000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a2f8:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a2ef:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a2f8;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_0041934b;
          uVar6 = local_130._4_4_;
          goto LAB_0041a2ef;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_0041934b:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x42555a5a;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x100000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a378:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a36f:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a378;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_004193ed;
          uVar6 = local_130._4_4_;
          goto LAB_0041a36f;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_004193ed:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x6162766d;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x100000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a3f8:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a3ef:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a3f8;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_0041948f;
          uVar6 = local_130._4_4_;
          goto LAB_0041a3ef;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_0041948f:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x626c776d;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x100000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a478:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a46f:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a478;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00419531;
          uVar6 = local_130._4_4_;
          goto LAB_0041a46f;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00419531:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x63636d70;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x100000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a4f8:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a4ef:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a4f8;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_004195d3;
          uVar6 = local_130._4_4_;
          goto LAB_0041a4ef;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_004195d3:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x6c6f636c;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x100000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a578:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a56f:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a578;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00419675;
          uVar6 = local_130._4_4_;
          goto LAB_0041a56f;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00419675:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x6d61726b;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0xd00000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a609:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a5fc:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a609;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00419721;
          uVar6 = local_130._4_4_;
          goto LAB_0041a5fc;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00419721:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x6d6b6d6b;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0xd00000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = local_130._4_4_ + 1;
  if ((int)uVar27 < 0) {
    uVar27 = 0;
  }
  uVar6 = local_130._4_4_;
  if ((int)(uint)local_130 < 0) {
LAB_0041a689:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
  }
  else {
    if ((uint)local_130 < uVar27) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar27);
      if (0x9249249 < uVar29) {
LAB_0041a680:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a689;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_004197c3;
          uVar6 = local_130._4_4_;
          goto LAB_0041a680;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_004197c3:
    if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
    }
    local_130 = CONCAT44(uVar27,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    uVar6 = uVar27;
  }
  *(undefined4 *)puVar21 = 0x726c6967;
  *(uint *)((long)puVar21 + 4) = uVar6;
  puVar21[1] = 0x100000001;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  uVar27 = (uint)local_1a0;
  uVar6 = local_130._4_4_ + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  if ((int)(uint)local_130 < 0) {
LAB_0041a70f:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar21 = &_hb_CrapPool;
    if ((uVar27 & 0xfffffffe) == 4) goto LAB_004198d0;
LAB_0041a733:
    *(undefined4 *)puVar21 = 0x76657274;
    uVar18 = 0x11;
  }
  else {
    if ((uint)local_130 < uVar6) {
      uVar29 = (uint)local_130;
      do {
        uVar29 = uVar29 + (uVar29 >> 1) + 8;
      } while (uVar29 < uVar6);
      if (0x9249249 < uVar29) {
LAB_0041a702:
        local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
        goto LAB_0041a70f;
      }
      if (uVar29 == 0) {
        free(puStack_128);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
        if (puVar9 == (undefined1 *)0x0) {
          if (uVar29 <= (uint)local_130) goto LAB_00419867;
          goto LAB_0041a702;
        }
      }
      local_130 = CONCAT44(local_130._4_4_,uVar29);
      puStack_128 = puVar9;
    }
LAB_00419867:
    if ((local_130._4_4_ < uVar6) && (uVar29 = (uVar6 - local_130._4_4_) * 0x1c, uVar29 != 0)) {
      memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar29);
    }
    local_130 = CONCAT44(uVar6,(uint)local_130);
    puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar6 - 1) * 0x1c);
    if ((uVar27 & 0xfffffffe) != 4) goto LAB_0041a733;
LAB_004198d0:
    *(undefined4 *)puVar21 = 0x63616c74;
    *(uint *)((long)puVar21 + 4) = local_130._4_4_;
    puVar21[1] = 0x100000001;
    *(undefined4 *)(puVar21 + 2) = 1;
    *(uint *)((long)puVar21 + 0x14) = local_138[0];
    *(uint *)(puVar21 + 3) = local_138[1];
    uVar27 = local_130._4_4_ + 1;
    if ((int)uVar27 < 0) {
      uVar27 = 0;
    }
    uVar6 = local_130._4_4_;
    if ((int)(uint)local_130 < 0) {
LAB_0041ca52:
      DAT_0071cd90._0_4_ = 0;
      DAT_0071cd90._4_4_ = 0;
      DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      DAT_0071cd88 = 0;
      _DAT_0071cd8c = 0;
      puVar21 = &_hb_CrapPool;
    }
    else {
      if ((uint)local_130 < uVar27) {
        uVar32 = local_130 & 0xffffffff;
        do {
          uVar29 = (uint)uVar32 + ((uint)uVar32 >> 1) + 8;
          uVar32 = (ulong)uVar29;
        } while (uVar29 < uVar27);
        if (0x9249249 < uVar29) {
LAB_0041ca49:
          local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
          goto LAB_0041ca52;
        }
        if (uVar29 == 0) {
          free(puStack_128);
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
          if (puVar9 == (undefined1 *)0x0) {
            if (uVar29 <= (uint)local_130) goto LAB_00419927;
            uVar6 = local_130._4_4_;
            goto LAB_0041ca49;
          }
        }
        local_130 = CONCAT44(local_130._4_4_,uVar29);
        puStack_128 = puVar9;
      }
LAB_00419927:
      if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
        memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
      }
      local_130 = CONCAT44(uVar27,(uint)local_130);
      puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
      uVar6 = uVar27;
    }
    *(undefined4 *)puVar21 = 0x636c6967;
    *(uint *)((long)puVar21 + 4) = uVar6;
    puVar21[1] = 0x100000001;
    *(undefined4 *)(puVar21 + 2) = 1;
    *(uint *)((long)puVar21 + 0x14) = local_138[0];
    *(uint *)(puVar21 + 3) = local_138[1];
    uVar27 = local_130._4_4_ + 1;
    if ((int)uVar27 < 0) {
      uVar27 = 0;
    }
    uVar6 = local_130._4_4_;
    if ((int)(uint)local_130 < 0) {
LAB_0041cad2:
      DAT_0071cd90._0_4_ = 0;
      DAT_0071cd90._4_4_ = 0;
      DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      DAT_0071cd88 = 0;
      _DAT_0071cd8c = 0;
      puVar21 = &_hb_CrapPool;
    }
    else {
      if ((uint)local_130 < uVar27) {
        uVar32 = local_130 & 0xffffffff;
        do {
          uVar29 = (uint)uVar32 + ((uint)uVar32 >> 1) + 8;
          uVar32 = (ulong)uVar29;
        } while (uVar29 < uVar27);
        if (0x9249249 < uVar29) {
LAB_0041cac9:
          local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
          goto LAB_0041cad2;
        }
        if (uVar29 == 0) {
          free(puStack_128);
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
          if (puVar9 == (undefined1 *)0x0) {
            if (uVar29 <= (uint)local_130) goto LAB_004199c9;
            uVar6 = local_130._4_4_;
            goto LAB_0041cac9;
          }
        }
        local_130 = CONCAT44(local_130._4_4_,uVar29);
        puStack_128 = puVar9;
      }
LAB_004199c9:
      if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
        memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
      }
      local_130 = CONCAT44(uVar27,(uint)local_130);
      puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
      uVar6 = uVar27;
    }
    *(undefined4 *)puVar21 = 0x63757273;
    *(uint *)((long)puVar21 + 4) = uVar6;
    puVar21[1] = 0x100000001;
    *(undefined4 *)(puVar21 + 2) = 1;
    *(uint *)((long)puVar21 + 0x14) = local_138[0];
    *(uint *)(puVar21 + 3) = local_138[1];
    uVar27 = local_130._4_4_ + 1;
    if ((int)uVar27 < 0) {
      uVar27 = 0;
    }
    uVar6 = local_130._4_4_;
    if ((int)(uint)local_130 < 0) {
LAB_0041cb52:
      DAT_0071cd90._0_4_ = 0;
      DAT_0071cd90._4_4_ = 0;
      DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      DAT_0071cd88 = 0;
      _DAT_0071cd8c = 0;
      puVar21 = &_hb_CrapPool;
    }
    else {
      if ((uint)local_130 < uVar27) {
        uVar32 = local_130 & 0xffffffff;
        do {
          uVar29 = (uint)uVar32 + ((uint)uVar32 >> 1) + 8;
          uVar32 = (ulong)uVar29;
        } while (uVar29 < uVar27);
        if (0x9249249 < uVar29) {
LAB_0041cb49:
          local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
          goto LAB_0041cb52;
        }
        if (uVar29 == 0) {
          free(puStack_128);
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
          if (puVar9 == (undefined1 *)0x0) {
            if (uVar29 <= (uint)local_130) goto LAB_00419a6b;
            uVar6 = local_130._4_4_;
            goto LAB_0041cb49;
          }
        }
        local_130 = CONCAT44(local_130._4_4_,uVar29);
        puStack_128 = puVar9;
      }
LAB_00419a6b:
      if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
        memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
      }
      local_130 = CONCAT44(uVar27,(uint)local_130);
      puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
      uVar6 = uVar27;
    }
    *(undefined4 *)puVar21 = 0x64697374;
    *(uint *)((long)puVar21 + 4) = uVar6;
    puVar21[1] = 0x100000001;
    *(undefined4 *)(puVar21 + 2) = 1;
    *(uint *)((long)puVar21 + 0x14) = local_138[0];
    *(uint *)(puVar21 + 3) = local_138[1];
    uVar27 = local_130._4_4_ + 1;
    if ((int)uVar27 < 0) {
      uVar27 = 0;
    }
    uVar6 = local_130._4_4_;
    if ((int)(uint)local_130 < 0) {
LAB_0041cbd2:
      DAT_0071cd90._0_4_ = 0;
      DAT_0071cd90._4_4_ = 0;
      DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      DAT_0071cd88 = 0;
      _DAT_0071cd8c = 0;
      puVar21 = &_hb_CrapPool;
    }
    else {
      if ((uint)local_130 < uVar27) {
        uVar32 = local_130 & 0xffffffff;
        do {
          uVar29 = (uint)uVar32 + ((uint)uVar32 >> 1) + 8;
          uVar32 = (ulong)uVar29;
        } while (uVar29 < uVar27);
        if (0x9249249 < uVar29) {
LAB_0041cbc9:
          local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
          goto LAB_0041cbd2;
        }
        if (uVar29 == 0) {
          free(puStack_128);
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
          if (puVar9 == (undefined1 *)0x0) {
            if (uVar29 <= (uint)local_130) goto LAB_00419b0d;
            uVar6 = local_130._4_4_;
            goto LAB_0041cbc9;
          }
        }
        local_130 = CONCAT44(local_130._4_4_,uVar29);
        puStack_128 = puVar9;
      }
LAB_00419b0d:
      if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
        memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
      }
      local_130 = CONCAT44(uVar27,(uint)local_130);
      puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
      uVar6 = uVar27;
    }
    *(undefined4 *)puVar21 = 0x6b65726e;
    *(uint *)((long)puVar21 + 4) = uVar6;
    puVar21[1] = 0x300000001;
    *(undefined4 *)(puVar21 + 2) = 1;
    *(uint *)((long)puVar21 + 0x14) = local_138[0];
    *(uint *)(puVar21 + 3) = local_138[1];
    uVar27 = local_130._4_4_ + 1;
    if ((int)uVar27 < 0) {
      uVar27 = 0;
    }
    uVar6 = local_130._4_4_;
    if ((int)(uint)local_130 < 0) {
LAB_0041cc52:
      DAT_0071cd90._0_4_ = 0;
      DAT_0071cd90._4_4_ = 0;
      DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      DAT_0071cd88 = 0;
      _DAT_0071cd8c = 0;
      puVar21 = &_hb_CrapPool;
    }
    else {
      if ((uint)local_130 < uVar27) {
        uVar32 = local_130 & 0xffffffff;
        do {
          uVar29 = (uint)uVar32 + ((uint)uVar32 >> 1) + 8;
          uVar32 = (ulong)uVar29;
        } while (uVar29 < uVar27);
        if (0x9249249 < uVar29) {
LAB_0041cc49:
          local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
          goto LAB_0041cc52;
        }
        if (uVar29 == 0) {
          free(puStack_128);
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
          if (puVar9 == (undefined1 *)0x0) {
            if (uVar29 <= (uint)local_130) goto LAB_00419baf;
            uVar6 = local_130._4_4_;
            goto LAB_0041cc49;
          }
        }
        local_130 = CONCAT44(local_130._4_4_,uVar29);
        puStack_128 = puVar9;
      }
LAB_00419baf:
      if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
        memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
      }
      local_130 = CONCAT44(uVar27,(uint)local_130);
      puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
      uVar6 = uVar27;
    }
    *(undefined4 *)puVar21 = 0x6c696761;
    *(uint *)((long)puVar21 + 4) = uVar6;
    puVar21[1] = 0x100000001;
    *(undefined4 *)(puVar21 + 2) = 1;
    *(uint *)((long)puVar21 + 0x14) = local_138[0];
    *(uint *)(puVar21 + 3) = local_138[1];
    uVar27 = local_130._4_4_ + 1;
    if ((int)uVar27 < 0) {
      uVar27 = 0;
    }
    if ((int)(uint)local_130 < 0) {
LAB_0041cccb:
      DAT_0071cd90._0_4_ = 0;
      DAT_0071cd90._4_4_ = 0;
      DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      DAT_0071cd88 = 0;
      _DAT_0071cd8c = 0;
      puVar21 = &_hb_CrapPool;
    }
    else {
      if ((uint)local_130 < uVar27) {
        uVar32 = local_130 & 0xffffffff;
        do {
          uVar6 = (uint)uVar32 + ((uint)uVar32 >> 1) + 8;
          uVar32 = (ulong)uVar6;
        } while (uVar6 < uVar27);
        if (0x9249249 < uVar6) {
LAB_0041ccc2:
          local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
          goto LAB_0041cccb;
        }
        if (uVar6 == 0) {
          free(puStack_128);
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = realloc(puStack_128,(ulong)uVar6 * 0x1c);
          if (puVar9 == (undefined1 *)0x0) {
            if (uVar6 <= (uint)local_130) goto LAB_00419c4f;
            goto LAB_0041ccc2;
          }
        }
        local_130 = CONCAT44(local_130._4_4_,uVar6);
        puStack_128 = puVar9;
      }
LAB_00419c4f:
      if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0)) {
        memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
      }
      local_130 = CONCAT44(uVar27,(uint)local_130);
      puVar21 = (undefined8 *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
    }
    *(undefined4 *)puVar21 = 0x72636c74;
    uVar18 = 1;
  }
  *(uint *)((long)puVar21 + 4) = local_130._4_4_;
  *(undefined4 *)(puVar21 + 1) = 1;
  *(undefined4 *)((long)puVar21 + 0xc) = uVar18;
  *(undefined4 *)(puVar21 + 2) = 1;
  *(uint *)((long)puVar21 + 0x14) = local_138[0];
  *(uint *)(puVar21 + 3) = local_138[1];
  if ((ulong)uVar28 != 0) {
    local_158 = '\0';
    uVar32 = 0;
    do {
      lVar8 = uVar32 * 0x10;
      if (*(int *)(pbVar44 + lVar8 + 8) == 0) {
        bVar5 = *(int *)(pbVar44 + lVar8 + 0xc) == -1;
        iVar25 = *(int *)(pbVar44 + lVar8);
      }
      else {
        bVar5 = false;
        iVar25 = *(int *)(pbVar44 + lVar8);
      }
      if (iVar25 != 0) {
        iVar43 = *(int *)(pbVar44 + lVar8 + 4);
        uVar27 = local_130._4_4_ + 1;
        if ((int)(local_130._4_4_ + 1) < 0) {
          uVar27 = 0;
        }
        uVar6 = local_130._4_4_;
        if ((int)(uint)local_130 < 0) {
LAB_0041a910:
          DAT_0071cd90._0_4_ = 0;
          DAT_0071cd90._4_4_ = 0;
          DAT_0071cd98 = 0;
          _hb_CrapPool = 0;
          DAT_0071cd88 = 0;
          _DAT_0071cd8c = 0;
          piVar33 = (int *)&_hb_CrapPool;
        }
        else {
          if ((uint)local_130 < uVar27) {
            pbVar41 = (byte *)(local_130 & 0xffffffff);
            do {
              uVar29 = (uint)pbVar41 + ((uint)pbVar41 >> 1) + 8;
              pbVar41 = (byte *)(ulong)uVar29;
            } while (uVar29 < uVar27);
            if (0x9249249 < uVar29) {
LAB_0041a907:
              local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
              goto LAB_0041a910;
            }
            local_f0 = pbVar41;
            if (uVar29 == 0) {
              free(puStack_128);
              puVar9 = (undefined1 *)0x0;
            }
            else {
              puVar9 = realloc(puStack_128,(ulong)uVar29 * 0x1c);
              if (puVar9 == (undefined1 *)0x0) {
                if ((uint)local_f0 <= (uint)local_130) goto LAB_0041a7f9;
                uVar6 = local_130._4_4_;
                goto LAB_0041a907;
              }
            }
            local_130 = CONCAT44(local_130._4_4_,(int)local_f0);
            puStack_128 = puVar9;
          }
LAB_0041a7f9:
          if ((local_130._4_4_ < uVar27) && (uVar6 = (uVar27 - local_130._4_4_) * 0x1c, uVar6 != 0))
          {
            memset(puStack_128 + (ulong)local_130._4_4_ * 0x1c,0,(ulong)uVar6);
          }
          local_130 = CONCAT44(uVar27,(uint)local_130);
          piVar33 = (int *)(puStack_128 + (ulong)(uVar27 - 1) * 0x1c);
          uVar6 = uVar27;
        }
        *piVar33 = iVar25;
        piVar33[1] = uVar6;
        piVar33[2] = iVar43;
        piVar33[3] = (uint)bVar5;
        if (bVar5 == false) {
          iVar43 = 0;
        }
        piVar33[4] = iVar43;
        piVar33[5] = local_138[0];
        piVar33[6] = local_138[1];
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar28);
  }
  if ((code *)local_f8[1] != (code *)0x0) {
                    /* try { // try from 0041a966 to 0041ab52 has its CatchHandler @ 0041d1d5 */
    (*(code *)local_f8[1])(&local_1a8);
  }
  *(undefined8 *)(this + 0x10) = local_190;
  *(undefined8 *)(this + 0x18) = uStack_188;
  *(undefined8 *)this = local_1a0;
  *(undefined8 *)(this + 8) = uStack_198;
  *(undefined ***)(this + 0x20) = local_f8;
  *(undefined4 *)(this + 0x34) = 0x80000000;
  local_a8 = 0;
  *(int *)(this + 0x28) = local_154;
  this[0x30] = local_14c;
  hb_ot_layout_language_get_required_feature
            (local_180[0],0x47535542,local_148,local_140,local_38,&local_a0);
  *(undefined4 *)(this + 0x2c) = local_150;
  this[0x31] = local_14b;
  hb_ot_layout_language_get_required_feature
            (local_180[0],0x47504f53,local_144,local_13c,local_38 + 1,&local_9c);
  uVar32 = (ulong)local_130._4_4_;
  if (uVar32 != 0) {
    if (local_158 == '\0') {
      sort_r_simple<>(puStack_128,uVar32,0x1c,hb_ot_map_builder_t::feature_info_t::cmp);
      uVar32 = (ulong)local_130._4_4_;
      uVar28 = local_130._4_4_;
      if (1 < local_130._4_4_) goto LAB_0041aa3d;
LAB_0041ab66:
      uVar27 = 0;
    }
    else {
      uVar28 = local_130._4_4_;
      if (local_130._4_4_ < 2) goto LAB_0041ab66;
LAB_0041aa3d:
      uVar34 = 0;
      lVar8 = 0x1c;
      do {
        while( true ) {
          uVar27 = (uint)uVar34;
          lVar38 = uVar34 * 0x1c;
          if (*(int *)(puStack_128 + lVar8) != *(int *)(puStack_128 + lVar38)) break;
          puVar31 = (uint *)(puStack_128 + lVar38 + 0xc);
          uVar28 = *(uint *)(puStack_128 + lVar38 + 0xc);
          if ((puStack_128[lVar8 + 0xc] & 1) == 0) {
            if ((uVar28 & 1) != 0) {
              uVar28 = uVar28 ^ 1;
              *puVar31 = uVar28;
            }
            uVar6 = *(uint *)(puStack_128 + lVar38 + 8);
            if (*(uint *)(puStack_128 + lVar38 + 8) < *(uint *)(puStack_128 + lVar8 + 8)) {
              uVar6 = *(uint *)(puStack_128 + lVar8 + 8);
            }
            *(uint *)(puStack_128 + lVar38 + 8) = uVar6;
          }
          else {
            uVar28 = uVar28 | 1;
            *puVar31 = uVar28;
            *(undefined4 *)(puStack_128 + lVar38 + 8) = *(undefined4 *)(puStack_128 + lVar8 + 8);
            *(undefined4 *)(puStack_128 + lVar38 + 0x10) =
                 *(undefined4 *)(puStack_128 + lVar8 + 0x10);
          }
          *puVar31 = *(uint *)(puStack_128 + lVar8 + 0xc) & 2 | uVar28;
          uVar28 = *(uint *)(puStack_128 + lVar38 + 0x14);
          if (*(uint *)(puStack_128 + lVar8 + 0x14) < *(uint *)(puStack_128 + lVar38 + 0x14)) {
            uVar28 = *(uint *)(puStack_128 + lVar8 + 0x14);
          }
          *(uint *)(puStack_128 + lVar38 + 0x14) = uVar28;
          uVar28 = *(uint *)(puStack_128 + lVar38 + 0x18);
          if (*(uint *)(puStack_128 + lVar8 + 0x18) < *(uint *)(puStack_128 + lVar38 + 0x18)) {
            uVar28 = *(uint *)(puStack_128 + lVar8 + 0x18);
          }
          *(uint *)(puStack_128 + lVar38 + 0x18) = uVar28;
          lVar8 = lVar8 + 0x1c;
          if (uVar32 * 0x1c == lVar8) goto LAB_0041ab31;
        }
        uVar27 = uVar27 + 1;
        uVar34 = (ulong)uVar27;
        puVar20 = (undefined4 *)(puStack_128 + lVar8);
        uVar18 = *puVar20;
        uVar47 = puVar20[1];
        uVar48 = puVar20[2];
        uVar3 = puVar20[3];
        uVar37 = *(undefined8 *)((long)(puStack_128 + lVar8 + 0xc) + 8);
        *(undefined8 *)(puStack_128 + uVar34 * 0x1c + 0xc) =
             *(undefined8 *)(puStack_128 + lVar8 + 0xc);
        *(undefined8 *)((long)(puStack_128 + uVar34 * 0x1c + 0xc) + 8) = uVar37;
        puVar20 = (undefined4 *)(puStack_128 + uVar34 * 0x1c);
        *puVar20 = uVar18;
        puVar20[1] = uVar47;
        puVar20[2] = uVar48;
        puVar20[3] = uVar3;
        lVar8 = lVar8 + 0x1c;
      } while (uVar32 * 0x1c != lVar8);
LAB_0041ab31:
      uVar28 = local_130._4_4_;
    }
    uVar32 = 0;
    if (-1 < (int)(uVar27 + 1)) {
      uVar32 = (ulong)(uVar27 + 1);
    }
    uVar6 = (uint)uVar32;
    if (uVar6 < uVar28) {
      local_130 = CONCAT44(uVar6,(uint)local_130);
      if ((-1 < (int)(uint)local_130) &&
         (((uint)local_130 < uVar6 || (uVar6 < (uint)local_130 >> 2)))) {
        if (uVar6 < 0x924924a) {
          if (uVar27 < 0x7fffffff) {
            puVar9 = realloc(puStack_128,uVar32 * 0x1c);
            if (puVar9 == (undefined1 *)0x0) {
              if ((uint)local_130 < uVar6) {
                local_130 = CONCAT44(local_130._4_4_,~(uint)local_130);
              }
              goto LAB_0041abed;
            }
          }
          else {
            free(puStack_128);
            puVar9 = (undefined1 *)0x0;
          }
          local_130 = CONCAT44(local_130._4_4_,uVar6);
          puStack_128 = puVar9;
        }
        else {
          local_130 = CONCAT44(uVar6,~(uint)local_130);
        }
      }
    }
  }
LAB_0041abed:
  local_98 = 1;
  local_94 = 1;
  local_90 = (pthread_mutex_t *)0x0;
  local_88 = 1;
  local_70 = (void *)0x0;
  local_86 = 0;
  uStack_7e = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_76 = 0;
  local_68 = 1;
  local_64 = 1;
  local_60 = (pthread_mutex_t *)0x0;
  local_58 = 1;
  local_40 = (void *)0x0;
  local_56 = 0;
  uStack_54 = 0;
  uStack_4e = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_46 = 0;
                    /* try { // try from 0041ac8d to 0041acbd has its CatchHandler @ 0041d1d3 */
  hb_ot_layout_collect_features_map
            (local_180[0],0x47535542,local_148,local_140,
             (hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_98);
  hb_ot_layout_collect_features_map
            (local_180[0],0x47504f53,local_144,local_13c,
             (hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_68);
  puVar31 = (uint *)(ulong)local_130._4_4_;
  local_b8 = puVar31;
  if (puVar31 != (uint *)0x0) {
    uVar28 = 4;
    uVar32 = 0;
    if (local_130._4_4_ != 0) goto LAB_0041ad10;
LAB_0041ace9:
    DAT_0071cd90._0_4_ = 0;
    DAT_0071cd90._4_4_ = 0;
    DAT_0071cd98 = 0;
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    uVar32 = uVar32 + 1;
    if ((uint *)uVar32 != puVar31) {
LAB_0041b38d:
      do {
        if (local_130 >> 0x20 <= uVar32) goto LAB_0041ace9;
LAB_0041ad10:
        lVar38 = local_180[0];
        lVar8 = uVar32 * 0x1c;
        uVar27 = *(uint *)(puStack_128 + lVar8 + 8);
        if (((*(uint *)(puStack_128 + lVar8 + 0xc) & 1) == 0) || (iVar25 = 0, uVar27 != 1)) {
          if (uVar27 != 0) {
            iVar25 = 8;
            if (uVar27 < 0x80) {
              uVar6 = 0x1f;
              if (uVar27 != 0) {
                for (; uVar27 >> uVar6 == 0; uVar6 = uVar6 - 1) {
                }
              }
              iVar25 = (uVar6 ^ 0xffffffe0) + 0x21;
            }
            goto LAB_0041ad57;
          }
        }
        else {
LAB_0041ad57:
          if (iVar25 + uVar28 < 0x1f) {
            uVar27 = *(uint *)(puStack_128 + lVar8);
            if (local_a0 == uVar27) {
              local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(puStack_128 + lVar8 + 0x14));
            }
            local_c8 = (uint *)CONCAT44(local_c8._4_4_,iVar25 + uVar28);
            local_e0 = CONCAT44(local_e0._4_4_,uVar28);
            uVar6 = uVar27 * -0x61c8864f & 0x3fffffff;
            uVar28 = 0xffff;
            if (local_70 == (void *)0x0) {
LAB_0041ae48:
              bVar51 = false;
              bVar5 = false;
            }
            else {
              uVar34 = (ulong)uVar6 % (ulong)CONCAT22(uStack_76,uStack_78);
              uVar29 = *(uint *)((long)local_70 + uVar34 * 0xc + 4);
              if ((uVar29 & 2) == 0) goto LAB_0041ae48;
              if (*(uint *)((long)local_70 + uVar34 * 0xc) != uVar27) {
                iVar25 = 1;
                do {
                  uVar34 = (ulong)(uStack_7c & (int)uVar34 + iVar25);
                  uVar29 = *(uint *)((long)local_70 + uVar34 * 0xc + 4);
                  if ((uVar29 & 2) == 0) {
                    bVar5 = false;
                    bVar51 = false;
                    if (local_9c == uVar27) goto LAB_0041ae52;
                    goto LAB_0041ae5e;
                  }
                  iVar25 = iVar25 + 1;
                } while (*(uint *)((long)local_70 + uVar34 * 0xc) != uVar27);
              }
              if ((uVar29 & 1) == 0) goto LAB_0041ae48;
              uVar28 = *(uint *)((long)local_70 + uVar34 * 0xc + 8);
              bVar51 = true;
              bVar5 = true;
            }
            if (local_9c == uVar27) {
LAB_0041ae52:
              bVar5 = bVar51;
              local_a8 = CONCAT44(*(undefined4 *)(puStack_128 + lVar8 + 0x18),(undefined4)local_a8);
            }
LAB_0041ae5e:
            local_f0 = puStack_128 + lVar8 + 0xc;
            local_c0 = lVar8;
            local_d0 = (uint *)(puStack_128 + lVar8);
            phVar46 = (hb_ot_shape_plan_t *)puStack_128;
            if (local_40 == (void *)0x0) {
LAB_0041aef0:
              uVar6 = 0xffff;
              if (!bVar5 && (*(uint *)(puStack_128 + lVar8 + 0xc) & 0x10) != 0) {
                this_01 = *(accelerator_t<OT::Layout::GSUB> **)(local_180[0] + 0x130);
                local_e8 = (hb_ot_shape_plan_t *)puStack_128;
                while (this_01 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
                  lVar8 = *(long *)(lVar38 + 0x68);
                  if (lVar8 == 0) {
LAB_0041b508:
                    this_01 = (accelerator_t<OT::Layout::GSUB> *)&_hb_NullPool;
                    break;
                  }
                  this_01 = calloc(1,0x18);
                  if (this_01 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
                    LOCK();
                    bVar51 = *(long *)(lVar38 + 0x130) == 0;
                    if (bVar51) {
                      *(long *)(lVar38 + 0x130) = (long)&_hb_NullPool;
                    }
                    UNLOCK();
                    if (bVar51) goto LAB_0041b508;
                  }
                  else {
                    /* try { // try from 0041b4ca to 0041b4d4 has its CatchHandler @ 0041d1b2 */
                    OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(this_01,lVar8);
                    LOCK();
                    bVar51 = *(long *)(lVar38 + 0x130) == 0;
                    if (bVar51) {
                      *(long *)(lVar38 + 0x130) = (long)this_01;
                    }
                    UNLOCK();
                    if (bVar51) break;
                    OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(this_01);
                    free(this_01);
                  }
                  this_01 = *(accelerator_t<OT::Layout::GSUB> **)(lVar38 + 0x130);
                }
                lVar8 = local_180[0];
                puVar20 = *(undefined4 **)this_01;
                psVar7 = (short *)&_hb_NullPool;
                if (puVar20 == (undefined4 *)0x0) {
                  puVar20 = &_hb_NullPool;
                }
                if (3 < (uint)puVar20[6]) {
                  psVar7 = *(short **)(puVar20 + 4);
                }
                puVar13 = (ushort *)&_hb_NullPool;
                if (*psVar7 == 0x100) {
                  uVar23 = psVar7[3];
                  puVar13 = (ushort *)&_hb_NullPool;
                  if (uVar23 != 0) {
                    puVar13 = (ushort *)((ulong)(ushort)(uVar23 << 8 | uVar23 >> 8) + (long)psVar7);
                  }
                }
                uVar23 = *puVar13;
                uVar18 = 0xffff;
                if (uVar23 == 0) {
                  bVar51 = false;
                }
                else {
                  uVar23 = uVar23 << 8 | uVar23 >> 8;
                  uVar28 = 1;
                  if (1 < uVar23) {
                    uVar28 = (uint)uVar23;
                  }
                  bVar51 = true;
                  lVar38 = 2;
                  uVar34 = 0;
                  do {
                    puVar13 = (ushort *)&_hb_NullPool;
                    if (*psVar7 == 0x100) {
                      uVar16 = psVar7[3];
                      puVar13 = (ushort *)&_hb_NullPool;
                      if (uVar16 != 0) {
                        puVar13 = (ushort *)
                                  ((ulong)(ushort)(uVar16 << 8 | uVar16 >> 8) + (long)psVar7);
                      }
                    }
                    puVar31 = &_hb_NullPool;
                    if (uVar34 < (ushort)(*puVar13 << 8 | *puVar13 >> 8)) {
                      puVar31 = (uint *)((long)puVar13 + lVar38);
                    }
                    uVar6 = *puVar31;
                    if ((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18) == uVar27) {
                      uVar18 = (undefined4)uVar34;
                      break;
                    }
                    uVar34 = uVar34 + 1;
                    bVar51 = uVar34 < uVar23;
                    lVar38 = lVar38 + 6;
                  } while (uVar28 != uVar34);
                }
                uVar28 = *local_d0;
                paVar12 = *(accelerator_t<OT::Layout::GPOS> **)(local_180[0] + 0x138);
                local_b0 = (hb_ot_shape_plan_t *)CONCAT44(local_b0._4_4_,uVar18);
                while (paVar12 == (accelerator_t<OT::Layout::GPOS> *)0x0) {
                  lVar38 = *(long *)(lVar8 + 0x68);
                  if (lVar38 == 0) {
LAB_0041b588:
                    paVar12 = (accelerator_t<OT::Layout::GPOS> *)&_hb_NullPool;
                    break;
                  }
                  paVar12 = calloc(1,0x18);
                  if (paVar12 == (accelerator_t<OT::Layout::GPOS> *)0x0) {
                    LOCK();
                    bVar50 = *(long *)(lVar8 + 0x138) == 0;
                    if (bVar50) {
                      *(long *)(lVar8 + 0x138) = (long)&_hb_NullPool;
                    }
                    UNLOCK();
                    if (bVar50) goto LAB_0041b588;
                  }
                  else {
                    /* try { // try from 0041b54a to 0041b554 has its CatchHandler @ 0041d1b0 */
                    OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t(paVar12,lVar38);
                    LOCK();
                    bVar50 = *(long *)(lVar8 + 0x138) == 0;
                    if (bVar50) {
                      *(long *)(lVar8 + 0x138) = (long)paVar12;
                    }
                    UNLOCK();
                    if (bVar50) break;
                    OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::~accelerator_t(paVar12);
                    free(paVar12);
                  }
                  paVar12 = *(accelerator_t<OT::Layout::GPOS> **)(lVar8 + 0x138);
                }
                puVar20 = *(undefined4 **)paVar12;
                if (puVar20 == (undefined4 *)0x0) {
                  puVar20 = &_hb_NullPool;
                }
                psVar7 = (short *)&_hb_NullPool;
                if (3 < (uint)puVar20[6]) {
                  psVar7 = *(short **)(puVar20 + 4);
                }
                puVar13 = (ushort *)&_hb_NullPool;
                if (*psVar7 == 0x100) {
                  uVar23 = psVar7[3];
                  puVar13 = (ushort *)&_hb_NullPool;
                  if (uVar23 != 0) {
                    puVar13 = (ushort *)((ulong)(ushort)(uVar23 << 8 | uVar23 >> 8) + (long)psVar7);
                  }
                }
                uVar23 = *puVar13;
                uVar6 = 0xffff;
                if (uVar23 == 0) {
                  bVar50 = false;
                }
                else {
                  uVar23 = uVar23 << 8 | uVar23 >> 8;
                  uVar34 = 1;
                  if (1 < uVar23) {
                    uVar34 = (ulong)uVar23;
                  }
                  bVar50 = true;
                  lVar8 = 2;
                  uVar10 = 0;
                  do {
                    puVar13 = (ushort *)&_hb_NullPool;
                    if (*psVar7 == 0x100) {
                      uVar16 = psVar7[3];
                      puVar13 = (ushort *)&_hb_NullPool;
                      if (uVar16 != 0) {
                        puVar13 = (ushort *)
                                  ((ulong)(ushort)(uVar16 << 8 | uVar16 >> 8) + (long)psVar7);
                      }
                    }
                    puVar31 = &_hb_NullPool;
                    if (uVar10 < (ushort)(*puVar13 << 8 | *puVar13 >> 8)) {
                      puVar31 = (uint *)((long)puVar13 + lVar8);
                    }
                    uVar27 = *puVar31;
                    if ((uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                        uVar27 << 0x18) == uVar28) {
                      uVar6 = (uint)uVar10;
                      goto LAB_0041b182;
                    }
                    uVar10 = uVar10 + 1;
                    bVar50 = uVar10 < uVar23;
                    lVar8 = lVar8 + 6;
                  } while (uVar34 != uVar10);
                  uVar6 = 0xffff;
                }
LAB_0041b182:
                bVar40 = 1;
                puVar31 = local_b8;
                phVar46 = local_e8;
                uVar28 = (uint)local_b0;
                uVar27 = uVar6;
                if ((!bVar5 && !bVar51) && !bVar50) goto LAB_0041b1a0;
              }
              else {
                bVar40 = 1;
                uVar27 = 0xffff;
                if (!bVar5) {
LAB_0041b1a0:
                  uVar6 = uVar27;
                  if ((*local_f0 & 2) == 0) {
                    uVar32 = uVar32 + 1;
                    uVar28 = (uint)local_e0;
                    if ((uint *)uVar32 == puVar31) break;
                    goto LAB_0041b38d;
                  }
                  bVar40 = 0;
                }
              }
            }
            else {
              uVar34 = (ulong)uVar6 % (ulong)CONCAT22(uStack_46,uStack_48);
              uVar6 = *(uint *)((long)local_40 + uVar34 * 0xc + 4);
              if ((uVar6 & 2) == 0) goto LAB_0041aef0;
              if (*(uint *)((long)local_40 + uVar34 * 0xc) != uVar27) {
                iVar25 = 1;
                do {
                  uVar34 = (ulong)(uStack_4c & (int)uVar34 + iVar25);
                  uVar6 = *(uint *)((long)local_40 + uVar34 * 0xc + 4);
                  if ((uVar6 & 2) == 0) goto LAB_0041aef0;
                  iVar25 = iVar25 + 1;
                } while (*(uint *)((long)local_40 + uVar34 * 0xc) != uVar27);
              }
              if ((uVar6 & 1) == 0) goto LAB_0041aef0;
              uVar6 = *(uint *)((long)local_40 + uVar34 * 0xc + 8);
              bVar40 = 1;
            }
            uVar27 = *(uint *)(this + 0x38);
            uVar29 = *(int *)(this + 0x3c) + 1;
            if ((int)uVar29 < 0) {
              uVar29 = 0;
            }
            if ((int)uVar27 < 0) {
LAB_0041b444:
              DAT_0071cd90._0_4_ = 0;
              DAT_0071cd90._4_4_ = 0;
              DAT_0071cd98 = 0;
              uRam000000000071cd9c = 0;
              _hb_CrapPool = 0;
              DAT_0071cd88 = 0;
              _DAT_0071cd8c = 0;
              DAT_0071cda0._0_4_ = 0;
              bVar22 = 0;
              puVar49 = (uint *)&_hb_CrapPool;
            }
            else {
              if (uVar27 < uVar29) {
                uVar19 = uVar27;
                do {
                  uVar19 = uVar19 + (uVar19 >> 1) + 8;
                } while (uVar19 < uVar29);
                if (0x71c71c7 < uVar19) {
LAB_0041b43b:
                  *(uint *)(this + 0x38) = ~uVar27;
                  goto LAB_0041b444;
                }
                local_e8 = (hb_ot_shape_plan_t *)CONCAT44(local_e8._4_4_,uVar6);
                if (uVar19 == 0) {
                  free(*(void **)(this + 0x40));
                  pvVar11 = (void *)0x0;
                }
                else {
                  pvVar11 = realloc(*(void **)(this + 0x40),(ulong)uVar19 * 0x24);
                  if (pvVar11 == (void *)0x0) {
                    uVar27 = *(uint *)(this + 0x38);
                    uVar6 = (uint)local_e8;
                    if (uVar19 <= uVar27) goto LAB_0041b215;
                    goto LAB_0041b43b;
                  }
                }
                *(void **)(this + 0x40) = pvVar11;
                *(uint *)(this + 0x38) = uVar19;
                uVar6 = (uint)local_e8;
              }
LAB_0041b215:
              uVar27 = *(uint *)(this + 0x3c);
              if (uVar27 < uVar29) {
                uVar19 = (uVar29 - uVar27) * 0x24;
                if (uVar19 != 0) {
                  local_e8 = phVar46;
                  memset((void *)((ulong)uVar27 * 0x24 + *(long *)(this + 0x40)),0,(ulong)uVar19);
                  phVar46 = local_e8;
                }
              }
              *(uint *)(this + 0x3c) = uVar29;
              puVar49 = (uint *)(*(long *)(this + 0x40) + (ulong)(uVar29 - 1) * 0x24);
              bVar22 = *(byte *)(*(long *)(this + 0x40) + 0x20 + (ulong)(uVar29 - 1) * 0x24);
            }
            *puVar49 = *local_d0;
            puVar49[1] = uVar28;
            puVar49[2] = uVar6;
            puVar49[3] = *(uint *)(phVar46 + local_c0 + 0x14);
            puVar49[4] = *(uint *)(phVar46 + local_c0 + 0x18);
            bVar22 = bVar22 & 0xfd | *local_f0 >> 1 & 2;
            *(byte *)(puVar49 + 8) = bVar22 ^ 2;
            bVar22 = (bVar22 ^ 2) & 0xfb | *local_f0 >> 1 & 4;
            *(byte *)(puVar49 + 8) = bVar22 ^ 4;
            bVar15 = *local_f0 >> 2 & 8;
            bVar22 = bVar22 ^ 4;
            *(byte *)(puVar49 + 8) = bVar22 & 0xf7 | bVar15;
            bVar22 = bVar22 & 0xe7 | bVar15 | *local_f0 >> 2 & 0x10;
            *(byte *)(puVar49 + 8) = bVar22;
            if (((*local_f0 & 1) == 0) || (*(int *)(phVar46 + local_c0 + 8) != 1)) {
              uVar6 = (-1 << ((byte)local_e0 & 0x1f)) + (1 << ((byte)local_c8 & 0x1f));
              *(uint *)(this + 0x34) =
                   *(uint *)(this + 0x34) |
                   *(int *)(phVar46 + local_c0 + 0x10) << ((byte)local_e0 & 0x1f) & uVar6;
              bVar22 = (byte)puVar49[8];
              uVar28 = (uint)local_c8;
              uVar27 = (uint)local_e0;
            }
            else {
              uVar6 = 0x80000000;
              uVar28 = (uint)local_e0;
              uVar27 = 0x1f;
            }
            puVar49[5] = uVar27;
            puVar49[6] = uVar6;
            puVar49[7] = 1 << ((byte)uVar27 & 0x1f) & uVar6;
            *(byte *)(puVar49 + 8) = (bVar22 & 0xfe | bVar40) ^ 1;
          }
        }
        uVar32 = uVar32 + 1;
        if ((uint *)uVar32 == puVar31) break;
      } while( true );
    }
  }
  if ((local_158 != '\0') && ((ulong)*(uint *)(this + 0x3c) != 0)) {
                    /* try { // try from 0041b5ac to 0041b5bc has its CatchHandler @ 0041d1c9 */
    sort_r_simple<>(*(undefined1 **)(this + 0x40),(ulong)*(uint *)(this + 0x3c),0x24,
                    hb_ot_map_t::feature_map_t::cmp);
  }
  uVar28 = local_120._4_4_ + 1;
  if ((int)uVar28 < 0) {
    uVar28 = 0;
  }
  if ((int)(uint)local_120 < 0) {
LAB_0041c827:
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    puVar31 = (uint *)&_hb_CrapPool;
  }
  else {
    if ((uint)local_120 < uVar28) {
      uVar32 = local_120 & 0xffffffff;
      do {
        uVar27 = (uint)uVar32 + ((uint)uVar32 >> 1) + 8;
        uVar32 = (ulong)uVar27;
      } while (uVar27 < uVar28);
      if (0xfffffff < uVar27) {
LAB_0041c81e:
        local_120 = CONCAT44(local_120._4_4_,~(uint)local_120);
        goto LAB_0041c827;
      }
      if (uVar27 == 0) {
        free(pvStack_118);
        pvVar11 = (void *)0x0;
      }
      else {
        pvVar11 = realloc(pvStack_118,(ulong)uVar27 << 4);
        if (pvVar11 == (void *)0x0) {
          if (uVar27 <= (uint)local_120) goto LAB_0041b5e3;
          goto LAB_0041c81e;
        }
      }
      pvStack_118 = pvVar11;
      local_120 = CONCAT44(local_120._4_4_,uVar27);
    }
LAB_0041b5e3:
    if ((local_120._4_4_ < uVar28) && (uVar27 = (uVar28 - local_120._4_4_) * 0x10, uVar27 != 0)) {
      memset((void *)((ulong)local_120._4_4_ * 0x10 + (long)pvStack_118),0,(ulong)uVar27);
    }
    local_120 = CONCAT44(uVar28,(uint)local_120);
    puVar31 = (uint *)((ulong)(uVar28 - 1) * 0x10 + (long)pvStack_118);
  }
  *puVar31 = local_138[0];
  puVar31[2] = 0;
  puVar31[3] = 0;
  local_138[0] = local_138[0] + 1;
  uVar28 = local_110._4_4_ + 1;
  if ((int)uVar28 < 0) {
    uVar28 = 0;
  }
  if ((int)(uint)local_110 < 0) {
LAB_0041c890:
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    piVar33 = (int *)&_hb_CrapPool;
  }
  else {
    if ((uint)local_110 < uVar28) {
      uVar32 = local_110 & 0xffffffff;
      do {
        uVar27 = (uint)uVar32 + ((uint)uVar32 >> 1) + 8;
        uVar32 = (ulong)uVar27;
      } while (uVar27 < uVar28);
      if (0xfffffff < uVar27) {
LAB_0041c887:
        local_110 = CONCAT44(local_110._4_4_,~(uint)local_110);
        goto LAB_0041c890;
      }
      if (uVar27 == 0) {
        free(pvStack_108);
        pvVar11 = (void *)0x0;
      }
      else {
        pvVar11 = realloc(pvStack_108,(ulong)uVar27 << 4);
        if (pvVar11 == (void *)0x0) {
          if (uVar27 <= (uint)local_110) goto LAB_0041b661;
          goto LAB_0041c887;
        }
      }
      pvStack_108 = pvVar11;
      local_110 = CONCAT44(local_110._4_4_,uVar27);
    }
LAB_0041b661:
    if ((local_110._4_4_ < uVar28) && (uVar27 = (uVar28 - local_110._4_4_) * 0x10, uVar27 != 0)) {
      memset((void *)((ulong)local_110._4_4_ * 0x10 + (long)pvStack_108),0,(ulong)uVar27);
    }
    local_110 = CONCAT44(uVar28,(uint)local_110);
    piVar33 = (int *)((ulong)(uVar28 - 1) * 0x10 + (long)pvStack_108);
  }
  *piVar33 = local_138[1];
  piVar33[2] = 0;
  piVar33[3] = 0;
  local_138[1] = local_138[1] + 1;
  local_e8 = this + 0x28;
  puVar31 = (uint *)0x0;
  puVar49 = (uint *)0x0;
  do {
    local_b8 = puVar31;
    if (local_138[(long)puVar49] != 0) {
      uVar28 = 0;
      uVar34 = 0;
      uVar32 = 0;
      local_d0 = puVar49;
      local_b0 = this + (long)puVar49 * 0x10 + 0x4c;
      local_c8 = (uint *)((long)&local_120 + (long)puVar49 * 0x10 + 4);
      do {
        if ((local_38[(long)puVar49] != 0xffff) &&
           (*(uint *)((long)&local_a8 + (long)puVar49 * 4) == uVar28)) {
                    /* try { // try from 0041b795 to 0041b7c9 has its CatchHandler @ 0041d1dd */
          hb_ot_map_builder_t::add_lookups
                    ((hb_ot_map_builder_t *)local_180,(long)local_e8,(uint)puVar49,
                     local_38[(long)puVar49],local_d8[(long)puVar49 + 0xb],0x80000000,1,'\x01','\0',
                     '\0',0x20202020);
        }
        local_f0 = (byte *)CONCAT44(local_f0._4_4_,(int)uVar32);
        if ((ulong)*(uint *)(this + 0x3c) != 0) {
          local_e0 = *(long *)(this + 0x40);
          lVar8 = *(long *)(this + 0x40) + (long)local_d0 * 4;
          lVar38 = (ulong)*(uint *)(this + 0x3c) * 0x24;
          lVar45 = 0;
          local_c0 = lVar38;
          do {
            if (*(uint *)(lVar8 + 0xc + lVar45) == uVar28) {
              bVar40 = *(byte *)(local_e0 + 0x20 + lVar45);
                    /* try { // try from 0041b885 to 0041b8cc has its CatchHandler @ 0041d1e1 */
              uVar32 = (ulong)local_f0 & 0xffffffff;
              hb_ot_map_builder_t::add_lookups
                        ((hb_ot_map_builder_t *)local_180,(long)local_e8,(uint)local_d0,
                         *(uint *)(lVar8 + 4 + lVar45),local_d8[(long)local_d0 + 0xb],
                         *(undefined4 *)(local_e0 + 0x18 + lVar45),(bVar40 & 2) >> 1,
                         (bVar40 & 4) >> 2,(bVar40 & 8) >> 3,(bVar40 & 0x10) >> 4,
                         *(undefined4 *)(local_e0 + lVar45));
              lVar38 = local_c0;
            }
            lVar45 = lVar45 + 0x24;
          } while (lVar38 != lVar45);
        }
        phVar46 = local_b0;
        puVar49 = local_d0;
        uVar6 = (uint)uVar34;
        uVar29 = uVar6 + 1;
        uVar10 = (ulong)uVar29;
        uVar27 = *(uint *)local_b0;
        if (uVar29 < uVar27) {
          uVar17 = uVar27 - uVar6;
          uVar19 = uVar17;
          if (uVar27 < uVar6) {
            uVar19 = 0;
          }
          if (uVar17 < uVar19) {
            uVar19 = uVar17;
          }
          if (uVar19 != 0) {
                    /* try { // try from 0041b92d to 0041b93d has its CatchHandler @ 0041d1df */
            sort_r_simple<>((undefined1 *)(uVar34 * 0xc + *(long *)(local_b0 + 4)),(ulong)uVar19,0xc
                            ,hb_ot_map_t::lookup_map_t::cmp);
            uVar27 = *(uint *)phVar46;
          }
          if (uVar29 < uVar27) {
            lVar8 = uVar10 * 0xc;
            do {
              lVar38 = *(long *)(phVar46 + 4);
              if (*(short *)(lVar38 + lVar8) == *(short *)(lVar38 + uVar34 * 0xc)) {
                lVar45 = uVar34 * 0xc;
                puVar31 = (uint *)(lVar38 + 4 + lVar45);
                *puVar31 = *puVar31 | *(uint *)(lVar38 + 4 + lVar8);
                pbVar44 = (byte *)(lVar38 + 2 + lVar45);
                *pbVar44 = *pbVar44 & (*(byte *)(lVar38 + 2 + lVar8) | 0xfe);
                pbVar44 = (byte *)(*(long *)(phVar46 + 4) + 2 + lVar45);
                *pbVar44 = *pbVar44 & (*(byte *)(*(long *)(phVar46 + 4) + 2 + lVar8) | 0xfd);
              }
              else {
                uVar34 = (ulong)((int)uVar34 + 1);
                *(undefined4 *)(lVar38 + 8 + uVar34 * 0xc) = *(undefined4 *)(lVar38 + 8 + lVar8);
                *(undefined8 *)(lVar38 + uVar34 * 0xc) = *(undefined8 *)(lVar38 + lVar8);
              }
              uVar6 = (uint)uVar34;
              uVar10 = uVar10 + 1;
              uVar27 = *(uint *)phVar46;
              lVar8 = lVar8 + 0xc;
            } while (uVar10 < uVar27);
            uVar29 = uVar6 + 1;
            uVar32 = (ulong)local_f0 & 0xffffffff;
          }
          uVar34 = (ulong)uVar29;
          if ((int)uVar29 < 0) {
            uVar34 = 0;
          }
          uVar29 = (uint)uVar34;
          if (uVar29 < uVar27) {
            *(uint *)phVar46 = uVar29;
            uVar27 = *(uint *)(phVar46 + -4);
            if ((-1 < (int)uVar27) && ((uVar27 < uVar29 || (uVar29 < uVar27 >> 2)))) {
              if (uVar29 < 0x15555556) {
                if (uVar6 < 0x7fffffff) {
                  pvVar11 = realloc(*(void **)(phVar46 + 4),uVar34 * 0xc);
                  if (pvVar11 == (void *)0x0) {
                    uVar27 = *(uint *)(phVar46 + -4);
                    if (uVar29 <= uVar27) goto LAB_0041ba50;
                    goto LAB_0041bbb4;
                  }
                }
                else {
                  free(*(void **)(phVar46 + 4));
                  pvVar11 = (void *)0x0;
                }
                *(void **)(phVar46 + 4) = pvVar11;
                *(uint *)(phVar46 + -4) = uVar29;
              }
              else {
LAB_0041bbb4:
                *(uint *)(phVar46 + -4) = ~uVar27;
              }
            }
          }
        }
LAB_0041ba50:
        uVar27 = *(uint *)phVar46;
        uVar34 = (ulong)uVar27;
        puVar31 = local_c8;
        if ((uint)uVar32 < *local_c8) {
          puVar31 = *(uint **)(local_c8 + 1);
          if (puVar31[uVar32 * 4] == uVar28) {
            uVar6 = *(uint *)(phVar46 + 0x20) + 1;
            if ((int)uVar6 < 0) {
              uVar6 = 0;
            }
            uVar29 = *(uint *)(phVar46 + 0x1c);
            if ((int)uVar29 < 0) {
LAB_0041bb79:
              _hb_CrapPool = 0;
              DAT_0071cd88 = 0;
              _DAT_0071cd8c = 0;
              puVar36 = (uint *)&_hb_CrapPool;
            }
            else {
              local_e0 = CONCAT44(local_e0._4_4_,uVar28);
              if (uVar29 < uVar6) {
                uVar28 = uVar29;
                do {
                  uVar28 = uVar28 + (uVar28 >> 1) + 8;
                } while (uVar28 < uVar6);
                if (0xfffffff < uVar28) {
LAB_0041bb6b:
                  *(uint *)(phVar46 + 0x1c) = ~uVar29;
                  uVar28 = (uint)local_e0;
                  goto LAB_0041bb79;
                }
                if (uVar28 == 0) {
                  free(*(void **)(phVar46 + 0x24));
                  pvVar11 = (void *)0x0;
                }
                else {
                  pvVar11 = realloc(*(void **)(phVar46 + 0x24),(ulong)uVar28 << 4);
                  if (pvVar11 == (void *)0x0) {
                    uVar29 = *(uint *)(phVar46 + 0x1c);
                    if (uVar28 <= uVar29) goto LAB_0041ba9f;
                    goto LAB_0041bb6b;
                  }
                }
                *(void **)(phVar46 + 0x24) = pvVar11;
                *(uint *)(phVar46 + 0x1c) = uVar28;
              }
LAB_0041ba9f:
              uVar28 = *(uint *)(phVar46 + 0x20);
              if ((uVar28 < uVar6) && (uVar29 = (uVar6 - uVar28) * 0x10, uVar29 != 0)) {
                memset((void *)((ulong)uVar28 * 0x10 + *(long *)(phVar46 + 0x24)),0,(ulong)uVar29);
              }
              *(uint *)(phVar46 + 0x20) = uVar6;
              puVar36 = (uint *)((ulong)(uVar6 - 1) * 0x10 + *(long *)(phVar46 + 0x24));
              uVar28 = (uint)local_e0;
            }
            *puVar36 = uVar27;
            if ((uint)local_f0 < *local_c8) {
              puVar31 = *(uint **)(*(long *)(local_c8 + 1) + 8 + uVar32 * 0x10);
            }
            else {
              _hb_CrapPool = 0;
              DAT_0071cd88 = 0;
              _DAT_0071cd8c = 0;
              puVar31 = (uint *)0x0;
            }
            *(uint **)(puVar36 + 2) = puVar31;
            uVar32 = (ulong)((uint)local_f0 + 1);
          }
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 < local_138[(long)puVar49]);
    }
    ppVar4 = local_60;
    puVar49 = (uint *)0x1;
    puVar31 = (uint *)CONCAT71((int7)((ulong)puVar31 >> 8),1);
  } while (((ulong)local_b8 & 1) == 0);
  local_68 = 0xffff2153;
  if (local_60 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0041bbdb to 0041bc44 has its CatchHandler @ 0041d1cb */
    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
               &local_60[1].__data,local_60);
    free(ppVar4);
    local_60 = (pthread_mutex_t *)0x0;
  }
  if (local_40 != (void *)0x0) {
    free(local_40);
    local_40 = (void *)0x0;
  }
  ppVar4 = local_90;
  uStack_54 = 0;
  uStack_4e = 0;
  local_98 = 0xffff2153;
  if (local_90 != (pthread_mutex_t *)0x0) {
    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
               &local_90[1].__data,local_90);
    free(ppVar4);
    local_90 = (pthread_mutex_t *)0x0;
  }
  if (local_70 != (void *)0x0) {
    free(local_70);
  }
  lVar38 = local_1a8;
  lVar8 = *(long *)(this + 0x40);
  uVar28 = *(uint *)(this + 0x3c);
  pGVar42 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar28;
  if ((int)uVar28 < 1) {
    uVar27 = *(ushort *)(this + 0xa8) & 0xfffffffb;
    *(short *)(this + 0xa8) = (short)uVar27;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x98) = 0;
  }
  else {
    iVar43 = uVar28 - 1;
    iVar39 = 0;
    iVar25 = iVar43;
    do {
      while( true ) {
        uVar6 = (uint)(iVar25 + iVar39) >> 1;
        uVar27 = *(uint *)(lVar8 + (ulong)uVar6 * 0x24);
        if (0x66726163 < uVar27) break;
        if (uVar27 == 0x66726163) {
          iVar25 = *(int *)(lVar8 + 0x1c + (ulong)uVar6 * 0x24);
          goto LAB_0041bcf2;
        }
        iVar39 = uVar6 + 1;
        if (iVar25 < iVar39) goto LAB_0041bcbe;
      }
      iVar25 = uVar6 - 1;
    } while (iVar39 <= iVar25);
LAB_0041bcbe:
    iVar25 = 0;
LAB_0041bcf2:
    *(int *)(this + 0x90) = iVar25;
    iVar24 = 0;
    iVar39 = iVar43;
    do {
      while( true ) {
        uVar6 = (uint)(iVar24 + iVar39) >> 1;
        uVar27 = *(uint *)(lVar8 + (ulong)uVar6 * 0x24);
        if (0x6e756d72 < uVar27) break;
        if (uVar27 == 0x6e756d72) {
          iVar39 = *(int *)(lVar8 + 0x1c + (ulong)uVar6 * 0x24);
          goto LAB_0041bd36;
        }
        iVar24 = uVar6 + 1;
        if (iVar39 < iVar24) goto LAB_0041bd2e;
      }
      iVar39 = uVar6 - 1;
    } while (iVar24 <= iVar39);
LAB_0041bd2e:
    iVar39 = 0;
LAB_0041bd36:
    *(int *)(this + 0x94) = iVar39;
    iVar30 = 0;
    iVar24 = iVar43;
    do {
      while( true ) {
        uVar6 = (uint)(iVar24 + iVar30) >> 1;
        uVar27 = *(uint *)(lVar8 + (ulong)uVar6 * 0x24);
        if (0x646e6f6d < uVar27) break;
        if (uVar27 == 0x646e6f6d) {
          iVar24 = *(int *)(lVar8 + 0x1c + (ulong)uVar6 * 0x24);
          *(int *)(this + 0x98) = iVar24;
          goto joined_r0x0041bdb2;
        }
        iVar30 = uVar6 + 1;
        if (iVar24 < iVar30) goto LAB_0041bd7e;
      }
      iVar24 = uVar6 - 1;
    } while (iVar30 <= iVar24);
LAB_0041bd7e:
    iVar24 = 0;
    *(undefined4 *)(this + 0x98) = 0;
joined_r0x0041bdb2:
    if (iVar25 == 0) {
      uVar16 = 0;
      uVar23 = *(ushort *)(this + 0xa8);
      uVar27 = (uint)uVar23;
      if ((iVar39 != 0) && (iVar24 != 0)) goto LAB_0041bdc6;
    }
    else {
      uVar23 = *(ushort *)(this + 0xa8);
LAB_0041bdc6:
      uVar27 = (uint)uVar23;
      uVar16 = 4;
    }
    uVar27 = (uint)uVar16 | uVar27 & 0xfffffffb;
    *(short *)(this + 0xa8) = (short)uVar27;
    iVar39 = 0;
    iVar25 = iVar43;
    do {
      while( true ) {
        uVar29 = (uint)(iVar25 + iVar39) >> 1;
        uVar6 = *(uint *)(lVar8 + (ulong)uVar29 * 0x24);
        if (0x72746c6d < uVar6) break;
        if (uVar6 == 0x72746c6d) {
          uVar18 = *(undefined4 *)(lVar8 + 0x1c + (ulong)uVar29 * 0x24);
          goto LAB_0041be16;
        }
        iVar39 = uVar29 + 1;
        if (iVar25 < iVar39) goto LAB_0041be0e;
      }
      iVar25 = uVar29 - 1;
    } while (iVar39 <= iVar25);
LAB_0041be0e:
    uVar18 = 0;
LAB_0041be16:
    *(undefined4 *)(this + 0x9c) = uVar18;
    iVar25 = 0;
    do {
      while( true ) {
        uVar29 = (uint)(iVar43 + iVar25) >> 1;
        uVar6 = *(uint *)(lVar8 + (ulong)uVar29 * 0x24);
        if (0x76657274 < uVar6) break;
        if (uVar6 == 0x76657274) {
          uVar23 = 8;
          if (*(int *)(lVar8 + 0x1c + (ulong)uVar29 * 0x24) != 0) goto LAB_0041be71;
          goto LAB_0041be6f;
        }
        iVar25 = uVar29 + 1;
        if (iVar43 < iVar25) goto LAB_0041be6f;
      }
      iVar43 = uVar29 - 1;
    } while (iVar25 <= iVar43);
  }
LAB_0041be6f:
  uVar23 = 0;
LAB_0041be71:
  phVar46 = this + 0xa8;
  *(ushort *)phVar46 = uVar23 | (ushort)uVar27 & 0xfff7;
  uVar6 = 0x766b726e;
  if (((uint)local_1a0 & 0xfffffffe) == 4) {
    uVar6 = 0x6b65726e;
  }
  if ((int)uVar28 < 1) {
    *(undefined4 *)(this + 0xa0) = 0;
    uVar27 = (uint)uVar23 | uVar27 & 0xfff6;
    *(short *)(this + 0xa8) = (short)uVar27;
  }
  else {
    iVar39 = uVar28 - 1;
    iVar43 = 0;
    iVar25 = iVar39;
    do {
      while( true ) {
        uVar19 = (uint)(iVar25 + iVar43) >> 1;
        uVar29 = *(uint *)(lVar8 + (ulong)uVar19 * 0x24);
        if (uVar6 < uVar29) break;
        if (uVar6 <= uVar29) {
          iVar25 = *(int *)(lVar8 + 0x18 + (ulong)uVar19 * 0x24);
          goto LAB_0041bef6;
        }
        iVar43 = uVar19 + 1;
        if (iVar25 < iVar43) goto LAB_0041bed2;
      }
      iVar25 = uVar19 - 1;
    } while (iVar43 <= iVar25);
LAB_0041bed2:
    iVar25 = 0;
LAB_0041bef6:
    *(int *)(this + 0xa0) = iVar25;
    uVar27 = (uint)uVar23 | uVar27 & 0xfffffff6 | (uint)(iVar25 != 0);
    *(short *)(this + 0xa8) = (short)uVar27;
    iVar25 = 0;
    do {
      while( true ) {
        uVar19 = (uint)(iVar25 + iVar39) >> 1;
        uVar29 = *(uint *)(lVar8 + (ulong)uVar19 * 0x24);
        if (0x7472616b < uVar29) break;
        if (uVar29 == 0x7472616b) {
          iVar25 = *(int *)(lVar8 + 0x18 + (ulong)uVar19 * 0x24);
          *(int *)(this + 0xa4) = iVar25;
          uVar23 = 2;
          if (iVar25 != 0) goto LAB_0041bf5b;
          goto LAB_0041bf59;
        }
        iVar25 = uVar19 + 1;
        if (iVar39 < iVar25) goto LAB_0041bf4e;
      }
      iVar39 = uVar19 - 1;
    } while (iVar25 <= iVar39);
  }
LAB_0041bf4e:
  *(undefined4 *)(this + 0xa4) = 0;
LAB_0041bf59:
  uVar23 = 0;
LAB_0041bf5b:
  uVar27 = (uint)uVar23 | uVar27 & 0xfffffffd;
  puVar20 = (undefined4 *)(ulong)uVar27;
  *(ushort *)phVar46 = (ushort)uVar27;
  iVar25 = 0xffff;
  if (0 < (int)uVar28) {
    pGVar42 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uVar28 - 1);
    uVar28 = 0;
    do {
      while( true ) {
        uVar29 = (int)pGVar42 + uVar28 >> 1;
        puVar20 = (undefined4 *)(ulong)uVar29;
        uVar27 = *(uint *)(lVar8 + (long)puVar20 * 0x24);
        if (uVar6 < uVar27) break;
        if (uVar6 <= uVar27) {
          iVar25 = *(int *)(lVar8 + 8 + (long)puVar20 * 0x24);
          goto LAB_0041bfc5;
        }
        uVar28 = uVar29 + 1;
        puVar20 = (undefined4 *)(ulong)uVar28;
        if ((int)pGVar42 < (int)uVar28) goto LAB_0041bfc5;
      }
      uVar29 = uVar29 - 1;
      puVar20 = (undefined4 *)(ulong)uVar29;
      pGVar42 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar29;
    } while ((int)uVar28 <= (int)uVar29);
  }
LAB_0041bfc5:
  iVar39 = *(int *)(*(long *)(this + 0x20) + 0x50);
  iVar43 = *(int *)(this + 0x2c);
  do {
    while( true ) {
      this_02 = *(accelerator_t **)(lVar38 + 0x128);
      if (this_02 != (accelerator_t *)0x0) goto LAB_0041c053;
      lVar8 = *(long *)(lVar38 + 0x68);
      if (lVar8 == 0) goto LAB_0041c04c;
      this_02 = calloc(1,0x218);
      if (this_02 == (accelerator_t *)0x0) break;
                    /* try { // try from 0041c00e to 0041c018 has its CatchHandler @ 0041d1ac */
      OT::GDEF::accelerator_t::accelerator_t(this_02,lVar8,extraout_RDX,puVar20,pGVar42);
      LOCK();
      bVar5 = *(long *)(lVar38 + 0x128) == 0;
      if (bVar5) {
        *(long *)(lVar38 + 0x128) = (long)this_02;
      }
      UNLOCK();
      if (bVar5) goto LAB_0041c053;
      OT::GDEF::accelerator_t::~accelerator_t(this_02);
      free(this_02);
    }
    puVar20 = &_hb_NullPool;
    LOCK();
    bVar5 = *(long *)(lVar38 + 0x128) == 0;
    if (bVar5) {
      *(long *)(lVar38 + 0x128) = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (!bVar5);
LAB_0041c04c:
  this_02 = (accelerator_t *)&_hb_NullPool;
LAB_0041c053:
  lVar8 = local_1a8;
  puVar20 = *(undefined4 **)this_02;
  psVar7 = (short *)&_hb_NullPool;
  if (puVar20 == (undefined4 *)0x0) {
    puVar20 = &_hb_NullPool;
  }
  if (3 < (uint)puVar20[6]) {
    psVar7 = *(short **)(puVar20 + 4);
  }
  uVar23 = *(ushort *)phVar46;
  if ((*psVar7 != 0x100) || (psVar7[2] == 0)) {
    uVar23 = uVar23 | 0x40;
    *(ushort *)phVar46 = uVar23;
  }
  *(ushort *)phVar46 = uVar23 & 0xdfff | (ushort)((local_100 & 1) << 0xd);
  do {
    while( true ) {
      this_03 = *(accelerator_t **)(lVar8 + 0x158);
      if (this_03 != (accelerator_t *)0x0) goto LAB_0041c121;
      if (*(long *)(lVar8 + 0x68) == 0) goto LAB_0041c11a;
      this_03 = calloc(1,0x18);
      if (this_03 == (accelerator_t *)0x0) break;
                    /* try { // try from 0041c0dc to 0041c0e6 has its CatchHandler @ 0041d1aa */
      AAT::KerxTable<AAT::kerx>::accelerator_t::accelerator_t(this_03);
      LOCK();
      bVar5 = *(long *)(lVar8 + 0x158) == 0;
      if (bVar5) {
        *(long *)(lVar8 + 0x158) = (long)this_03;
      }
      UNLOCK();
      if (bVar5) goto LAB_0041c121;
      AAT::KerxTable<AAT::kerx>::accelerator_t::~accelerator_t(this_03);
      free(this_03);
    }
    LOCK();
    bVar5 = *(long *)(lVar8 + 0x158) == 0;
    if (bVar5) {
      *(long *)(lVar8 + 0x158) = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (!bVar5);
LAB_0041c11a:
  this_03 = (accelerator_t *)&_hb_NullPool;
LAB_0041c121:
  puVar20 = *(undefined4 **)this_03;
  psVar7 = (short *)&_hb_NullPool;
  if (puVar20 == (undefined4 *)0x0) {
    puVar20 = &_hb_NullPool;
  }
  if (7 < (uint)puVar20[6]) {
    psVar7 = *(short **)(puVar20 + 4);
  }
  sVar1 = *psVar7;
  if ((local_100 & 1) == 0) {
                    /* try { // try from 0041c154 to 0041c158 has its CatchHandler @ 0041d1d5 */
    bVar5 = hb_ot_layout_has_substitution(local_1a8);
    bVar5 = (int)CONCAT71(extraout_var_00,bVar5) != 0;
    lVar8 = local_1a8;
    if (!(iVar39 == 0 || iVar39 == iVar43)) goto LAB_0041c216;
LAB_0041c16c:
    do {
      while( true ) {
        paVar12 = *(accelerator_t<OT::Layout::GPOS> **)(lVar8 + 0x138);
        if (paVar12 != (accelerator_t<OT::Layout::GPOS> *)0x0) goto LAB_0041c1dd;
        lVar38 = *(long *)(lVar8 + 0x68);
        if (lVar38 == 0) goto LAB_0041c1d6;
        paVar12 = calloc(1,0x18);
        if (paVar12 == (accelerator_t<OT::Layout::GPOS> *)0x0) break;
                    /* try { // try from 0041c198 to 0041c1a2 has its CatchHandler @ 0041d1a8 */
        OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t(paVar12,lVar38);
        LOCK();
        bVar51 = *(long *)(lVar8 + 0x138) == 0;
        if (bVar51) {
          *(long *)(lVar8 + 0x138) = (long)paVar12;
        }
        UNLOCK();
        if (bVar51) goto LAB_0041c1dd;
        OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::~accelerator_t(paVar12);
        free(paVar12);
      }
      LOCK();
      bVar51 = *(long *)(lVar8 + 0x138) == 0;
      if (bVar51) {
        *(long *)(lVar8 + 0x138) = (long)&_hb_NullPool;
      }
      UNLOCK();
    } while (!bVar51);
LAB_0041c1d6:
    paVar12 = (accelerator_t<OT::Layout::GPOS> *)&_hb_NullPool;
LAB_0041c1dd:
    puVar20 = *(undefined4 **)paVar12;
    puVar13 = (ushort *)&_hb_NullPool;
    if (puVar20 == (undefined4 *)0x0) {
      puVar20 = &_hb_NullPool;
    }
    if (3 < (uint)puVar20[6]) {
      puVar13 = *(ushort **)(puVar20 + 4);
    }
    puVar20 = (undefined4 *)(ulong)(*puVar13 | puVar13[1]);
    bVar51 = (*puVar13 | puVar13[1]) != 0;
    if (sVar1 == 0) goto LAB_0041c222;
LAB_0041c21e:
    if ((bool)(bVar5 & bVar51)) goto LAB_0041c222;
    uVar28 = *(uint *)phVar46 | 0x1000;
LAB_0041c23c:
    *(ushort *)phVar46 = (ushort)uVar28;
  }
  else {
    bVar5 = false;
    lVar8 = local_1a8;
    if (!(iVar39 != 0 && iVar39 != iVar43)) goto LAB_0041c16c;
LAB_0041c216:
    bVar51 = false;
    if (sVar1 != 0) goto LAB_0041c21e;
LAB_0041c222:
    uVar28 = (uint)*(ushort *)phVar46;
    if (bVar51) {
      uVar28 = *(ushort *)phVar46 | 0x200;
      goto LAB_0041c23c;
    }
  }
  lVar8 = local_1a8;
  if (((uVar28 & 0x1000) == 0) && ((iVar25 == 0xffff || ((uVar28 & 0x200) == 0)))) {
    if (sVar1 == 0) {
      paVar14 = *(accelerator_t **)(local_1a8 + 0x120);
      while (paVar14 == (accelerator_t *)0x0) {
        phVar2 = *(hb_face_t **)(lVar8 + 0x68);
        if (phVar2 == (hb_face_t *)0x0) {
LAB_0041d17a:
          paVar14 = (accelerator_t *)&_hb_NullPool;
          break;
        }
        paVar14 = calloc(1,0x18);
        if (paVar14 == (accelerator_t *)0x0) {
          LOCK();
          bVar5 = *(long *)(lVar8 + 0x120) == 0;
          if (bVar5) {
            *(long *)(lVar8 + 0x120) = (long)&_hb_NullPool;
          }
          UNLOCK();
          if (bVar5) goto LAB_0041d17a;
        }
        else {
                    /* try { // try from 0041d12f to 0041d139 has its CatchHandler @ 0041d1a0 */
          OT::kern::accelerator_t::accelerator_t(paVar14,phVar2,extraout_RDX_02,puVar20,pGVar42);
          LOCK();
          bVar5 = *(long *)(lVar8 + 0x120) == 0;
          if (bVar5) {
            *(long *)(lVar8 + 0x120) = (long)paVar14;
          }
          UNLOCK();
          if (bVar5) break;
          OT::kern::accelerator_t::~accelerator_t(paVar14);
          free(paVar14);
        }
        paVar14 = *(accelerator_t **)(lVar8 + 0x120);
      }
      puVar20 = *(undefined4 **)paVar14;
      piVar33 = &_hb_NullPool;
      if (puVar20 == (undefined4 *)0x0) {
        puVar20 = &_hb_NullPool;
      }
      if (3 < (uint)puVar20[6]) {
        piVar33 = *(int **)(puVar20 + 4);
      }
      uVar28 = (uint)*(ushort *)phVar46;
      if (*piVar33 == 0) goto LAB_0041c2c1;
      uVar28 = *(ushort *)phVar46 | 0x400;
    }
    else {
      uVar28 = uVar28 | 0x1000;
    }
    *(ushort *)phVar46 = (ushort)uVar28;
  }
LAB_0041c2c1:
  lVar8 = local_1a8;
  uVar6 = ~(uVar28 * 2) & 0x800;
  uVar27 = 0;
  if ((uVar28 & 0x1200) != 0) {
    uVar6 = 0;
  }
  uVar6 = uVar28 & 0xfffff7ff | uVar6;
  uVar32 = (ulong)uVar6;
  *(ushort *)phVar46 = (ushort)uVar6;
  if ((((local_100 & 2) != 0) && (uVar34 = (ulong)(uVar28 & 0x1000), (short)(uVar28 & 0x1000) == 0))
     && (uVar27 = 0x20, (uVar28 & 0x400) != 0)) {
    paVar14 = *(accelerator_t **)(local_1a8 + 0x120);
    while (paVar14 == (accelerator_t *)0x0) {
      phVar2 = *(hb_face_t **)(lVar8 + 0x68);
      if (phVar2 == (hb_face_t *)0x0) {
LAB_0041d050:
        paVar14 = (accelerator_t *)&_hb_NullPool;
        break;
      }
      paVar14 = calloc(1,0x18);
      if (paVar14 == (accelerator_t *)0x0) {
        LOCK();
        bVar5 = *(long *)(lVar8 + 0x120) == 0;
        if (bVar5) {
          *(long *)(lVar8 + 0x120) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar5) goto LAB_0041d050;
      }
      else {
                    /* try { // try from 0041d005 to 0041d00f has its CatchHandler @ 0041d1a4 */
        OT::kern::accelerator_t::accelerator_t(paVar14,phVar2,extraout_RDX_01,uVar34,uVar32);
        LOCK();
        bVar5 = *(long *)(lVar8 + 0x120) == 0;
        if (bVar5) {
          *(long *)(lVar8 + 0x120) = (long)paVar14;
        }
        UNLOCK();
        if (bVar5) break;
        OT::kern::accelerator_t::~accelerator_t(paVar14);
        free(paVar14);
      }
      paVar14 = *(accelerator_t **)(lVar8 + 0x120);
    }
    puVar20 = *(undefined4 **)paVar14;
    puVar13 = (ushort *)&_hb_NullPool;
    if (puVar20 == (undefined4 *)0x0) {
      puVar20 = &_hb_NullPool;
    }
    if (3 < (uint)puVar20[6]) {
      puVar13 = *(ushort **)(puVar20 + 4);
    }
    uVar23 = *puVar13 << 8 | *puVar13 >> 8;
    uVar27 = 0x20;
    if (uVar23 == 1) {
      uVar28 = *(uint *)(puVar13 + 2);
      if (uVar28 != 0) {
        uVar6 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
        uVar28 = 1;
        if (1 < uVar6) {
          uVar28 = uVar6;
        }
        if (*(char *)((long)puVar13 + 0xd) != '\x01') {
          puVar31 = (uint *)(puVar13 + 4);
          uVar29 = 0;
          do {
            if (uVar28 - 1 == uVar29) goto LAB_0041c40a;
            uVar19 = *puVar31;
            puVar31 = (uint *)((long)puVar31 +
                              (ulong)(uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 |
                                      (uVar19 & 0xff00) << 8 | uVar19 << 0x18));
            uVar29 = uVar29 + 1;
          } while (*(char *)((long)puVar31 + 5) != '\x01');
          goto LAB_0041c404;
        }
        goto LAB_0041c408;
      }
    }
    else if ((uVar23 == 0) && (uVar23 = puVar13[1], uVar23 != 0)) {
      uVar23 = uVar23 << 8 | uVar23 >> 8;
      uVar6 = (uint)uVar23;
      uVar28 = 1;
      if (1 < uVar23) {
        uVar28 = (uint)uVar23;
      }
      if ((char)puVar13[4] != '\x01') {
        puVar13 = puVar13 + 2;
        uVar29 = 0;
        do {
          if (uVar28 - 1 == uVar29) goto LAB_0041c40a;
          puVar13 = (ushort *)((long)puVar13 + (ulong)(ushort)(puVar13[1] << 8 | puVar13[1] >> 8));
          uVar29 = uVar29 + 1;
        } while ((char)puVar13[2] != '\x01');
LAB_0041c404:
        if (uVar6 <= uVar29) goto LAB_0041c40a;
      }
LAB_0041c408:
      uVar27 = 0;
    }
LAB_0041c40a:
    uVar32 = (ulong)*(ushort *)phVar46;
  }
  lVar8 = local_1a8;
  uVar28 = (uint)uVar32 & 0xffffffdf;
  puVar20 = (undefined4 *)(ulong)uVar28;
  *(ushort *)(this + 0xa8) = (ushort)uVar27 | (ushort)uVar28;
  if (0 < *(int *)(this + 0x3c)) {
    iVar43 = *(int *)(this + 0x3c) + -1;
    iVar25 = 0;
    do {
      while( true ) {
        uVar6 = (uint)(iVar25 + iVar43) >> 1;
        uVar28 = *(uint *)(*(long *)(this + 0x40) + (ulong)uVar6 * 0x24);
        puVar20 = (undefined4 *)(ulong)uVar28;
        if (0x6d61726b < uVar28) break;
        if (uVar28 == 0x6d61726b) {
          uVar28 = 0x10;
          if (*(int *)(*(long *)(this + 0x40) + 0x1c + (ulong)uVar6 * 0x24) != 0) goto LAB_0041c47d;
          goto LAB_0041c47b;
        }
        iVar25 = uVar6 + 1;
        if (iVar43 < iVar25) goto LAB_0041c47b;
      }
      iVar43 = uVar6 - 1;
    } while (iVar25 <= iVar43);
  }
LAB_0041c47b:
  uVar28 = 0;
LAB_0041c47d:
  uVar28 = uVar28 | uVar27 | (uint)uVar32 & 0xffffffcf;
  *(ushort *)phVar46 = (ushort)uVar28;
  bVar5 = true;
  lVar38 = 0;
  if ((uVar32 & 0x1200) == 0) {
    uVar23 = 0x100;
    if ((uVar32 & 0x400) != 0) {
      do {
        while( true ) {
          paVar14 = *(accelerator_t **)(lVar8 + 0x120);
          if (paVar14 != (accelerator_t *)0x0) goto LAB_0041c531;
          phVar2 = *(hb_face_t **)(lVar8 + 0x68);
          if (phVar2 == (hb_face_t *)0x0) goto LAB_0041c52a;
          paVar14 = calloc(1,0x18);
          if (paVar14 == (accelerator_t *)0x0) break;
                    /* try { // try from 0041c4ea to 0041c4f6 has its CatchHandler @ 0041d1a2 */
          OT::kern::accelerator_t::accelerator_t(paVar14,phVar2,extraout_RDX_00,puVar20,uVar32);
          LOCK();
          bVar51 = *(long *)(lVar8 + 0x120) == 0;
          if (bVar51) {
            *(long *)(lVar8 + 0x120) = (long)paVar14;
          }
          UNLOCK();
          if (bVar51) goto LAB_0041c531;
          OT::kern::accelerator_t::~accelerator_t(paVar14);
          free(paVar14);
        }
        puVar20 = &_hb_NullPool;
        LOCK();
        bVar51 = *(long *)(lVar8 + 0x120) == 0;
        if (bVar51) {
          *(long *)(lVar8 + 0x120) = (long)&_hb_NullPool;
        }
        UNLOCK();
      } while (!bVar51);
LAB_0041c52a:
      paVar14 = (accelerator_t *)&_hb_NullPool;
LAB_0041c531:
      puVar20 = *(undefined4 **)paVar14;
      puVar13 = (ushort *)&_hb_NullPool;
      if (puVar20 == (undefined4 *)0x0) {
        puVar20 = &_hb_NullPool;
      }
      if (3 < (uint)puVar20[6]) {
        puVar13 = *(ushort **)(puVar20 + 4);
      }
      uVar16 = *puVar13 << 8 | *puVar13 >> 8;
      if (uVar16 == 1) {
        uVar28 = *(uint *)(puVar13 + 2);
        if (uVar28 == 0) goto LAB_0041c613;
        uVar27 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
        ;
        uVar28 = 1;
        if (1 < uVar27) {
          uVar28 = uVar27;
        }
        if ((puVar13[6] & 0x40) != 0) goto LAB_0041c7ca;
        puVar31 = (uint *)(puVar13 + 4);
        uVar6 = 0;
        do {
          if (uVar28 - 1 == uVar6) goto LAB_0041c613;
          uVar29 = *puVar31;
          puVar31 = (uint *)((long)puVar31 +
                            (ulong)(uVar29 >> 0x18 | (uVar29 & 0xff0000) >> 8 |
                                    (uVar29 & 0xff00) << 8 | uVar29 << 0x18));
          uVar6 = uVar6 + 1;
        } while ((puVar31[1] & 0x40) == 0);
      }
      else {
        if ((uVar16 != 0) || (uVar16 = puVar13[1], uVar16 == 0)) {
LAB_0041c613:
          uVar28 = (uint)*(ushort *)phVar46;
          goto LAB_0041c618;
        }
        uVar16 = uVar16 << 8 | uVar16 >> 8;
        uVar27 = (uint)uVar16;
        uVar28 = 1;
        if (1 < uVar16) {
          uVar28 = (uint)uVar16;
        }
        if ((*(byte *)((long)puVar13 + 9) & 4) != 0) {
LAB_0041c7ca:
          uVar28 = (uint)*(ushort *)phVar46;
          goto LAB_0041c49a;
        }
        puVar13 = puVar13 + 2;
        uVar6 = 0;
        do {
          if (uVar28 - 1 == uVar6) goto LAB_0041c613;
          puVar13 = (ushort *)((long)puVar13 + (ulong)(ushort)(puVar13[1] << 8 | puVar13[1] >> 8));
          uVar6 = uVar6 + 1;
        } while ((*(byte *)((long)puVar13 + 5) & 4) == 0);
      }
      uVar28 = (uint)*(ushort *)phVar46;
      if (uVar6 < uVar27) goto LAB_0041c49a;
    }
LAB_0041c618:
    bVar5 = false;
  }
  else {
LAB_0041c49a:
    uVar23 = 0;
  }
  *(ushort *)phVar46 = uVar23 | (ushort)uVar28 & 0xfeff;
  uVar16 = (ushort)((local_100 & 4) << 5);
  if (bVar5) {
    uVar16 = 0;
  }
  uVar27 = uVar28 & 0xfffffe7f;
  if ((uVar28 & 0x2000) == 0) {
    uVar27 = (uint)uVar23 | uVar28 & 0xfffffe7f;
  }
  uVar16 = (ushort)uVar27 | uVar16;
  *(ushort *)phVar46 = uVar16;
  if ((uVar27 & 2) != 0) {
                    /* try { // try from 0041c66d to 0041c6ae has its CatchHandler @ 0041d1d5 */
    psVar7 = (short *)hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
                      ::get((hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
                             *)(local_1a8 + 0x168));
    lVar38 = (ulong)(*psVar7 != 0 || psVar7[1] != 0) << 0xe;
    uVar16 = *(ushort *)phVar46;
  }
  *(ushort *)(this + 0xa8) = (ushort)lVar38 | uVar16 & 0xbfff;
  uVar37 = CONCAT71((int7)((ulong)lVar38 >> 8),1);
  if (*(code **)(*(long *)(this + 0x20) + 0x10) != (code *)0x0) {
    lVar8 = (**(code **)(*(long *)(this + 0x20) + 0x10))();
    *(long *)(this + 0x88) = lVar8;
    if (lVar8 == 0) {
      hb_ot_map_t::fini((hb_ot_map_t *)local_e8);
      uVar37 = 0;
      goto joined_r0x0041c6d3;
    }
  }
joined_r0x0041c6d3:
  if ((uint)local_130 != 0) {
    local_130 = local_130 & 0xffffffff;
    free(puStack_128);
  }
  local_130 = 0;
  puStack_128 = (void *)0x0;
  if ((uint)local_120 != 0) {
    local_120 = local_120 & 0xffffffff;
    free(pvStack_118);
  }
  local_120 = 0;
  pvStack_118 = (void *)0x0;
  if ((uint)local_110 == 0) {
    local_110 = 0;
    pvStack_108 = (void *)0x0;
  }
  else {
    local_110 = local_110 & 0xffffffff;
    free(pvStack_108);
    local_110 = 0;
    pvStack_108 = (void *)0x0;
    if ((uint)local_120 != 0) {
      local_120 = local_120 & 0xffffffff;
      free(pvStack_118);
    }
  }
  if ((uint)local_130 != 0) {
    pvStack_118 = (void *)0x0;
    local_120 = 0;
    local_130 = local_130 & 0xffffffff;
    free(puStack_128);
  }
  return uVar37;
}


