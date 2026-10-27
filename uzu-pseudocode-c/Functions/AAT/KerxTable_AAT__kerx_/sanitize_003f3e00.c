// Function : sanitize
// Namespace: AAT:KerxTable_AAT__kerx_
// Entry    : 003f3e00
// Prototype: undefined sanitize(hb_sanitize_context_t * param_1)
// Body     : 003f3e00 - 003f4f76


/* WARNING: Instruction at (ram,0x003fd1d5) overlaps instruction at (ram,0x003fd1d1)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x003fdfe5) */
/* WARNING: Removing unreachable block (ram,0x003fdfef) */
/* WARNING: Removing unreachable block (ram,0x003f5044) */
/* WARNING: Removing unreachable block (ram,0x003f5311) */
/* WARNING: Removing unreachable block (ram,0x003f5328) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AAT::KerxTable<AAT::kerx>::sanitize(hb_sanitize_context_t*) const */

hb_buffer_t *
AAT::KerxTable<AAT::kerx>::sanitize
          (ushort *param_1,hb_buffer_t *param_2,undefined8 param_3,undefined8 param_4,
          hb_buffer_t *param_5,undefined8 param_6,undefined8 param_7,hb_buffer_t *param_8,
          hb_ot_apply_context_t *param_9,ulong param_10,code *param_11,undefined1 param_12 [16],
          hb_buffer_t *param_13,uint param_14,undefined8 param_15,hb_ot_apply_context_t *param_16,
          undefined8 param_17,undefined8 param_18,undefined1 param_19 [16],undefined8 param_20,
          uint param_21,int param_22,undefined8 param_23,undefined8 param_24,hb_buffer_t *param_25,
          hb_sanitize_context_t param_26)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  hb_buffer_t hVar7;
  short sVar8;
  pthread_mutex_t *ppVar9;
  undefined *__dest;
  char cVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined8 uVar35;
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined1 auVar39 [14];
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  char cVar50;
  byte bVar51;
  ushort uVar52;
  uint uVar53;
  int iVar54;
  undefined4 uVar55;
  ulong uVar56;
  hb_font_t *phVar57;
  undefined8 uVar58;
  char *pcVar59;
  undefined4 *puVar60;
  ushort *puVar61;
  ulong *puVar62;
  hb_buffer_t *phVar63;
  hb_ot_apply_context_t *phVar64;
  undefined8 uVar65;
  int *piVar66;
  accelerator_t *this;
  accelerator_t *this_00;
  void *pvVar67;
  accelerator_t<OT::Layout::GPOS> *this_01;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  hb_buffer_t *phVar72;
  undefined1 (*pauVar73) [12];
  undefined1 (*pauVar74) [16];
  code *pcVar75;
  short *psVar76;
  uint *puVar77;
  long lVar78;
  undefined1 uVar79;
  ushort uVar80;
  int iVar81;
  undefined8 extraout_RDX;
  uint uVar82;
  undefined7 uVar85;
  hb_buffer_t *phVar83;
  long lVar84;
  uint uVar86;
  undefined2 uVar87;
  hb_font_t *this_02;
  ulong uVar88;
  undefined *__src;
  ushort *puVar89;
  hb_buffer_t *phVar90;
  ushort uVar91;
  hb_font_t *phVar92;
  GDEF *this_03;
  ushort *puVar93;
  void *pvVar94;
  undefined4 *puVar95;
  ulong uVar96;
  ulong uVar97;
  byte *pbVar98;
  uint uVar99;
  short *psVar100;
  hb_buffer_t *phVar101;
  hb_buffer_t *phVar102;
  uint uVar103;
  ulong in_R10;
  uint uVar104;
  long lVar105;
  hb_font_t *phVar106;
  uint *puVar107;
  ulong uVar108;
  uint *unaff_R14;
  hb_buffer_t *phVar109;
  ulong uVar110;
  hb_buffer_t *unaff_R15;
  TrackData *pTVar111;
  bool bVar112;
  bool bVar113;
  bool bVar114;
  float fVar115;
  undefined8 extraout_XMM0_Qa_30;
  undefined8 extraout_XMM0_Qa_31;
  undefined1 in_XMM0 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 extraout_XMM0_05 [16];
  undefined1 extraout_XMM0_06 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 extraout_XMM0_07 [16];
  undefined1 extraout_XMM0_08 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar129 [16];
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_15;
  float fVar116;
  undefined8 extraout_XMM0_Qa_28;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined1 extraout_XMM0_09 [16];
  undefined1 extraout_XMM0_10 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined1 extraout_XMM0_11 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar133 [16];
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined8 extraout_XMM0_Qa_23;
  undefined8 extraout_XMM0_Qa_24;
  undefined8 extraout_XMM0_Qa_25;
  undefined8 extraout_XMM0_Qa_26;
  undefined8 extraout_XMM0_Qa_27;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined8 extraout_XMM0_Qa_29;
  undefined8 extraout_XMM0_Qb_07;
  undefined1 extraout_XMM0_12 [16];
  undefined1 extraout_XMM0_13 [16];
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined1 extraout_XMM0_14 [16];
  undefined8 extraout_XMM0_Qb_11;
  undefined1 extraout_XMM0_15 [16];
  undefined1 extraout_var [12];
  undefined1 auVar137 [16];
  undefined1 extraout_XMM0_16 [16];
  undefined1 extraout_XMM0_17 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  undefined8 extraout_XMM1_Qa_11;
  undefined8 extraout_XMM1_Qa_12;
  undefined8 extraout_XMM1_Qa_13;
  undefined8 extraout_XMM1_Qa_14;
  undefined8 extraout_XMM1_Qa_15;
  undefined8 extraout_XMM1_Qa_16;
  undefined8 extraout_XMM1_Qa_17;
  undefined8 extraout_XMM1_Qa_18;
  undefined8 extraout_XMM1_Qa_19;
  undefined8 extraout_XMM1_Qa_20;
  ulong extraout_XMM1_Qa_21;
  undefined8 extraout_XMM1_Qa_22;
  undefined8 extraout_XMM1_Qa_23;
  undefined8 extraout_XMM1_Qa_24;
  undefined8 extraout_XMM1_Qa_25;
  undefined8 extraout_XMM1_Qa_26;
  undefined8 extraout_XMM1_Qa_28;
  undefined8 extraout_XMM1_Qa_29;
  undefined8 extraout_XMM1_Qa_30;
  undefined1 in_XMM1 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  undefined8 extraout_XMM1_Qb_08;
  undefined8 extraout_XMM1_Qb_09;
  undefined8 extraout_XMM1_Qb_10;
  undefined8 extraout_XMM1_Qb_11;
  undefined8 extraout_XMM1_Qb_12;
  undefined8 extraout_XMM1_Qb_13;
  undefined8 extraout_XMM1_Qb_14;
  undefined8 extraout_XMM1_Qb_15;
  undefined8 extraout_XMM1_Qb_16;
  undefined8 extraout_XMM1_Qb_17;
  undefined8 extraout_XMM1_Qb_18;
  undefined1 auVar146 [16];
  undefined8 extraout_XMM1_Qb_19;
  undefined8 extraout_XMM1_Qb_20;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined8 extraout_XMM1_Qa_27;
  undefined8 extraout_XMM1_Qb_21;
  undefined8 extraout_XMM1_Qb_22;
  undefined8 extraout_XMM1_Qb_23;
  undefined8 extraout_XMM1_Qb_24;
  undefined8 extraout_XMM1_Qb_25;
  undefined8 extraout_XMM1_Qb_26;
  undefined8 extraout_XMM1_Qb_27;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined8 extraout_XMM1_Qb_28;
  undefined8 extraout_XMM1_Qb_29;
  undefined8 extraout_XMM1_Qb_30;
  undefined1 auVar152 [14];
  undefined1 in_XMM2 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar153 [14];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar154 [14];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar155 [14];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  uint uVar176;
  undefined1 auVar177 [14];
  undefined1 in_XMM3 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar178 [14];
  undefined1 auVar186 [16];
  undefined1 auVar179 [14];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar180 [14];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar204 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined8 uVar209;
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  code *in_stack_000000f0;
  void *in_stack_00000110;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  ulong in_stack_00000128;
  undefined8 in_stack_00000130;
  uint uStack0000000000000138;
  uint uStack000000000000013c;
  undefined8 in_stack_00000140;
  byte in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  int iStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined8 in_stack_00000170;
  undefined8 uStack0000000000000178;
  undefined8 in_stack_00000180;
  uint uStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined1 in_stack_00000190 [16];
  undefined1 uStack00000000000001a0;
  undefined1 auStack00000000000001a4 [16];
  undefined1 uStack00000000000001b4;
  undefined1 uStack00000000000001b5;
  long in_stack_000001b8;
  hb_font_t *phStack_b0;
  accelerator_t<OT::Layout::GSUB> *paStack_a8;
  hb_buffer_t *phStack_a0;
  hb_buffer_t *phStack_98;
  hb_buffer_t *phStack_90;
  hb_buffer_t *phStack_88;
  hb_buffer_t *phStack_80;
  hb_font_t *phStack_78;
  hb_buffer_t *phStack_68;
  uint uStack_60;
  uint local_58;
  hb_buffer_t *local_50;
  uint uStack_44;
  ulong local_40;
  ulong local_38;
  
  if (((ulong)((long)param_1 + (2 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18)) &&
     (uVar52 = *param_1 << 8 | *param_1 >> 8, 1 < uVar52)) {
    phVar83 = *(hb_buffer_t **)(param_2 + 8);
    uVar56 = (ulong)*(uint *)(param_2 + 0x18);
    if ((ulong)((long)param_1 + (8 - (long)phVar83)) <= uVar56) {
      this_02 = (hb_font_t *)(param_1 + 4);
      uVar103 = *(uint *)(param_1 + 2);
      uVar104 = uVar103 >> 0x18 | (uVar103 & 0xff0000) >> 8 | (uVar103 & 0xff00) << 8 |
                uVar103 << 0x18;
      uVar108 = (ulong)uVar104;
      if (uVar103 != 0) {
        local_50 = param_2 + 8;
        uVar53 = uVar104 - 1;
        phVar101 = param_2 + 0x1c;
        local_58 = 1;
        if (1 < uVar104) {
          local_58 = uVar104;
        }
        local_38 = 0;
        uVar110 = uVar108;
LAB_003f3f0e:
        phVar64 = (hb_ot_apply_context_t *)CONCAT44(param_9._4_4_,(uint)param_9);
        uVar209 = 0;
        auVar210._8_8_ = in_XMM1._0_8_;
        auVar210._0_8_ = in_XMM0._0_8_;
        puVar107 = (uint *)(this_02 + 0xc);
        if ((ulong)((long)puVar107 - (long)phVar83) <= uVar56) {
          phVar106 = *(hb_font_t **)(*(long *)(param_2 + 0x30) + 0x10);
          *(hb_font_t **)(param_2 + 8) = phVar106;
          uVar104 = *(uint *)(*(long *)(param_2 + 0x30) + 0x18);
          uVar56 = (ulong)uVar104;
          phVar92 = phVar106 + uVar56;
          *(hb_font_t **)(param_2 + 0x10) = phVar92;
          *(uint *)(param_2 + 0x18) = uVar104;
          if ((uint)local_38 < uVar53) {
            uVar56 = (long)phVar92 - (long)this_02;
            uVar85 = (undefined7)((ulong)phVar83 >> 8);
            phVar83 = (hb_buffer_t *)CONCAT71(uVar85,phVar92 < this_02 || uVar56 == 0);
            if (this_02 < phVar106) {
              phVar83 = (hb_buffer_t *)CONCAT71(uVar85,1);
            }
            else if (phVar92 >= this_02 && uVar56 != 0) {
              *(hb_font_t **)(param_2 + 8) = this_02;
              uVar104 = *(uint *)this_02;
              uVar88 = (ulong)(uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8
                              | uVar104 << 0x18);
              if (uVar88 < uVar56) {
                uVar56 = uVar88;
              }
              *(hb_font_t **)(param_2 + 0x10) = this_02 + uVar56;
              *(int *)(param_2 + 0x18) = (int)uVar56;
              uVar56 = uVar56 & 0xffffffff;
              phVar106 = this_02;
              goto LAB_003f3f98;
            }
            *(undefined1 (*) [16])local_50 = (undefined1  [16])0x0;
            *(undefined4 *)(param_2 + 0x18) = 0;
            uVar56 = 0;
            phVar106 = (hb_font_t *)0x0;
          }
LAB_003f3f98:
          if (uVar56 < (ulong)((long)puVar107 - (long)phVar106)) goto LAB_003f4e44;
          uVar104 = *(uint *)this_02;
          uVar104 = uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8 |
                    uVar104 << 0x18;
          if (uVar104 < 0xc) goto LAB_003f4e44;
          uVar56 = *(ulong *)(param_2 + 8);
          phVar72 = (hb_buffer_t *)(this_02 + -uVar56);
          uVar68 = *(uint *)(param_2 + 0x18);
          phVar109 = (hb_buffer_t *)(ulong)uVar68;
          if (((phVar109 < phVar72) ||
              (uVar71 = (uint)this_02, *(int *)(param_2 + 0x10) - uVar71 < uVar104)) ||
             (iVar81 = *(int *)phVar101, *(uint *)phVar101 = iVar81 - uVar104,
             (int)(iVar81 - uVar104) < 1)) goto LAB_003f4e44;
          uVar104 = *(uint *)(this_02 + 4) >> 0x18;
          if (6 < (byte)(*(uint *)(this_02 + 4) >> 0x18)) goto LAB_003f3ed0;
          iVar81 = 0x5e02b0;
          uVar88 = (ulong)*(int *)(&DAT_005e02b0 + (ulong)uVar104 * 4);
          bVar112 = 0xffffffffffa1fd4f < uVar88;
          __src = &DAT_005e02b0 + uVar88;
          cVar50 = (char)uVar68;
          uStack_44 = (uint)((ulong)param_1 >> 0x20);
          phVar102 = phVar101;
          phVar90 = param_2;
          phVar92 = this_02;
          switch(uVar104) {
          case 0:
            if (phVar72 + 0x14 <= phVar109) {
              uVar104 = *(uint *)(this_02 + 0xc);
              lVar84 = (ulong)(uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8
                              | uVar104 << 0x18) * 6;
              uVar104 = (uint)lVar84;
              if ((((int)((ulong)lVar84 >> 0x20) == 0) &&
                  ((ulong)((long)(this_02 + 0x1c) - *(long *)(param_2 + 8)) <=
                   (ulong)*(uint *)(param_2 + 0x18))) &&
                 (uVar104 <= (uint)(*(int *)(param_2 + 0x10) - (int)(this_02 + 0x1c)))) {
LAB_003f3ec0:
                iVar81 = *(int *)phVar101 - uVar104;
                *(int *)phVar101 = iVar81;
joined_r0x003f4e19:
                if (0 < iVar81) goto LAB_003f3ed0;
              }
            }
            break;
          case 1:
            if ((((phVar72 + 0x20 <= phVar109) &&
                 ((hb_buffer_t *)((long)puVar107 + (0x10 - uVar56)) <= phVar109)) &&
                (uVar104 = *puVar107,
                3 < (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8 |
                    uVar104 << 0x18))) &&
               (this_02 + (0x14 - *(long *)(param_2 + 8)) <=
                (hb_font_t *)(ulong)*(uint *)(param_2 + 0x18))) {
              uVar104 = *(uint *)(this_02 + 0x10);
              uVar56 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                                 ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                  ((long)puVar107 +
                                  (ulong)(uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                          (uVar104 & 0xff00) << 8 | uVar104 << 0x18)),(long)param_2)
              ;
              auVar149 = _DAT_006524b0;
              auVar210 = _DAT_005de020;
              if ((char)uVar56 != '\0') {
                uVar104 = *puVar107;
                uVar104 = uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8 |
                          uVar104 << 0x18;
                in_R10 = (ulong)uVar104;
                if (-1 < (int)uVar104) {
                  uVar68 = *(uint *)(this_02 + 0x14);
                  uVar56 = (ulong)(uVar68 >> 0x18 | (uVar68 & 0xff0000) >> 8 |
                                   (uVar68 & 0xff00) << 8 | uVar68 << 0x18);
                  phStack_b0 = (hb_font_t *)((long)puVar107 + uVar56);
                  uVar68 = *(uint *)(this_02 + 0x18);
                  uVar88 = (ulong)(uVar68 >> 0x18 | (uVar68 & 0xff0000) >> 8 |
                                   (uVar68 & 0xff00) << 8 | uVar68 << 0x18);
                  phVar92 = (hb_font_t *)((long)puVar107 + uVar88);
                  phStack_68 = (hb_buffer_t *)(this_02 + uVar88 + 0x14);
                  phStack_78 = this_02 + uVar88 + 0x12;
                  phStack_80 = (hb_buffer_t *)(2 - (long)phStack_68);
                  phStack_90 = (hb_buffer_t *)(this_02 + uVar56 + 0xc);
                  phStack_88 = (hb_buffer_t *)(this_02 + uVar56 + 0x14);
                  phStack_a0 = (hb_buffer_t *)(this_02 + uVar56 + 0x14);
                  phStack_98 = (hb_buffer_t *)(this_02 + uVar88 + 0x24);
                  uVar110 = 0;
                  unaff_R14 = (uint *)0x0;
                  unaff_R15 = (hb_buffer_t *)0x0;
                  in_XMM0 = extraout_XMM0;
                  do {
                    param_5 = unaff_R15;
                    uVar71 = (uint)param_5;
                    iVar81 = (int)uVar110;
                    uVar68 = (uint)unaff_R14;
                    unaff_R15 = param_5;
                    if (iVar81 <= (int)uVar68) {
                      uVar82 = uVar68 + 1;
                      lVar84 = (ulong)uVar82 * (ulong)(uVar104 * 2);
                      uVar86 = (uint)lVar84;
                      if ((((int)((ulong)lVar84 >> 0x20) != 0) ||
                          ((ulong)*(uint *)(param_2 + 0x18) <
                           (ulong)((long)phStack_b0 - *(long *)(param_2 + 8)))) ||
                         ((uint)(*(int *)(param_2 + 0x10) - (int)phStack_b0) < uVar86))
                      goto LAB_003f4e44;
                      iVar54 = *(int *)phVar101 - uVar86;
                      *(int *)phVar101 = iVar54;
                      if (((iVar54 < 1) ||
                          (iVar54 = ~uVar68 + iVar81 + iVar54, *(int *)phVar101 = iVar54, iVar54 < 1
                          )) || ((int)(uVar82 * in_R10 >> 0x20) != 0)) goto LAB_003f4e44;
                      uVar86 = uVar82 * uVar104;
                      if (iVar81 * uVar104 < uVar86) {
                        uVar56 = (ulong)(iVar81 * uVar104);
                        phVar106 = phStack_b0 + uVar56 * 2;
                        phVar83 = phStack_90 + (ulong)uVar86 * 2;
                        if (phStack_90 + (ulong)uVar86 * 2 < phStack_90 + uVar56 * 2 + 2) {
                          phVar83 = phStack_90 + uVar56 * 2 + 2;
                        }
                        if ((hb_buffer_t *)0xd < phVar83 + (7 - (long)(phStack_88 + uVar56 * 2))) {
                          uVar97 = ((ulong)(phVar83 + (7 - (long)(phStack_88 + uVar56 * 2))) >> 1) +
                                   1;
                          uVar96 = uVar97 & 0xfffffffffffffff8;
                          auVar118._4_4_ = uVar71;
                          auVar118._0_4_ = uVar71;
                          auVar118._8_4_ = uVar71;
                          auVar118._12_4_ = uVar71;
                          uVar110 = 0;
                          auVar175 = auVar118;
                          do {
                            uVar5 = *(ulong *)(phStack_a0 + uVar110 * 2 + uVar56 * 2 + -8);
                            auVar181._8_8_ = 0;
                            auVar181._0_8_ = uVar5;
                            uVar6 = *(ulong *)(phStack_a0 + uVar110 * 2 + uVar56 * 2);
                            auVar156._8_8_ = 0;
                            auVar156._0_8_ = uVar6;
                            auVar177._0_2_ = (ushort)uVar5 >> 8;
                            auVar177._2_2_ = (ushort)(uVar5 >> 0x10) >> 8;
                            auVar177._4_2_ = (ushort)(uVar5 >> 0x20) >> 8;
                            auVar177._6_2_ = (ushort)(uVar5 >> 0x38);
                            auVar177._8_6_ = 0;
                            auVar196 = psllw(auVar181,8);
                            auVar177 = auVar196._0_14_ | auVar177;
                            auVar152._0_2_ = (ushort)uVar6 >> 8;
                            auVar152._2_2_ = (ushort)(uVar6 >> 0x10) >> 8;
                            auVar152._4_2_ = (ushort)(uVar6 >> 0x20) >> 8;
                            auVar152._6_2_ = (ushort)(uVar6 >> 0x38);
                            auVar152._8_6_ = 0;
                            auVar196 = psllw(auVar156,8);
                            auVar152 = auVar196._0_14_ | auVar152;
                            auVar11._10_2_ = 0;
                            auVar11._0_10_ = auVar177._0_10_;
                            auVar11._12_2_ = auVar177._6_2_;
                            auVar19._8_2_ = auVar177._4_2_;
                            auVar19._0_8_ = auVar177._0_8_;
                            auVar19._10_4_ = auVar11._10_4_;
                            auVar36._6_8_ = 0;
                            auVar36._0_6_ = auVar19._8_6_;
                            auVar27._4_2_ = auVar177._2_2_;
                            auVar27._0_4_ = auVar177._0_4_;
                            auVar27._6_8_ = SUB148(auVar36 << 0x40,6);
                            uVar176 = auVar177._0_4_ & 0xffff;
                            auVar12._10_2_ = 0;
                            auVar12._0_10_ = auVar152._0_10_;
                            auVar12._12_2_ = auVar152._6_2_;
                            auVar20._8_2_ = auVar152._4_2_;
                            auVar20._0_8_ = auVar152._0_8_;
                            auVar20._10_4_ = auVar12._10_4_;
                            auVar37._6_8_ = 0;
                            auVar37._0_6_ = auVar20._8_6_;
                            auVar28._4_2_ = auVar152._2_2_;
                            auVar28._0_4_ = auVar152._0_4_;
                            auVar28._6_8_ = SUB148(auVar37 << 0x40,6);
                            uVar99 = auVar152._0_4_ & 0xffff;
                            in_XMM4._0_4_ = uVar176 + 1;
                            in_XMM4._4_4_ = auVar27._4_4_ + 1;
                            uVar69 = auVar11._10_4_ >> 0x10;
                            in_XMM4._8_4_ = auVar19._8_4_ + 1;
                            in_XMM4._12_4_ = uVar69 + 1;
                            in_XMM5._0_4_ = uVar99 + 1;
                            in_XMM5._4_4_ = auVar28._4_4_ + 1;
                            uVar70 = auVar12._10_4_ >> 0x10;
                            in_XMM5._8_4_ = auVar20._8_4_ + 1;
                            in_XMM5._12_4_ = uVar70 + 1;
                            auVar196 = auVar118 ^ auVar149;
                            auVar117._0_4_ = -(uint)((int)(uVar176 + 0x80000001) < auVar196._0_4_);
                            auVar117._4_4_ = -(uint)(auVar27._4_4_ + -0x7fffffff < auVar196._4_4_);
                            auVar117._8_4_ = -(uint)(auVar19._8_4_ + -0x7fffffff < auVar196._8_4_);
                            auVar117._12_4_ = -(uint)((int)(uVar69 + 0x80000001) < auVar196._12_4_);
                            in_XMM6 = auVar118 & auVar117;
                            auVar118 = ~auVar117 & in_XMM4 | in_XMM6;
                            auVar196 = auVar175 ^ auVar149;
                            auVar138._0_4_ = -(uint)((int)(uVar99 + 0x80000001) < auVar196._0_4_);
                            auVar138._4_4_ = -(uint)(auVar28._4_4_ + -0x7fffffff < auVar196._4_4_);
                            auVar138._8_4_ = -(uint)(auVar20._8_4_ + -0x7fffffff < auVar196._8_4_);
                            auVar138._12_4_ = -(uint)((int)(uVar70 + 0x80000001) < auVar196._12_4_);
                            auVar175 = ~auVar138 & in_XMM5 | auVar175 & auVar138;
                            uVar110 = uVar110 + 8;
                          } while (uVar96 != uVar110);
                          auVar196 = auVar175 ^ auVar149;
                          auVar190 = auVar118 ^ auVar149;
                          auVar182._0_4_ = -(uint)(auVar196._0_4_ < auVar190._0_4_);
                          auVar182._4_4_ = -(uint)(auVar196._4_4_ < auVar190._4_4_);
                          auVar182._8_4_ = -(uint)(auVar196._8_4_ < auVar190._8_4_);
                          auVar182._12_4_ = -(uint)(auVar196._12_4_ < auVar190._12_4_);
                          auVar190 = ~auVar182 & auVar175 | auVar118 & auVar182;
                          auVar119._0_8_ = auVar190._8_8_;
                          auVar119._8_4_ = auVar190._8_4_;
                          auVar119._12_4_ = auVar190._12_4_;
                          auVar175 = auVar190 ^ auVar149;
                          auVar196 = auVar119 ^ auVar149;
                          auVar139._0_4_ = -(uint)(auVar196._0_4_ < auVar175._0_4_);
                          auVar139._4_4_ = -(uint)(auVar196._4_4_ < auVar175._4_4_);
                          auVar139._8_4_ = -(uint)(auVar196._8_4_ < auVar175._8_4_);
                          auVar139._12_4_ = -(uint)(auVar196._12_4_ < auVar175._12_4_);
                          auVar175 = ~auVar139 & auVar119 | auVar190 & auVar139;
                          uVar55 = auVar175._4_4_;
                          in_XMM0._4_4_ = uVar55;
                          in_XMM0._0_4_ = uVar55;
                          in_XMM0._8_4_ = uVar55;
                          in_XMM0._12_4_ = uVar55;
                          auVar196 = auVar175 ^ auVar149;
                          in_XMM3 = in_XMM0 ^ auVar149;
                          auVar157._0_4_ = -(uint)(in_XMM3._0_4_ < auVar196._0_4_);
                          auVar157._4_4_ = -(uint)(in_XMM3._4_4_ < auVar196._4_4_);
                          auVar157._8_4_ = -(uint)(in_XMM3._8_4_ < auVar196._8_4_);
                          auVar157._12_4_ = -(uint)(in_XMM3._12_4_ < auVar196._12_4_);
                          in_XMM1 = auVar175 & auVar157;
                          in_XMM2 = ~auVar157 & in_XMM0 | in_XMM1;
                          unaff_R15 = (hb_buffer_t *)(ulong)in_XMM2._0_4_;
                          if (uVar97 == uVar96) {
                            uVar110 = (ulong)uVar82;
                            goto LAB_003f43f5;
                          }
                          phVar106 = phVar106 + uVar96 * 2;
                        }
                        do {
                          uVar69 = (ushort)(*(ushort *)phVar106 << 8 | *(ushort *)phVar106 >> 8) + 1
                          ;
                          phVar83 = (hb_buffer_t *)(ulong)uVar69;
                          if (uVar69 <= (uint)unaff_R15) {
                            phVar83 = unaff_R15;
                          }
                          phVar106 = phVar106 + 2;
                          unaff_R15 = phVar83;
                        } while (phVar106 < phStack_b0 + (ulong)uVar86 * 2);
                      }
                      uVar110 = (ulong)uVar82;
                    }
LAB_003f43f5:
                    uVar86 = (uint)((long)unaff_R15 * 6);
                    if ((((int)((ulong)((long)unaff_R15 * 6) >> 0x20) != 0) ||
                        ((ulong)*(uint *)(param_2 + 0x18) <
                         (ulong)((long)phVar92 - *(long *)(param_2 + 8)))) ||
                       ((uint)(*(int *)(param_2 + 0x10) - (int)phVar92) < uVar86))
                    goto LAB_003f4e44;
                    iVar81 = *(int *)phVar101 - uVar86;
                    *(int *)phVar101 = iVar81;
                    if ((iVar81 < 1) ||
                       (iVar81 = iVar81 + (uVar71 - (uint)unaff_R15), *(int *)phVar101 = iVar81,
                       iVar81 < 1)) goto LAB_003f4e44;
                    if (uVar71 < (uint)unaff_R15) {
                      lVar84 = (long)param_5 * 6;
                      phVar106 = this_02 + (long)unaff_R15 * 6 + uVar88 + 0xc;
                      if (this_02 + (long)unaff_R15 * 6 + uVar88 + 0xc < phStack_78 + lVar84) {
                        phVar106 = phStack_78 + lVar84;
                      }
                      uVar97 = (ulong)((hb_buffer_t *)(phVar106 + 2) != phStack_68 + lVar84);
                      phVar57 = phVar92 + lVar84;
                      uVar56 = uVar97 + (ulong)(phVar106 + (long)phStack_80 +
                                               ((long)param_5 * -6 - uVar97)) / 6 + 1;
                      if (8 < uVar56) {
                        uVar96 = (ulong)((uint)uVar56 & 7);
                        if (uVar96 == 0) {
                          uVar96 = 8;
                        }
                        auVar121._4_4_ = uVar68;
                        auVar121._0_4_ = uVar68;
                        auVar121._8_4_ = uVar68;
                        auVar121._12_4_ = uVar68;
                        lVar105 = (uVar96 - (uVar97 + 1)) -
                                  (ulong)(phVar106 + (long)phStack_80 +
                                         ((long)param_5 * -6 - uVar97)) / 6;
                        phVar83 = phStack_98 + lVar84;
                        auVar175 = auVar121;
                        do {
                          auVar158._8_8_ = 0;
                          auVar158._0_8_ = *(ulong *)(phVar83 + -8);
                          auVar183._8_8_ = 0;
                          auVar183._0_8_ = *(ulong *)(phVar83 + 0x10);
                          in_XMM6 = ~auVar210 & auVar158;
                          auVar196 = *(undefined1 (*) [16])(phVar83 + -0x18) & auVar210 | in_XMM6;
                          auVar159._4_4_ = auVar196._8_4_;
                          auVar159._0_4_ = auVar196._0_4_;
                          auVar159._8_4_ = auVar196._4_4_;
                          auVar159._12_4_ = auVar196._12_4_;
                          auVar196 = pshufhw(auVar159,auVar159,0xe6);
                          auVar160._0_4_ = auVar196._0_4_;
                          auVar160._8_4_ = auVar196._8_4_;
                          auVar160._12_4_ = auVar196._12_4_;
                          auVar160._4_4_ = auVar160._8_4_;
                          auVar196 = pshuflw(auVar160,auVar160,0x6c);
                          in_XMM5 = *(undefined1 (*) [16])phVar83 & auVar210 | ~auVar210 & auVar183;
                          auVar184._4_4_ = in_XMM5._8_4_;
                          auVar184._0_4_ = in_XMM5._0_4_;
                          auVar184._8_4_ = in_XMM5._4_4_;
                          auVar184._12_4_ = in_XMM5._12_4_;
                          auVar190 = pshufhw(auVar184,auVar184,0xe6);
                          auVar185._0_4_ = auVar190._0_4_;
                          auVar185._8_4_ = auVar190._8_4_;
                          auVar185._12_4_ = auVar190._12_4_;
                          auVar185._4_4_ = auVar185._8_4_;
                          auVar190 = pshuflw(auVar185,auVar185,0x6c);
                          auVar153._0_2_ = auVar196._0_2_ >> 8;
                          auVar153._2_2_ = auVar196._2_2_ >> 8;
                          auVar153._4_2_ = auVar196._4_2_ >> 8;
                          auVar153._6_2_ = auVar196._6_2_ >> 8;
                          auVar153._8_2_ = auVar196._8_2_ >> 8;
                          auVar153._10_2_ = auVar196._10_2_ >> 8;
                          auVar153._12_2_ = auVar196._12_2_ >> 8;
                          auVar196 = psllw(auVar196,8);
                          auVar153 = auVar196._0_14_ | auVar153;
                          auVar178._0_2_ = auVar190._0_2_ >> 8;
                          auVar178._2_2_ = auVar190._2_2_ >> 8;
                          auVar178._4_2_ = auVar190._4_2_ >> 8;
                          auVar178._6_2_ = auVar190._6_2_ >> 8;
                          auVar178._8_2_ = auVar190._8_2_ >> 8;
                          auVar178._10_2_ = auVar190._10_2_ >> 8;
                          auVar178._12_2_ = auVar190._12_2_ >> 8;
                          auVar196 = psllw(auVar190,8);
                          auVar178 = auVar196._0_14_ | auVar178;
                          auVar13._10_2_ = 0;
                          auVar13._0_10_ = auVar153._0_10_;
                          auVar13._12_2_ = auVar153._6_2_;
                          auVar21._8_2_ = auVar153._4_2_;
                          auVar21._0_8_ = auVar153._0_8_;
                          auVar21._10_4_ = auVar13._10_4_;
                          auVar38._6_8_ = 0;
                          auVar38._0_6_ = auVar21._8_6_;
                          auVar29._4_2_ = auVar153._2_2_;
                          auVar29._0_4_ = auVar153._0_4_;
                          auVar29._6_8_ = SUB148(auVar38 << 0x40,6);
                          auVar161._0_4_ = auVar153._0_4_ & 0xffff;
                          auVar161._4_10_ = auVar29._4_10_;
                          auVar161._14_2_ = 0;
                          auVar14._10_2_ = 0;
                          auVar14._0_10_ = auVar178._0_10_;
                          auVar14._12_2_ = auVar178._6_2_;
                          auVar22._8_2_ = auVar178._4_2_;
                          auVar22._0_8_ = auVar178._0_8_;
                          auVar22._10_4_ = auVar14._10_4_;
                          auVar39._6_8_ = 0;
                          auVar39._0_6_ = auVar22._8_6_;
                          auVar30._4_2_ = auVar178._2_2_;
                          auVar30._0_4_ = auVar178._0_4_;
                          auVar30._6_8_ = SUB148(auVar39 << 0x40,6);
                          in_XMM3._0_4_ = auVar178._0_4_ & 0xffff;
                          in_XMM3._4_10_ = auVar30._4_10_;
                          in_XMM3._14_2_ = 0;
                          auVar120._0_4_ = -(uint)((int)auVar161._0_4_ < auVar121._0_4_);
                          auVar120._4_4_ = -(uint)(auVar29._4_4_ < auVar121._4_4_);
                          auVar120._8_4_ = -(uint)(auVar21._8_4_ < auVar121._8_4_);
                          auVar120._12_4_ = -(uint)((int)(auVar13._10_4_ >> 0x10) < auVar121._12_4_)
                          ;
                          in_XMM4 = auVar121 & auVar120;
                          auVar121 = ~auVar120 & auVar161 | in_XMM4;
                          auVar140._0_4_ = -(uint)((int)in_XMM3._0_4_ < auVar175._0_4_);
                          auVar140._4_4_ = -(uint)(auVar30._4_4_ < auVar175._4_4_);
                          auVar140._8_4_ = -(uint)(auVar22._8_4_ < auVar175._8_4_);
                          auVar140._12_4_ = -(uint)((int)(auVar14._10_4_ >> 0x10) < auVar175._12_4_)
                          ;
                          auVar175 = ~auVar140 & in_XMM3 | auVar175 & auVar140;
                          phVar83 = phVar83 + 0x30;
                          lVar105 = lVar105 + 8;
                        } while (lVar105 != 0);
                        phVar57 = phVar57 + (uVar56 - uVar96) * 6;
                        auVar162._0_4_ = -(uint)(auVar175._0_4_ < auVar121._0_4_);
                        auVar162._4_4_ = -(uint)(auVar175._4_4_ < auVar121._4_4_);
                        auVar162._8_4_ = -(uint)(auVar175._8_4_ < auVar121._8_4_);
                        auVar162._12_4_ = -(uint)(auVar175._12_4_ < auVar121._12_4_);
                        auVar175 = ~auVar162 & auVar175 | auVar121 & auVar162;
                        auVar122._0_8_ = auVar175._8_8_;
                        auVar122._8_4_ = auVar175._8_4_;
                        auVar122._12_4_ = auVar175._12_4_;
                        auVar141._0_4_ = -(uint)(auVar175._8_4_ < auVar175._0_4_);
                        auVar141._4_4_ = -(uint)(auVar175._12_4_ < auVar175._4_4_);
                        auVar141._8_8_ = 0;
                        auVar175 = ~auVar141 & auVar122 | auVar175 & auVar141;
                        iVar81 = auVar175._4_4_;
                        in_XMM0._4_4_ = iVar81;
                        in_XMM0._0_4_ = iVar81;
                        in_XMM0._8_4_ = iVar81;
                        in_XMM0._12_4_ = iVar81;
                        auVar163._0_4_ = -(uint)(iVar81 < auVar175._0_4_);
                        auVar163._4_4_ = 0;
                        auVar163._8_4_ = -(uint)(iVar81 < auVar175._8_4_);
                        auVar163._12_4_ = -(uint)(iVar81 < auVar175._12_4_);
                        in_XMM1 = auVar175 & auVar163;
                        in_XMM2 = ~auVar163 & in_XMM0 | in_XMM1;
                        unaff_R14 = (uint *)(ulong)in_XMM2._0_4_;
                      }
                      do {
                        uVar52 = *(ushort *)phVar57 << 8 | *(ushort *)phVar57 >> 8;
                        if ((int)unaff_R14 < (int)(uint)uVar52) {
                          unaff_R14 = (uint *)(ulong)uVar52;
                        }
                        phVar57 = phVar57 + 6;
                      } while (phVar57 < phVar92 + (long)unaff_R15 * 6);
                    }
                  } while ((int)uVar110 <= (int)unaff_R14);
                  goto LAB_003f3ed0;
                }
              }
            }
            break;
          case 2:
            if ((phVar72 + 0x1c <= phVar109) && (phVar72 + 0x14 <= phVar109)) {
              uVar104 = *(uint *)(this_02 + 0x10);
              uVar56 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                                 ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                  (this_02 +
                                  (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                   (uVar104 & 0xff00) << 8 | uVar104 << 0x18)),(long)param_2);
              if (((char)uVar56 != '\0') &&
                 (this_02 + (0x18 - *(long *)(param_2 + 8)) <=
                  (hb_font_t *)(ulong)*(uint *)(param_2 + 0x18))) {
                uVar104 = *(uint *)(this_02 + 0x14);
                uVar56 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                                   ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                    (this_02 +
                                    (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                     (uVar104 & 0xff00) << 8 | uVar104 << 0x18)),(long)param_2);
                if (((char)uVar56 != '\0') &&
                   ((ulong)((long)this_02 - *(long *)(param_2 + 8)) <=
                    (ulong)*(uint *)(param_2 + 0x18))) {
                  uVar104 = *(uint *)(this_02 + 0x18);
                  uVar104 = uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8 |
                            uVar104 << 0x18;
                  in_XMM0 = extraout_XMM0_00;
                  if (uVar104 <= *(int *)(param_2 + 0x10) - uVar71) goto LAB_003f3ec0;
                }
              }
            }
            break;
          case 3:
          case 5:
            goto LAB_003f3ed0;
          case 4:
            if ((((phVar72 + 0x20 <= phVar109) &&
                 ((hb_buffer_t *)((long)puVar107 + (0x10 - uVar56)) <= phVar109)) &&
                (uVar104 = *puVar107,
                3 < (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8 |
                    uVar104 << 0x18))) &&
               (this_02 + (0x14 - *(long *)(param_2 + 8)) <=
                (hb_font_t *)(ulong)*(uint *)(param_2 + 0x18))) {
              uVar104 = *(uint *)(this_02 + 0x10);
              uVar56 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                                 ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                  ((long)puVar107 +
                                  (ulong)(uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                          (uVar104 & 0xff00) << 8 | uVar104 << 0x18)),(long)param_2)
              ;
              auVar149 = _DAT_006524b0;
              auVar210 = _DAT_005de020;
              if ((char)uVar56 != '\0') {
                uVar104 = *puVar107;
                uVar104 = uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8 |
                          uVar104 << 0x18;
                in_R10 = (ulong)uVar104;
                if (-1 < (int)uVar104) {
                  uVar68 = *(uint *)(this_02 + 0x14);
                  uVar56 = (ulong)(uVar68 >> 0x18 | (uVar68 & 0xff0000) >> 8 |
                                   (uVar68 & 0xff00) << 8 | uVar68 << 0x18);
                  phVar92 = (hb_font_t *)((long)puVar107 + uVar56);
                  uVar68 = *(uint *)(this_02 + 0x18);
                  uVar88 = (ulong)(uVar68 >> 0x18 | (uVar68 & 0xff0000) >> 8 |
                                   (uVar68 & 0xff00) << 8 | uVar68 << 0x18);
                  phVar106 = (hb_font_t *)((long)puVar107 + uVar88);
                  phStack_68 = (hb_buffer_t *)CONCAT44(phStack_68._4_4_,uVar104 * 2);
                  phStack_78 = this_02 + uVar88 + 0xc;
                  phStack_80 = (hb_buffer_t *)(this_02 + uVar88 + 0x12);
                  phStack_b0 = (hb_font_t *)(2 - (long)(this_02 + uVar88 + 0x14));
                  phStack_90 = (hb_buffer_t *)(this_02 + uVar56 + 0xc);
                  phStack_88 = (hb_buffer_t *)(this_02 + uVar56 + 0x14);
                  phStack_a0 = (hb_buffer_t *)(this_02 + uVar56 + 0x14);
                  phStack_98 = (hb_buffer_t *)(this_02 + uVar88 + 0x24);
                  uVar110 = 0;
                  unaff_R14 = (uint *)0x0;
                  unaff_R15 = (hb_buffer_t *)0x0;
                  in_XMM0 = extraout_XMM0_01;
                  do {
                    param_5 = unaff_R15;
                    uVar71 = (uint)param_5;
                    iVar81 = (int)uVar110;
                    uVar68 = (uint)unaff_R14;
                    unaff_R15 = param_5;
                    if (iVar81 <= (int)uVar68) {
                      uVar82 = uVar68 + 1;
                      lVar84 = (ulong)uVar82 * (ulong)(uVar104 * 2);
                      uVar86 = (uint)lVar84;
                      if ((((int)((ulong)lVar84 >> 0x20) != 0) ||
                          ((ulong)*(uint *)(param_2 + 0x18) <
                           (ulong)((long)phVar92 - *(long *)(param_2 + 8)))) ||
                         ((uint)(*(int *)(param_2 + 0x10) - (int)phVar92) < uVar86))
                      goto LAB_003f4e44;
                      iVar54 = *(int *)phVar101 - uVar86;
                      *(int *)phVar101 = iVar54;
                      if (((iVar54 < 1) ||
                          (iVar54 = ~uVar68 + iVar81 + iVar54, *(int *)phVar101 = iVar54, iVar54 < 1
                          )) || ((int)(uVar82 * in_R10 >> 0x20) != 0)) goto LAB_003f4e44;
                      uVar86 = uVar82 * uVar104;
                      if (iVar81 * uVar104 < uVar86) {
                        uVar56 = (ulong)(iVar81 * uVar104);
                        phVar57 = phVar92 + uVar56 * 2;
                        phVar83 = phStack_90 + (ulong)uVar86 * 2;
                        if (phStack_90 + (ulong)uVar86 * 2 < phStack_90 + uVar56 * 2 + 2) {
                          phVar83 = phStack_90 + uVar56 * 2 + 2;
                        }
                        if ((hb_buffer_t *)0xd < phVar83 + (7 - (long)(phStack_88 + uVar56 * 2))) {
                          uVar97 = ((ulong)(phVar83 + (7 - (long)(phStack_88 + uVar56 * 2))) >> 1) +
                                   1;
                          uVar96 = uVar97 & 0xfffffffffffffff8;
                          auVar124._4_4_ = uVar71;
                          auVar124._0_4_ = uVar71;
                          auVar124._8_4_ = uVar71;
                          auVar124._12_4_ = uVar71;
                          uVar110 = 0;
                          auVar175 = auVar124;
                          do {
                            uVar5 = *(ulong *)(phStack_a0 + uVar110 * 2 + uVar56 * 2 + -8);
                            auVar186._8_8_ = 0;
                            auVar186._0_8_ = uVar5;
                            uVar6 = *(ulong *)(phStack_a0 + uVar110 * 2 + uVar56 * 2);
                            auVar164._8_8_ = 0;
                            auVar164._0_8_ = uVar6;
                            auVar179._0_2_ = (ushort)uVar5 >> 8;
                            auVar179._2_2_ = (ushort)(uVar5 >> 0x10) >> 8;
                            auVar179._4_2_ = (ushort)(uVar5 >> 0x20) >> 8;
                            auVar179._6_2_ = (ushort)(uVar5 >> 0x38);
                            auVar179._8_6_ = 0;
                            auVar196 = psllw(auVar186,8);
                            auVar179 = auVar196._0_14_ | auVar179;
                            auVar154._0_2_ = (ushort)uVar6 >> 8;
                            auVar154._2_2_ = (ushort)(uVar6 >> 0x10) >> 8;
                            auVar154._4_2_ = (ushort)(uVar6 >> 0x20) >> 8;
                            auVar154._6_2_ = (ushort)(uVar6 >> 0x38);
                            auVar154._8_6_ = 0;
                            auVar196 = psllw(auVar164,8);
                            auVar154 = auVar196._0_14_ | auVar154;
                            auVar15._10_2_ = 0;
                            auVar15._0_10_ = auVar179._0_10_;
                            auVar15._12_2_ = auVar179._6_2_;
                            auVar23._8_2_ = auVar179._4_2_;
                            auVar23._0_8_ = auVar179._0_8_;
                            auVar23._10_4_ = auVar15._10_4_;
                            auVar40._6_8_ = 0;
                            auVar40._0_6_ = auVar23._8_6_;
                            auVar31._4_2_ = auVar179._2_2_;
                            auVar31._0_4_ = auVar179._0_4_;
                            auVar31._6_8_ = SUB148(auVar40 << 0x40,6);
                            uVar176 = auVar179._0_4_ & 0xffff;
                            auVar16._10_2_ = 0;
                            auVar16._0_10_ = auVar154._0_10_;
                            auVar16._12_2_ = auVar154._6_2_;
                            auVar24._8_2_ = auVar154._4_2_;
                            auVar24._0_8_ = auVar154._0_8_;
                            auVar24._10_4_ = auVar16._10_4_;
                            auVar41._6_8_ = 0;
                            auVar41._0_6_ = auVar24._8_6_;
                            auVar32._4_2_ = auVar154._2_2_;
                            auVar32._0_4_ = auVar154._0_4_;
                            auVar32._6_8_ = SUB148(auVar41 << 0x40,6);
                            uVar99 = auVar154._0_4_ & 0xffff;
                            in_XMM4._0_4_ = uVar176 + 1;
                            in_XMM4._4_4_ = auVar31._4_4_ + 1;
                            uVar69 = auVar15._10_4_ >> 0x10;
                            in_XMM4._8_4_ = auVar23._8_4_ + 1;
                            in_XMM4._12_4_ = uVar69 + 1;
                            in_XMM5._0_4_ = uVar99 + 1;
                            in_XMM5._4_4_ = auVar32._4_4_ + 1;
                            uVar70 = auVar16._10_4_ >> 0x10;
                            in_XMM5._8_4_ = auVar24._8_4_ + 1;
                            in_XMM5._12_4_ = uVar70 + 1;
                            auVar196 = auVar124 ^ auVar149;
                            auVar123._0_4_ = -(uint)((int)(uVar176 + 0x80000001) < auVar196._0_4_);
                            auVar123._4_4_ = -(uint)(auVar31._4_4_ + -0x7fffffff < auVar196._4_4_);
                            auVar123._8_4_ = -(uint)(auVar23._8_4_ + -0x7fffffff < auVar196._8_4_);
                            auVar123._12_4_ = -(uint)((int)(uVar69 + 0x80000001) < auVar196._12_4_);
                            in_XMM6 = auVar124 & auVar123;
                            auVar124 = ~auVar123 & in_XMM4 | in_XMM6;
                            auVar196 = auVar175 ^ auVar149;
                            auVar142._0_4_ = -(uint)((int)(uVar99 + 0x80000001) < auVar196._0_4_);
                            auVar142._4_4_ = -(uint)(auVar32._4_4_ + -0x7fffffff < auVar196._4_4_);
                            auVar142._8_4_ = -(uint)(auVar24._8_4_ + -0x7fffffff < auVar196._8_4_);
                            auVar142._12_4_ = -(uint)((int)(uVar70 + 0x80000001) < auVar196._12_4_);
                            auVar175 = ~auVar142 & in_XMM5 | auVar175 & auVar142;
                            uVar110 = uVar110 + 8;
                          } while (uVar96 != uVar110);
                          auVar196 = auVar175 ^ auVar149;
                          auVar190 = auVar124 ^ auVar149;
                          auVar187._0_4_ = -(uint)(auVar196._0_4_ < auVar190._0_4_);
                          auVar187._4_4_ = -(uint)(auVar196._4_4_ < auVar190._4_4_);
                          auVar187._8_4_ = -(uint)(auVar196._8_4_ < auVar190._8_4_);
                          auVar187._12_4_ = -(uint)(auVar196._12_4_ < auVar190._12_4_);
                          auVar190 = ~auVar187 & auVar175 | auVar124 & auVar187;
                          auVar125._0_8_ = auVar190._8_8_;
                          auVar125._8_4_ = auVar190._8_4_;
                          auVar125._12_4_ = auVar190._12_4_;
                          auVar175 = auVar190 ^ auVar149;
                          auVar196 = auVar125 ^ auVar149;
                          auVar143._0_4_ = -(uint)(auVar196._0_4_ < auVar175._0_4_);
                          auVar143._4_4_ = -(uint)(auVar196._4_4_ < auVar175._4_4_);
                          auVar143._8_4_ = -(uint)(auVar196._8_4_ < auVar175._8_4_);
                          auVar143._12_4_ = -(uint)(auVar196._12_4_ < auVar175._12_4_);
                          auVar175 = ~auVar143 & auVar125 | auVar190 & auVar143;
                          uVar55 = auVar175._4_4_;
                          in_XMM0._4_4_ = uVar55;
                          in_XMM0._0_4_ = uVar55;
                          in_XMM0._8_4_ = uVar55;
                          in_XMM0._12_4_ = uVar55;
                          auVar196 = auVar175 ^ auVar149;
                          in_XMM3 = in_XMM0 ^ auVar149;
                          auVar165._0_4_ = -(uint)(in_XMM3._0_4_ < auVar196._0_4_);
                          auVar165._4_4_ = -(uint)(in_XMM3._4_4_ < auVar196._4_4_);
                          auVar165._8_4_ = -(uint)(in_XMM3._8_4_ < auVar196._8_4_);
                          auVar165._12_4_ = -(uint)(in_XMM3._12_4_ < auVar196._12_4_);
                          in_XMM1 = auVar175 & auVar165;
                          in_XMM2 = ~auVar165 & in_XMM0 | in_XMM1;
                          unaff_R15 = (hb_buffer_t *)(ulong)in_XMM2._0_4_;
                          if (uVar97 == uVar96) {
                            uVar110 = (ulong)uVar82;
                            goto LAB_003f4a85;
                          }
                          phVar57 = phVar57 + uVar96 * 2;
                        }
                        do {
                          uVar69 = (ushort)(*(ushort *)phVar57 << 8 | *(ushort *)phVar57 >> 8) + 1;
                          phVar83 = (hb_buffer_t *)(ulong)uVar69;
                          if (uVar69 <= (uint)unaff_R15) {
                            phVar83 = unaff_R15;
                          }
                          phVar57 = phVar57 + 2;
                          unaff_R15 = phVar83;
                        } while (phVar57 < phVar92 + (ulong)uVar86 * 2);
                      }
                      uVar110 = (ulong)uVar82;
                    }
LAB_003f4a85:
                    uVar86 = (uint)((long)unaff_R15 * 6);
                    if ((((int)((ulong)((long)unaff_R15 * 6) >> 0x20) != 0) ||
                        ((ulong)*(uint *)(param_2 + 0x18) <
                         (ulong)((long)phVar106 - *(long *)(param_2 + 8)))) ||
                       ((uint)(*(int *)(param_2 + 0x10) - (int)phVar106) < uVar86))
                    goto LAB_003f4e44;
                    iVar81 = *(int *)phVar101 - uVar86;
                    *(int *)phVar101 = iVar81;
                    if ((iVar81 < 1) ||
                       (iVar81 = iVar81 + (uVar71 - (uint)unaff_R15), *(int *)phVar101 = iVar81,
                       iVar81 < 1)) goto LAB_003f4e44;
                    if (uVar71 < (uint)unaff_R15) {
                      lVar84 = (long)param_5 * 6;
                      phVar83 = (hb_buffer_t *)(phStack_78 + (long)unaff_R15 * 6);
                      if ((hb_buffer_t *)(phStack_78 + (long)unaff_R15 * 6) < phStack_80 + lVar84) {
                        phVar83 = phStack_80 + lVar84;
                      }
                      uVar97 = (ulong)(phVar83 + 2 !=
                                      (hb_buffer_t *)(this_02 + uVar88 + 0x14 + lVar84));
                      phVar57 = phVar106 + lVar84;
                      uVar56 = uVar97 + (ulong)(phVar83 + (long)phStack_b0 +
                                               ((long)param_5 * -6 - uVar97)) / 6 + 1;
                      if (8 < uVar56) {
                        uVar96 = (ulong)((uint)uVar56 & 7);
                        if (uVar96 == 0) {
                          uVar96 = 8;
                        }
                        auVar127._4_4_ = uVar68;
                        auVar127._0_4_ = uVar68;
                        auVar127._8_4_ = uVar68;
                        auVar127._12_4_ = uVar68;
                        lVar105 = (uVar96 - (uVar97 + 1)) -
                                  (ulong)(phVar83 + (long)phStack_b0 + ((long)param_5 * -6 - uVar97)
                                         ) / 6;
                        phVar83 = phStack_98 + lVar84;
                        auVar175 = auVar127;
                        do {
                          auVar166._8_8_ = 0;
                          auVar166._0_8_ = *(ulong *)(phVar83 + -8);
                          auVar188._8_8_ = 0;
                          auVar188._0_8_ = *(ulong *)(phVar83 + 0x10);
                          in_XMM6 = ~auVar210 & auVar166;
                          auVar196 = *(undefined1 (*) [16])(phVar83 + -0x18) & auVar210 | in_XMM6;
                          auVar167._4_4_ = auVar196._8_4_;
                          auVar167._0_4_ = auVar196._0_4_;
                          auVar167._8_4_ = auVar196._4_4_;
                          auVar167._12_4_ = auVar196._12_4_;
                          auVar196 = pshufhw(auVar167,auVar167,0xe6);
                          auVar168._0_4_ = auVar196._0_4_;
                          auVar168._8_4_ = auVar196._8_4_;
                          auVar168._12_4_ = auVar196._12_4_;
                          auVar168._4_4_ = auVar168._8_4_;
                          auVar196 = pshuflw(auVar168,auVar168,0x6c);
                          in_XMM5 = *(undefined1 (*) [16])phVar83 & auVar210 | ~auVar210 & auVar188;
                          auVar189._4_4_ = in_XMM5._8_4_;
                          auVar189._0_4_ = in_XMM5._0_4_;
                          auVar189._8_4_ = in_XMM5._4_4_;
                          auVar189._12_4_ = in_XMM5._12_4_;
                          auVar190 = pshufhw(auVar189,auVar189,0xe6);
                          auVar191._0_4_ = auVar190._0_4_;
                          auVar191._8_4_ = auVar190._8_4_;
                          auVar191._12_4_ = auVar190._12_4_;
                          auVar191._4_4_ = auVar191._8_4_;
                          auVar190 = pshuflw(auVar191,auVar191,0x6c);
                          auVar155._0_2_ = auVar196._0_2_ >> 8;
                          auVar155._2_2_ = auVar196._2_2_ >> 8;
                          auVar155._4_2_ = auVar196._4_2_ >> 8;
                          auVar155._6_2_ = auVar196._6_2_ >> 8;
                          auVar155._8_2_ = auVar196._8_2_ >> 8;
                          auVar155._10_2_ = auVar196._10_2_ >> 8;
                          auVar155._12_2_ = auVar196._12_2_ >> 8;
                          auVar196 = psllw(auVar196,8);
                          auVar155 = auVar196._0_14_ | auVar155;
                          auVar180._0_2_ = auVar190._0_2_ >> 8;
                          auVar180._2_2_ = auVar190._2_2_ >> 8;
                          auVar180._4_2_ = auVar190._4_2_ >> 8;
                          auVar180._6_2_ = auVar190._6_2_ >> 8;
                          auVar180._8_2_ = auVar190._8_2_ >> 8;
                          auVar180._10_2_ = auVar190._10_2_ >> 8;
                          auVar180._12_2_ = auVar190._12_2_ >> 8;
                          auVar196 = psllw(auVar190,8);
                          auVar180 = auVar196._0_14_ | auVar180;
                          auVar17._10_2_ = 0;
                          auVar17._0_10_ = auVar155._0_10_;
                          auVar17._12_2_ = auVar155._6_2_;
                          auVar25._8_2_ = auVar155._4_2_;
                          auVar25._0_8_ = auVar155._0_8_;
                          auVar25._10_4_ = auVar17._10_4_;
                          auVar42._6_8_ = 0;
                          auVar42._0_6_ = auVar25._8_6_;
                          auVar33._4_2_ = auVar155._2_2_;
                          auVar33._0_4_ = auVar155._0_4_;
                          auVar33._6_8_ = SUB148(auVar42 << 0x40,6);
                          auVar169._0_4_ = auVar155._0_4_ & 0xffff;
                          auVar169._4_10_ = auVar33._4_10_;
                          auVar169._14_2_ = 0;
                          auVar18._10_2_ = 0;
                          auVar18._0_10_ = auVar180._0_10_;
                          auVar18._12_2_ = auVar180._6_2_;
                          auVar26._8_2_ = auVar180._4_2_;
                          auVar26._0_8_ = auVar180._0_8_;
                          auVar26._10_4_ = auVar18._10_4_;
                          auVar43._6_8_ = 0;
                          auVar43._0_6_ = auVar26._8_6_;
                          auVar34._4_2_ = auVar180._2_2_;
                          auVar34._0_4_ = auVar180._0_4_;
                          auVar34._6_8_ = SUB148(auVar43 << 0x40,6);
                          in_XMM3._0_4_ = auVar180._0_4_ & 0xffff;
                          in_XMM3._4_10_ = auVar34._4_10_;
                          in_XMM3._14_2_ = 0;
                          auVar126._0_4_ = -(uint)((int)auVar169._0_4_ < auVar127._0_4_);
                          auVar126._4_4_ = -(uint)(auVar33._4_4_ < auVar127._4_4_);
                          auVar126._8_4_ = -(uint)(auVar25._8_4_ < auVar127._8_4_);
                          auVar126._12_4_ = -(uint)((int)(auVar17._10_4_ >> 0x10) < auVar127._12_4_)
                          ;
                          in_XMM4 = auVar127 & auVar126;
                          auVar127 = ~auVar126 & auVar169 | in_XMM4;
                          auVar144._0_4_ = -(uint)((int)in_XMM3._0_4_ < auVar175._0_4_);
                          auVar144._4_4_ = -(uint)(auVar34._4_4_ < auVar175._4_4_);
                          auVar144._8_4_ = -(uint)(auVar26._8_4_ < auVar175._8_4_);
                          auVar144._12_4_ = -(uint)((int)(auVar18._10_4_ >> 0x10) < auVar175._12_4_)
                          ;
                          auVar175 = ~auVar144 & in_XMM3 | auVar175 & auVar144;
                          phVar83 = phVar83 + 0x30;
                          lVar105 = lVar105 + 8;
                        } while (lVar105 != 0);
                        phVar57 = phVar57 + (uVar56 - uVar96) * 6;
                        auVar170._0_4_ = -(uint)(auVar175._0_4_ < auVar127._0_4_);
                        auVar170._4_4_ = -(uint)(auVar175._4_4_ < auVar127._4_4_);
                        auVar170._8_4_ = -(uint)(auVar175._8_4_ < auVar127._8_4_);
                        auVar170._12_4_ = -(uint)(auVar175._12_4_ < auVar127._12_4_);
                        auVar175 = ~auVar170 & auVar175 | auVar127 & auVar170;
                        auVar128._0_8_ = auVar175._8_8_;
                        auVar128._8_4_ = auVar175._8_4_;
                        auVar128._12_4_ = auVar175._12_4_;
                        auVar145._0_4_ = -(uint)(auVar175._8_4_ < auVar175._0_4_);
                        auVar145._4_4_ = -(uint)(auVar175._12_4_ < auVar175._4_4_);
                        auVar145._8_8_ = 0;
                        auVar175 = ~auVar145 & auVar128 | auVar175 & auVar145;
                        iVar81 = auVar175._4_4_;
                        in_XMM0._4_4_ = iVar81;
                        in_XMM0._0_4_ = iVar81;
                        in_XMM0._8_4_ = iVar81;
                        in_XMM0._12_4_ = iVar81;
                        auVar171._0_4_ = -(uint)(iVar81 < auVar175._0_4_);
                        auVar171._4_4_ = 0;
                        auVar171._8_4_ = -(uint)(iVar81 < auVar175._8_4_);
                        auVar171._12_4_ = -(uint)(iVar81 < auVar175._12_4_);
                        in_XMM1 = auVar175 & auVar171;
                        in_XMM2 = ~auVar171 & in_XMM0 | in_XMM1;
                        unaff_R14 = (uint *)(ulong)in_XMM2._0_4_;
                      }
                      do {
                        uVar52 = *(ushort *)phVar57 << 8 | *(ushort *)phVar57 >> 8;
                        if ((int)unaff_R14 < (int)(uint)uVar52) {
                          unaff_R14 = (uint *)(ulong)uVar52;
                        }
                        phVar57 = phVar57 + 6;
                      } while (phVar57 < phVar106 + (long)unaff_R15 * 6);
                    }
                  } while ((int)uVar110 <= (int)unaff_R14);
                  goto LAB_003f3ed0;
                }
              }
            }
            break;
          case 6:
            if (phVar72 + 0x24 <= phVar109) {
              if (((byte)this_02[0xf] & 1) == 0) {
                if (this_02 + (0x18 - *(long *)(param_2 + 8)) <=
                    (hb_font_t *)(ulong)*(uint *)(param_2 + 0x18)) {
                  uVar104 = *(uint *)(this_02 + 0x14);
                  uVar56 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                                     ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                      (this_02 +
                                      (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                       (uVar104 & 0xff00) << 8 | uVar104 << 0x18)),(long)param_2);
                  if (((char)uVar56 != '\0') &&
                     (this_02 + (0x1c - *(long *)(param_2 + 8)) <=
                      (hb_font_t *)(ulong)*(uint *)(param_2 + 0x18))) {
                    uVar104 = *(uint *)(this_02 + 0x18);
                    uVar56 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                                       ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                        (this_02 +
                                        (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                         (uVar104 & 0xff00) << 8 | uVar104 << 0x18)),(long)param_2);
                    cVar50 = (char)uVar56;
                    in_XMM0 = extraout_XMM0_02;
                    goto LAB_003f4dac;
                  }
                }
              }
              else if (this_02 + (0x18 - *(long *)(param_2 + 8)) <=
                       (hb_font_t *)(ulong)*(uint *)(param_2 + 0x18)) {
                uVar104 = *(uint *)(this_02 + 0x14);
                uVar56 = Lookup<OT::IntType<unsigned_int,4u>>::sanitize
                                   ((Lookup<OT::IntType<unsigned_int,4u>> *)
                                    (this_02 +
                                    (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                     (uVar104 & 0xff00) << 8 | uVar104 << 0x18)),(long)param_2);
                if (((char)uVar56 != '\0') &&
                   (this_02 + (0x1c - *(long *)(param_2 + 8)) <=
                    (hb_font_t *)(ulong)*(uint *)(param_2 + 0x18))) {
                  uVar104 = *(uint *)(this_02 + 0x18);
                  uVar56 = Lookup<OT::IntType<unsigned_int,4u>>::sanitize
                                     ((Lookup<OT::IntType<unsigned_int,4u>> *)
                                      (this_02 +
                                      (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                       (uVar104 & 0xff00) << 8 | uVar104 << 0x18)),(long)param_2);
                  cVar50 = (char)uVar56;
                  in_XMM0 = extraout_XMM0_03;
LAB_003f4dac:
                  if (cVar50 != '\0') {
                    if ((ulong)((long)this_02 - *(long *)(param_2 + 8)) <=
                        (ulong)*(uint *)(param_2 + 0x18)) {
                      uVar104 = *(uint *)(this_02 + 0x1c);
                      uVar104 = uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                (uVar104 & 0xff00) << 8 | uVar104 << 0x18;
                      if (uVar104 <= (int)*(undefined8 *)(param_2 + 0x10) - uVar71) {
                        iVar81 = *(int *)phVar101 - uVar104;
                        *(int *)phVar101 = iVar81;
                        if (0 < iVar81) {
                          if (*(int *)(this_02 + 8) == 0) goto LAB_003f3ed0;
                          if ((ulong)((long)this_02 - *(long *)(param_2 + 8)) <=
                              (ulong)*(uint *)(param_2 + 0x18)) {
                            uVar104 = *(uint *)(this_02 + 0x20);
                            uVar104 = uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                      (uVar104 & 0xff00) << 8 | uVar104 << 0x18;
                            if (uVar104 <= (int)*(undefined8 *)(param_2 + 0x10) - uVar71) {
                              iVar81 = iVar81 - uVar104;
                              *(int *)phVar101 = iVar81;
                              goto joined_r0x003f4e19;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case 7:
            switch(uVar68) {
            case 0:
              lVar84 = (ulong)*(uint *)((long)&UINT_005e02e8 + uVar88) * 4;
              uVar68 = (uint)lVar84;
              if ((int)((ulong)lVar84 >> 0x20) == 0) {
                iVar81 = 0x5e02b2;
                bVar112 = (ulong)((long)&UNK_005e02b2 - *(long *)(&UNK_005e02b8 + uVar88)) <
                          (ulong)*(uint *)(&UNK_005e02c8 + uVar88);
                bVar113 = (long)&UNK_005e02b2 - *(long *)(&UNK_005e02b8 + uVar88) ==
                          (ulong)*(uint *)(&UNK_005e02c8 + uVar88);
                goto code_r0x003f5005;
              }
              goto LAB_003f4fbb;
            default:
              goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
            case 2:
              phVar109 = (hb_buffer_t *)(&UNK_005e02bc + -*(long *)(&UNK_005e02b8 + uVar88));
              phVar72 = (hb_buffer_t *)(ulong)*(uint *)(&UNK_005e02c8 + uVar88);
              goto code_r0x003f502d;
            case 4:
              goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_4;
            case 6:
              if ((ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar88)) <=
                  (ulong)*(uint *)(&UNK_005e02c8 + uVar88)) goto LAB_003f5250;
              goto LAB_003f4fbb;
            case 8:
              if (((ulong)((long)&UNK_005e02b6 - *(long *)(&UNK_005e02b8 + uVar88)) <=
                   (ulong)*(uint *)(&UNK_005e02c8 + uVar88)) &&
                 (this_02 = (hb_font_t *)&UNK_005e02b6,
                 (ulong)((long)&UNK_005e02b6 - *(long *)(&UNK_005e02b8 + uVar88)) <=
                 (ulong)*(uint *)(&UNK_005e02c8 + uVar88))) goto code_r0x003f52cc;
              goto LAB_003f4fbb;
            case 10:
              goto LAB_003f4fbb;
            }
          case 8:
          case 10:
          case 0xc:
          case 0xe:
          case 0x10:
            return phVar109;
          case 9:
            bVar112 = (uint)phVar72 < (uint)uVar56;
            bVar113 = (uint)phVar72 == (uint)uVar56;
code_r0x003f5005:
            if ((!bVar112 && !bVar113) ||
               ((uint)(*(int *)(&UNK_005e02c0 + uVar88) - iVar81) < uVar68)) goto LAB_003f4fbb;
            iVar81 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::
                                     switchD_003f4fe8::switchdataD_005e02cc + uVar88) - uVar68;
            *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                            switchdataD_005e02cc + uVar88) = iVar81;
LAB_003f528f:
            uVar110 = CONCAT71((int7)(uVar110 >> 8),0 < iVar81);
            goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
          case 0xb:
code_r0x003f502d:
            if (phVar109 <= phVar72) {
LAB_003f5250:
              if (((ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar88)) <=
                   (ulong)*(uint *)(&UNK_005e02c8 + uVar88)) &&
                 (iVar81 = -0x6388d73d, 0x9c7728c2 < *(int *)(&UNK_005e02c0 + uVar88) - 0x5e02bcU))
              goto LAB_003f5285;
            }
            goto LAB_003f4fbb;
          case 0xd:
            cVar10 = cVar50 + '{';
            bVar114 = SBORROW1(cVar50,-0x7b) != SBORROW1(cVar10,bVar112);
            bVar113 = (char)(cVar10 - bVar112) < '\0';
            bVar112 = (bool)cVar10 == bVar112;
            goto code_r0x003f520f;
          case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x11:
code_r0x003f52cc:
            iVar81 = 0x2c4f4;
            if (0x2c4f3 < (uint)(*(int *)(&UNK_005e02c0 + uVar88) - (int)this_02)) {
LAB_003f5285:
              iVar81 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::
                                       switchD_003f4fe8::switchdataD_005e02cc + uVar88) - iVar81;
              *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                              switchdataD_005e02cc + uVar88) = iVar81;
              goto LAB_003f528f;
            }
            goto LAB_003f4fbb;
          case 0x12:
            *phVar72 = (hb_buffer_t)((char)*phVar72 + (char)((ulong)phVar83 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x1b:
          case 0x1c:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4d:
          case 0x4f:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
          case 0x5b:
          case 0x5c:
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
          case 0x62:
          case 99:
          case 100:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6a:
          case 0x6b:
          case 0x6d:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x19:
            uVar103 = uVar68 + 0x21095d + (uint)bVar112;
            uRam8d48c96348c373ca = uVar68;
code_r0x003f7fe5:
            phVar72 = (hb_buffer_t *)(long)(int)phVar72;
            phVar92 = (hb_font_t *)(ulong)*(uint *)(&DAT_0060894c + (long)phVar72 * 4);
            if (*(uint *)(&DAT_0060894c + (long)phVar72 * 4) == uVar103)
            goto _hb_ot_shape_switchD_003f8054_caseD_2015;
LAB_003f807d:
            do {
              param_7._0_4_ = 0;
              lVar84 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
              if (lVar84 == 0) {
                param_5 = (hb_buffer_t *)0x0;
              }
              else {
                param_5 = *(hb_buffer_t **)(lVar84 + 0x10);
              }
              phVar72 = (hb_buffer_t *)&param_7;
              iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                                 (this_02,*(undefined8 *)(this_02 + 0x98),
                                  (ulong)phVar92 & 0xffffffff);
              in_XMM1._8_8_ = extraout_XMM1_Qb_04;
              in_XMM1._0_8_ = extraout_XMM1_Qa_01;
              in_XMM0._8_8_ = extraout_XMM0_Qb_03;
              in_XMM0._0_8_ = extraout_XMM0_Qa_01;
              if (iVar81 != 0) {
                *(int *)(unaff_R15 + (long)phVar83) = (int)phVar92;
              }
_hb_ot_shape_switchD_003f8054_caseD_2015:
              do {
                while( true ) {
                  while( true ) {
                    phVar83 = phVar83 + 0x14;
                    if (phVar90 == phVar83) goto LAB_003f817b;
LAB_003f7fb5:
                    uVar103 = *(uint *)(unaff_R15 + (long)phVar83);
                    uVar104 = uVar103 >> 8;
                    phVar72 = (hb_buffer_t *)(ulong)uVar104;
                    if (0xfd < uVar104) break;
                    if (uVar104 == 0x20) {
                      phVar72 = (hb_buffer_t *)(ulong)(uVar103 - 0x2013);
                      if (uVar103 - 0x2013 < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x003f8054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        phVar83 = (hb_buffer_t *)
                                  (*(code *)((long)puVar107 +
                                            (long)*(int *)((long)puVar107 + (long)phVar72 * 4)))();
                        return phVar83;
                      }
                    }
                    else if (uVar104 == 0x30) {
                      uVar104 = uVar103 - 0x3001;
                      phVar72 = (hb_buffer_t *)(ulong)uVar104;
                      if (uVar104 < 0x17) {
                        if ((0x79ff83U >> (uVar104 & 0x1f) & 1) != 0) goto code_r0x003f7fe5;
                      }
                    }
                  }
                  if (uVar104 == 0xfe) break;
                  if (uVar104 == 0xff) {
                    phVar72 = (hb_buffer_t *)(ulong)(uVar103 - 0xff01);
                    if (uVar103 - 0xff01 < 0x5d) {
                    /* WARNING: Could not recover jumptable at 0x003f8027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      phVar83 = (hb_buffer_t *)
                                (*(code *)((long)unaff_R14 +
                                          (long)*(int *)((long)unaff_R14 + (long)phVar72 * 4)))();
                      return phVar83;
                    }
                  }
                }
                phVar92 = (hb_font_t *)0xfe34;
              } while (uVar103 != 0xfe4f);
            } while( true );
          case 0x1a:
            goto LAB_003f807d;
          case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x2b:
            phVar92 = (hb_font_t *)0xfe38;
            if (uVar68 == 0xfe38) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
            goto LAB_003f807d;
          case 0x2c:
            goto code_r0x003f809d;
          case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x4e:
            phVar92 = (hb_font_t *)0xfe47;
            if (uVar68 == 0xfe47) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
            goto LAB_003f807d;
          case 0x50:
            phVar92 = (hb_font_t *)0xfe16;
            if (uVar68 == 0xfe16) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
            goto LAB_003f807d;
          case 0x6c:
            pcVar59 = (char *)((ulong)uVar68 & 0xffffffffffffffd0);
            cVar50 = (char)pcVar59;
            *pcVar59 = *pcVar59 + cVar50;
            *pcVar59 = *pcVar59 + cVar50;
            *pcVar59 = *pcVar59 + cVar50;
            pcVar59[-0x75] = pcVar59[-0x75] + (char)phVar72;
            goto LAB_003f807d;
          case 0x6e:
            *phVar109 = (hb_buffer_t)((char)*phVar109 + cVar50);
            if (uVar71 == uVar68) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
            goto LAB_003f807d;
          case 0x6f:
            goto code_r0x003f7e92;
          case 0x70:
            phVar109[-0x75] = (hb_buffer_t)((char)phVar109[-0x75] + (char)phVar72 + bVar112);
            goto code_r0x003f7e92;
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7a:
          case 0x7b:
          case 0x7c:
          case 0x7d:
          case 0x7e:
          case 0x7f:
          case 0x80:
            goto code_r0x003f7dec;
          case 0x81:
            phVar109 = param_2;
            goto LAB_003f7eeb;
          case 0x82:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x83:
          case 0x85:
                    /* WARNING (jumptable): Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
            DAT_005e02b0 = 0x46;
code_r0x003fd15b:
            param_7._4_4_ = 0;
            param_8._0_4_ = 0;
            param_8._4_4_ = 0;
            param_9._0_4_ = 0;
            param_7._0_4_ = 0x25cc;
            _hb_glyph_info_set_unicode_props((uint *)&param_7,(long)param_2);
            in_XMM1._8_8_ = extraout_XMM1_Qb_25;
            in_XMM1._0_8_ = extraout_XMM1_Qa_26;
            *(undefined2 *)(param_2 + 0x5a) = 1;
            *(undefined4 *)(param_2 + 100) = 0;
            lVar84 = *(long *)(param_2 + 0x70);
            *(long *)(param_2 + 0x78) = lVar84;
            *(undefined4 *)(param_2 + 0x5c) = 0;
            unaff_R15 = (hb_buffer_t *)(ulong)(uint)param_7;
            unaff_R14 = (uint *)CONCAT44((uint)param_9,param_8._4_4_);
            phVar92 = (hb_font_t *)(ulong)*(uint *)(lVar84 + 4);
            phVar83 = (hb_buffer_t *)(ulong)*(uint *)(lVar84 + 8);
            if (1 < *(uint *)(param_2 + 0x68)) {
              *(undefined **)(param_2 + 0x78) = *(undefined **)(param_2 + 0x80);
              __src = *(undefined **)(param_2 + 0x80);
              goto LAB_003fd1d6;
            }
            uVar58 = hb_buffer_t::enlarge(param_2,1);
            if ((char)uVar58 != '\0') {
              __src = *(undefined **)(param_2 + 0x78);
              phVar90 = phVar101;
              if ((__src == *(undefined **)(param_2 + 0x70)) &&
                 (uVar103 = *(uint *)(param_2 + 0x80), *(uint *)(param_2 + 0x78) < uVar103 + 1)) {
                __dest = *(undefined **)(param_2 + 0x9c);
                *(undefined **)(param_2 + 0x94) = __dest;
                if ((ulong)uVar103 == 0) {
                  __src = __dest;
                }
                else {
                  memcpy(__dest,__src,(ulong)uVar103 * 0x14);
                  __src = *(undefined **)(param_2 + 0x94);
                }
              }
              else {
              }
              goto LAB_003fd1d6;
            }
            goto LAB_003fd1f6;
          default:
            if ((uVar68 & 0xd0ff0000) != 0) goto code_r0x003fd15b;
            goto LAB_003f7904;
          case 0x86:
            phVar109 = phVar101;
            if ((long)__src < 0) goto LAB_003fd203;
LAB_003fd1d6:
            uVar56 = (ulong)*(uint *)(phVar90 + 100);
            *(int *)(__src + uVar56 * 0x14) = (int)unaff_R15;
            *(int *)(__src + uVar56 * 0x14 + 4) = (int)phVar92;
            *(int *)(__src + uVar56 * 0x14 + 8) = (int)phVar83;
            *(uint **)(__src + uVar56 * 0x14 + 0xc) = unaff_R14;
            *(int *)(phVar90 + 100) = *(int *)(phVar90 + 100) + 1;
LAB_003fd1f6:
            hb_buffer_t::sync(phVar90);
LAB_003f7904:
            if (((byte)phVar90[0xc0] & 1) == 0) goto LAB_003f790f;
            uVar103 = *(uint *)(phVar90 + 0x60);
            if (*(int *)(phVar90 + 0x1c) != 0) {
              if (uVar103 == 0) goto LAB_003f790f;
              lVar84 = 0x24;
              uVar56 = 0;
              goto LAB_003f79a0;
            }
            if (uVar103 == 0) goto LAB_003f790f;
            lVar84 = 0x24;
            uVar56 = 0;
            goto LAB_003fa240;
          }
LAB_003f4e44:
          lVar84 = *(long *)(*(long *)(param_2 + 0x30) + 0x10);
          *(long *)(param_2 + 8) = lVar84;
          uVar103 = *(uint *)(*(long *)(param_2 + 0x30) + 0x18);
          *(ulong *)(param_2 + 0x10) = lVar84 + (ulong)uVar103;
          *(uint *)(param_2 + 0x18) = uVar103;
        }
        goto LAB_003f4e62;
      }
      goto LAB_003f4e86;
    }
  }
LAB_003f4e62:
  uVar110 = 0;
LAB_003f4f62:
  return (hb_buffer_t *)(uVar110 & 0xffffffff);
  while( true ) {
    uVar56 = uVar56 + 1;
    pbVar98 = (byte *)(*(long *)(phVar90 + 0x70) + lVar84);
    lVar84 = lVar84 + 0x14;
    if ((*pbVar98 & 0x80) == 0) break;
LAB_003fa240:
    if (uVar103 - 1 == uVar56) {
      uVar56 = (ulong)uVar103;
      break;
    }
  }
  uVar108 = 0;
  uVar104 = uVar103;
  do {
    uVar68 = (uint)uVar56;
    if (1 < uVar68 - (uint)uVar108) {
      hb_buffer_t::merge_clusters_impl(phVar90,(uint)uVar108,uVar68);
      in_XMM1._8_8_ = extraout_XMM1_Qb_24;
      in_XMM1._0_8_ = extraout_XMM1_Qa_25;
      uVar104 = *(uint *)(phVar90 + 0x60);
    }
    uVar86 = uVar68 + 1;
    if (uVar68 + 1 < uVar104) {
      uVar86 = uVar104;
    }
    uVar108 = uVar56 & 0xffffffff;
    do {
      uVar82 = uVar86;
      if (uVar86 - 1 == (int)uVar108) break;
      uVar82 = (int)uVar108 + 1;
      uVar108 = (ulong)uVar82;
    } while ((*(byte *)(*(long *)(phVar90 + 0x70) + 0x10 + (ulong)uVar82 * 0x14) & 0x80) != 0);
    uVar108 = uVar56 & 0xffffffff;
    uVar56 = (ulong)uVar82;
  } while (uVar68 < uVar103);
  goto LAB_003f790f;
code_r0x003f7dec:
  while( true ) {
    phVar72 = phVar72 + 0x14;
    phVar109 = phVar109 + -0x14;
    if ((undefined *)(uVar56 & 0xffffffff) <= __src) break;
LAB_003f7db0:
    uVar56 = uVar56 - 1;
    param_9._0_4_ = *(uint *)(phVar109 + 0x10);
    auVar44 = *(undefined1 (*) [12])phVar109;
    param_7._0_4_ = (uint)*(undefined8 *)phVar109;
    param_7._4_4_ = (undefined4)((ulong)*(undefined8 *)phVar109 >> 0x20);
    param_8._0_4_ = (uint)*(undefined8 *)(phVar109 + 8);
    param_8._4_4_ = (undefined4)((ulong)*(undefined8 *)(phVar109 + 8) >> 0x20);
    *(undefined4 *)(phVar109 + 0x10) = *(undefined4 *)(phVar72 + 0x10);
    uVar58 = *(undefined8 *)(phVar72 + 8);
    *(undefined8 *)phVar109 = *(undefined8 *)phVar72;
    *(undefined8 *)(phVar109 + 8) = uVar58;
    *(uint *)(phVar72 + 0x10) = (uint)param_9;
    in_XMM0._12_4_ = param_8._4_4_;
    in_XMM0._0_12_ = auVar44;
    *(undefined1 (*) [16])phVar72 = in_XMM0;
    __src = __src + 1;
  }
  goto LAB_003f7dff;
LAB_003f8560:
  uVar86 = *(uint *)(param_5 + (ulong)((int)uVar108 + 1) * 0x14);
  uVar55 = *(undefined4 *)(param_5 + uVar108 * 0x14);
  *(undefined4 *)(param_5 + uVar108 * 0x14 + 0xc) = 0;
  phVar72 = param_5 + uVar108 * 0x14 + 0xc;
  lVar105 = *(long *)(lVar84 + 0x90);
  if (((uVar86 & 0xfffffff0) == 0xfe00) || (0xffffff0f < uVar86 - 0xe01f0)) {
    if (*(long *)(lVar105 + 0x10) == 0) {
      uVar58 = 0;
    }
    else {
      uVar58 = *(undefined8 *)(*(long *)(lVar105 + 0x10) + 0x20);
    }
    iVar81 = (**(code **)(lVar105 + 0x40))
                       (lVar84,*(undefined8 *)(lVar84 + 0x98),uVar55,uVar86,phVar72,uVar58);
    in_XMM1._8_8_ = extraout_XMM1_Qb_09;
    in_XMM1._0_8_ = extraout_XMM1_Qa_06;
    if (iVar81 != 0) {
      phVar83 = (hb_buffer_t *)((ulong)*(uint *)(phVar109 + 0x5c) * 5);
      uStack0000000000000178._0_4_ =
           *(int *)(*(long *)(phVar109 + 0x70) + (ulong)*(uint *)(phVar109 + 0x5c) * 0x14);
      hb_buffer_t::replace_glyphs<unsigned_int>(phVar109,2,(undefined4 *)&uStack0000000000000178);
      goto LAB_003f8920;
    }
    lVar105 = *(long *)(phVar109 + 0x70);
    uVar56 = (ulong)*(uint *)(phVar109 + 0x5c);
    *(undefined4 *)(lVar105 + 0xc + uVar56 * 0x14) = 0;
    (**(code **)(*(long *)(lVar84 + 0x90) + 0x30))
              (lVar84,*(undefined8 *)(lVar84 + 0x98),*(undefined4 *)(lVar105 + uVar56 * 0x14),
               lVar105 + uVar56 * 0x14 + 0xc);
    if (phVar109[0x5a] == (hb_buffer_t)0x0) {
LAB_003f87eb:
      uVar86 = *(int *)(phVar109 + 0x5c) + 1;
      *(uint *)(phVar109 + 0x5c) = uVar86;
    }
    else {
      pvVar94 = *(void **)(phVar109 + 0x78);
      pvVar67 = *(void **)(phVar109 + 0x70);
      iVar81 = *(int *)(phVar109 + 100);
      if ((pvVar94 == pvVar67) && (iVar81 == *(int *)(phVar109 + 0x5c))) {
LAB_003f87e5:
        *(int *)(phVar109 + 100) = iVar81 + 1;
        goto LAB_003f87eb;
      }
      uVar86 = iVar81 + 1;
      if ((uVar86 == 0) || (uVar86 < *(uint *)(phVar109 + 0x68))) {
        if (pvVar94 == pvVar67) {
LAB_003f8788:
          uVar86 = *(uint *)(phVar109 + 100);
          if (*(int *)(phVar109 + 0x5c) + 1U < uVar86 + 1) {
            pvVar94 = *(void **)(phVar109 + 0x80);
            *(void **)(phVar109 + 0x78) = pvVar94;
            if ((ulong)uVar86 != 0) {
              memcpy(pvVar94,pvVar67,(ulong)uVar86 * 0x14);
              pvVar67 = *(void **)(phVar109 + 0x70);
              pvVar94 = *(void **)(phVar109 + 0x78);
            }
          }
          else {
            pvVar94 = pvVar67;
          }
        }
LAB_003f87c2:
        uVar86 = *(uint *)(phVar109 + 0x5c);
        uVar82 = *(uint *)(phVar109 + 100);
        *(undefined4 *)((long)pvVar94 + (ulong)uVar82 * 0x14 + 0x10) =
             *(undefined4 *)((long)pvVar67 + (ulong)uVar86 * 0x14 + 0x10);
        puVar2 = (undefined8 *)((long)pvVar67 + (ulong)uVar86 * 0x14);
        uVar58 = puVar2[1];
        puVar3 = (undefined8 *)((long)pvVar94 + (ulong)uVar82 * 0x14);
        *puVar3 = *puVar2;
        puVar3[1] = uVar58;
        iVar81 = *(int *)(phVar109 + 100);
        goto LAB_003f87e5;
      }
      uVar58 = hb_buffer_t::enlarge(phVar109,uVar86);
      if ((char)uVar58 != '\0') {
        pvVar67 = *(void **)(phVar109 + 0x70);
        pvVar94 = *(void **)(phVar109 + 0x78);
        if (pvVar94 == pvVar67) goto LAB_003f8788;
        goto LAB_003f87c2;
      }
      uVar86 = *(uint *)(phVar109 + 0x5c);
    }
    phVar109[0xc0] = (hb_buffer_t)((byte)phVar109[0xc0] | 0x80);
    *(ushort *)(*(long *)(phVar109 + 0x70) + 0x10 + (ulong)uVar86 * 0x14) =
         *(ushort *)(*(long *)(phVar109 + 0x70) + 0x10 + (ulong)uVar86 * 0x14) & 0xe0 | 0x401;
    if (*(int *)(phVar109 + 0x2c) != -1) {
      puVar89 = (ushort *)
                (*(long *)(phVar109 + 0x70) + 0x10 + (ulong)*(uint *)(phVar109 + 0x5c) * 0x14);
      *puVar89 = *puVar89 & 0xffdf;
    }
    lVar105 = *(long *)(phVar109 + 0x70);
    uVar56 = (ulong)*(uint *)(phVar109 + 0x5c);
    *(undefined4 *)(lVar105 + 0xc + uVar56 * 0x14) = 0;
    lVar78 = *(long *)(*(long *)(lVar84 + 0x90) + 0x10);
    if (lVar78 == 0) {
      phVar72 = (hb_buffer_t *)0x0;
    }
    else {
      phVar72 = *(hb_buffer_t **)(lVar78 + 0x10);
    }
    phVar83 = (hb_buffer_t *)(lVar105 + uVar56 * 0x14 + 0xc);
    (**(code **)(*(long *)(lVar84 + 0x90) + 0x30))
              (lVar84,*(undefined8 *)(lVar84 + 0x98),*(undefined4 *)(lVar105 + uVar56 * 0x14));
    in_XMM1._8_8_ = extraout_XMM1_Qb_10;
    in_XMM1._0_8_ = extraout_XMM1_Qa_07;
    if (phVar109[0x5a] != (hb_buffer_t)0x0) {
      pvVar94 = *(void **)(phVar109 + 0x78);
      pvVar67 = *(void **)(phVar109 + 0x70);
      iVar81 = *(int *)(phVar109 + 100);
      if ((pvVar94 != pvVar67) || (iVar81 != *(int *)(phVar109 + 0x5c))) {
        uVar86 = iVar81 + 1;
        if ((uVar86 == 0) || (uVar86 < *(uint *)(phVar109 + 0x68))) {
          if (pvVar94 == pvVar67) {
LAB_003f88b4:
            uVar86 = *(uint *)(phVar109 + 100);
            if (*(int *)(phVar109 + 0x5c) + 1U < uVar86 + 1) {
              pvVar94 = *(void **)(phVar109 + 0x80);
              *(void **)(phVar109 + 0x78) = pvVar94;
              if ((ulong)uVar86 != 0) {
                memcpy(pvVar94,pvVar67,(ulong)uVar86 * 0x14);
                pvVar67 = *(void **)(phVar109 + 0x70);
                pvVar94 = *(void **)(phVar109 + 0x78);
              }
            }
            else {
              pvVar94 = pvVar67;
            }
          }
        }
        else {
          uVar58 = hb_buffer_t::enlarge(phVar109,uVar86);
          if ((char)uVar58 == '\0') goto LAB_003f8920;
          pvVar67 = *(void **)(phVar109 + 0x70);
          pvVar94 = *(void **)(phVar109 + 0x78);
          if (pvVar94 == pvVar67) goto LAB_003f88b4;
        }
        uVar86 = *(uint *)(phVar109 + 0x5c);
        uVar56 = (ulong)*(uint *)(phVar109 + 100);
        phVar83 = (hb_buffer_t *)(uVar56 * 5);
        *(undefined4 *)((long)pvVar94 + uVar56 * 0x14 + 0x10) =
             *(undefined4 *)((long)pvVar67 + (ulong)uVar86 * 0x14 + 0x10);
        puVar2 = (undefined8 *)((long)pvVar67 + (ulong)uVar86 * 0x14);
        uVar58 = puVar2[1];
        puVar3 = (undefined8 *)((long)pvVar94 + uVar56 * 0x14);
        *puVar3 = *puVar2;
        puVar3[1] = uVar58;
        iVar81 = *(int *)(phVar109 + 100);
      }
      *(int *)(phVar109 + 100) = iVar81 + 1;
    }
    *(int *)(phVar109 + 0x5c) = *(int *)(phVar109 + 0x5c) + 1;
LAB_003f8920:
    uVar86 = *(uint *)(phVar109 + 0x5c);
    param_5 = phVar72;
joined_r0x003f892a:
    phVar72 = phVar83;
    uVar108 = (ulong)uVar86;
    if (uVar86 < uVar68) {
      do {
        if (phVar109[0x58] == (hb_buffer_t)0x0) break;
        lVar105 = *(long *)(phVar109 + 0x70);
        uVar86 = *(uint *)(lVar105 + uVar108 * 0x14);
        if (((uVar86 & 0xfffffff0) != 0xfe00) &&
           (uVar86 = uVar86 - 0xe01f0, phVar72 = (hb_buffer_t *)(ulong)uVar86, uVar86 < 0xffffff10))
        break;
        *(undefined4 *)(lVar105 + 0xc + uVar108 * 0x14) = 0;
        lVar78 = *(long *)(*(long *)(lVar84 + 0x90) + 0x10);
        if (lVar78 == 0) {
          param_5 = (hb_buffer_t *)0x0;
        }
        else {
          param_5 = *(hb_buffer_t **)(lVar78 + 0x10);
        }
        phVar72 = (hb_buffer_t *)(lVar105 + uVar108 * 0x14 + 0xc);
        (**(code **)(*(long *)(lVar84 + 0x90) + 0x30))();
        in_XMM1._8_8_ = extraout_XMM1_Qb_11;
        in_XMM1._0_8_ = extraout_XMM1_Qa_08;
        if (phVar109[0x5a] != (hb_buffer_t)0x0) {
          pvVar94 = *(void **)(phVar109 + 0x78);
          pvVar67 = *(void **)(phVar109 + 0x70);
          iVar81 = *(int *)(phVar109 + 100);
          if ((pvVar94 != pvVar67) || (iVar81 != *(int *)(phVar109 + 0x5c))) {
            uVar86 = iVar81 + 1;
            if ((uVar86 == 0) || (uVar86 < *(uint *)(phVar109 + 0x68))) {
              if (pvVar94 == pvVar67) goto LAB_003f8a15;
            }
            else {
              uVar58 = hb_buffer_t::enlarge(phVar109,uVar86);
              if ((char)uVar58 == '\0') goto LAB_003f8a7e;
              pvVar67 = *(void **)(phVar109 + 0x70);
              pvVar94 = *(void **)(phVar109 + 0x78);
              if (pvVar94 == pvVar67) {
LAB_003f8a15:
                uVar86 = *(uint *)(phVar109 + 100);
                if (*(int *)(phVar109 + 0x5c) + 1U < uVar86 + 1) {
                  pvVar94 = *(void **)(phVar109 + 0x80);
                  *(void **)(phVar109 + 0x78) = pvVar94;
                  if ((ulong)uVar86 != 0) {
                    memcpy(pvVar94,pvVar67,(ulong)uVar86 * 0x14);
                    pvVar67 = *(void **)(phVar109 + 0x70);
                    pvVar94 = *(void **)(phVar109 + 0x78);
                  }
                }
                else {
                  pvVar94 = pvVar67;
                }
              }
            }
            uVar86 = *(uint *)(phVar109 + 0x5c);
            uVar56 = (ulong)*(uint *)(phVar109 + 100);
            phVar72 = (hb_buffer_t *)(uVar56 * 5);
            *(undefined4 *)((long)pvVar94 + uVar56 * 0x14 + 0x10) =
                 *(undefined4 *)((long)pvVar67 + (ulong)uVar86 * 0x14 + 0x10);
            puVar2 = (undefined8 *)((long)pvVar67 + (ulong)uVar86 * 0x14);
            uVar58 = puVar2[1];
            puVar3 = (undefined8 *)((long)pvVar94 + uVar56 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar58;
            iVar81 = *(int *)(phVar109 + 100);
          }
          *(int *)(phVar109 + 100) = iVar81 + 1;
        }
        uVar86 = *(int *)(phVar109 + 0x5c) + 1;
        uVar108 = (ulong)uVar86;
        *(uint *)(phVar109 + 0x5c) = uVar86;
        if (uVar68 <= uVar86) break;
      } while( true );
    }
    goto LAB_003f8671;
  }
  if (*(long *)(lVar105 + 0x10) == 0) {
    param_5 = (hb_buffer_t *)0x0;
  }
  else {
    param_5 = *(hb_buffer_t **)(*(long *)(lVar105 + 0x10) + 0x10);
  }
  (**(code **)(lVar105 + 0x30))();
  in_XMM1._8_8_ = extraout_XMM1_Qb_08;
  in_XMM1._0_8_ = extraout_XMM1_Qa_05;
  if (phVar109[0x5a] == (hb_buffer_t)0x0) {
LAB_003f8663:
    uVar86 = *(int *)(phVar109 + 0x5c) + 1;
    *(uint *)(phVar109 + 0x5c) = uVar86;
  }
  else {
    pvVar94 = *(void **)(phVar109 + 0x78);
    pvVar67 = *(void **)(phVar109 + 0x70);
    iVar81 = *(int *)(phVar109 + 100);
    if ((pvVar94 == pvVar67) && (iVar81 == *(int *)(phVar109 + 0x5c))) {
LAB_003f865d:
      *(int *)(phVar109 + 100) = iVar81 + 1;
      goto LAB_003f8663;
    }
    uVar86 = iVar81 + 1;
    if ((uVar86 == 0) || (uVar86 < *(uint *)(phVar109 + 0x68))) {
      if (pvVar94 == pvVar67) {
LAB_003f8600:
        uVar86 = *(uint *)(phVar109 + 100);
        if (*(int *)(phVar109 + 0x5c) + 1U < uVar86 + 1) {
          pvVar94 = *(void **)(phVar109 + 0x80);
          *(void **)(phVar109 + 0x78) = pvVar94;
          if ((ulong)uVar86 != 0) {
            memcpy(pvVar94,pvVar67,(ulong)uVar86 * 0x14);
            pvVar67 = *(void **)(phVar109 + 0x70);
            pvVar94 = *(void **)(phVar109 + 0x78);
          }
        }
        else {
          pvVar94 = pvVar67;
        }
      }
LAB_003f863a:
      uVar86 = *(uint *)(phVar109 + 0x5c);
      uVar56 = (ulong)*(uint *)(phVar109 + 100);
      phVar72 = (hb_buffer_t *)(uVar56 * 5);
      *(undefined4 *)((long)pvVar94 + uVar56 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar67 + (ulong)uVar86 * 0x14 + 0x10);
      puVar2 = (undefined8 *)((long)pvVar67 + (ulong)uVar86 * 0x14);
      uVar58 = puVar2[1];
      puVar3 = (undefined8 *)((long)pvVar94 + uVar56 * 0x14);
      *puVar3 = *puVar2;
      puVar3[1] = uVar58;
      iVar81 = *(int *)(phVar109 + 100);
      goto LAB_003f865d;
    }
    uVar58 = hb_buffer_t::enlarge(phVar109,uVar86);
    if ((char)uVar58 != '\0') {
      pvVar67 = *(void **)(phVar109 + 0x70);
      pvVar94 = *(void **)(phVar109 + 0x78);
      if (pvVar94 == pvVar67) goto LAB_003f8600;
      goto LAB_003f863a;
    }
    uVar86 = *(uint *)(phVar109 + 0x5c);
  }
  uVar108 = (ulong)uVar86;
LAB_003f8671:
  if ((uVar71 <= (uint)uVar108) || (phVar109[0x58] == (hb_buffer_t)0x0)) goto LAB_003f8afe;
  param_5 = *(hb_buffer_t **)(phVar109 + 0x70);
  goto LAB_003f8560;
LAB_003f8a7e:
  uVar86 = *(uint *)(phVar109 + 0x5c);
  phVar83 = phVar72;
  goto joined_r0x003f892a;
LAB_003f8afe:
  if (uVar68 <= (uint)uVar108) goto LAB_003f8410;
  lVar105 = *(long *)(phVar109 + 0x70);
  *(undefined4 *)(lVar105 + 0xc + uVar108 * 0x14) = 0;
  lVar78 = *(long *)(*(long *)(lVar84 + 0x90) + 0x10);
  if (lVar78 == 0) {
    param_5 = (hb_buffer_t *)0x0;
  }
  else {
    param_5 = *(hb_buffer_t **)(lVar78 + 0x10);
  }
  phVar72 = (hb_buffer_t *)(lVar105 + uVar108 * 0x14 + 0xc);
  (**(code **)(*(long *)(lVar84 + 0x90) + 0x30))
            (lVar84,*(undefined8 *)(lVar84 + 0x98),*(undefined4 *)(lVar105 + uVar108 * 0x14));
  in_XMM1._8_8_ = extraout_XMM1_Qb_12;
  in_XMM1._0_8_ = extraout_XMM1_Qa_09;
  if (phVar109[0x5a] != (hb_buffer_t)0x0) {
    pvVar94 = *(void **)(phVar109 + 0x78);
    pvVar67 = *(void **)(phVar109 + 0x70);
    iVar81 = *(int *)(phVar109 + 100);
    if ((pvVar94 != pvVar67) || (iVar81 != *(int *)(phVar109 + 0x5c))) {
      uVar68 = iVar81 + 1;
      if ((uVar68 == 0) || (uVar68 < *(uint *)(phVar109 + 0x68))) {
        if (pvVar94 == pvVar67) {
LAB_003f8b77:
          uVar68 = *(uint *)(phVar109 + 100);
          if (*(int *)(phVar109 + 0x5c) + 1U < uVar68 + 1) {
            pvVar94 = *(void **)(phVar109 + 0x80);
            *(void **)(phVar109 + 0x78) = pvVar94;
            if ((ulong)uVar68 != 0) {
              memcpy(pvVar94,pvVar67,(ulong)uVar68 * 0x14);
              pvVar67 = *(void **)(phVar109 + 0x70);
              pvVar94 = *(void **)(phVar109 + 0x78);
            }
          }
          else {
            pvVar94 = pvVar67;
          }
        }
      }
      else {
        uVar58 = hb_buffer_t::enlarge(phVar109,uVar68);
        if ((char)uVar58 == '\0') goto LAB_003f8410;
        pvVar67 = *(void **)(phVar109 + 0x70);
        pvVar94 = *(void **)(phVar109 + 0x78);
        if (pvVar94 == pvVar67) goto LAB_003f8b77;
      }
      uVar68 = *(uint *)(phVar109 + 0x5c);
      uVar56 = (ulong)*(uint *)(phVar109 + 100);
      phVar72 = (hb_buffer_t *)(uVar56 * 5);
      *(undefined4 *)((long)pvVar94 + uVar56 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar67 + (ulong)uVar68 * 0x14 + 0x10);
      puVar2 = (undefined8 *)((long)pvVar67 + (ulong)uVar68 * 0x14);
      uVar58 = puVar2[1];
      puVar3 = (undefined8 *)((long)pvVar94 + uVar56 * 0x14);
      *puVar3 = *puVar2;
      puVar3[1] = uVar58;
      iVar81 = *(int *)(phVar109 + 100);
    }
    *(int *)(phVar109 + 100) = iVar81 + 1;
  }
  *(int *)(phVar109 + 0x5c) = *(int *)(phVar109 + 0x5c) + 1;
LAB_003f8410:
  uVar56 = (ulong)*(uint *)(param_2 + 0x78);
  if ((uVar103 <= *(uint *)(param_2 + 0x78)) || (bVar112 = true, param_2[0x74] == (hb_buffer_t)0x0))
  goto LAB_003f8c66;
  goto LAB_003f8250;
LAB_003f8c66:
  phVar83 = phStack_a0;
  hb_buffer_t::sync(phVar101);
  uVar58 = extraout_XMM0_Qa_02;
LAB_003f8c6e:
  bVar112 = hb_buffer_t::message
                      (uVar58,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                       in_XMM6._0_8_,uVar209,phVar101,this_02,"start reorder",phVar72,param_5,
                       phVar83);
  uVar58 = extraout_XMM0_08._0_8_;
  if (bVar112) {
    uVar103 = *(uint *)phStack_90;
    if (uVar103 != 0) {
      lVar84 = *(long *)phStack_a0;
      phVar83 = (hb_buffer_t *)0x0;
      auVar129 = extraout_XMM0_08;
      do {
        while( true ) {
          uVar58 = auVar129._0_8_;
          uVar71 = (uint)phVar83;
          uVar68 = *(uint *)(lVar84 + 0x10 + (long)phVar83 * 0x14);
          if (((0x1c00U >> (uVar68 & 0x1f) & 1) != 0) && (0xff < (uVar68 & 0xffff))) break;
          phVar109 = phVar83;
LAB_003f8cc3:
          uVar68 = (int)phVar109 + 1;
          phVar83 = (hb_buffer_t *)(ulong)uVar68;
          if (uVar103 <= uVar68) goto LAB_003f8ee7;
        }
        uVar86 = uVar71 + 1;
        uVar68 = uVar86;
        if (uVar86 < uVar103) {
          uVar68 = uVar103;
        }
        phVar109 = phVar83;
        do {
          uVar82 = (int)phVar109 + 1;
          phVar109 = (hb_buffer_t *)(ulong)uVar82;
          if (uVar103 <= uVar82) {
            phVar109 = (hb_buffer_t *)(ulong)uVar68;
            uVar69 = uVar68 - uVar71;
            uVar82 = uVar68;
            goto joined_r0x003f8d3a;
          }
          uVar69 = *(uint *)(lVar84 + 0x10 + (ulong)uVar82 * 0x14);
        } while (((0x1c00U >> (uVar69 & 0x1f) & 1) != 0) && (0xff < (uVar69 & 0xffff)));
        uVar69 = uVar82 - uVar71;
joined_r0x003f8d3a:
        phVar72 = (hb_buffer_t *)(ulong)uVar69;
        if (0x20 < uVar69) goto LAB_003f8cc3;
        if (uVar86 < uVar82) {
          phVar109 = (hb_buffer_t *)(ulong)uVar86;
          uVar68 = uVar71 + 2;
          phStack_b0 = (hb_font_t *)phVar83;
          do {
            iVar81 = (int)phStack_b0;
            phStack_b0 = (hb_font_t *)((ulong)phVar109 & 0xffffffff);
            param_5 = phVar109;
            if (uVar71 < (uint)phVar109) {
              param_5 = phVar83;
            }
            param_5 = (hb_buffer_t *)((ulong)param_5 & 0xffffffff);
            phVar90 = phVar109;
            uVar86 = uVar68;
            do {
              phVar102 = param_5;
              if (phVar90 <= phVar83) goto joined_r0x003f8e68;
              phVar90 = phVar90 + -1;
              uVar52 = *(ushort *)
                        (*(long *)phStack_a0 + 0x10 + ((ulong)phVar90 & 0xffffffff) * 0x14);
              uVar80 = uVar52 >> 8;
              if ((0x1c00U >> (uVar52 & 0x1f) & 1) == 0) {
                uVar80 = 0;
              }
              uVar52 = *(ushort *)(*(long *)phStack_a0 + 0x10 + (long)phVar109 * 0x14);
              phVar72 = (hb_buffer_t *)(ulong)uVar52;
              uVar91 = uVar52 >> 8;
              if ((0x1c00U >> (uVar52 & 0x1f) & 1) == 0) {
                uVar91 = 0;
              }
              uVar86 = uVar86 - 1;
            } while (uVar91 < uVar80);
            phVar102 = (hb_buffer_t *)(ulong)uVar86;
joined_r0x003f8e68:
            if (phVar109 != phVar102) {
              uVar86 = (uint)phVar102;
              if (1 < (iVar81 + 2U) - uVar86) {
                hb_buffer_t::merge_clusters_impl(phVar101,uVar86,iVar81 + 2U);
                in_XMM1._8_8_ = extraout_XMM1_Qb_13;
                in_XMM1._0_8_ = extraout_XMM1_Qa_10;
              }
              lVar105 = *(long *)phStack_a0;
              uStack0000000000000188 = *(uint *)(lVar105 + 0x10 + (long)phVar109 * 0x14);
              puVar2 = (undefined8 *)(lVar105 + (long)phVar109 * 0x14);
              uVar58 = *puVar2;
              in_stack_00000180 = puVar2[1];
              uStack0000000000000178._0_4_ = (int)uVar58;
              uStack0000000000000178._4_4_ = (undefined4)((ulong)uVar58 >> 0x20);
              lVar78 = (long)phVar102 * 0x14;
              memmove((void *)(lVar105 + (ulong)(uVar86 + 1) * 0x14),(void *)(lVar105 + lVar78),
                      (ulong)((uint)phVar109 - uVar86) * 0x14);
              lVar105 = *(long *)phStack_a0;
              auVar129._4_4_ = uStack0000000000000178._4_4_;
              auVar129._0_4_ = (int)uStack0000000000000178;
              auVar129._8_8_ = in_stack_00000180;
              *(undefined1 (*) [16])(lVar105 + lVar78) = auVar129;
              phVar72 = (hb_buffer_t *)(ulong)uStack0000000000000188;
              *(uint *)(lVar105 + 0x10 + lVar78) = uStack0000000000000188;
            }
            phVar109 = phVar109 + 1;
            uVar68 = uVar68 + 1;
          } while ((uint)phVar109 < uVar82);
        }
        if (*(code **)(*(long *)(phStack_98 + 0x80) + 0x48) != (code *)0x0) {
          phVar72 = (hb_buffer_t *)(ulong)uVar82;
          auVar210 = (**(code **)(*(long *)(phStack_98 + 0x80) + 0x48))(phStack_68,phVar101,phVar83)
          ;
          in_XMM1._0_8_ = auVar210._8_8_;
          auVar129._0_8_ = auVar210._0_8_;
          in_XMM1._8_8_ = extraout_XMM1_Qb_14;
          auVar129._8_8_ = extraout_XMM0_Qb_04;
        }
        uVar58 = auVar129._0_8_;
        phVar83 = (hb_buffer_t *)(ulong)(uVar82 + 1);
      } while (uVar82 + 1 < uVar103);
    }
LAB_003f8ee7:
    hb_buffer_t::message
              (uVar58,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
               in_XMM6._0_8_,uVar209,phVar101,this_02,"end reorder",phVar72,param_5,phStack_a0);
    hVar7 = param_2[0xdc];
    in_XMM0 = extraout_XMM0_09;
  }
  else {
    hVar7 = param_2[0xdc];
    in_XMM0 = extraout_XMM0_08;
  }
  bVar112 = true;
joined_r0x003f8f2a:
  if (((byte)hVar7 & 0x10) != 0) {
    uVar103 = *(uint *)phStack_90;
    phVar72 = (hb_buffer_t *)(ulong)uVar103;
    if (2 < uVar103) {
      lVar84 = *(long *)phStack_a0;
      phVar72 = (hb_buffer_t *)((ulong)(uVar103 - 1) * 0x14 + -0x14);
      phVar83 = (hb_buffer_t *)0x0;
      do {
        if (*(int *)(phVar83 + lVar84 + 0x14) == 0x34f) {
          uVar52 = *(ushort *)(phVar83 + lVar84 + 0x38);
          if (((0x1c00U >> (uVar52 & 0x1f) & 1) != 0) && (0xff < uVar52)) {
            uVar80 = *(ushort *)(phVar83 + lVar84 + 0x10) >> 8;
            if ((0x1c00U >> (*(ushort *)(phVar83 + lVar84 + 0x10) & 0x1f) & 1) == 0) {
              uVar80 = 0;
            }
            if (uVar52 >> 8 < uVar80) goto LAB_003f8f65;
          }
          phVar83[lVar84 + 0x24] = (hb_buffer_t)((byte)phVar83[lVar84 + 0x24] & 0xbf);
        }
LAB_003f8f65:
        phVar83 = phVar83 + 0x14;
      } while (phVar72 != phVar83);
    }
  }
  if (((bVar112) && (param_2[0x74] != (hb_buffer_t)0x0)) && ((uVar104 & 0xfffffffe) == 2)) {
    *(undefined2 *)(param_2 + 0x76) = 1;
    lVar84 = *(long *)(param_2 + 0x8c);
    *(long *)(param_2 + 0x94) = lVar84;
    uVar103 = *(uint *)(param_2 + 0x7c);
    *(undefined4 *)(param_2 + 0x80) = 1;
    *(undefined4 *)(param_2 + 0x78) = 1;
    if (1 < uVar103) {
      phVar72 = (hb_buffer_t *)0x1;
      uVar104 = 0;
      do {
        uVar52 = *(ushort *)(lVar84 + 0x10 + (long)phVar72 * 0x14);
        if ((0x1c00U >> (uVar52 & 0x1f) & 1) == 0) {
LAB_003f91e0:
          if (param_2[0x76] == (hb_buffer_t)0x0) {
            iVar81 = *(int *)(param_2 + 0x80);
          }
          else {
            pvVar94 = *(void **)(param_2 + 0x94);
            pvVar67 = *(void **)(param_2 + 0x8c);
            iVar81 = *(int *)(param_2 + 0x80);
            if ((pvVar94 != pvVar67) || (iVar81 != *(int *)(param_2 + 0x78))) {
              uVar68 = iVar81 + 1;
              if ((uVar68 == 0) || (uVar68 < *(uint *)(param_2 + 0x84))) {
                if (pvVar94 == pvVar67) goto LAB_003f9223;
              }
              else {
                phVar72 = phVar101;
                uVar58 = hb_buffer_t::enlarge(phVar101,uVar68);
                if ((char)uVar58 == '\0') break;
                pvVar67 = *(void **)(param_2 + 0x8c);
                pvVar94 = *(void **)(param_2 + 0x94);
                if (pvVar94 == pvVar67) {
LAB_003f9223:
                  uVar68 = *(uint *)(param_2 + 0x80);
                  if (*(int *)(param_2 + 0x78) + 1U < uVar68 + 1) {
                    pvVar94 = *(void **)(param_2 + 0x9c);
                    *(void **)(param_2 + 0x94) = pvVar94;
                    if ((ulong)uVar68 != 0) {
                      memcpy(pvVar94,pvVar67,(ulong)uVar68 * 0x14);
                      pvVar67 = *(void **)(param_2 + 0x8c);
                      pvVar94 = *(void **)(param_2 + 0x94);
                    }
                  }
                  else {
                    pvVar94 = pvVar67;
                  }
                }
              }
              uVar68 = *(uint *)(param_2 + 0x78);
              uVar71 = *(uint *)(param_2 + 0x80);
              *(undefined4 *)((long)pvVar94 + (ulong)uVar71 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar67 + (ulong)uVar68 * 0x14 + 0x10);
              puVar2 = (undefined8 *)((long)pvVar67 + (ulong)uVar68 * 0x14);
              uVar58 = puVar2[1];
              puVar3 = (undefined8 *)((long)pvVar94 + (ulong)uVar71 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar58;
              iVar81 = *(int *)(param_2 + 0x80);
            }
            iVar81 = iVar81 + 1;
            *(int *)(param_2 + 0x80) = iVar81;
          }
          uVar68 = *(int *)(param_2 + 0x78) + 1;
          *(uint *)(param_2 + 0x78) = uVar68;
          uVar71 = iVar81 - 1;
          uVar56 = (ulong)uVar71;
          if (iVar81 == 0) {
            uVar56 = 0;
          }
          uVar86 = (uint)*(ushort *)(*(long *)(param_2 + 0x94) + 0x10 + uVar56 * 0x14);
          if (uVar86 < 0x100) {
            uVar104 = uVar71;
          }
          if ((0x1c00U >> (uVar86 & 0x1f) & 1) == 0) {
            uVar104 = uVar71;
          }
        }
        else {
          uVar68 = *(int *)(param_2 + 0x80) - 1;
          if (uVar104 != uVar68) {
            if (*(int *)(param_2 + 0x80) == 0) {
              uVar68 = 0;
            }
            uVar80 = *(ushort *)(*(long *)(param_2 + 0x94) + 0x10 + (ulong)uVar68 * 0x14);
            uVar91 = uVar80 >> 8;
            if ((0x1c00U >> (uVar80 & 0x1f) & 1) == 0) {
              uVar91 = 0;
            }
            if (uVar52 >> 8 <= uVar91) goto LAB_003f91e0;
          }
          cVar50 = (*(code *)param_12._0_8_)
                             (&param_7,*(undefined4 *)
                                        (*(long *)(param_2 + 0x94) + (ulong)uVar104 * 0x14),
                              *(undefined4 *)(lVar84 + (long)phVar72 * 0x14),&uStack0000000000000178
                             );
          in_XMM1._8_8_ = extraout_XMM1_Qb_15;
          in_XMM1._0_8_ = extraout_XMM1_Qa_11;
          if (cVar50 == '\0') goto LAB_003f91e0;
          local_38 = local_38 & 0xffffffff00000000;
          lVar84 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
          if (lVar84 == 0) {
            uVar58 = 0;
          }
          else {
            uVar58 = *(undefined8 *)(lVar84 + 0x10);
          }
          phVar72 = (hb_buffer_t *)&local_38;
          iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                             (this_02,*(undefined8 *)(this_02 + 0x98),(int)uStack0000000000000178,
                              phVar72,uVar58);
          in_XMM1._8_8_ = extraout_XMM1_Qb_16;
          in_XMM1._0_8_ = extraout_XMM1_Qa_12;
          if (iVar81 == 0) goto LAB_003f91e0;
          if (param_2[0x76] == (hb_buffer_t)0x0) {
            uVar68 = *(uint *)(param_2 + 0x80);
          }
          else {
            pvVar94 = *(void **)(param_2 + 0x94);
            pvVar67 = *(void **)(param_2 + 0x8c);
            iVar81 = *(int *)(param_2 + 0x80);
            if ((pvVar94 != pvVar67) || (iVar81 != *(int *)(param_2 + 0x78))) {
              uVar68 = iVar81 + 1;
              if ((uVar68 == 0) || (uVar68 < *(uint *)(param_2 + 0x84))) {
                if (pvVar94 == pvVar67) goto LAB_003f918f;
              }
              else {
                uVar58 = hb_buffer_t::enlarge(phVar101,uVar68);
                if ((char)uVar58 == '\0') break;
                pvVar67 = *(void **)(param_2 + 0x8c);
                pvVar94 = *(void **)(param_2 + 0x94);
                if (pvVar94 == pvVar67) {
LAB_003f918f:
                  uVar68 = *(uint *)(param_2 + 0x80);
                  if (*(int *)(param_2 + 0x78) + 1U < uVar68 + 1) {
                    pvVar94 = *(void **)(param_2 + 0x9c);
                    *(void **)(param_2 + 0x94) = pvVar94;
                    if ((ulong)uVar68 != 0) {
                      memcpy(pvVar94,pvVar67,(ulong)uVar68 * 0x14);
                      pvVar67 = *(void **)(param_2 + 0x8c);
                      pvVar94 = *(void **)(param_2 + 0x94);
                    }
                  }
                  else {
                    pvVar94 = pvVar67;
                  }
                }
              }
              uVar68 = *(uint *)(param_2 + 0x78);
              uVar71 = *(uint *)(param_2 + 0x80);
              *(undefined4 *)((long)pvVar94 + (ulong)uVar71 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar67 + (ulong)uVar68 * 0x14 + 0x10);
              puVar2 = (undefined8 *)((long)pvVar67 + (ulong)uVar68 * 0x14);
              uVar58 = puVar2[1];
              puVar3 = (undefined8 *)((long)pvVar94 + (ulong)uVar71 * 0x14);
              *puVar3 = *puVar2;
              puVar3[1] = uVar58;
              iVar81 = *(int *)(param_2 + 0x80);
            }
            uVar68 = iVar81 + 1;
            *(uint *)(param_2 + 0x80) = uVar68;
          }
          *(int *)(param_2 + 0x78) = *(int *)(param_2 + 0x78) + 1;
          hb_buffer_t::merge_out_clusters(phVar101,uVar104,uVar68);
          *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
          lVar84 = *(long *)(param_2 + 0x94);
          lVar105 = (ulong)uVar104 * 0x14;
          *(int *)(lVar84 + lVar105) = (int)uStack0000000000000178;
          *(undefined4 *)(lVar84 + 0xc + lVar105) = (undefined4)local_38;
          _hb_glyph_info_set_unicode_props
                    ((uint *)(lVar105 + *(long *)(param_2 + 0x94)),(long)phVar101);
          in_XMM1._8_8_ = extraout_XMM1_Qb_17;
          in_XMM1._0_8_ = extraout_XMM1_Qa_13;
          uVar68 = *(uint *)(param_2 + 0x78);
        }
        phVar72 = (hb_buffer_t *)(ulong)uVar68;
        if (uVar103 <= uVar68) break;
        lVar84 = *(long *)phStack_a0;
      } while( true );
    }
    hb_buffer_t::sync(phVar101);
    in_XMM0 = extraout_XMM0_10;
  }
  goto LAB_003f9369;
LAB_003fc117:
  bVar112 = hb_buffer_t::message
                      (auVar212._0_8_,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_
                       ,in_XMM6._0_8_,uVar209,phVar101,this_02,"start fallback kern",phVar72,param_5
                       ,phVar109);
  if (bVar112) {
    _iStack0000000000000168 =
         (hb_buffer_t *)
         (CONCAT44(uStack000000000000016c,*(uint *)(param_2 + 0x54)) & 0xfffffffffffffffd);
    uVar65 = extraout_XMM0_Qa_23;
    if ((*(uint *)(param_2 + 0x54) & 0xfffffffd) == 5) {
      uVar103 = *(uint *)phStack_90;
      phVar72 = phStack_a0;
      if (1 < uVar103) {
        phVar72 = *(hb_buffer_t **)phStack_a0;
        uVar56 = (ulong)(uVar103 - 1);
        phVar83 = phVar72 + uVar56 * 0x14;
        uVar108 = 0;
        do {
          uVar56 = uVar56 - 1;
          param_9._0_4_ = *(uint *)(phVar83 + 0x10);
          uVar65 = *(undefined8 *)phVar83;
          param_8 = *(hb_buffer_t **)(phVar83 + 8);
          param_7._0_4_ = (uint)uVar65;
          param_7._4_4_ = (undefined4)((ulong)uVar65 >> 0x20);
          *(undefined4 *)(phVar83 + 0x10) = *(undefined4 *)(phVar72 + 0x10);
          uVar35 = *(undefined8 *)(phVar72 + 8);
          *(undefined8 *)phVar83 = *(undefined8 *)phVar72;
          *(undefined8 *)(phVar83 + 8) = uVar35;
          *(uint *)(phVar72 + 0x10) = (uint)param_9;
          *(undefined8 *)phVar72 = uVar65;
          *(hb_buffer_t **)(phVar72 + 8) = param_8;
          uVar108 = uVar108 + 1;
          phVar72 = phVar72 + 0x14;
          phVar83 = phVar83 + -0x14;
        } while (uVar108 < (uVar56 & 0xffffffff));
      }
      if (param_2[0x77] != (hb_buffer_t)0x0) {
        uVar104 = *(uint *)phStack_90;
        phVar72 = (hb_buffer_t *)(ulong)uVar104;
        if (uVar104 < uVar103) {
          uVar103 = uVar104;
        }
        if (1 < uVar103) {
          phVar72 = *(hb_buffer_t **)phStack_80;
          uVar56 = (ulong)(uVar103 - 1);
          phVar83 = phVar72 + uVar56 * 0x14;
          uVar108 = 0;
          do {
            uVar56 = uVar56 - 1;
            param_9._0_4_ = *(uint *)(phVar83 + 0x10);
            uVar65 = *(undefined8 *)phVar83;
            param_8 = *(hb_buffer_t **)(phVar83 + 8);
            param_7._0_4_ = (uint)uVar65;
            param_7._4_4_ = (undefined4)((ulong)uVar65 >> 0x20);
            *(undefined4 *)(phVar83 + 0x10) = *(undefined4 *)(phVar72 + 0x10);
            uVar35 = *(undefined8 *)(phVar72 + 8);
            *(undefined8 *)phVar83 = *(undefined8 *)phVar72;
            *(undefined8 *)(phVar83 + 8) = uVar35;
            *(uint *)(phVar72 + 0x10) = (uint)param_9;
            *(undefined8 *)phVar72 = uVar65;
            *(hb_buffer_t **)(phVar72 + 8) = param_8;
            uVar108 = uVar108 + 1;
            phVar72 = phVar72 + 0x14;
            phVar83 = phVar83 + -0x14;
          } while (uVar108 < (uVar56 & 0xffffffff));
        }
      }
    }
    in_stack_00000160._4_4_ = *(uint *)(param_2 + 0x54);
    uVar103 = *(uint *)(phStack_98 + 0x100);
    bVar112 = hb_buffer_t::message
                        (uVar65,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                         in_XMM6._0_8_,uVar209,phVar101,this_02,"start kern",phVar72,param_5,
                         phVar109);
    auVar215._8_8_ = uVar58;
    auVar215._0_8_ = extraout_XMM0_Qa_24;
    phVar64 = (hb_ot_apply_context_t *)CONCAT44(param_9._4_4_,(uint)param_9);
    if (bVar112) {
      if (((byte)param_2[0x34] & 0x40) != 0) {
        uVar104 = *(uint *)(param_2 + 0x7c);
        param_2[0xdc] = (hb_buffer_t)((byte)param_2[0xdc] | 0x20);
        if ((ulong)uVar104 != 0) {
          lVar84 = *(long *)phStack_a0;
          if ((ulong)uVar104 - 1 < 3) {
            uVar56 = 0;
          }
          else {
            pbVar98 = (byte *)(lVar84 + 0x40);
            uVar56 = 0;
            do {
              pbVar98[-0x3c] = pbVar98[-0x3c] | 2;
              pbVar98[-0x28] = pbVar98[-0x28] | 2;
              pbVar98[-0x14] = pbVar98[-0x14] | 2;
              *pbVar98 = *pbVar98 | 2;
              uVar56 = uVar56 + 4;
              pbVar98 = pbVar98 + 0x50;
            } while ((uVar104 & 0xfffffffc) != uVar56);
          }
          if ((ulong)(uVar104 & 3) != 0) {
            lVar105 = 0;
            do {
              pbVar98 = (byte *)(lVar84 + uVar56 * 0x14 + 4 + lVar105);
              *pbVar98 = *pbVar98 | 2;
              lVar105 = lVar105 + 0x14;
            } while ((ulong)(uVar104 & 3) * 0x14 != lVar105);
          }
        }
      }
      param_5 = (hb_buffer_t *)&_hb_NullPool;
      phVar64 = (hb_ot_apply_context_t *)&param_7;
      OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                (phVar64,1,(long)this_02,(undefined4 *)phVar101,
                 (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
      pcVar75 = param_11;
      in_stack_00000150 = 0xffffffff;
      param_18._3_1_ = in_stack_00000140._7_1_;
      if (param_22 != 0) {
        param_18._3_1_ = 0;
      }
      param_18._2_1_ = param_22 == 1;
      auVar48._8_8_ = 0;
      auVar48._0_8_ = extraout_XMM1_Qa_21;
      auVar214 = auVar48 << 0x40;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = extraout_XMM1_Qa_21;
      uStack000000000000013c = 8;
      param_14 = *(uint *)(param_25 + 0x60);
      phVar72 = (hb_buffer_t *)(ulong)param_14;
      param_12 = (undefined1  [16])0x0;
      param_13 = (hb_buffer_t *)0x0;
      param_11._0_2_ = CONCAT11(in_stack_00000140._6_1_,param_18._2_1_);
      param_11._0_3_ = CONCAT12(param_18._2_1_,param_11._0_2_);
      param_18._0_1_ = (bool)param_18._2_1_ || in_stack_00000140._5_1_ != 0;
      param_10 = CONCAT44(uVar103,8);
      param_11._0_4_ = CONCAT13(param_18._3_1_,param_11._0_3_);
      param_11._5_3_ = SUB83(pcVar75,5);
      param_11._0_5_ = (uint5)(uint)param_11;
      param_19 = (undefined1  [16])0x0;
      param_20 = 0;
      param_17._0_4_ = 8;
      param_18._1_1_ = 1;
      param_17._4_4_ = 0xffffffff;
      param_18._4_1_ = 0;
      uVar104 = *(uint *)(param_2 + 0x7c);
      param_16 = phVar64;
      param_21 = param_14;
      in_stack_00000130._4_4_ = uVar103;
      auVar210 = auVar49 << 0x40;
      if (uVar104 != 0) {
        in_stack_00000170._4_4_ = *(uint *)(param_2 + 0x54) & 0xfffffffe;
        phVar83 = *(hb_buffer_t **)(param_2 + 0x8c);
        in_stack_000001b8 = *(long *)(param_2 + 0x9c);
        in_stack_00000160._4_4_ = in_stack_00000160._4_4_ & 0xfffffffe;
        uVar53 = 0;
        phVar90 = param_8;
        do {
          while( true ) {
            param_8._4_4_ = (undefined4)((ulong)phVar90 >> 0x20);
            local_40 = (ulong)uVar53;
            if ((*(uint *)(phVar83 + local_40 * 0x14 + 4) & uVar103) != 0) break;
            uVar53 = uVar53 + 1;
            phVar72 = phVar83;
            param_8 = phVar90;
joined_r0x003fc71c:
            phVar90 = param_8;
            auVar210 = auVar214;
            if (uVar104 <= uVar53) goto LAB_003fd203;
          }
          phVar72 = *(hb_buffer_t **)(phVar64 + 0xa0);
          param_14 = *(uint *)(phVar72 + 0x60);
          if (*(uint *)(phVar72 + 0x5c) == uVar53) {
            uVar79 = *(undefined1 *)(*(long *)(phVar72 + 0x70) + 0xf + local_40 * 0x14);
          }
          else {
            uVar79 = 0;
          }
          if (param_11._3_1_ == '\0') {
            uVar79 = 0;
          }
          param_11._0_5_ = CONCAT14(uVar79,(uint)param_11);
          iVar81 = param_14 - 1;
          param_8._0_4_ = uVar53;
          if ((int)uVar53 < iVar81) {
LAB_003fc4f0:
            uVar58 = auVar214._8_8_;
            param_8._0_4_ = (uint)param_8 + 1;
            uVar56 = (ulong)(uint)param_8;
            lVar84 = *(long *)(phVar72 + 0x70);
            uVar52 = *(ushort *)(lVar84 + 0xc + uVar56 * 0x14);
            phVar72 = (hb_buffer_t *)(ulong)uVar52;
            if (((uint)param_10 & uVar52 & 0xe) == 0) {
              puVar77 = (uint *)(lVar84 + uVar56 * 0x14);
              if ((uVar52 & 8) != 0) {
                if ((param_10 & 0x10) == 0) {
                  if ((param_10 & 0xff00) != 0) {
                    uVar68 = uVar52 & 0xff00;
                    phVar72 = (hb_buffer_t *)(ulong)uVar68;
                    if (((uint)param_10 & 0xff00) != uVar68) goto LAB_003fc61a;
                  }
                }
                else {
                  param_9 = phVar64;
                  uVar65 = OT::GDEF::accelerator_t::mark_set_covers
                                     (*(accelerator_t **)(phVar64 + 0xf8),(uint)param_10 >> 0x10,
                                      *puVar77);
                  auVar214._8_8_ = uVar58;
                  auVar214._0_8_ = extraout_XMM0_Qa_26;
                  phVar64 = param_9;
                  if ((char)uVar65 == '\0') goto LAB_003fc61a;
                }
              }
              lVar105 = lVar84 + uVar56 * 0x14;
              uVar52 = *(ushort *)(lVar84 + 0x10 + uVar56 * 0x14);
              uVar80 = 0;
              bVar112 = false;
              if ((((uVar52 & 0x20) != 0) &&
                  (bVar112 = false, (*(byte *)(lVar105 + 0xc) & 0x10) == 0)) &&
                 ((((char)param_11 != '\0' || (bVar112 = false, (uVar52 & 0x21f) != 0x201)) &&
                  ((param_11._1_1_ != '\0' || (bVar112 = false, (uVar52 & 0x11f) != 0x101)))))) {
                bVar112 = (uVar52 & 0x40) == 0 || param_11._2_1_ != '\0';
              }
              if (param_13 != (hb_buffer_t *)0x0) {
                uVar80 = *(ushort *)param_13 << 8 | *(ushort *)param_13 >> 8;
              }
              phVar72 = param_13;
              if (((*(uint *)(lVar84 + 4 + uVar56 * 0x14) & param_10._4_4_) != 0) &&
                 ((param_11._4_1_ == '\0' || (param_11._4_1_ == *(char *)(lVar105 + 0xf))))) {
                param_9 = phVar64;
                if ((code *)param_12._0_8_ == (code *)0x0) {
                  if (bVar112) goto LAB_003fc61a;
                }
                else {
                  cVar50 = (*(code *)param_12._0_8_)(puVar77,uVar80,param_12._8_8_);
                  auVar214._8_8_ = extraout_XMM1_Qa_22;
                  auVar214._0_8_ = extraout_XMM0_Qa_25;
                  phVar64 = param_9;
                  if (cVar50 == '\0') goto LAB_003fc60c;
                }
                uVar68 = (uint)param_8;
                if (param_13 != (hb_buffer_t *)0x0) {
                  param_13 = param_13 + 2;
                }
                uVar56 = (ulong)(uint)param_8;
                lVar84 = *(long *)(this_02 + 0x90);
                if (in_stack_00000160._4_4_ == 4) {
                  if (*(long *)(lVar84 + 0x10) == 0) {
                    param_5 = (hb_buffer_t *)0x0;
                  }
                  else {
                    param_5 = *(hb_buffer_t **)(*(long *)(lVar84 + 0x10) + 0x58);
                  }
                  uVar71 = (**(code **)(lVar84 + 0x78))(this_02,*(undefined8 *)(this_02 + 0x98));
                  uVar58 = extraout_XMM0_Qa_27;
                  uVar65 = extraout_XMM1_Qa_23;
                }
                else {
                  if (*(long *)(lVar84 + 0x10) == 0) {
                    param_5 = (hb_buffer_t *)0x0;
                  }
                  else {
                    param_5 = *(hb_buffer_t **)(*(long *)(lVar84 + 0x10) + 0x60);
                  }
                  uVar71 = (**(code **)(lVar84 + 0x80))
                                     (this_02,*(undefined8 *)(this_02 + 0x98),
                                      *(undefined4 *)(phVar83 + local_40 * 0x14),
                                      *(undefined4 *)(phVar83 + uVar56 * 0x14));
                  uVar58 = extraout_XMM0_Qa_28;
                  uVar65 = extraout_XMM1_Qa_24;
                }
                auVar45._8_8_ = uVar65;
                auVar45._0_8_ = uVar58;
                auVar214._8_8_ = uVar65;
                auVar214._0_8_ = uVar58;
                phVar72 = (hb_buffer_t *)(ulong)uVar71;
                if (uVar71 != 0) {
                  iVar81 = (int)uVar71 >> 1;
                  uVar71 = uVar71 - iVar81;
                  phVar72 = (hb_buffer_t *)(ulong)uVar71;
                  if (in_stack_00000170._4_4_ == 4) {
                    piVar66 = (int *)(in_stack_000001b8 + local_40 * 0x14);
                    *piVar66 = *piVar66 + iVar81;
                    piVar66 = (int *)(in_stack_000001b8 + uVar56 * 0x14);
                    *piVar66 = *piVar66 + uVar71;
                    piVar66 = (int *)(in_stack_000001b8 + uVar56 * 0x14 + 8);
                  }
                  else {
                    piVar66 = (int *)(in_stack_000001b8 + 4 + local_40 * 0x14);
                    *piVar66 = *piVar66 + iVar81;
                    piVar66 = (int *)(in_stack_000001b8 + 4 + uVar56 * 0x14);
                    *piVar66 = *piVar66 + uVar71;
                    piVar66 = (int *)(in_stack_000001b8 + uVar56 * 0x14 + 0xc);
                  }
                  *piVar66 = *piVar66 + uVar71;
                  uVar71 = uVar68 + 1;
                  if (*(uint *)phStack_90 < uVar68 + 1) {
                    uVar71 = *(uint *)phStack_90;
                  }
                  auVar214 = auVar45;
                  if (1 < uVar71 - uVar53) {
                    param_2[0xdc] = (hb_buffer_t)((byte)param_2[0xdc] | 0x20);
                    lVar84 = *(long *)(param_2 + 0x8c);
                    param_5 = (hb_buffer_t *)0xffffffff;
                    if (uVar71 != uVar53) {
                      if (*(int *)(param_2 + 0x38) == 2) {
                        if (uVar53 < uVar71) {
                          uVar56 = (ulong)uVar71;
                          uVar108 = uVar56 - local_40;
                          param_5 = (hb_buffer_t *)0xffffffff;
                          if (8 < uVar108) {
                            uVar110 = (ulong)((uint)uVar108 & 7);
                            if (uVar110 == 0) {
                              uVar110 = 8;
                            }
                            lVar105 = (uVar110 + local_40) - uVar56;
                            puVar60 = (undefined4 *)(lVar84 + local_40 * 0x14 + 0x94);
                            auVar134._8_4_ = 0xffffffff;
                            auVar134._0_8_ = 0xffffffffffffffff;
                            auVar134._12_4_ = 0xffffffff;
                            auVar147._8_4_ = 0xffffffff;
                            auVar147._0_8_ = 0xffffffffffffffff;
                            auVar147._12_4_ = 0xffffffff;
                            do {
                              auVar204._12_4_ = puVar60[-0x14];
                              auVar204._8_4_ = puVar60[-0x19];
                              auVar204._4_4_ = puVar60[-0x1e];
                              auVar204._0_4_ = puVar60[-0x23];
                              in_XMM5._12_4_ = *puVar60;
                              in_XMM5._8_4_ = puVar60[-5];
                              in_XMM5._4_4_ = puVar60[-10];
                              in_XMM5._0_4_ = puVar60[-0xf];
                              auVar149 = auVar204 ^ _DAT_006524b0;
                              auVar210 = auVar134 ^ _DAT_006524b0;
                              auVar200._0_4_ = -(uint)(auVar210._0_4_ < auVar149._0_4_);
                              auVar200._4_4_ = -(uint)(auVar210._4_4_ < auVar149._4_4_);
                              auVar200._8_4_ = -(uint)(auVar210._8_4_ < auVar149._8_4_);
                              auVar200._12_4_ = -(uint)(auVar210._12_4_ < auVar149._12_4_);
                              auVar134 = ~auVar200 & auVar204 | auVar134 & auVar200;
                              auVar149 = in_XMM5 ^ _DAT_006524b0;
                              auVar210 = auVar147 ^ _DAT_006524b0;
                              auVar201._0_4_ = -(uint)(auVar210._0_4_ < auVar149._0_4_);
                              auVar201._4_4_ = -(uint)(auVar210._4_4_ < auVar149._4_4_);
                              auVar201._8_4_ = -(uint)(auVar210._8_4_ < auVar149._8_4_);
                              auVar201._12_4_ = -(uint)(auVar210._12_4_ < auVar149._12_4_);
                              auVar147 = ~auVar201 & in_XMM5 | auVar147 & auVar201;
                              puVar60 = puVar60 + 0x28;
                              lVar105 = lVar105 + 8;
                            } while (lVar105 != 0);
                            local_40 = local_40 + (uVar108 - uVar110);
                            auVar210 = auVar134 ^ _DAT_006524b0;
                            auVar149 = auVar147 ^ _DAT_006524b0;
                            auVar202._0_4_ = -(uint)(auVar210._0_4_ < auVar149._0_4_);
                            auVar202._4_4_ = -(uint)(auVar210._4_4_ < auVar149._4_4_);
                            auVar202._8_4_ = -(uint)(auVar210._8_4_ < auVar149._8_4_);
                            auVar202._12_4_ = -(uint)(auVar210._12_4_ < auVar149._12_4_);
                            auVar175 = ~auVar202 & auVar147 | auVar134 & auVar202;
                            auVar135._0_8_ = auVar175._8_8_;
                            auVar135._8_4_ = auVar175._8_4_;
                            auVar135._12_4_ = auVar175._12_4_;
                            auVar210 = auVar175 ^ _DAT_006524b0;
                            auVar149 = auVar135 ^ _DAT_006524b0;
                            auVar174._0_4_ = -(uint)(auVar210._0_4_ < auVar149._0_4_);
                            auVar174._4_4_ = -(uint)(auVar210._4_4_ < auVar149._4_4_);
                            auVar174._8_4_ = -(uint)(auVar210._8_4_ < auVar149._8_4_);
                            auVar174._12_4_ = -(uint)(auVar210._12_4_ < auVar149._12_4_);
                            auVar149 = ~auVar174 & auVar135 | auVar175 & auVar174;
                            uVar55 = auVar149._4_4_;
                            auVar136._4_4_ = uVar55;
                            auVar136._0_4_ = uVar55;
                            auVar136._8_4_ = uVar55;
                            auVar136._12_4_ = uVar55;
                            auVar210 = auVar149 ^ _DAT_006524b0;
                            auVar175 = auVar136 ^ _DAT_006524b0;
                            auVar203._0_4_ = -(uint)(auVar210._0_4_ < auVar175._0_4_);
                            auVar203._4_4_ = -(uint)(auVar210._4_4_ < auVar175._4_4_);
                            auVar203._8_4_ = -(uint)(auVar210._8_4_ < auVar175._8_4_);
                            auVar203._12_4_ = -(uint)(auVar210._12_4_ < auVar175._12_4_);
                            in_XMM2 = auVar149 & auVar203;
                            in_XMM3 = ~auVar203 & auVar136 | in_XMM2;
                            param_5 = (hb_buffer_t *)(ulong)in_XMM3._0_4_;
                            in_XMM4 = _DAT_006524b0;
                            in_XMM6 = _DAT_006524b0;
                          }
                          lVar105 = uVar56 - local_40;
                          puVar77 = (uint *)(lVar84 + local_40 * 0x14 + 8);
                          do {
                            if (*puVar77 < (uint)param_5) {
                              param_5 = (hb_buffer_t *)(ulong)*puVar77;
                            }
                            puVar77 = puVar77 + 5;
                            lVar105 = lVar105 + -1;
                          } while (lVar105 != 0);
                        }
                      }
                      else {
                        uVar68 = *(uint *)(lVar84 + 8 + local_40 * 0x14);
                        uVar86 = *(uint *)(lVar84 + 8 + (ulong)(uVar71 - 1) * 0x14);
                        param_5 = (hb_buffer_t *)(ulong)uVar68;
                        if (uVar86 < uVar68) {
                          param_5 = (hb_buffer_t *)(ulong)uVar86;
                        }
                      }
                    }
                    phVar72 = (hb_buffer_t *)(ulong)uVar71;
                    phVar109 = (hb_buffer_t *)0x3;
                    auVar214 = hb_buffer_t::_infos_set_glyph_flags
                                         (phVar101,lVar84,uVar53,uVar71,(uint)param_5,3);
                  }
                }
                uVar53 = (uint)param_8;
                param_8 = (hb_buffer_t *)CONCAT44(param_8._4_4_,(uint)param_8);
                phVar64 = param_9;
                goto joined_r0x003fc71c;
              }
LAB_003fc60c:
              if (bVar112) goto LAB_003fc61a;
            }
            else {
LAB_003fc61a:
              if ((int)(uint)param_8 < iVar81) goto code_r0x003fc62a;
            }
          }
          uVar53 = uVar53 + 1;
          phVar90 = param_8;
          auVar210 = auVar214;
        } while (uVar53 < uVar104);
      }
LAB_003fd203:
      param_9 = phVar64;
      hb_buffer_t::message
                (auVar210._0_8_,auVar210._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,uVar209,(hb_buffer_t *)unaff_R14,puVar107,"end kern",
                 phVar72,param_5,phVar109);
      free(in_stack_00000110);
      auVar215 = hb_sanitize_context_t::~hb_sanitize_context_t(&param_26);
      phVar64 = param_9;
    }
    uVar58 = auVar215._0_8_;
    param_9._4_4_ = (undefined4)((ulong)phVar64 >> 0x20);
    param_9._0_4_ = (uint)phVar64;
    if (iStack0000000000000168 == 5) {
      uVar103 = *(uint *)phStack_90;
      phVar72 = phStack_a0;
      if (1 < uVar103) {
        phVar72 = *(hb_buffer_t **)phStack_a0;
        uVar56 = (ulong)(uVar103 - 1);
        phVar83 = phVar72 + uVar56 * 0x14;
        uVar108 = 0;
        do {
          uVar56 = uVar56 - 1;
          param_9._0_4_ = *(uint *)(phVar83 + 0x10);
          uVar58 = *(undefined8 *)phVar83;
          param_8 = *(hb_buffer_t **)(phVar83 + 8);
          param_7._0_4_ = (uint)uVar58;
          param_7._4_4_ = (undefined4)((ulong)uVar58 >> 0x20);
          *(undefined4 *)(phVar83 + 0x10) = *(undefined4 *)(phVar72 + 0x10);
          uVar65 = *(undefined8 *)(phVar72 + 8);
          *(undefined8 *)phVar83 = *(undefined8 *)phVar72;
          *(undefined8 *)(phVar83 + 8) = uVar65;
          *(uint *)(phVar72 + 0x10) = (uint)param_9;
          *(undefined8 *)phVar72 = uVar58;
          *(hb_buffer_t **)(phVar72 + 8) = param_8;
          uVar108 = uVar108 + 1;
          phVar72 = phVar72 + 0x14;
          phVar83 = phVar83 + -0x14;
        } while (uVar108 < (uVar56 & 0xffffffff));
      }
      if (*(hb_buffer_t *)((long)unaff_R14 + 0x5b) != (hb_buffer_t)0x0) {
        uVar104 = *(uint *)phStack_90;
        phVar72 = (hb_buffer_t *)(ulong)uVar104;
        if (uVar104 < uVar103) {
          uVar103 = uVar104;
        }
        if (1 < uVar103) {
          phVar72 = *(hb_buffer_t **)phStack_80;
          uVar56 = (ulong)(uVar103 - 1);
          phVar83 = phVar72 + uVar56 * 0x14;
          uVar108 = 0;
          do {
            uVar56 = uVar56 - 1;
            param_9._0_4_ = *(uint *)(phVar83 + 0x10);
            uVar58 = *(undefined8 *)phVar83;
            param_8 = *(hb_buffer_t **)(phVar83 + 8);
            param_7._0_4_ = (uint)uVar58;
            param_7._4_4_ = (undefined4)((ulong)uVar58 >> 0x20);
            *(undefined4 *)(phVar83 + 0x10) = *(undefined4 *)(phVar72 + 0x10);
            uVar65 = *(undefined8 *)(phVar72 + 8);
            *(undefined8 *)phVar83 = *(undefined8 *)phVar72;
            *(undefined8 *)(phVar83 + 8) = uVar65;
            *(uint *)(phVar72 + 0x10) = (uint)param_9;
            *(undefined8 *)phVar72 = uVar58;
            *(hb_buffer_t **)(phVar72 + 8) = param_8;
            uVar108 = uVar108 + 1;
            phVar72 = phVar72 + 0x14;
            phVar83 = phVar83 + -0x14;
          } while (uVar108 < (uVar56 & 0xffffffff));
        }
      }
    }
    hb_buffer_t::message
              (uVar58,auVar215._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
               in_XMM6._0_8_,uVar209,(hb_buffer_t *)unaff_R14,puVar107,"end fallback kern",phVar72,
               param_5,phVar109);
  }
  goto LAB_003fbed1;
code_r0x003fc62a:
  phVar72 = *(hb_buffer_t **)(phVar64 + 0xa0);
  goto LAB_003fc4f0;
AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_4:
  if ((((ulong)*(uint *)(&UNK_005e02c8 + uVar88) <
        (ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar88))) ||
      (param_5 = (hb_buffer_t *)&UNK_005e02bc,
      (ulong)*(uint *)(&UNK_005e02c8 + uVar88) <
      (ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar88)))) ||
     (*(int *)(&UNK_005e02c0 + uVar88) - 0x5e02bcU < 0x9c7728c3)) goto LAB_003f4fbb;
  iVar54 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                           switchdataD_005e02cc + uVar88) + 0x6388d73d;
  *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                  switchdataD_005e02cc + uVar88) = iVar54;
  iVar81 = 0;
  if (iVar54 < 1) goto LAB_003f4fbb;
  phVar101 = (hb_buffer_t *)0xffffffff;
  if (sRam000000009cd44980 == -1) {
    iVar81 = -(uint)(sRam000000009cd44982 == -1);
  }
  if (iVar81 == -0xb13d)
  goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
  in_R10 = (ulong)(iVar81 + 0xb13c);
  param_2 = (hb_buffer_t *)0x0;
  unaff_R15 = (hb_buffer_t *)&_hb_NullPool;
  unaff_R14 = (uint *)0x4;
LAB_003f5120:
  uVar56 = (ulong)(uint)(((int)phVar101 + 0xb13d) * 0xe1ff);
  iVar81 = 0;
  if (*(short *)(&UNK_005e02bc + uVar56) == -1) {
    iVar81 = -(uint)(*(short *)(param_5 + uVar56 + 2) == -1);
  }
  phVar83 = unaff_R15;
  if ((uint)param_2 < iVar81 + 0xb13dU) {
    phVar83 = param_5 + (uint)param_2 * 0xe1ff;
  }
  if ((hb_buffer_t *)(ulong)*(uint *)(&UNK_005e02c8 + uVar88) <
      phVar83 + (6 - *(long *)(&UNK_005e02b8 + uVar88))) goto LAB_003f4fbb;
  uVar80 = *(ushort *)(phVar83 + 2) << 8 | *(ushort *)(phVar83 + 2) >> 8;
  uVar52 = *(ushort *)phVar83 << 8 | *(ushort *)phVar83 >> 8;
  if (((uVar52 < uVar80) ||
      ((hb_buffer_t *)(ulong)*(uint *)(&UNK_005e02c8 + uVar88) <
       phVar83 + (6 - *(long *)(&UNK_005e02b8 + uVar88)))) ||
     ((lVar84 = (ulong)(((uint)uVar52 - (uint)uVar80) + 1) * ((ulong)unaff_R14 & 0xffffffff),
      uVar103 = (uint)lVar84, (int)((ulong)lVar84 >> 0x20) != 0 ||
      (((ulong)*(uint *)(&UNK_005e02c8 + uVar88) <
        (ulong)((long)(&DAT_005e02b0 +
                      (ushort)(*(ushort *)(phVar83 + 4) << 8 | *(ushort *)(phVar83 + 4) >> 8)) -
               *(long *)(&UNK_005e02b8 + uVar88)) ||
       ((uint)(*(int *)(&UNK_005e02c0 + uVar88) -
              (int)(&DAT_005e02b0 +
                   (ushort)(*(ushort *)(phVar83 + 4) << 8 | *(ushort *)(phVar83 + 4) >> 8))) <
        uVar103)))))) goto LAB_003f4fbb;
  iVar81 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                           switchdataD_005e02cc + uVar88) - uVar103;
  *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                  switchdataD_005e02cc + uVar88) = iVar81;
  bVar114 = false;
  bVar113 = iVar81 < 0;
  bVar112 = iVar81 == 0;
code_r0x003f520f:
  if (bVar112 || bVar114 != bVar113) goto LAB_003f4fbb;
  if ((int)in_R10 == (int)param_2)
  goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
  param_2 = (hb_buffer_t *)(ulong)((int)param_2 + 1);
  goto LAB_003f5120;
LAB_003f3ed0:
  uVar104 = *(uint *)this_02;
  this_02 = this_02 + (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8 |
                      uVar104 << 0x18);
  phVar83 = *(hb_buffer_t **)(*(long *)(param_2 + 0x30) + 0x10);
  *(hb_buffer_t **)(param_2 + 8) = phVar83;
  uVar104 = *(uint *)(*(long *)(param_2 + 0x30) + 0x18);
  uVar56 = (ulong)uVar104;
  *(hb_buffer_t **)(param_2 + 0x10) = phVar83 + uVar56;
  *(uint *)(param_2 + 0x18) = uVar104;
  uVar104 = (int)local_38 + 1;
  local_38 = (ulong)uVar104;
  if (uVar104 == local_58) goto LAB_003f4e6a;
  goto LAB_003f3f0e;
LAB_003f4e6a:
  uVar52 = *param_1 << 8 | *param_1 >> 8;
LAB_003f4e86:
  uVar110 = CONCAT71((int7)((ulong)param_5 >> 8),1);
  if (uVar52 < 3) goto LAB_003f4f62;
  uVar104 = (uint)(uVar108 * 4);
  if (((((int)(uVar108 * 4 >> 0x20) == 0) && ((ulong)((long)this_02 - (long)phVar83) <= uVar56)) &&
      (uVar104 <= (uint)(*(int *)(param_2 + 0x10) - (int)this_02))) &&
     (iVar81 = *(int *)(param_2 + 0x1c) - uVar104, *(int *)(param_2 + 0x1c) = iVar81, 0 < iVar81)) {
    if (uVar103 != 0) {
      uVar103 = *(int *)(param_2 + 0x38) + 7U >> 3;
      uVar88 = 0;
      phVar92 = this_02;
      do {
        phVar92 = phVar92 + 4;
        uVar104 = *(uint *)(this_02 + uVar88 * 4);
        if (1 < (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8 |
                uVar104 << 0x18) + 1) {
          if (uVar56 < (ulong)((long)phVar92 - (long)phVar83)) goto LAB_003f4e62;
          uVar104 = *(uint *)(this_02 + uVar88 * 4);
          phVar83 = *(hb_buffer_t **)(param_2 + 8);
          uVar56 = (ulong)*(uint *)(param_2 + 0x18);
          if (((uVar56 < (ulong)((long)(this_02 +
                                       (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                        (uVar104 & 0xff00) << 8 | uVar104 << 0x18)) - (long)phVar83)
               ) || ((uint)(*(int *)(param_2 + 0x10) -
                           (int)(this_02 +
                                (uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 |
                                 (uVar104 & 0xff00) << 8 | uVar104 << 0x18))) < uVar103)) ||
             (iVar81 = *(int *)(param_2 + 0x1c) - uVar103, *(int *)(param_2 + 0x1c) = iVar81,
             iVar81 < 1)) goto LAB_003f4e62;
        }
        uVar88 = uVar88 + 1;
      } while (uVar108 != uVar88);
    }
    goto LAB_003f4f62;
  }
  goto LAB_003f4e62;
code_r0x003f809d:
  do {
    phVar72 = phVar72 + -1;
  } while (phVar72 != (hb_buffer_t *)0x0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_003f4fbb:
  uVar110 = 0;
AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1:
  return (hb_buffer_t *)(uVar110 & 0xffffffff);
  while( true ) {
    uVar56 = uVar56 + 1;
    pbVar98 = (byte *)(*(long *)(phVar90 + 0x70) + lVar84);
    lVar84 = lVar84 + 0x14;
    if ((*pbVar98 & 0x80) == 0) break;
LAB_003f79a0:
    if (uVar103 - 1 == uVar56) {
      uVar56 = (ulong)uVar103;
      break;
    }
  }
  uVar110 = (ulong)uVar103;
  uVar108 = 0;
  do {
    uVar104 = (uint)uVar56;
    uVar88 = uVar56 & 0xffffffff;
    uVar56 = uVar56 & 0xffffffff;
    if ((uint)uVar110 < uVar104) {
      uVar56 = uVar110;
    }
    uVar68 = (uint)uVar56;
    uVar86 = (uint)uVar108;
    if (1 < uVar68 - uVar86) {
      phVar90[0xc0] = (hb_buffer_t)((byte)phVar90[0xc0] | 0x20);
      lVar84 = *(long *)(phVar90 + 0x70);
      param_5 = (hb_buffer_t *)0xffffffff;
      if (uVar68 != uVar86) {
        if (*(int *)(phVar90 + 0x1c) == 2) {
          if (uVar86 < uVar68) {
            uVar110 = uVar56 - uVar108;
            param_5 = (hb_buffer_t *)0xffffffff;
            if (8 < uVar110) {
              uVar97 = (ulong)((uint)uVar110 & 7);
              if (uVar97 == 0) {
                uVar97 = 8;
              }
              lVar105 = (uVar97 + uVar108) - uVar56;
              puVar60 = (undefined4 *)(lVar84 + uVar108 * 0x14 + 0x94);
              auVar149._8_4_ = 0xffffffff;
              auVar149._0_8_ = 0xffffffffffffffff;
              auVar149._12_4_ = 0xffffffff;
              auVar175._8_4_ = 0xffffffff;
              auVar175._0_8_ = 0xffffffffffffffff;
              auVar175._12_4_ = 0xffffffff;
              do {
                in_XMM4._12_4_ = puVar60[-0x14];
                in_XMM4._8_4_ = puVar60[-0x19];
                in_XMM4._4_4_ = puVar60[-0x1e];
                in_XMM4._0_4_ = puVar60[-0x23];
                in_XMM5._12_4_ = *puVar60;
                in_XMM5._8_4_ = puVar60[-5];
                in_XMM5._4_4_ = puVar60[-10];
                in_XMM5._0_4_ = puVar60[-0xf];
                auVar196 = in_XMM4 ^ _DAT_006524b0;
                auVar210 = auVar149 ^ _DAT_006524b0;
                auVar190._0_4_ = -(uint)(auVar210._0_4_ < auVar196._0_4_);
                auVar190._4_4_ = -(uint)(auVar210._4_4_ < auVar196._4_4_);
                auVar190._8_4_ = -(uint)(auVar210._8_4_ < auVar196._8_4_);
                auVar190._12_4_ = -(uint)(auVar210._12_4_ < auVar196._12_4_);
                auVar149 = ~auVar190 & in_XMM4 | auVar149 & auVar190;
                auVar196 = in_XMM5 ^ _DAT_006524b0;
                auVar210 = auVar175 ^ _DAT_006524b0;
                auVar197._0_4_ = -(uint)(auVar210._0_4_ < auVar196._0_4_);
                auVar197._4_4_ = -(uint)(auVar210._4_4_ < auVar196._4_4_);
                auVar197._8_4_ = -(uint)(auVar210._8_4_ < auVar196._8_4_);
                auVar197._12_4_ = -(uint)(auVar210._12_4_ < auVar196._12_4_);
                auVar175 = ~auVar197 & in_XMM5 | auVar175 & auVar197;
                puVar60 = puVar60 + 0x28;
                lVar105 = lVar105 + 8;
              } while (lVar105 != 0);
              uVar108 = uVar108 + (uVar110 - uVar97);
              auVar210 = auVar149 ^ _DAT_006524b0;
              auVar196 = auVar175 ^ _DAT_006524b0;
              auVar198._0_4_ = -(uint)(auVar210._0_4_ < auVar196._0_4_);
              auVar198._4_4_ = -(uint)(auVar210._4_4_ < auVar196._4_4_);
              auVar198._8_4_ = -(uint)(auVar210._8_4_ < auVar196._8_4_);
              auVar198._12_4_ = -(uint)(auVar210._12_4_ < auVar196._12_4_);
              auVar175 = ~auVar198 & auVar175 | auVar149 & auVar198;
              auVar196._0_8_ = auVar175._8_8_;
              auVar196._8_4_ = auVar175._8_4_;
              auVar196._12_4_ = auVar175._12_4_;
              auVar210 = auVar175 ^ _DAT_006524b0;
              auVar149 = auVar196 ^ _DAT_006524b0;
              auVar173._0_4_ = -(uint)(auVar210._0_4_ < auVar149._0_4_);
              auVar173._4_4_ = -(uint)(auVar210._4_4_ < auVar149._4_4_);
              auVar173._8_4_ = -(uint)(auVar210._8_4_ < auVar149._8_4_);
              auVar173._12_4_ = -(uint)(auVar210._12_4_ < auVar149._12_4_);
              auVar149 = ~auVar173 & auVar196 | auVar175 & auVar173;
              uVar55 = auVar149._4_4_;
              auVar133._4_4_ = uVar55;
              auVar133._0_4_ = uVar55;
              auVar133._8_4_ = uVar55;
              auVar133._12_4_ = uVar55;
              auVar210 = auVar149 ^ _DAT_006524b0;
              auVar175 = auVar133 ^ _DAT_006524b0;
              auVar199._0_4_ = -(uint)(auVar210._0_4_ < auVar175._0_4_);
              auVar199._4_4_ = -(uint)(auVar210._4_4_ < auVar175._4_4_);
              auVar199._8_4_ = -(uint)(auVar210._8_4_ < auVar175._8_4_);
              auVar199._12_4_ = -(uint)(auVar210._12_4_ < auVar175._12_4_);
              in_XMM2 = auVar149 & auVar199;
              in_XMM3 = ~auVar199 & auVar133 | in_XMM2;
              param_5 = (hb_buffer_t *)(ulong)in_XMM3._0_4_;
              in_XMM6 = _DAT_006524b0;
            }
            lVar105 = uVar56 - uVar108;
            puVar107 = (uint *)(lVar84 + uVar108 * 0x14 + 8);
            do {
              if (*puVar107 < (uint)param_5) {
                param_5 = (hb_buffer_t *)(ulong)*puVar107;
              }
              puVar107 = puVar107 + 5;
              lVar105 = lVar105 + -1;
            } while (lVar105 != 0);
          }
        }
        else {
          uVar82 = *(uint *)(lVar84 + 8 + uVar108 * 0x14);
          uVar69 = *(uint *)(lVar84 + 8 + (ulong)(uVar68 - 1) * 0x14);
          param_5 = (hb_buffer_t *)(ulong)uVar82;
          if (uVar69 < uVar82) {
            param_5 = (hb_buffer_t *)(ulong)uVar69;
          }
        }
      }
      phVar102 = (hb_buffer_t *)0x3;
      hb_buffer_t::_infos_set_glyph_flags(phVar90,lVar84,uVar86,uVar68,(uint)param_5,3);
      in_XMM1._8_8_ = extraout_XMM1_Qb_20;
      in_XMM1._0_8_ = extraout_XMM1_Qa_19;
      uVar110 = (ulong)*(uint *)(phVar90 + 0x60);
    }
    uVar108 = (ulong)(uVar104 + 1);
    if (uVar104 + 1 < (uint)uVar110) {
      uVar108 = uVar110;
    }
    uVar56 = uVar88;
    do {
      if ((int)uVar108 + -1 == (int)uVar56) {
        uVar56 = uVar108;
        break;
      }
      uVar68 = (int)uVar56 + 1;
      uVar56 = (ulong)uVar68;
    } while ((*(byte *)(*(long *)(phVar90 + 0x70) + 0x10 + (ulong)uVar68 * 0x14) & 0x80) != 0);
    uVar108 = uVar88;
  } while (uVar104 < uVar103);
LAB_003f790f:
  uVar103 = *(uint *)(phVar90 + 0x38);
  uVar58 = hb_script_get_horizontal_direction(*(int *)(phVar90 + 0x3c));
  uVar104 = (uint)uVar58;
  if ((uVar104 == 5) && (uVar103 == 4)) {
    uVar56 = (ulong)*(uint *)(phVar90 + 0x60);
    if (uVar56 == 0) {
      bVar51 = 0;
      param_5 = (hb_buffer_t *)0x0;
      bVar112 = false;
    }
    else {
      puVar89 = (ushort *)(*(long *)(phVar90 + 0x70) + 0x10);
      bVar112 = true;
      param_5 = (hb_buffer_t *)0x0;
      phVar102 = (hb_buffer_t *)0x3e0;
      bVar51 = 0;
      uVar108 = 1;
      do {
        if ((*puVar89 & 0x1f) == 0xd) {
          param_5 = (hb_buffer_t *)0x1;
        }
        else {
          if ((0x3e0U >> (*puVar89 & 0x1f) & 1) != 0) break;
          if (*(int *)(puVar89 + -8) - 0x1f1e6U < 0x1a) {
            bVar51 = 1;
          }
        }
        bVar112 = uVar108 < uVar56;
        puVar89 = puVar89 + 10;
        bVar113 = uVar108 != uVar56;
        uVar108 = uVar108 + 1;
      } while (bVar113);
    }
    uVar104 = (byte)(~bVar112 & (bVar51 | (byte)param_5)) ^ 5;
  }
  phStack_90 = phVar90 + 0x60;
  uVar68 = uVar103 & 0xfffffffe;
  phVar72 = (hb_buffer_t *)(ulong)uVar68;
  in_XMM0 = extraout_XMM0_04;
  if (uVar68 == 4) {
    unaff_R15 = phStack_98;
    if ((uVar103 != uVar104) && (uVar104 != 0)) goto LAB_003f79fd;
  }
  else {
    unaff_R15 = phStack_98;
    if ((uVar103 != 6) && (uVar68 == 6)) {
LAB_003f79fd:
      uVar103 = *(uint *)(phVar90 + 0x1c);
      phVar72 = (hb_buffer_t *)(ulong)uVar103;
      uVar104 = *(uint *)(phVar90 + 0x60);
      uVar56 = (ulong)uVar104;
      if (uVar104 == 1) {
        uVar68 = 0;
        uVar104 = 1;
        uVar108 = 1;
LAB_003f7bc7:
        uVar86 = (uint)uVar108;
        if ((uVar103 == 1) && (1 < uVar86 - uVar68)) {
          auVar210 = hb_buffer_t::merge_clusters_impl(phVar90,uVar68,uVar86);
          in_XMM1._0_8_ = auVar210._8_8_;
          in_XMM0._0_8_ = auVar210._0_8_;
          in_XMM1._8_8_ = extraout_XMM1_Qb_00;
          in_XMM0._8_8_ = extraout_XMM0_Qb_00;
          uVar104 = *(uint *)(phVar90 + 0x60);
        }
        uVar103 = uVar68;
        if (uVar104 < uVar68) {
          uVar103 = uVar104;
        }
        phVar83 = (hb_buffer_t *)(ulong)uVar103;
        if (uVar86 <= uVar104) {
          uVar104 = uVar86;
        }
        phVar72 = phVar83;
        if ((uVar103 + 2 <= uVar104) && (uVar103 < uVar104 - 1)) {
          uVar56 = (ulong)(uVar104 - 1);
          phVar72 = (hb_buffer_t *)(*(long *)(phVar90 + 0x70) + (long)phVar83 * 0x14);
          pauVar73 = (undefined1 (*) [12])(*(long *)(phVar90 + 0x70) + uVar56 * 0x14);
          do {
            uVar56 = uVar56 - 1;
            param_9._0_4_ = *(uint *)(pauVar73[1] + 4);
            auVar44 = *pauVar73;
            param_7._0_4_ = (uint)*(undefined8 *)*pauVar73;
            param_7._4_4_ = (undefined4)((ulong)*(undefined8 *)*pauVar73 >> 0x20);
            param_8._0_4_ = (uint)*(undefined8 *)(*pauVar73 + 8);
            param_8._4_4_ = (undefined4)((ulong)*(undefined8 *)(*pauVar73 + 8) >> 0x20);
            *(undefined4 *)(pauVar73[1] + 4) = *(undefined4 *)(phVar72 + 0x10);
            uVar58 = *(undefined8 *)(phVar72 + 8);
            *(undefined8 *)*pauVar73 = *(undefined8 *)phVar72;
            *(undefined8 *)(*pauVar73 + 8) = uVar58;
            *(uint *)(phVar72 + 0x10) = (uint)param_9;
            in_XMM0._12_4_ = param_8._4_4_;
            in_XMM0._0_12_ = auVar44;
            *(undefined1 (*) [16])phVar72 = in_XMM0;
            phVar83 = phVar83 + 1;
            phVar72 = phVar72 + 0x14;
            pauVar73 = (undefined1 (*) [12])(pauVar73[-2] + 4);
          } while (phVar83 < (hb_buffer_t *)(uVar56 & 0xffffffff));
        }
        if (phVar90[0x5b] != (hb_buffer_t)0x0) {
          uVar103 = *(uint *)(phVar90 + 0x60);
          if (uVar103 < uVar68) {
            uVar68 = uVar103;
          }
          if (uVar103 < uVar86) {
            uVar86 = uVar103;
          }
          if ((uVar68 + 2 <= uVar86) && (uVar68 < uVar86 - 1)) {
            uVar56 = (ulong)(uVar86 - 1);
            uVar108 = (ulong)uVar68;
            phVar72 = (hb_buffer_t *)(*(long *)(phVar90 + 0x80) + uVar108 * 0x14);
            pauVar73 = (undefined1 (*) [12])(*(long *)(phVar90 + 0x80) + uVar56 * 0x14);
            do {
              uVar56 = uVar56 - 1;
              param_9._0_4_ = *(uint *)(pauVar73[1] + 4);
              auVar44 = *pauVar73;
              param_7._0_4_ = (uint)*(undefined8 *)*pauVar73;
              param_7._4_4_ = (undefined4)((ulong)*(undefined8 *)*pauVar73 >> 0x20);
              param_8._0_4_ = (uint)*(undefined8 *)(*pauVar73 + 8);
              param_8._4_4_ = (undefined4)((ulong)*(undefined8 *)(*pauVar73 + 8) >> 0x20);
              *(undefined4 *)(pauVar73[1] + 4) = *(undefined4 *)(phVar72 + 0x10);
              uVar58 = *(undefined8 *)(phVar72 + 8);
              *(undefined8 *)*pauVar73 = *(undefined8 *)phVar72;
              *(undefined8 *)(*pauVar73 + 8) = uVar58;
              *(uint *)(phVar72 + 0x10) = (uint)param_9;
              in_XMM0._12_4_ = param_8._4_4_;
              in_XMM0._0_12_ = auVar44;
              *(undefined1 (*) [16])phVar72 = in_XMM0;
              uVar108 = uVar108 + 1;
              phVar72 = phVar72 + 0x14;
              pauVar73 = (undefined1 (*) [12])(pauVar73[-2] + 4);
            } while (uVar108 < (uVar56 & 0xffffffff));
          }
        }
        uVar103 = *(uint *)(phVar90 + 0x60);
        if (1 < uVar103) {
          phVar72 = *(hb_buffer_t **)(phVar90 + 0x70);
          uVar56 = (ulong)(uVar103 - 1);
          phVar83 = phVar72 + uVar56 * 0x14;
          uVar108 = 0;
          do {
            uVar56 = uVar56 - 1;
            param_9._0_4_ = *(uint *)(phVar83 + 0x10);
            auVar44 = *(undefined1 (*) [12])phVar83;
            param_7._0_4_ = (uint)*(undefined8 *)phVar83;
            param_7._4_4_ = (undefined4)((ulong)*(undefined8 *)phVar83 >> 0x20);
            param_8._0_4_ = (uint)*(undefined8 *)(phVar83 + 8);
            param_8._4_4_ = (undefined4)((ulong)*(undefined8 *)(phVar83 + 8) >> 0x20);
            *(undefined4 *)(phVar83 + 0x10) = *(undefined4 *)(phVar72 + 0x10);
            uVar58 = *(undefined8 *)(phVar72 + 8);
            *(undefined8 *)phVar83 = *(undefined8 *)phVar72;
            *(undefined8 *)(phVar83 + 8) = uVar58;
            *(uint *)(phVar72 + 0x10) = (uint)param_9;
            in_XMM0._12_4_ = param_8._4_4_;
            in_XMM0._0_12_ = auVar44;
            *(undefined1 (*) [16])phVar72 = in_XMM0;
            uVar108 = uVar108 + 1;
            phVar72 = phVar72 + 0x14;
            phVar83 = phVar83 + -0x14;
          } while (uVar108 < (uVar56 & 0xffffffff));
        }
        unaff_R15 = phStack_98;
        if (phVar90[0x5b] != (hb_buffer_t)0x0) {
          uVar104 = *(uint *)(phVar90 + 0x60);
          phVar72 = (hb_buffer_t *)(ulong)uVar104;
          if (uVar104 < uVar103) {
            uVar103 = uVar104;
          }
          if (1 < uVar103) {
            phVar72 = *(hb_buffer_t **)(phVar90 + 0x80);
            uVar56 = (ulong)(uVar103 - 1);
            phVar109 = phVar72 + uVar56 * 0x14;
            __src = (undefined *)0x0;
            goto LAB_003f7db0;
          }
        }
      }
      else {
        unaff_R15 = phStack_98;
        if (uVar104 != 0) {
          uVar110 = 0;
          uVar108 = 1;
          do {
            uVar68 = (uint)uVar110;
            uVar104 = (uint)uVar56;
            lVar84 = *(long *)(phVar90 + 0x70);
            if ((*(byte *)(lVar84 + 0x10 + uVar108 * 0x14) & 0x80) == 0) {
              uVar86 = (uint)uVar108;
              if (1 < uVar86 - uVar68 && uVar103 == 1) {
                auVar210 = hb_buffer_t::merge_clusters_impl(phVar90,uVar68,uVar86);
                in_XMM1._0_8_ = auVar210._8_8_;
                in_XMM0._0_8_ = auVar210._0_8_;
                in_XMM1._8_8_ = extraout_XMM1_Qb;
                in_XMM0._8_8_ = extraout_XMM0_Qb;
                lVar84 = *(long *)(phVar90 + 0x70);
                uVar104 = *(uint *)(phVar90 + 0x60);
              }
              uVar82 = uVar68;
              if (uVar104 < uVar68) {
                uVar82 = uVar104;
              }
              if (uVar108 <= uVar104) {
                uVar104 = uVar86;
              }
              if ((uVar82 + 2 <= uVar104) && (uVar82 < uVar104 - 1)) {
                uVar56 = (ulong)(uVar104 - 1);
                uVar110 = (ulong)uVar82;
                pauVar74 = (undefined1 (*) [16])(lVar84 + uVar110 * 0x14);
                pauVar73 = (undefined1 (*) [12])(lVar84 + uVar56 * 0x14);
                do {
                  uVar56 = uVar56 - 1;
                  param_9._0_4_ = *(uint *)(pauVar73[1] + 4);
                  auVar44 = *pauVar73;
                  param_7._0_4_ = (uint)*(undefined8 *)*pauVar73;
                  param_7._4_4_ = (undefined4)((ulong)*(undefined8 *)*pauVar73 >> 0x20);
                  param_8._0_4_ = (uint)*(undefined8 *)(*pauVar73 + 8);
                  param_8._4_4_ = (undefined4)((ulong)*(undefined8 *)(*pauVar73 + 8) >> 0x20);
                  *(undefined4 *)(pauVar73[1] + 4) = *(undefined4 *)pauVar74[1];
                  uVar58 = *(undefined8 *)(*pauVar74 + 8);
                  *(undefined8 *)*pauVar73 = *(undefined8 *)*pauVar74;
                  *(undefined8 *)(*pauVar73 + 8) = uVar58;
                  *(uint *)pauVar74[1] = (uint)param_9;
                  in_XMM0._12_4_ = param_8._4_4_;
                  in_XMM0._0_12_ = auVar44;
                  *pauVar74 = in_XMM0;
                  uVar110 = uVar110 + 1;
                  pauVar74 = (undefined1 (*) [16])(pauVar74[1] + 4);
                  pauVar73 = (undefined1 (*) [12])(pauVar73[-2] + 4);
                } while (uVar110 < (uVar56 & 0xffffffff));
              }
              if (phVar90[0x5b] != (hb_buffer_t)0x0) {
                uVar104 = *(uint *)(phVar90 + 0x60);
                if (uVar104 < uVar68) {
                  uVar68 = uVar104;
                }
                if (uVar104 < uVar108) {
                  uVar86 = uVar104;
                }
                if ((uVar68 + 2 <= uVar86) && (uVar68 < uVar86 - 1)) {
                  uVar56 = (ulong)(uVar86 - 1);
                  uVar110 = (ulong)uVar68;
                  pauVar74 = (undefined1 (*) [16])(*(long *)(phVar90 + 0x80) + uVar110 * 0x14);
                  pauVar73 = (undefined1 (*) [12])(*(long *)(phVar90 + 0x80) + uVar56 * 0x14);
                  do {
                    uVar56 = uVar56 - 1;
                    param_9._0_4_ = *(uint *)(pauVar73[1] + 4);
                    auVar44 = *pauVar73;
                    param_7._0_4_ = (uint)*(undefined8 *)*pauVar73;
                    param_7._4_4_ = (undefined4)((ulong)*(undefined8 *)*pauVar73 >> 0x20);
                    param_8._0_4_ = (uint)*(undefined8 *)(*pauVar73 + 8);
                    param_8._4_4_ = (undefined4)((ulong)*(undefined8 *)(*pauVar73 + 8) >> 0x20);
                    *(undefined4 *)(pauVar73[1] + 4) = *(undefined4 *)pauVar74[1];
                    uVar58 = *(undefined8 *)(*pauVar74 + 8);
                    *(undefined8 *)*pauVar73 = *(undefined8 *)*pauVar74;
                    *(undefined8 *)(*pauVar73 + 8) = uVar58;
                    *(uint *)pauVar74[1] = (uint)param_9;
                    in_XMM0._12_4_ = param_8._4_4_;
                    in_XMM0._0_12_ = auVar44;
                    *pauVar74 = in_XMM0;
                    uVar110 = uVar110 + 1;
                    pauVar74 = (undefined1 (*) [16])(pauVar74[1] + 4);
                    pauVar73 = (undefined1 (*) [12])(pauVar73[-2] + 4);
                  } while (uVar110 < (uVar56 & 0xffffffff));
                }
              }
              uVar110 = uVar108 & 0xffffffff;
            }
            uVar68 = (uint)uVar110;
            uVar108 = uVar108 + 1;
            uVar104 = *(uint *)phStack_90;
            uVar56 = (ulong)uVar104;
          } while (uVar108 < uVar56);
          goto LAB_003f7bc7;
        }
      }
LAB_003f7dff:
      phVar90[0x38] = (hb_buffer_t)((byte)phVar90[0x38] ^ 1);
    }
  }
  phStack_68 = unaff_R15 + 0x60;
  if (*(long *)(*(long *)(unaff_R15 + 0x80) + 0x20) != 0) {
    bVar112 = hb_buffer_t::message
                        (in_XMM0._0_8_,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                         in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar90,this_02,"start preprocess-text"
                         ,phVar72,param_5,phVar102);
    in_XMM0 = extraout_XMM0_05;
    if (bVar112) {
      auVar210 = (**(code **)(*(long *)(unaff_R15 + 0x80) + 0x20))(phStack_68,phVar90,this_02);
      in_XMM1._0_8_ = auVar210._8_8_;
      in_XMM1._8_8_ = extraout_XMM1_Qb_01;
      hb_buffer_t::message
                (auVar210._0_8_,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar90,this_02,"end preprocess-text",phVar72,
                 param_5,phVar102);
      in_XMM0 = extraout_XMM0_06;
    }
  }
  phStack_b0 = (hb_font_t *)(ulong)*(uint *)(phVar90 + 0x60);
  unaff_R15 = *(hb_buffer_t **)(phVar90 + 0x70);
  if (((uStack_44 & 0xfffffffd) == 5) && (phStack_b0 != (hb_font_t *)0x0)) {
code_r0x003f7e92:
    phVar83 = *(hb_buffer_t **)(param_2 + 0x2c);
    puVar107 = (uint *)(ulong)*(uint *)(phStack_98 + 0xfc);
    unaff_R14 = (uint *)0x0;
    phVar109 = (hb_buffer_t *)((long)phStack_b0 * 0x14);
LAB_003f7eeb:
    do {
      iVar81 = (**(code **)(phVar83 + 0x30))
                         (phVar83,*(undefined4 *)(unaff_R15 + (long)unaff_R14),
                          *(undefined8 *)(phVar83 + 0x70));
      in_XMM1._8_8_ = extraout_XMM1_Qb_03;
      in_XMM1._0_8_ = extraout_XMM1_Qa_00;
      in_XMM0._8_8_ = extraout_XMM0_Qb_02;
      in_XMM0._0_8_ = extraout_XMM0_Qa_00;
      if (iVar81 == *(int *)(unaff_R15 + (long)unaff_R14)) {
LAB_003f7edd:
        *(uint *)(unaff_R15 + 4 + (long)unaff_R14) =
             *(uint *)(unaff_R15 + 4 + (long)unaff_R14) | (uint)puVar107;
        unaff_R14 = (uint *)((long)unaff_R14 + 0x14);
        if (phVar109 == (hb_buffer_t *)unaff_R14) break;
        goto LAB_003f7eeb;
      }
      param_7._0_4_ = 0;
      lVar84 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
      if (lVar84 == 0) {
        param_5 = (hb_buffer_t *)0x0;
      }
      else {
        param_5 = *(hb_buffer_t **)(lVar84 + 0x10);
      }
      phVar72 = (hb_buffer_t *)&param_7;
      iVar54 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                         (this_02,*(undefined8 *)(this_02 + 0x98),iVar81);
      in_XMM1._8_8_ = extraout_XMM1_Qb_02;
      in_XMM1._0_8_ = extraout_XMM1_Qa;
      in_XMM0._8_8_ = extraout_XMM0_Qb_01;
      in_XMM0._0_8_ = extraout_XMM0_Qa;
      if (iVar54 == 0) goto LAB_003f7edd;
      *(int *)(unaff_R15 + (long)unaff_R14) = iVar81;
      unaff_R14 = (uint *)((long)unaff_R14 + 0x14);
    } while (phVar109 != (hb_buffer_t *)unaff_R14);
  }
  if ((((uStack_44 & 0xfffffffe) == 6) && (((byte)phStack_98[0x108] & 8) == 0)) &&
     ((int)phStack_b0 != 0)) {
    phVar90 = (hb_buffer_t *)((long)phStack_b0 * 0x14);
    phVar83 = (hb_buffer_t *)0x0;
    puVar107 = &_hb_ot_shape::switchD_003f8054::switchdataD_005e046c;
    unaff_R14 = &_hb_ot_shape::switchD_003f8027::switchdataD_005e02f8;
    goto LAB_003f7fb5;
  }
LAB_003f817b:
  param_2[0xd4] = (hb_buffer_t)((byte)param_2[0xd4] | 0xf);
  phStack_a0 = param_2 + 0x8c;
  uVar103 = *(uint *)(param_2 + 0x7c);
  if (uVar103 != 0) {
    lVar84 = *(long *)(phStack_98 + 0x80);
    uVar104 = *(uint *)(lVar84 + 0x54);
    if (uVar104 == 4) {
      uVar104 = 2;
    }
    param_7._0_4_ = (uint)phStack_68;
    param_7._4_4_ = (undefined4)((ulong)phStack_68 >> 0x20);
    param_9._4_4_ = (undefined4)((ulong)this_02 >> 0x20);
    param_10 = *(ulong *)(param_2 + 0x2c);
    param_11 = hb_ot_shape_normalize_context_t::decompose_unicode;
    if (*(code **)(lVar84 + 0x30) != (code *)0x0) {
      param_11 = *(code **)(lVar84 + 0x30);
    }
    pcVar75 = hb_ot_shape_normalize_context_t::compose_unicode;
    if (*(code **)(lVar84 + 0x38) != (code *)0x0) {
      pcVar75 = *(code **)(lVar84 + 0x38);
    }
    param_12._0_8_ = pcVar75;
    *(undefined2 *)(param_2 + 0x76) = 1;
    *(undefined4 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x94) = *(undefined8 *)(param_2 + 0x8c);
    *(undefined4 *)(param_2 + 0x78) = 0;
    uVar56 = 0;
    bVar112 = false;
    param_9._0_4_ = uVar71;
    param_8 = phVar101;
LAB_003f8250:
    uVar68 = (uint)uVar56;
    uVar71 = uVar68 + 1;
    if (uVar68 + 1 < uVar103) {
      uVar71 = uVar103;
    }
    uVar86 = uVar68 - 1;
    do {
      uVar82 = uVar86 + 2;
      uVar69 = uVar71;
      if (uVar103 <= uVar82) break;
      uVar82 = *(uint *)(*(long *)phStack_a0 + 0x10 + (ulong)uVar82 * 0x14);
      uVar86 = uVar86 + 1;
      uVar69 = uVar86;
    } while ((0x1c00U >> (uVar82 & 0x1f) & 1) == 0);
    if ((uVar104 & 0xfffffffd) == 1) {
      phVar72 = (hb_buffer_t *)(ulong)uVar82;
      phVar83 = phStack_a0;
      phVar109 = param_8;
joined_r0x003f853f:
      while ((param_8 = phVar109, uVar68 < uVar69 && (param_2[0x74] != (hb_buffer_t)0x0))) {
        decompose_current_character((long)&param_7,(uint)((uVar104 & 0xfffffffd) != 1));
        in_XMM1._8_8_ = extraout_XMM1_Qb_05;
        in_XMM1._0_8_ = extraout_XMM1_Qa_02;
        uVar68 = *(uint *)(param_2 + 0x78);
        uVar56 = (ulong)uVar68;
        phVar109 = param_8;
      }
      if (((uint)uVar56 == uVar103) || (param_2[0x74] == (hb_buffer_t)0x0)) goto LAB_003f8c32;
      uVar68 = (uint)uVar56 + 1;
      if (uVar68 < uVar103) {
        uVar68 = uVar103;
      }
      uVar71 = uVar68 - 1;
      do {
        uVar86 = (uint)uVar56;
        uVar82 = uVar86 + 1;
        uVar56 = (ulong)uVar82;
        if (uVar103 <= uVar82) {
          uVar56 = (ulong)uVar68;
          uVar69 = *(uint *)(phVar109 + 0x5c);
          if (uVar69 < uVar68) goto LAB_003f8391;
          goto LAB_003f8410;
        }
        uVar69 = *(uint *)(*(long *)phStack_a0 + 0x10 + (ulong)uVar82 * 0x14);
        phVar72 = (hb_buffer_t *)(ulong)uVar69;
      } while ((0x1c00U >> (uVar69 & 0x1f) & 1) != 0);
      uVar69 = *(uint *)(phVar109 + 0x5c);
      uVar71 = uVar86;
      if (uVar69 < uVar82) {
LAB_003f8391:
        uVar108 = (ulong)uVar69;
        if (phVar109[0x58] != (hb_buffer_t)0x0) {
          param_5 = *(hb_buffer_t **)(phVar109 + 0x70);
          phVar72 = param_5 + uVar108 * 0x14;
          uVar68 = (uint)uVar56;
          do {
            if (((*(uint *)phVar72 & 0xfffffff0) == 0xfe00) ||
               (0xffffff0f < *(uint *)phVar72 - 0xe01f0)) {
              lVar84 = CONCAT44(param_9._4_4_,(uint)param_9);
              if (uVar69 < uVar71) goto LAB_003f8560;
              goto LAB_003f8afe;
            }
            uVar86 = (int)uVar56 - 1;
            uVar56 = (ulong)uVar86;
            phVar72 = phVar72 + 0x14;
          } while (uVar69 != uVar86);
          do {
            decompose_current_character((long)&param_7,(uint)(uVar104 == 0));
            in_XMM1._8_8_ = extraout_XMM1_Qb_06;
            in_XMM1._0_8_ = extraout_XMM1_Qa_03;
            if (uVar68 <= *(uint *)(phVar109 + 0x5c)) break;
          } while (phVar109[0x58] != (hb_buffer_t)0x0);
        }
      }
      goto LAB_003f8410;
    }
    phVar72 = (hb_buffer_t *)(*(long *)phStack_a0 + uVar56 * 0x14);
    phVar83 = (hb_buffer_t *)(*(long *)phStack_a0 + uVar56 * 0x14 + 0xc);
    param_5 = (hb_buffer_t *)0x14;
    uVar68 = (**(code **)(*(long *)(this_02 + 0x90) + 0x38))
                       (this_02,*(undefined8 *)(this_02 + 0x98),uVar69 - uVar68);
    in_XMM1._8_8_ = extraout_XMM1_Qb_07;
    in_XMM1._0_8_ = extraout_XMM1_Qa_04;
    if (param_2[0x76] == (hb_buffer_t)0x0) {
LAB_003f852d:
      uVar68 = *(int *)(param_2 + 0x78) + uVar68;
      uVar56 = (ulong)uVar68;
      *(uint *)(param_2 + 0x78) = uVar68;
      phVar109 = param_8;
      goto joined_r0x003f853f;
    }
    pvVar94 = *(void **)(param_2 + 0x94);
    pvVar67 = *(void **)(param_2 + 0x8c);
    iVar81 = *(int *)(param_2 + 0x80);
    if ((pvVar94 == pvVar67) && (iVar81 == *(int *)(param_2 + 0x78))) {
LAB_003f8526:
      *(uint *)(param_2 + 0x80) = iVar81 + uVar68;
      goto LAB_003f852d;
    }
    uVar71 = iVar81 + uVar68;
    if ((uVar71 == 0) || (uVar71 < *(uint *)(param_2 + 0x84))) {
      if (pvVar94 == pvVar67) {
LAB_003f84b5:
        uVar71 = *(uint *)(param_2 + 0x80);
        if (*(int *)(param_2 + 0x78) + uVar68 < uVar71 + uVar68) {
          pvVar94 = *(void **)(param_2 + 0x9c);
          *(void **)(param_2 + 0x94) = pvVar94;
          if ((ulong)uVar71 != 0) {
            memcpy(pvVar94,pvVar67,(ulong)uVar71 * 0x14);
            pvVar67 = *(void **)(param_2 + 0x8c);
            pvVar94 = *(void **)(param_2 + 0x94);
          }
        }
        else {
          pvVar94 = pvVar67;
        }
      }
LAB_003f84f5:
      phVar72 = (hb_buffer_t *)((ulong)*(uint *)(param_2 + 0x80) * 5);
      memmove((void *)((long)pvVar94 + (ulong)*(uint *)(param_2 + 0x80) * 0x14),
              (void *)((long)pvVar67 + (ulong)*(uint *)(param_2 + 0x78) * 0x14),(ulong)uVar68 * 0x14
             );
      iVar81 = *(int *)(param_2 + 0x80);
      goto LAB_003f8526;
    }
    phVar72 = phVar101;
    uVar58 = hb_buffer_t::enlarge(phVar101,uVar71);
    if ((char)uVar58 != '\0') {
      pvVar67 = *(void **)(param_2 + 0x8c);
      pvVar94 = *(void **)(param_2 + 0x94);
      if (pvVar94 == pvVar67) goto LAB_003f84b5;
      goto LAB_003f84f5;
    }
LAB_003f8c32:
    hb_buffer_t::sync(phVar101);
    uVar58 = extraout_XMM0_07._0_8_;
    if (bVar112) goto LAB_003f8c6e;
    bVar112 = false;
    hVar7 = param_2[0xdc];
    in_XMM0 = extraout_XMM0_07;
    goto joined_r0x003f8f2a;
  }
LAB_003f9369:
  if ((((byte)param_2[0xdc] & 1) != 0) && (((byte)phStack_98[0x108] & 4) != 0)) {
    if ((*(uint *)(param_2 + 0x54) & 0xfffffffd) == 4) {
      uVar104 = *(uint *)(phStack_98 + 0xf4) | *(uint *)(phStack_98 + 0xf0);
      uVar68 = *(uint *)(phStack_98 + 0xf0) | *(uint *)(phStack_98 + 0xf8);
      uVar103 = *(uint *)phStack_90;
    }
    else {
      uVar104 = *(uint *)(phStack_98 + 0xf8) | *(uint *)(phStack_98 + 0xf0);
      uVar68 = *(uint *)(phStack_98 + 0xf0) | *(uint *)(phStack_98 + 0xf4);
      uVar103 = *(uint *)phStack_90;
    }
    uVar56 = (ulong)uVar103;
    if (uVar56 != 0) {
      lVar84 = *(long *)phStack_a0;
      _iStack0000000000000168 = (hb_buffer_t *)(lVar84 + 0x40);
      uVar71 = 0;
      do {
        uVar108 = (ulong)uVar71;
        if (*(int *)(lVar84 + uVar108 * 0x14) == 0x2044) {
          uVar86 = uVar71 + 1;
          uVar88 = (ulong)uVar86;
          uVar110 = uVar108 - 1;
          do {
            if (uVar110 == 0xffffffffffffffff) {
              uVar82 = 0;
              goto joined_r0x003fad75;
            }
            uVar97 = uVar110 & 0xffffffff;
            uVar110 = uVar110 - 1;
          } while ((*(ushort *)(lVar84 + 0x10 + uVar97 * 0x14) & 0x1f) == 0xd);
          uVar82 = (int)uVar110 + 2;
joined_r0x003fad75:
          if (uVar86 < uVar103) {
            puVar89 = (ushort *)(lVar84 + 0x10 + uVar88 * 0x14);
            uVar110 = uVar88;
            do {
              phVar72 = (hb_buffer_t *)(ulong)(*puVar89 & 0x1f);
              if ((short)(*puVar89 & 0x1f) != 0xd) goto LAB_003fadac;
              uVar110 = uVar110 + 1;
              puVar89 = puVar89 + 10;
            } while (uVar56 != uVar110);
            uVar110 = uVar56;
LAB_003fadac:
            uVar69 = (uint)uVar110;
            bVar112 = uVar69 == uVar86;
            if ((uVar82 == uVar71) || (uVar69 == uVar86)) {
              if (uVar82 == uVar71) goto LAB_003fafc2;
LAB_003fafcd:
              if (bVar112) goto LAB_003fafd5;
            }
            else {
              phVar72 = (hb_buffer_t *)(ulong)*(uint *)phStack_90;
              if (uVar69 <= *(uint *)phStack_90) {
                phVar72 = (hb_buffer_t *)(uVar110 & 0xffffffff);
              }
              uVar70 = (uint)phVar72;
              if (1 < uVar70 - uVar82) {
                param_2[0xdc] = (hb_buffer_t)((byte)param_2[0xdc] | 0x20);
                lVar105 = *(long *)(param_2 + 0x8c);
                uVar99 = 0xffffffff;
                if (uVar70 != uVar82) {
                  if (*(int *)(param_2 + 0x38) == 2) {
                    if (uVar82 < uVar70) {
                      uVar110 = (ulong)uVar82;
                      uVar97 = (long)phVar72 - uVar110;
                      uVar99 = 0xffffffff;
                      if (8 < uVar97) {
                        uVar96 = (ulong)((uint)uVar97 & 7);
                        if (uVar96 == 0) {
                          uVar96 = 8;
                        }
                        lVar78 = (uVar96 + uVar110) - (long)phVar72;
                        puVar60 = (undefined4 *)(lVar105 + uVar110 * 0x14 + 0x94);
                        auVar130._8_4_ = 0xffffffff;
                        auVar130._0_8_ = 0xffffffffffffffff;
                        auVar130._12_4_ = 0xffffffff;
                        auVar146._8_4_ = 0xffffffff;
                        auVar146._0_8_ = 0xffffffffffffffff;
                        auVar146._12_4_ = 0xffffffff;
                        do {
                          in_XMM4._12_4_ = puVar60[-0x14];
                          in_XMM4._8_4_ = puVar60[-0x19];
                          in_XMM4._4_4_ = puVar60[-0x1e];
                          in_XMM4._0_4_ = puVar60[-0x23];
                          in_XMM5._12_4_ = *puVar60;
                          in_XMM5._8_4_ = puVar60[-5];
                          in_XMM5._4_4_ = puVar60[-10];
                          in_XMM5._0_4_ = puVar60[-0xf];
                          auVar149 = in_XMM4 ^ _DAT_006524b0;
                          auVar210 = auVar130 ^ _DAT_006524b0;
                          auVar192._0_4_ = -(uint)(auVar210._0_4_ < auVar149._0_4_);
                          auVar192._4_4_ = -(uint)(auVar210._4_4_ < auVar149._4_4_);
                          auVar192._8_4_ = -(uint)(auVar210._8_4_ < auVar149._8_4_);
                          auVar192._12_4_ = -(uint)(auVar210._12_4_ < auVar149._12_4_);
                          auVar130 = ~auVar192 & in_XMM4 | auVar130 & auVar192;
                          auVar149 = in_XMM5 ^ _DAT_006524b0;
                          auVar210 = auVar146 ^ _DAT_006524b0;
                          auVar193._0_4_ = -(uint)(auVar210._0_4_ < auVar149._0_4_);
                          auVar193._4_4_ = -(uint)(auVar210._4_4_ < auVar149._4_4_);
                          auVar193._8_4_ = -(uint)(auVar210._8_4_ < auVar149._8_4_);
                          auVar193._12_4_ = -(uint)(auVar210._12_4_ < auVar149._12_4_);
                          auVar146 = ~auVar193 & in_XMM5 | auVar146 & auVar193;
                          puVar60 = puVar60 + 0x28;
                          lVar78 = lVar78 + 8;
                        } while (lVar78 != 0);
                        uVar110 = uVar110 + (uVar97 - uVar96);
                        auVar210 = auVar130 ^ _DAT_006524b0;
                        auVar149 = auVar146 ^ _DAT_006524b0;
                        auVar194._0_4_ = -(uint)(auVar210._0_4_ < auVar149._0_4_);
                        auVar194._4_4_ = -(uint)(auVar210._4_4_ < auVar149._4_4_);
                        auVar194._8_4_ = -(uint)(auVar210._8_4_ < auVar149._8_4_);
                        auVar194._12_4_ = -(uint)(auVar210._12_4_ < auVar149._12_4_);
                        auVar175 = ~auVar194 & auVar146 | auVar130 & auVar194;
                        auVar131._0_8_ = auVar175._8_8_;
                        auVar131._8_4_ = auVar175._8_4_;
                        auVar131._12_4_ = auVar175._12_4_;
                        auVar210 = auVar175 ^ _DAT_006524b0;
                        auVar149 = auVar131 ^ _DAT_006524b0;
                        auVar172._0_4_ = -(uint)(auVar210._0_4_ < auVar149._0_4_);
                        auVar172._4_4_ = -(uint)(auVar210._4_4_ < auVar149._4_4_);
                        auVar172._8_4_ = -(uint)(auVar210._8_4_ < auVar149._8_4_);
                        auVar172._12_4_ = -(uint)(auVar210._12_4_ < auVar149._12_4_);
                        auVar149 = ~auVar172 & auVar131 | auVar175 & auVar172;
                        uVar55 = auVar149._4_4_;
                        auVar132._4_4_ = uVar55;
                        auVar132._0_4_ = uVar55;
                        auVar132._8_4_ = uVar55;
                        auVar132._12_4_ = uVar55;
                        auVar210 = auVar149 ^ _DAT_006524b0;
                        auVar175 = auVar132 ^ _DAT_006524b0;
                        auVar195._0_4_ = -(uint)(auVar210._0_4_ < auVar175._0_4_);
                        auVar195._4_4_ = -(uint)(auVar210._4_4_ < auVar175._4_4_);
                        auVar195._8_4_ = -(uint)(auVar210._8_4_ < auVar175._8_4_);
                        auVar195._12_4_ = -(uint)(auVar210._12_4_ < auVar175._12_4_);
                        in_XMM2 = auVar149 & auVar195;
                        in_XMM3 = ~auVar195 & auVar132 | in_XMM2;
                        uVar99 = in_XMM3._0_4_;
                        in_XMM6 = _DAT_006524b0;
                      }
                      lVar78 = (long)phVar72 - uVar110;
                      puVar107 = (uint *)(lVar105 + uVar110 * 0x14 + 8);
                      do {
                        if (*puVar107 < uVar99) {
                          uVar99 = *puVar107;
                        }
                        puVar107 = puVar107 + 5;
                        lVar78 = lVar78 + -1;
                      } while (lVar78 != 0);
                    }
                  }
                  else {
                    uVar99 = *(uint *)(lVar105 + 8 + (ulong)uVar82 * 0x14);
                    uVar176 = *(uint *)(lVar105 + 8 + (ulong)(uVar70 - 1) * 0x14);
                    if (uVar176 < uVar99) {
                      uVar99 = uVar176;
                    }
                  }
                }
                auVar210 = hb_buffer_t::_infos_set_glyph_flags
                                     (phVar101,lVar105,uVar82,uVar70,uVar99,3);
                in_XMM1._0_8_ = auVar210._8_8_;
                in_XMM0._0_8_ = auVar210._0_8_;
                in_XMM1._8_8_ = extraout_XMM1_Qb_19;
                in_XMM0._8_8_ = extraout_XMM0_Qb_06;
              }
              if (uVar82 < uVar71) {
                uVar110 = (ulong)uVar82;
                uVar97 = ~uVar110;
                if ((uVar71 - uVar82 & 3) != 0) {
                  puVar107 = (uint *)(lVar84 + 4 + uVar110 * 0x14);
                  lVar105 = 0;
                  do {
                    *puVar107 = *puVar107 | uVar104;
                    lVar105 = lVar105 + -1;
                    puVar107 = puVar107 + 5;
                  } while (-lVar105 != ((ulong)(uVar71 - uVar82) & 3));
                  uVar110 = uVar110 - lVar105;
                }
                phVar72 = (hb_buffer_t *)(uVar97 + uVar108);
                if ((hb_buffer_t *)0x2 < (hb_buffer_t *)(uVar97 + uVar108)) {
                  lVar105 = uVar108 - uVar110;
                  phVar83 = _iStack0000000000000168 + uVar110 * 0x14;
                  do {
                    *(uint *)(phVar83 + -0x3c) = *(uint *)(phVar83 + -0x3c) | uVar104;
                    *(uint *)(phVar83 + -0x28) = *(uint *)(phVar83 + -0x28) | uVar104;
                    *(uint *)(phVar83 + -0x14) = *(uint *)(phVar83 + -0x14) | uVar104;
                    *(uint *)phVar83 = *(uint *)phVar83 | uVar104;
                    phVar83 = phVar83 + 0x50;
                    lVar105 = lVar105 + -4;
                    phVar72 = _iStack0000000000000168;
                  } while (lVar105 != 0);
                }
              }
              puVar107 = (uint *)(lVar84 + 4 + uVar108 * 0x14);
              *puVar107 = *puVar107 | *(uint *)(phStack_98 + 0xf0);
              if (uVar86 < uVar69) {
                uVar86 = ~uVar71 + uVar69 & 3;
                if (uVar86 != 0) {
                  phVar72 = (hb_buffer_t *)(lVar84 + 4 + uVar88 * 0x14);
                  lVar105 = 0;
                  do {
                    *(uint *)phVar72 = *(uint *)phVar72 | uVar68;
                    lVar105 = lVar105 + -1;
                    phVar72 = phVar72 + 0x14;
                  } while (-uVar86 != (int)lVar105);
                  uVar88 = uVar88 - lVar105;
                }
                if (2 < (uVar69 - uVar71) - 2) {
                  iVar81 = uVar69 - (int)uVar88;
                  phVar72 = _iStack0000000000000168 + uVar88 * 0x14;
                  do {
                    *(uint *)(phVar72 + -0x3c) = *(uint *)(phVar72 + -0x3c) | uVar68;
                    *(uint *)(phVar72 + -0x28) = *(uint *)(phVar72 + -0x28) | uVar68;
                    *(uint *)(phVar72 + -0x14) = *(uint *)(phVar72 + -0x14) | uVar68;
                    *(uint *)phVar72 = *(uint *)phVar72 | uVar68;
                    phVar72 = phVar72 + 0x50;
                    iVar81 = iVar81 + -4;
                  } while (iVar81 != 0);
                }
              }
              uVar71 = uVar69 - 1;
            }
          }
          else {
            bVar112 = true;
            if (uVar82 == uVar71) {
LAB_003fafc2:
              if (((byte)param_2[0x34] & 0x40) == 0) goto LAB_003fafcd;
              uVar82 = *(uint *)(param_2 + 0x7c);
              if (uVar86 <= *(uint *)(param_2 + 0x7c)) {
                uVar82 = uVar86;
              }
              param_2[0xdc] = (hb_buffer_t)((byte)param_2[0xdc] | 0x20);
              if (uVar71 < uVar82) {
                lVar105 = *(long *)phStack_a0;
                phVar72 = (hb_buffer_t *)(ulong)uVar82;
                uVar110 = uVar108;
                if ((uVar82 - uVar71 & 3) != 0) {
                  pbVar98 = (byte *)(lVar105 + uVar108 * 0x14 + 4);
                  lVar78 = 0;
                  do {
                    *pbVar98 = *pbVar98 | 2;
                    lVar78 = lVar78 + -1;
                    pbVar98 = pbVar98 + 0x14;
                  } while (-lVar78 != ((ulong)(uVar82 - uVar71) & 3));
                  uVar110 = uVar108 - lVar78;
                }
                if ((hb_buffer_t *)0x2 < phVar72 + ~uVar108) {
                  lVar78 = (long)phVar72 - uVar110;
                  pbVar98 = (byte *)(lVar105 + uVar110 * 0x14 + 0x40);
                  do {
                    pbVar98[-0x3c] = pbVar98[-0x3c] | 2;
                    pbVar98[-0x28] = pbVar98[-0x28] | 2;
                    pbVar98[-0x14] = pbVar98[-0x14] | 2;
                    *pbVar98 = *pbVar98 | 2;
                    pbVar98 = pbVar98 + 0x50;
                    lVar78 = lVar78 + -4;
                    phVar72 = (hb_buffer_t *)0x0;
                  } while (lVar78 != 0);
                }
              }
              if (!bVar112) goto LAB_003fad00;
            }
LAB_003fafd5:
            if (((byte)param_2[0x34] & 0x40) != 0) {
              if (*(uint *)(param_2 + 0x7c) < uVar86) {
                uVar86 = *(uint *)(param_2 + 0x7c);
              }
              param_2[0xdc] = (hb_buffer_t)((byte)param_2[0xdc] | 0x20);
              if (uVar71 < uVar86) {
                phVar72 = *(hb_buffer_t **)phStack_a0;
                uVar110 = ~uVar108;
                if ((uVar86 - uVar71 & 3) != 0) {
                  phVar83 = phVar72 + uVar108 * 0x14 + 4;
                  lVar105 = 0;
                  do {
                    *phVar83 = (hb_buffer_t)((byte)*phVar83 | 2);
                    lVar105 = lVar105 + -1;
                    phVar83 = phVar83 + 0x14;
                  } while (-lVar105 != ((ulong)(uVar86 - uVar71) & 3));
                  uVar108 = uVar108 - lVar105;
                }
                if (2 < uVar110 + uVar86) {
                  lVar105 = uVar86 - uVar108;
                  phVar72 = phVar72 + uVar108 * 0x14 + 0x40;
                  do {
                    phVar72[-0x3c] = (hb_buffer_t)((byte)phVar72[-0x3c] | 2);
                    phVar72[-0x28] = (hb_buffer_t)((byte)phVar72[-0x28] | 2);
                    phVar72[-0x14] = (hb_buffer_t)((byte)phVar72[-0x14] | 2);
                    *phVar72 = (hb_buffer_t)((byte)*phVar72 | 2);
                    phVar72 = phVar72 + 0x50;
                    lVar105 = lVar105 + -4;
                  } while (lVar105 != 0);
                }
              }
            }
          }
        }
LAB_003fad00:
        uVar71 = uVar71 + 1;
      } while (uVar71 < uVar103);
    }
  }
  if (*(code **)(*(long *)(phStack_98 + 0x80) + 0x40) != (code *)0x0) {
    auVar210 = (**(code **)(*(long *)(phStack_98 + 0x80) + 0x40))(phStack_68,phVar101,this_02);
    in_XMM1._0_8_ = auVar210._8_8_;
    in_XMM0._0_8_ = auVar210._0_8_;
    in_XMM1._8_8_ = extraout_XMM1_Qb_18;
    in_XMM0._8_8_ = extraout_XMM0_Qb_05;
  }
  lVar84 = CONCAT44(uVar53,local_58);
  if (uStack_60 != 0) {
    uVar56 = 0;
    do {
      lVar105 = uVar56 * 0x10;
      uVar103 = *(uint *)(lVar84 + 8 + lVar105);
      if (((uVar103 != 0) || (*(int *)(lVar84 + 0xc + lVar105) != -1)) &&
         (0 < *(int *)(phStack_98 + 0x9c))) {
        phVar72 = *(hb_buffer_t **)(phStack_98 + 0xa0);
        iVar54 = *(int *)(phStack_98 + 0x9c) + -1;
        iVar81 = 0;
        do {
          while( true ) {
            uVar104 = (uint)(iVar54 + iVar81) >> 1;
            uVar108 = (ulong)uVar104;
            if (*(uint *)(lVar84 + lVar105) < *(uint *)(phVar72 + uVar108 * 0x24)) break;
            if (*(uint *)(lVar84 + lVar105) <= *(uint *)(phVar72 + uVar108 * 0x24)) {
              uVar104 = *(uint *)(phVar72 + uVar108 * 0x24 + 0x18);
              if (uVar104 != 0) {
                iVar81 = *(int *)(lVar84 + 4 + lVar105);
                hVar7 = phVar72[uVar108 * 0x24 + 0x14];
                phVar72 = (hb_buffer_t *)CONCAT71((int7)((ulong)phVar72 >> 8),hVar7);
                uVar68 = *(uint *)phStack_90;
                if ((ulong)uVar68 != 0) {
                  uVar71 = *(uint *)(lVar84 + 0xc + lVar105);
                  phVar72 = (hb_buffer_t *)(ulong)uVar71;
                  lVar105 = *(long *)phStack_a0;
                  lVar78 = 0;
                  do {
                    uVar86 = *(uint *)(lVar105 + 8 + lVar78);
                    if ((uVar103 <= uVar86) && (uVar86 < uVar71)) {
                      *(uint *)(lVar105 + 4 + lVar78) =
                           *(uint *)(lVar105 + 4 + lVar78) & ~uVar104 |
                           iVar81 << ((byte)hVar7 & 0x1f) & uVar104;
                    }
                    lVar78 = lVar78 + 0x14;
                  } while ((ulong)uVar68 * 0x14 != lVar78);
                }
              }
              goto LAB_003f93d0;
            }
            iVar81 = uVar104 + 1;
            if (iVar54 < iVar81) goto LAB_003f93d0;
          }
          iVar54 = uVar104 - 1;
        } while (iVar81 <= iVar54);
      }
LAB_003f93d0:
      uVar56 = uVar56 + 1;
    } while (uVar56 != uStack_60);
  }
  if (((byte)phStack_98[0x108] & 0x80) == 0) {
LAB_003f94d3:
    uVar103 = *(uint *)phStack_90;
    if ((ulong)uVar103 != 0) {
      lVar84 = *(long *)phStack_a0;
      if ((ulong)uVar103 - 1 < 3) {
        uVar56 = 0;
      }
      else {
        puVar60 = (undefined4 *)(lVar84 + 0x48);
        uVar56 = 0;
        do {
          puVar60[-0x12] = puVar60[-0xf];
          puVar60[-0xd] = puVar60[-10];
          puVar60[-8] = puVar60[-5];
          puVar60[-3] = *puVar60;
          uVar56 = uVar56 + 4;
          puVar60 = puVar60 + 0x14;
        } while ((uVar103 & 0xfffffffc) != uVar56);
      }
      phVar72 = (hb_buffer_t *)0x0;
      if ((ulong)(uVar103 & 3) != 0) {
        lVar84 = lVar84 + uVar56 * 0x14;
        phVar72 = (hb_buffer_t *)((ulong)(uVar103 & 3) * 0x14);
        phVar83 = (hb_buffer_t *)0x0;
        do {
          *(undefined4 *)(phVar83 + lVar84) = *(undefined4 *)(phVar83 + lVar84 + 0xc);
          phVar83 = phVar83 + 0x14;
        } while (phVar72 != phVar83);
      }
    }
  }
  else {
    uVar56 = (ulong)*(uint *)phStack_90;
    phVar72 = (hb_buffer_t *)0x0;
    if (uVar56 != 0) {
      lVar84 = *(long *)phStack_a0;
      phVar72 = (hb_buffer_t *)(uVar56 * 4);
      lVar105 = 0;
      do {
        uVar52 = *(ushort *)(lVar84 + 0x10 + lVar105);
        if ((uVar52 & 0x1f) == 0xc) {
          uVar80 = uVar52 >> 8;
          if (0xc7ff < uVar52) goto _hb_ot_shape_switchD_003fd3df_caseD_0;
          uVar103 = *(uint *)(lVar84 + lVar105);
          if ((uVar103 & 0xffffff00) == 0xe00) {
            if (uVar52 < 0x100) {
              uVar91 = 0;
              switch(uVar103) {
              case 0xe31:
              case 0xe34:
              case 0xe35:
              case 0xe36:
              case 0xe37:
              case 0xe47:
              case 0xe4c:
              case 0xe4d:
              case 0xe4e:
                uVar91 = 0xe8;
                break;
              case 0xeb1:
              case 0xeb4:
              case 0xeb5:
              case 0xeb6:
              case 0xeb7:
              case 0xebb:
              case 0xecc:
              case 0xecd:
                uVar91 = 0xe6;
                break;
              case 0xebc:
                uVar91 = 0xdc;
              }
            }
            else {
              uVar91 = 0xde;
              if (uVar103 != 0xe3a) goto LAB_003fd3c5;
            }
_hb_ot_shape_switchD_003fd3df_caseD_1:
            uVar80 = uVar91;
          }
          else {
LAB_003fd3c5:
            uVar80 = 0xdc;
            uVar91 = uVar52 >> 8;
            switch((uVar52 >> 8) + 0x7f & 0xff) {
            case 0:
            case 2:
            case 0x8e:
            case 0x8f:
            case 0x90:
            case 0x91:
            case 0x92:
            case 0x93:
            case 0x94:
            case 0x95:
            case 0x96:
            case 0x97:
            case 0x98:
            case 0x9d:
            case 0xa0:
            case 0xf5:
              break;
            default:
              goto _hb_ot_shape_switchD_003fd3df_caseD_1;
            case 3:
            case 0x99:
            case 0x9a:
            case 0x9b:
            case 0x9c:
            case 0x9e:
            case 0x9f:
            case 0xa1:
            case 0xa2:
            case 0xa3:
            case 0xf9:
              uVar80 = 0xe6;
              break;
            case 0x82:
              uVar80 = 0xde;
              break;
            case 0x89:
            case 0xea:
              uVar80 = 0xe8;
              break;
            case 0x8a:
            case 0x8d:
              uVar80 = 0xe4;
              break;
            case 0x8c:
              uVar80 = 0xd6;
            }
          }
_hb_ot_shape_switchD_003fd3df_caseD_0:
          phVar72 = (hb_buffer_t *)((ulong)uVar52 & 0xff);
          *(ushort *)(lVar84 + 0x10 + lVar105) = uVar80 << 8 | (ushort)phVar72;
        }
        lVar105 = lVar105 + 0x14;
      } while (uVar56 * 0x14 != lVar105);
      goto LAB_003f94d3;
    }
  }
  *(undefined4 *)(param_2 + 0x4c) = 2;
  param_2[0xd4] = (hb_buffer_t)((byte)param_2[0xd4] & 0xf0 | 7);
  lVar84 = *(long *)(this_02 + 0x20);
  this = *(accelerator_t **)(lVar84 + 0x128);
  while (this == (accelerator_t *)0x0) {
    lVar105 = *(long *)(lVar84 + 0x68);
    if (lVar105 == 0) {
LAB_003fdb8d:
      this = (accelerator_t *)&_hb_NullPool;
      break;
    }
    phVar83 = phStack_a0;
    this = calloc(1,0x218);
    if (this == (accelerator_t *)0x0) {
      LOCK();
      bVar112 = *(long *)(lVar84 + 0x128) == 0;
      if (bVar112) {
        *(long *)(lVar84 + 0x128) = (long)&_hb_NullPool;
      }
      UNLOCK();
      in_XMM0 = extraout_XMM0_14;
      if (bVar112) goto LAB_003fdb8d;
    }
    else {
      auVar210 = OT::GDEF::accelerator_t::accelerator_t
                           (this,lVar105,extraout_RDX,phVar72,
                            (GDEFVersion1_2<OT::Layout::SmallTypes> *)phVar83);
      in_XMM1._0_8_ = auVar210._8_8_;
      in_XMM0._0_8_ = auVar210._0_8_;
      in_XMM1._8_8_ = extraout_XMM1_Qb_28;
      in_XMM0._8_8_ = extraout_XMM0_Qb_11;
      LOCK();
      bVar112 = *(long *)(lVar84 + 0x128) == 0;
      if (bVar112) {
        *(long *)(lVar84 + 0x128) = (long)this;
      }
      UNLOCK();
      if (bVar112) break;
      OT::GDEF::accelerator_t::~accelerator_t(this);
      in_XMM1._8_8_ = extraout_XMM1_Qb_29;
      in_XMM1._0_8_ = extraout_XMM1_Qa_28;
      free(this);
      in_XMM0 = extraout_XMM0_15;
    }
    this = *(accelerator_t **)(lVar84 + 0x128);
  }
  uVar103 = *(uint *)phStack_90;
  if ((ulong)uVar103 != 0) {
    lVar84 = *(long *)phStack_a0;
    lVar105 = 0;
    do {
      uVar104 = *(uint *)(lVar84 + lVar105);
      sVar8 = *(short *)(this + (ulong)(uVar104 & 0xff) * 2 + 0x18);
      if ((sVar8 == -1) || ((uint)(int)sVar8 >> 3 != uVar104 >> 8)) {
        puVar60 = *(undefined4 **)this;
        this_03 = (GDEF *)&_hb_NullPool;
        if (puVar60 == (undefined4 *)0x0) {
          puVar60 = &_hb_NullPool;
        }
        if (3 < (uint)puVar60[6]) {
          this_03 = *(GDEF **)(puVar60 + 4);
        }
        uVar68 = OT::GDEF::get_glyph_props(this_03,uVar104);
        in_XMM0 = extraout_XMM0_11;
        if (((*(long *)this != 0) && (uVar104 < 0x200000)) && (uVar68 < 8)) {
          *(ushort *)(this + (ulong)(uVar104 & 0xff) * 2 + 0x18) =
               (ushort)uVar68 | (ushort)(uVar104 >> 5) & 0xfff8;
        }
      }
      else {
        uVar68 = (int)sVar8 & 7;
      }
      *(short *)(lVar84 + 0xc + lVar105) = (short)uVar68;
      *(undefined1 *)(lVar84 + 0xe + lVar105) = 0;
      lVar105 = lVar105 + 0x14;
    } while ((ulong)uVar103 * 0x14 != lVar105);
  }
  auVar216._8_8_ = in_XMM1._0_8_;
  auVar216._0_8_ = in_XMM0._0_8_;
  uVar52 = *(ushort *)(phStack_98 + 0x108);
  if (((uVar52 & 0x40) != 0) && (uVar103 = *(uint *)phStack_90, (ulong)uVar103 != 0)) {
    lVar84 = *(long *)phStack_a0;
    lVar105 = 0;
    do {
      uVar52 = *(ushort *)(lVar84 + 0x10 + lVar105);
      if (((uVar52 & 0x1f) != 0xc) ||
         ((uVar87 = 8, (uVar52 & 0x20) != 0 && ((*(byte *)(lVar84 + 0xc + lVar105) & 0x10) == 0))))
      {
        uVar87 = 2;
      }
      *(undefined2 *)(lVar84 + 0xc + lVar105) = uVar87;
      lVar105 = lVar105 + 0x14;
    } while ((ulong)uVar103 * 0x14 != lVar105);
    uVar52 = *(ushort *)(phStack_98 + 0x108);
  }
  if ((uVar52 & 0x2000) == 0) {
    lVar84 = *(long *)(this_02 + 0x20);
    paStack_a8 = *(accelerator_t<OT::Layout::GSUB> **)(lVar84 + 0x130);
    while (paStack_a8 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
      uVar65 = in_XMM1._0_8_;
      uVar58 = in_XMM0._0_8_;
      lVar105 = *(long *)(lVar84 + 0x68);
      if (lVar105 == 0) {
LAB_003fe723:
        auVar216._8_8_ = uVar65;
        auVar216._0_8_ = uVar58;
        paStack_a8 = (accelerator_t<OT::Layout::GSUB> *)&_hb_NullPool;
        break;
      }
      paStack_a8 = calloc(1,0x18);
      uVar65 = in_XMM1._0_8_;
      uVar58 = extraout_XMM0_16._0_8_;
      if (paStack_a8 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
        LOCK();
        bVar112 = *(long *)(lVar84 + 0x130) == 0;
        if (bVar112) {
          *(long *)(lVar84 + 0x130) = (long)&_hb_NullPool;
        }
        UNLOCK();
        in_XMM0 = extraout_XMM0_16;
        if (bVar112) goto LAB_003fe723;
      }
      else {
        auVar216 = OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(paStack_a8,lVar105);
        LOCK();
        bVar112 = *(long *)(lVar84 + 0x130) == 0;
        if (bVar112) {
          *(long *)(lVar84 + 0x130) = (long)paStack_a8;
        }
        UNLOCK();
        if (bVar112) break;
        OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(paStack_a8);
        in_XMM1._8_8_ = extraout_XMM1_Qb_30;
        in_XMM1._0_8_ = extraout_XMM1_Qa_29;
        free(paStack_a8);
        in_XMM0 = extraout_XMM0_17;
      }
      auVar216._8_8_ = in_XMM1._0_8_;
      auVar216._0_8_ = in_XMM0._0_8_;
      paStack_a8 = *(accelerator_t<OT::Layout::GSUB> **)(lVar84 + 0x130);
    }
    if (*(long *)(param_2 + 0xec) == 0) {
LAB_003f976d:
      auVar211 = OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                           ((hb_ot_apply_context_t *)&param_7,0,(long)this_02,(undefined4 *)phVar101
                            ,*(GDEFVersion1_2<OT::Layout::SmallTypes> **)paStack_a8);
      in_stack_000000f0 =
           OT::Layout::GSUB_impl::SubstLookup::dispatch_recurse_func<OT::hb_ot_apply_context_t>;
      uVar56 = (ulong)*(uint *)(phStack_98 + 0xcc);
      if (*(uint *)(phStack_98 + 0xcc) != 0) {
        uVar110 = 0;
        uVar108 = 0;
        do {
          if (uVar110 < uVar56) {
            puVar107 = (uint *)(uVar110 * 0x10 + *(long *)(phStack_98 + 0xd0));
            uVar103 = *puVar107;
          }
          else {
            puVar107 = &_hb_NullPool;
            uVar103 = _hb_NullPool;
          }
          if ((uint)uVar108 < uVar103) {
            uVar108 = uVar108 & 0xffffffff;
            do {
              if (uVar108 < *(uint *)(phStack_98 + 0xac)) {
                puVar89 = (ushort *)(uVar108 * 0xc + *(long *)(phStack_98 + 0xb0));
              }
              else {
                puVar89 = (ushort *)&_hb_NullPool;
              }
              uVar52 = *puVar89;
              uVar56 = (ulong)uVar52;
              if ((uint)uVar52 < *(uint *)(paStack_a8 + 8)) {
                while( true ) {
                  uVar58 = auVar211._8_8_;
                  puVar62 = *(ulong **)(*(long *)(paStack_a8 + 0x10) + uVar56 * 8);
                  if (puVar62 != (ulong *)0x0) break;
                  puVar60 = *(undefined4 **)paStack_a8;
                  if (puVar60 == (undefined4 *)0x0) {
                    puVar60 = &_hb_NullPool;
                  }
                  psVar76 = (short *)&_hb_NullPool;
                  if (3 < (uint)puVar60[6]) {
                    psVar76 = *(short **)(puVar60 + 4);
                  }
                  puVar93 = (ushort *)&_hb_NullPool;
                  if (*psVar76 == 0x100) {
                    uVar80 = psVar76[4];
                    puVar61 = (ushort *)&_hb_NullPool;
                    if (uVar80 != 0) {
                      puVar61 = (ushort *)
                                ((long)psVar76 + (ulong)(ushort)(uVar80 << 8 | uVar80 >> 8));
                    }
                    puVar93 = (ushort *)&_hb_NullPool;
                    if (uVar52 < (ushort)(*puVar61 << 8 | *puVar61 >> 8)) {
                      uVar80 = puVar61[uVar56 + 1];
                      puVar93 = (ushort *)&_hb_NullPool;
                      if (uVar80 != 0) {
                        puVar93 = (ushort *)
                                  ((long)puVar61 + (ulong)(ushort)(uVar80 << 8 | uVar80 >> 8));
                      }
                    }
                  }
                  puVar62 = OT::hb_ot_layout_lookup_accelerator_t::
                            create<OT::Layout::GSUB_impl::SubstLookup>(puVar93);
                  auVar211._8_8_ = uVar58;
                  auVar211._0_8_ = extraout_XMM0_Qa_03;
                  if (puVar62 == (ulong *)0x0) goto LAB_003f9820;
                  plVar4 = (long *)(*(long *)(paStack_a8 + 0x10) + uVar56 * 8);
                  LOCK();
                  bVar112 = *plVar4 == 0;
                  if (bVar112) {
                    *plVar4 = (long)puVar62;
                  }
                  UNLOCK();
                  if (bVar112) break;
                  free(puVar62);
                  auVar211._8_8_ = uVar58;
                  auVar211._0_8_ = extraout_XMM0_Qa_04;
                }
                uVar58 = auVar211._8_8_;
                if (*(long *)(param_2 + 0xec) != 0) {
                  uVar103 = *(uint *)(puVar89 + 4);
                  bVar112 = hb_buffer_t::message
                                      (auVar211._0_8_,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,
                                       in_XMM4._0_8_,in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,
                                       this_02,"start lookup %u feature \'%c%c%c%c\'",uVar56,
                                       (ulong)(uVar103 >> 0x18),(ulong)(uVar103 >> 0x10 & 0xff),
                                       (char)(uVar103 >> 8),(ulong)(uVar103 & 0xff));
                  auVar211._8_8_ = uVar58;
                  auVar211._0_8_ = extraout_XMM0_Qa_05;
                  if (!bVar112) goto LAB_003f9820;
                }
                phVar83 = param_25;
                uVar58 = auVar211._8_8_;
                if ((((*puVar62 & in_stack_00000118) == 0) ||
                    ((puVar62[1] & in_stack_00000120) == 0)) ||
                   ((in_stack_00000128 & puVar62[2]) == 0)) {
                  if (*(long *)(param_2 + 0xec) != 0) {
                    uVar103 = *(uint *)(puVar89 + 4);
                    hb_buffer_t::message
                              (auVar211._0_8_,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                               in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,this_02,
                               "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches",
                               uVar56,(ulong)(uVar103 >> 0x18),(ulong)(uVar103 >> 0x10 & 0xff),
                               (char)(uVar103 >> 8),(ulong)(uVar103 & 0xff));
                    auVar211._8_8_ = uVar58;
                    auVar211._0_8_ = extraout_XMM0_Qa_06;
                    goto LAB_003f9d14;
                  }
                }
                else {
                  uStack0000000000000138 = (uint)uVar52;
                  in_stack_00000130._4_4_ = *(uint *)(puVar89 + 2);
                  in_stack_00000150 = 0xffffffff;
                  bVar51 = (byte)puVar89[1] >> 1;
                  in_stack_00000140._6_1_ = bVar51 & 1;
                  in_stack_00000140._5_1_ = (byte)puVar89[1] & 1;
                  in_stack_00000148 = (byte)puVar89[1] >> 2 & 1;
                  in_stack_00000140._7_1_ = (byte)puVar89[1] >> 3 & 1;
                  puVar60 = *(undefined4 **)paStack_a8;
                  if (puVar60 == (undefined4 *)0x0) {
                    puVar60 = &_hb_NullPool;
                  }
                  psVar76 = (short *)&_hb_NullPool;
                  if (3 < (uint)puVar60[6]) {
                    psVar76 = *(short **)(puVar60 + 4);
                  }
                  psVar100 = (short *)&_hb_NullPool;
                  if (*psVar76 == 0x100) {
                    uVar80 = psVar76[4];
                    puVar93 = (ushort *)&_hb_NullPool;
                    if (uVar80 != 0) {
                      puVar93 = (ushort *)
                                ((long)psVar76 + (ulong)(ushort)(uVar80 << 8 | uVar80 >> 8));
                    }
                    psVar100 = (short *)&_hb_NullPool;
                    if (uVar52 < (ushort)(*puVar93 << 8 | *puVar93 >> 8)) {
                      uVar52 = puVar93[uVar56 + 1];
                      psVar100 = (short *)&_hb_NullPool;
                      if (uVar52 != 0) {
                        psVar100 = (short *)((long)puVar93 +
                                            (ulong)(ushort)(uVar52 << 8 | uVar52 >> 8));
                      }
                    }
                  }
                  uVar103 = *(uint *)(param_25 + 0x60);
                  if ((uVar103 == 0) || (in_stack_00000130._4_4_ == 0)) {
LAB_003f9d14:
                    lVar84 = *(long *)(param_2 + 0xec);
                  }
                  else {
                    uVar80 = psVar100[2] << 8 | (ushort)psVar100[2] >> 8;
                    uVar52 = (ushort)psVar100[1] >> 8;
                    uVar91 = psVar100[1] << 8 | uVar52;
                    param_17._0_4_ = (uint)uVar91;
                    if ((uVar52 & 0x10) != 0) {
                      param_17._0_4_ =
                           CONCAT22(psVar100[(ulong)uVar80 + 3] << 8 |
                                    (ushort)psVar100[(ulong)uVar80 + 3] >> 8,uVar91);
                    }
                    param_16 = (hb_ot_apply_context_t *)&param_7;
                    param_12 = (undefined1  [16])0x0;
                    param_13 = (hb_buffer_t *)0x0;
                    param_18._3_1_ = in_stack_00000140._7_1_;
                    if (param_22 != 0) {
                      param_18._3_1_ = 0;
                    }
                    param_18._2_1_ = param_22 == 1;
                    param_11 = (code *)(CONCAT62(param_11._2_6_,CONCAT11(bVar51,param_18._2_1_)) &
                                       0xffffffffffff01ff);
                    uVar88 = (ulong)param_11;
                    param_11._0_3_ = CONCAT12(param_18._2_1_,param_11._0_2_);
                    param_10 = CONCAT44(in_stack_00000130._4_4_,(uint)param_17);
                    param_11._0_4_ = CONCAT13(param_18._3_1_,param_11._0_3_);
                    param_11._5_3_ = SUB83(uVar88,5);
                    param_11._0_5_ = (uint5)(uint)param_11;
                    param_19 = (undefined1  [16])0x0;
                    param_20 = 0;
                    param_18._0_1_ = in_stack_00000140._5_1_ != 0 || (bool)param_18._2_1_;
                    param_18._1_1_ = 1;
                    param_17._4_4_ = 0xffffffff;
                    param_18._4_1_ = 0;
                    sVar8 = *psVar100;
                    param_14 = uVar103;
                    param_21 = uVar103;
                    uStack000000000000013c = (uint)param_17;
                    param_9 = param_16;
                    if (sVar8 == 0x700) {
                      puVar93 = (ushort *)&_hb_NullPool;
                      if (psVar100[2] != 0) {
                        puVar93 = (ushort *)(psVar100 + 3);
                      }
                      uVar52 = *puVar93;
                      psVar76 = (short *)&_hb_NullPool;
                      if (uVar52 != 0) {
                        psVar76 = (short *)((long)psVar100 +
                                           (ulong)(ushort)(uVar52 << 8 | uVar52 >> 8));
                      }
                      if (*psVar76 == 0x100) {
                        sVar8 = psVar76[1];
                        goto joined_r0x003f9e77;
                      }
                    }
                    else {
joined_r0x003f9e77:
                      if (sVar8 == 0x800) {
                        *(int *)(param_25 + 0x5c) = *(int *)(param_25 + 0x60) + -1;
                        auVar211 = apply_backward(param_16,puVar62,(uint)uVar80);
                        goto LAB_003f9d14;
                      }
                    }
                    *(undefined2 *)(param_25 + 0x5a) = 1;
                    *(undefined4 *)(param_25 + 100) = 0;
                    *(undefined8 *)(param_25 + 0x78) = *(undefined8 *)(param_25 + 0x70);
                    *(undefined4 *)(param_25 + 0x5c) = 0;
                    auVar211 = apply_forward(param_16,puVar62,(uint)uVar80);
                    uVar58 = auVar211._8_8_;
                    if (phVar83[0x58] != (hb_buffer_t)0x0) {
                      if (phVar83[0x5a] != (hb_buffer_t)0x0) {
                        iVar81 = *(int *)(phVar83 + 0x5c);
                        uVar103 = *(int *)(phVar83 + 0x60) - iVar81;
                        pvVar94 = *(void **)(phVar83 + 0x78);
                        pvVar67 = *(void **)(phVar83 + 0x70);
                        if ((pvVar94 != pvVar67) || (*(int *)(phVar83 + 100) != iVar81)) {
                          uVar104 = *(int *)(phVar83 + 100) + uVar103;
                          if ((uVar104 == 0) || (uVar104 < *(uint *)(phVar83 + 0x68))) {
                            if (pvVar94 == pvVar67) {
LAB_003f9c76:
                              uVar104 = *(uint *)(phVar83 + 100);
                              if (*(int *)(phVar83 + 0x5c) + uVar103 < uVar104 + uVar103) {
                                pvVar94 = *(void **)(phVar83 + 0x80);
                                *(void **)(phVar83 + 0x78) = pvVar94;
                                if ((ulong)uVar104 != 0) {
                                  memcpy(pvVar94,pvVar67,(ulong)uVar104 * 0x14);
                                  pvVar67 = *(void **)(phVar83 + 0x70);
                                  pvVar94 = *(void **)(phVar83 + 0x78);
                                }
                              }
                              else {
                                pvVar94 = pvVar67;
                              }
                            }
                          }
                          else {
                            uVar65 = hb_buffer_t::enlarge(phVar83,uVar104);
                            auVar211._8_8_ = uVar58;
                            auVar211._0_8_ = extraout_XMM0_Qa_09;
                            if ((char)uVar65 == '\0') goto LAB_003f9d8a;
                            pvVar67 = *(void **)(phVar83 + 0x70);
                            pvVar94 = *(void **)(phVar83 + 0x78);
                            if (pvVar94 == pvVar67) goto LAB_003f9c76;
                          }
                          memmove((void *)((long)pvVar94 + (ulong)*(uint *)(phVar83 + 100) * 0x14),
                                  (void *)((long)pvVar67 + (ulong)*(uint *)(phVar83 + 0x5c) * 0x14),
                                  (ulong)uVar103 * 0x14);
                          auVar211._8_8_ = uVar58;
                          auVar211._0_8_ = extraout_XMM0_Qa_07;
                          iVar81 = *(int *)(phVar83 + 100);
                        }
                        *(uint *)(phVar83 + 100) = iVar81 + uVar103;
                      }
                      if (*(long *)(phVar83 + 0x78) != *(long *)(phVar83 + 0x70)) {
                        *(long *)(phVar83 + 0x80) = *(long *)(phVar83 + 0x70);
                        *(long *)(phVar83 + 0x70) = *(long *)(phVar83 + 0x78);
                      }
                      *(undefined4 *)(phVar83 + 0x60) = *(undefined4 *)(phVar83 + 100);
                    }
LAB_003f9d8a:
                    phVar83[0x5a] = (hb_buffer_t)0x0;
                    *(undefined4 *)(phVar83 + 100) = 0;
                    *(undefined8 *)(phVar83 + 0x78) = *(undefined8 *)(phVar83 + 0x70);
                    *(undefined4 *)(phVar83 + 0x5c) = 0;
                    lVar84 = *(long *)(param_2 + 0xec);
                  }
                  if (lVar84 != 0) {
                    uVar58 = auVar211._8_8_;
                    uVar103 = *(uint *)(puVar89 + 4);
                    hb_buffer_t::message
                              (auVar211._0_8_,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                               in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,this_02,
                               "end lookup %u feature \'%c%c%c%c\'",uVar56,(ulong)(uVar103 >> 0x18),
                               (ulong)(uVar103 >> 0x10 & 0xff),(char)(uVar103 >> 8),
                               (ulong)(uVar103 & 0xff));
                    auVar211._8_8_ = uVar58;
                    auVar211._0_8_ = extraout_XMM0_Qa_08;
                  }
                }
              }
LAB_003f9820:
              uVar108 = uVar108 + 1;
            } while (uVar108 < *puVar107);
          }
          if (*(code **)(puVar107 + 2) != (code *)0x0) {
            cVar50 = (**(code **)(puVar107 + 2))(phStack_68,this_02,phVar101);
            auVar46._8_8_ = extraout_XMM1_Qa_14;
            auVar46._0_8_ = extraout_XMM0_Qa_10;
            auVar211._8_8_ = extraout_XMM1_Qa_14;
            auVar211._0_8_ = extraout_XMM0_Qa_10;
            if (cVar50 != '\0') {
              uVar103 = *(uint *)phStack_90;
              if (uVar103 == 0) {
                in_stack_00000118 = 0;
                in_stack_00000120 = 0;
                in_stack_00000128 = 0;
              }
              else {
                puVar107 = *(uint **)phStack_a0;
                uVar104 = uVar103 - 1;
                puVar77 = puVar107;
                if (uVar104 < 3) {
                  in_stack_00000118 = 0;
                }
                else {
                  uVar53 = uVar103 & 0xfffffffc;
                  in_stack_00000118 = 0;
                  do {
                    in_stack_00000118 =
                         in_stack_00000118 | 1L << ((ulong)(*puVar77 >> 4) & 0x3f) |
                         1L << ((ulong)(puVar77[5] >> 4) & 0x3f) |
                         1L << ((ulong)(puVar77[10] >> 4) & 0x3f) |
                         1L << ((ulong)(puVar77[0xf] >> 4) & 0x3f);
                    puVar77 = puVar77 + 0x14;
                    uVar53 = uVar53 - 4;
                  } while (uVar53 != 0);
                }
                if ((uVar103 & 3) != 0) {
                  lVar84 = 0;
                  do {
                    in_stack_00000118 =
                         in_stack_00000118 |
                         1L << ((ulong)(*(uint *)((long)puVar77 + lVar84) >> 4) & 0x3f);
                    lVar84 = lVar84 + 0x14;
                  } while ((uVar103 & 3) * 0x14 != (int)lVar84);
                }
                puVar77 = puVar107;
                if (uVar104 < 3) {
                  in_stack_00000120 = 0;
                }
                else {
                  uVar53 = uVar103 & 0xfffffffc;
                  in_stack_00000120 = 0;
                  do {
                    in_stack_00000120 =
                         in_stack_00000120 | 1L << ((ulong)(byte)*puVar77 & 0x3f) |
                         1L << ((ulong)(byte)puVar77[5] & 0x3f) |
                         1L << ((ulong)(byte)puVar77[10] & 0x3f) |
                         1L << ((ulong)(byte)puVar77[0xf] & 0x3f);
                    puVar77 = puVar77 + 0x14;
                    uVar53 = uVar53 - 4;
                  } while (uVar53 != 0);
                }
                if ((uVar103 & 3) != 0) {
                  lVar84 = 0;
                  do {
                    in_stack_00000120 =
                         in_stack_00000120 | 1L << ((ulong)*(byte *)((long)puVar77 + lVar84) & 0x3f)
                    ;
                    lVar84 = lVar84 + 0x14;
                  } while ((uVar103 & 3) * 0x14 != (int)lVar84);
                }
                if (uVar104 < 3) {
                  in_stack_00000128 = 0;
                }
                else {
                  uVar104 = uVar103 & 0xfffffffc;
                  in_stack_00000128 = 0;
                  do {
                    in_stack_00000128 =
                         in_stack_00000128 | 1L << ((ulong)(*puVar107 >> 9) & 0x3f) |
                         1L << ((ulong)(puVar107[5] >> 9) & 0x3f) |
                         1L << ((ulong)(puVar107[10] >> 9) & 0x3f) |
                         1L << ((ulong)(puVar107[0xf] >> 9) & 0x3f);
                    puVar107 = puVar107 + 0x14;
                    uVar104 = uVar104 - 4;
                  } while (uVar104 != 0);
                }
                if ((uVar103 & 3) != 0) {
                  lVar84 = 0;
                  do {
                    in_stack_00000128 =
                         in_stack_00000128 |
                         1L << ((ulong)(*(uint *)((long)puVar107 + lVar84) >> 9) & 0x3f);
                    lVar84 = lVar84 + 0x14;
                  } while ((uVar103 & 3) * 0x14 != (int)lVar84);
                }
              }
              auVar211 = auVar46;
            }
          }
          uVar110 = uVar110 + 1;
          uVar56 = (ulong)*(uint *)(phStack_98 + 0xcc);
        } while (uVar110 < uVar56);
      }
      free(in_stack_00000110);
      auVar210 = hb_sanitize_context_t::~hb_sanitize_context_t(&param_26);
      if (*(long *)(param_2 + 0xec) != 0) {
        uVar103 = *(uint *)(phStack_98 + 0x88);
        hb_buffer_t::message
                  (auVar210._0_8_,auVar210._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                   in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,this_02,
                   "end table GSUB script tag \'%c%c%c%c\'",(ulong)(uVar103 >> 0x18),
                   (ulong)(uVar103 >> 0x10 & 0xff),(ulong)(uVar103 >> 8 & 0xff),(char)uVar103);
      }
    }
    else {
      uVar103 = *(uint *)(phStack_98 + 0x88);
      bVar112 = hb_buffer_t::message
                          (auVar216._0_8_,auVar216._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,this_02,
                           "start table GSUB script tag \'%c%c%c%c\'",(ulong)(uVar103 >> 0x18),
                           (ulong)(uVar103 >> 0x10 & 0xff),(ulong)(uVar103 >> 8 & 0xff),
                           (char)uVar103);
      if (bVar112) goto LAB_003f976d;
    }
    uVar103 = *(uint *)(phStack_98 + 0x108);
  }
  else {
    hb_aat_layout_substitute(phStack_68,this_02,phVar101,CONCAT44(uVar53,local_58),uStack_60);
    uVar103 = *(uint *)(phStack_98 + 0x108);
  }
  if ((~uVar103 & 0x2200) == 0) {
    hb_aat_layout_remove_deleted_glyphs(phVar101);
  }
  *(undefined2 *)(param_2 + 0x76) = 0x100;
  *(undefined4 *)(param_2 + 0x80) = 0;
  phStack_b0 = *(hb_font_t **)(param_2 + 0x8c);
  *(hb_font_t **)(param_2 + 0x94) = phStack_b0;
  uVar103 = *(uint *)(param_2 + 0x7c);
  if (uVar103 * 0x14 != 0) {
    memset(*(void **)(param_2 + 0x9c),0,(ulong)(uVar103 * 0x14));
    uVar103 = *(uint *)(param_2 + 0x7c);
    phStack_b0 = *(hb_font_t **)(param_2 + 0x8c);
  }
  lVar84 = *(long *)(param_2 + 0x9c);
  if ((*(uint *)(param_2 + 0x54) & 0xfffffffe) == 4) {
    lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
    if (lVar105 == 0) {
      uVar58 = 0;
    }
    else {
      uVar58 = *(undefined8 *)(lVar105 + 0x38);
    }
    auVar212 = (**(code **)(*(long *)(this_02 + 0x90) + 0x58))
                         (this_02,*(undefined8 *)(this_02 + 0x98),uVar103,phStack_b0,0x14,lVar84,
                          0x14,uVar58);
    phVar92 = this_02;
    while (*(undefined **)(*(long *)(phVar92 + 0x90) + 0x68) ==
           PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
      phVar92 = *(hb_font_t **)(phVar92 + 0x18);
      if ((phVar92 == (hb_font_t *)0x0) || (phVar92 == (hb_font_t *)&_hb_Null_hb_font_t))
      goto LAB_003fa3a9;
    }
    if (uVar103 != 0) {
      lVar105 = 0;
      do {
        auVar212 = hb_font_t::get_glyph_h_origin_with_fallback
                             (this_02,*(undefined4 *)((long)phStack_b0 + lVar105),(int *)&param_7,
                              (int *)&uStack0000000000000178);
        piVar66 = (int *)(lVar84 + 8 + lVar105);
        *piVar66 = *piVar66 - (uint)param_7;
        piVar66 = (int *)(lVar84 + 0xc + lVar105);
        *piVar66 = *piVar66 - (int)uStack0000000000000178;
        lVar105 = lVar105 + 0x14;
      } while ((ulong)uVar103 * 0x14 != lVar105);
    }
  }
  else {
    lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
    if (lVar105 == 0) {
      uVar58 = 0;
    }
    else {
      uVar58 = *(undefined8 *)(lVar105 + 0x40);
    }
    auVar212 = (**(code **)(*(long *)(this_02 + 0x90) + 0x60))
                         (this_02,*(undefined8 *)(this_02 + 0x98),uVar103,phStack_b0,0x14,lVar84 + 4
                          ,0x14,uVar58);
    if (uVar103 != 0) {
      lVar105 = 0;
      do {
        auVar212 = hb_font_t::get_glyph_v_origin_with_fallback
                             (this_02,*(undefined4 *)((long)phStack_b0 + lVar105),(int *)&param_7,
                              (int *)&uStack0000000000000178);
        piVar66 = (int *)(lVar84 + 8 + lVar105);
        *piVar66 = *piVar66 - (uint)param_7;
        piVar66 = (int *)(lVar84 + 0xc + lVar105);
        *piVar66 = *piVar66 - (int)uStack0000000000000178;
        lVar105 = lVar105 + 0x14;
      } while ((ulong)uVar103 * 0x14 != lVar105);
    }
  }
LAB_003fa3a9:
  phStack_80 = param_2 + 0x9c;
  if (((byte)param_2[0xdc] & 4) == 0) {
LAB_003fa3c8:
    local_50 = (hb_buffer_t *)(ulong)*(uint *)phStack_90;
    phStack_78 = *(hb_font_t **)phStack_a0;
    phStack_88 = *(hb_buffer_t **)phStack_80;
    hVar7 = phStack_98[0x109];
  }
  else {
    phStack_78 = *(hb_font_t **)(param_2 + 0x8c);
    phStack_88 = *(hb_buffer_t **)(param_2 + 0x9c);
    uVar103 = *(uint *)(param_2 + 0x7c);
    if ((ulong)uVar103 != 0) {
      uVar104 = *(uint *)(param_2 + 0x54) & 0xfffffffe;
      lVar84 = 0;
      do {
        if (((*(ushort *)(phStack_78 + lVar84 + 0x10) & 0x1f) != 0x1d) ||
           (((byte)phStack_78[lVar84 + 0xc] & 0x20) != 0))
        goto _hb_ot_shape_switchD_003fa4fb_caseD_7;
        if ((*(int *)(param_2 + 0x40) != 0) &&
           (*(int *)(phStack_78 + lVar84) == *(int *)(param_2 + 0x40))) {
          if (uVar104 == 4) {
            iVar81 = *(int *)(this_02 + 0x28);
            iVar54 = iVar81 + 3;
            if (-1 < iVar81) {
              iVar54 = iVar81;
            }
            *(int *)(phStack_88 + lVar84) = iVar54 >> 2;
          }
          else {
            iVar81 = *(int *)(this_02 + 0x2c);
            iVar54 = iVar81 + 3;
            if (-1 < iVar81) {
              iVar54 = iVar81;
            }
            *(int *)(phStack_88 + lVar84 + 4) = -(iVar54 >> 2);
          }
        }
        uVar53 = (uint)(*(ushort *)(phStack_78 + lVar84 + 0x10) >> 8);
        if ((*(ushort *)(phStack_78 + lVar84 + 0x10) & 0x1f) != 0x1d) {
          uVar53 = 0;
        }
        switch((char)uVar53) {
        case '\x01':
        case '\x02':
        case '\x03':
        case '\x04':
        case '\x05':
        case '\x06':
        case '\x10':
          if (uVar104 == 4) {
            *(int *)(phStack_88 + lVar84) =
                 (int)((uVar53 >> 1) + *(int *)(this_02 + 0x28)) / (int)uVar53;
          }
          else {
            *(int *)(phStack_88 + lVar84 + 4) =
                 -((int)((uVar53 >> 1) + *(int *)(this_02 + 0x2c)) / (int)uVar53);
          }
          break;
        case '\x11':
          if (uVar104 == 4) {
            lVar105 = (long)*(int *)(this_02 + 0x28) << 2;
            *(uint *)(phStack_88 + lVar84) =
                 ((*(int *)(this_02 + 0x28) >> 0x1f & 0x3fffffffU) >> 0x1d) +
                 (int)(lVar105 / 0x12) + (int)(lVar105 >> 0x3f);
          }
          else {
            *(int *)(phStack_88 + lVar84 + 4) = (int)(((long)*(int *)(this_02 + 0x2c) * -4) / 0x12);
          }
          break;
        case '\x13':
          param_7._0_4_ = 0;
          lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
          if (lVar105 == 0) {
            uVar58 = 0;
          }
          else {
            uVar58 = *(undefined8 *)(lVar105 + 0x10);
          }
          iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                             (this_02,*(undefined8 *)(this_02 + 0x98),0x30,&param_7,uVar58);
          if (iVar81 == 0) {
            param_7._0_4_ = 0;
            lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
            if (lVar105 == 0) {
              uVar58 = 0;
            }
            else {
              uVar58 = *(undefined8 *)(lVar105 + 0x10);
            }
            iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                               (this_02,*(undefined8 *)(this_02 + 0x98),0x31,&param_7,uVar58);
            if (iVar81 == 0) {
              param_7._0_4_ = 0;
              lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
              if (lVar105 == 0) {
                uVar58 = 0;
              }
              else {
                uVar58 = *(undefined8 *)(lVar105 + 0x10);
              }
              iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                                 (this_02,*(undefined8 *)(this_02 + 0x98),0x32,&param_7,uVar58);
              if (iVar81 == 0) {
                param_7._0_4_ = 0;
                lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
                if (lVar105 == 0) {
                  uVar58 = 0;
                }
                else {
                  uVar58 = *(undefined8 *)(lVar105 + 0x10);
                }
                iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                                   (this_02,*(undefined8 *)(this_02 + 0x98),0x33,&param_7,uVar58);
                if (iVar81 == 0) {
                  param_7._0_4_ = 0;
                  lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
                  if (lVar105 == 0) {
                    uVar58 = 0;
                  }
                  else {
                    uVar58 = *(undefined8 *)(lVar105 + 0x10);
                  }
                  iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                                     (this_02,*(undefined8 *)(this_02 + 0x98),0x34,&param_7,uVar58);
                  if (iVar81 == 0) {
                    param_7._0_4_ = 0;
                    lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
                    if (lVar105 == 0) {
                      uVar58 = 0;
                    }
                    else {
                      uVar58 = *(undefined8 *)(lVar105 + 0x10);
                    }
                    iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                                       (this_02,*(undefined8 *)(this_02 + 0x98),0x35,&param_7,uVar58
                                       );
                    if (iVar81 == 0) {
                      param_7._0_4_ = 0;
                      lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
                      if (lVar105 == 0) {
                        uVar58 = 0;
                      }
                      else {
                        uVar58 = *(undefined8 *)(lVar105 + 0x10);
                      }
                      iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                                         (this_02,*(undefined8 *)(this_02 + 0x98),0x36,&param_7,
                                          uVar58);
                      if (iVar81 == 0) {
                        param_7._0_4_ = 0;
                        lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
                        if (lVar105 == 0) {
                          uVar58 = 0;
                        }
                        else {
                          uVar58 = *(undefined8 *)(lVar105 + 0x10);
                        }
                        iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                                           (this_02,*(undefined8 *)(this_02 + 0x98),0x37,&param_7,
                                            uVar58);
                        if (iVar81 == 0) {
                          param_7._0_4_ = 0;
                          lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
                          if (lVar105 == 0) {
                            uVar58 = 0;
                          }
                          else {
                            uVar58 = *(undefined8 *)(lVar105 + 0x10);
                          }
                          iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                                             (this_02,*(undefined8 *)(this_02 + 0x98),0x38,&param_7,
                                              uVar58);
                          if (iVar81 == 0) {
                            param_7._0_4_ = 0;
                            lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
                            if (lVar105 == 0) {
                              uVar58 = 0;
                            }
                            else {
                              uVar58 = *(undefined8 *)(lVar105 + 0x10);
                            }
                            iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                                               (this_02,*(undefined8 *)(this_02 + 0x98),0x39,
                                                &param_7,uVar58);
                            auVar212._8_8_ = extraout_XMM1_Qa_16;
                            auVar212._0_8_ = extraout_XMM0_Qa_12;
                            if (iVar81 == 0) break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          lVar105 = *(long *)(this_02 + 0x90);
          if (uVar104 == 4) {
            lVar78 = *(long *)(lVar105 + 0x10);
            if (lVar78 != 0) goto LAB_003fa9dd;
LAB_003fa711:
            uVar58 = 0;
            goto LAB_003fa9e1;
          }
LAB_003fa9fb:
          if (*(long *)(lVar105 + 0x10) == 0) {
            uVar58 = 0;
          }
          else {
            uVar58 = *(undefined8 *)(*(long *)(lVar105 + 0x10) + 0x30);
          }
          uVar55 = (**(code **)(lVar105 + 0x50))
                             (this_02,*(undefined8 *)(this_02 + 0x98),(uint)param_7,uVar58);
          *(undefined4 *)(phStack_88 + lVar84 + 4) = uVar55;
          uVar58 = extraout_XMM0_Qa_14;
          uVar65 = extraout_XMM1_Qa_18;
          goto LAB_003faa25;
        case '\x14':
          param_7._0_4_ = 0;
          lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
          if (lVar105 == 0) {
            uVar58 = 0;
          }
          else {
            uVar58 = *(undefined8 *)(lVar105 + 0x10);
          }
          iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                             (this_02,*(undefined8 *)(this_02 + 0x98),0x2e,&param_7,uVar58);
          if (iVar81 == 0) {
            param_7._0_4_ = 0;
            lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
            if (lVar105 == 0) {
              uVar58 = 0;
            }
            else {
              uVar58 = *(undefined8 *)(lVar105 + 0x10);
            }
            iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                               (this_02,*(undefined8 *)(this_02 + 0x98),0x2c,&param_7,uVar58);
            auVar212._8_8_ = extraout_XMM1_Qa_15;
            auVar212._0_8_ = extraout_XMM0_Qa_11;
            if (iVar81 == 0) break;
          }
          lVar105 = *(long *)(this_02 + 0x90);
          if (uVar104 != 4) goto LAB_003fa9fb;
          lVar78 = *(long *)(lVar105 + 0x10);
          if (lVar78 == 0) goto LAB_003fa711;
LAB_003fa9dd:
          uVar58 = *(undefined8 *)(lVar78 + 0x28);
LAB_003fa9e1:
          uVar55 = (**(code **)(lVar105 + 0x48))
                             (this_02,*(undefined8 *)(this_02 + 0x98),(uint)param_7,uVar58);
          *(undefined4 *)(phStack_88 + lVar84) = uVar55;
          uVar58 = extraout_XMM0_Qa_13;
          uVar65 = extraout_XMM1_Qa_17;
LAB_003faa25:
          auVar212._8_8_ = uVar65;
          auVar212._0_8_ = uVar58;
          break;
        case '\x15':
          if (uVar104 == 4) {
            *(int *)(phStack_88 + lVar84) = *(int *)(phStack_88 + lVar84) / 2;
          }
          else {
            *(int *)(phStack_88 + lVar84 + 4) = *(int *)(phStack_88 + lVar84 + 4) / 2;
          }
        }
_hb_ot_shape_switchD_003fa4fb_caseD_7:
        lVar84 = lVar84 + 0x14;
      } while ((ulong)uVar103 * 0x14 != lVar84);
      goto LAB_003fa3c8;
    }
    local_50 = (hb_buffer_t *)0x0;
    hVar7 = phStack_98[0x109];
  }
  if (((byte)hVar7 & 1) == 0) {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    local_58 = 0;
  }
  else {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    local_58 = (uint)((*(uint *)(param_2 + 0x54) & 0xfffffffd) == 4);
  }
  uVar103 = (uint)local_50;
  phVar83 = (hb_buffer_t *)this_02;
  while (phVar109 = phStack_88,
        *(undefined **)(*(long *)(phVar83 + 0x90) + 0x68) ==
        PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
    phVar83 = *(hb_buffer_t **)(phVar83 + 0x18);
    phVar72 = local_50;
    if ((phVar83 == (hb_buffer_t *)0x0) || (phVar83 == (hb_buffer_t *)&_hb_Null_hb_font_t))
    goto joined_r0x003faaaf;
  }
  if (uVar103 == 0) goto LAB_003fabaf;
  lVar84 = 0;
  do {
    auVar212 = hb_font_t::get_glyph_h_origin_with_fallback
                         (this_02,*(undefined4 *)(phStack_78 + lVar84),(int *)&param_7,
                          (int *)&uStack0000000000000178);
    *(uint *)(phStack_88 + lVar84 + 8) = *(int *)(phStack_88 + lVar84 + 8) + (uint)param_7;
    *(int *)(phStack_88 + lVar84 + 0xc) =
         *(int *)(phStack_88 + lVar84 + 0xc) + (int)uStack0000000000000178;
    lVar84 = lVar84 + 0x14;
  } while ((long)local_50 * 0x14 != lVar84);
  uVar103 = *(uint *)phStack_90;
  phVar72 = (hb_buffer_t *)(ulong)uVar103;
joined_r0x003faaaf:
  phVar83 = phVar72;
  if (uVar103 != 0) {
    if ((uint)phVar83 == 1) {
      phVar72 = (hb_buffer_t *)0x0;
    }
    else {
      lVar84 = 0;
      phVar72 = (hb_buffer_t *)0x0;
      do {
        *(undefined1 *)(*(long *)phStack_80 + 0x12 + lVar84) = 0;
        *(undefined2 *)(*(long *)phStack_80 + 0x10 + lVar84) = 0;
        *(undefined1 *)(*(long *)phStack_80 + 0x26 + lVar84) = 0;
        *(undefined2 *)(*(long *)phStack_80 + 0x24 + lVar84) = 0;
        phVar72 = phVar72 + 2;
        lVar84 = lVar84 + 0x28;
      } while ((hb_buffer_t *)(ulong)((uint)phVar83 & 0xfffffffe) != phVar72);
    }
    uVar56 = (ulong)phVar83 & 1;
    phVar83 = phVar72;
    if (uVar56 != 0) {
      phVar83 = (hb_buffer_t *)((long)phVar72 * 0x14);
      phVar83[*(long *)phStack_80 + 0x12] = (hb_buffer_t)0x0;
      *(undefined2 *)(phVar83 + *(long *)phStack_80 + 0x10) = 0;
    }
  }
LAB_003fabaf:
  if ((((byte)phStack_98[0x108] & 0x20) != 0) &&
     (*(int *)(*(long *)(phStack_98 + 0x80) + 0x58) == 1)) {
    uVar56 = (ulong)*(uint *)phStack_90;
    phVar83 = (hb_buffer_t *)0x0;
    if (uVar56 != 0) {
      lVar84 = *(long *)phStack_a0;
      if ((byte)local_58 == '\0') {
        phVar83 = (hb_buffer_t *)(uVar56 * 0x14);
        phVar72 = (hb_buffer_t *)0x0;
        do {
          if (((byte)phVar72[lVar84 + 0xc] & 8) != 0) {
            *(undefined8 *)(phVar72 + *(long *)phStack_80) = 0;
          }
          phVar72 = phVar72 + 0x14;
        } while (phVar83 != phVar72);
      }
      else {
        phVar83 = (hb_buffer_t *)(uVar56 * 0x14);
        phVar72 = (hb_buffer_t *)0x0;
        do {
          if (((byte)phVar72[lVar84 + 0xc] & 8) != 0) {
            lVar105 = *(long *)phStack_80;
            *(int *)(phVar72 + lVar105 + 8) =
                 *(int *)(phVar72 + lVar105 + 8) - *(int *)(phVar72 + lVar105);
            *(int *)(phVar72 + lVar105 + 0xc) =
                 *(int *)(phVar72 + lVar105 + 0xc) - *(int *)(phVar72 + lVar105 + 4);
            *(undefined4 *)(phVar72 + lVar105) = 0;
            *(undefined4 *)(phVar72 + lVar105 + 4) = 0;
          }
          phVar72 = phVar72 + 0x14;
        } while (phVar83 != phVar72);
      }
    }
  }
  if ((*(ushort *)(phStack_98 + 0x108) & 0x200) == 0) {
    param_5 = phStack_a0;
    if ((*(ushort *)(phStack_98 + 0x108) & 0x1000) != 0) {
      lVar84 = *(long *)(this_02 + 0x20);
      this_00 = *(accelerator_t **)(lVar84 + 0x158);
      while (this_00 == (accelerator_t *)0x0) {
        lVar105 = *(long *)(lVar84 + 0x68);
        if (lVar105 == 0) {
          this_00 = (accelerator_t *)&_hb_NullPool;
          break;
        }
        this_00 = calloc(1,0x18);
        if (this_00 == (accelerator_t *)0x0) {
          LOCK();
          bVar112 = *(long *)(lVar84 + 0x158) == 0;
          if (bVar112) {
            *(long *)(lVar84 + 0x158) = (long)&_hb_NullPool;
          }
          UNLOCK();
          if (!bVar112) goto LAB_003fdd9f;
          this_00 = (accelerator_t *)&_hb_NullPool;
          break;
        }
        accelerator_t::accelerator_t(this_00,lVar105);
        LOCK();
        bVar112 = *(long *)(lVar84 + 0x158) == 0;
        if (bVar112) {
          *(long *)(lVar84 + 0x158) = (long)this_00;
        }
        UNLOCK();
        if (bVar112) break;
        accelerator_t::~accelerator_t(this_00);
        free(this_00);
LAB_003fdd9f:
        this_00 = *(accelerator_t **)(lVar84 + 0x158);
      }
      param_5 = *(hb_buffer_t **)this_00;
      phVar83 = phVar101;
      auVar210 = hb_aat_apply_context_t::hb_aat_apply_context_t
                           ((hb_aat_apply_context_t *)&param_7,phStack_68,(long)this_02,
                            (undefined4 *)phVar101,(GDEFVersion1_2<OT::Layout::SmallTypes> *)param_5
                           );
      bVar112 = hb_buffer_t::message
                          (auVar210._0_8_,auVar210._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,this_02,"start table kerx",
                           phVar83,param_5,phVar109);
      if (bVar112) {
        lVar84 = *(long *)(this_02 + 0x20);
        phVar72 = *(hb_buffer_t **)(lVar84 + 0x160);
        if (phVar72 == (hb_buffer_t *)0x0) {
          do {
            lVar105 = *(long *)(lVar84 + 0x68);
            phVar72 = (hb_buffer_t *)&_hb_NullPool;
            if (lVar105 == 0) break;
            local_38 = local_38 & 0xffffffff00000000;
            if (*(int *)(lVar105 + 0x18) == -1) {
              while (piVar66 = *(int **)(lVar105 + 0x78), piVar66 == (int *)0x0) {
                lVar78 = *(long *)(lVar105 + 0x68);
                if (lVar78 == 0) {
                  piVar66 = (int *)&_hb_NullPool;
                  break;
                }
                uStack0000000000000178._0_4_ = 0;
                in_stack_00000190 = (undefined1  [16])0x0;
                in_stack_00000180 = 0;
                uStack0000000000000188 = 0;
                uStack000000000000018c = 0;
                uStack00000000000001a0 = 0;
                uStack00000000000001b5 = 0;
                auStack00000000000001a4 = (undefined1  [16])0x0;
                uStack00000000000001b4 = 1;
                piVar66 = (int *)&_hb_NullPool;
                if (*(code **)(lVar78 + 0x20) != (code *)0x0) {
                  piVar66 = (int *)(**(code **)(lVar78 + 0x20))
                                             (lVar78,0x6d617870,*(undefined8 *)(lVar78 + 0x28));
                  if (piVar66 == (int *)0x0) {
                    piVar66 = (int *)&_hb_NullPool;
                  }
                }
                piVar66 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                                    ((hb_sanitize_context_t *)&uStack0000000000000178,piVar66);
                hb_sanitize_context_t::~hb_sanitize_context_t
                          ((hb_sanitize_context_t *)&uStack0000000000000178);
                if (piVar66 == (int *)0x0) {
                  piVar66 = (int *)&_hb_NullPool;
                  LOCK();
                  bVar112 = *(long *)(lVar105 + 0x78) == 0;
                  if (bVar112) {
                    *(long *)(lVar105 + 0x78) = (long)&_hb_NullPool;
                  }
                  UNLOCK();
                }
                else {
                  LOCK();
                  bVar112 = *(long *)(lVar105 + 0x78) == 0;
                  if (bVar112) {
                    *(long *)(lVar105 + 0x78) = (long)piVar66;
                  }
                  UNLOCK();
                }
                if (bVar112) break;
                if (((piVar66 != (int *)0x0) && ((uint *)piVar66 != &_hb_NullPool)) &&
                   (*piVar66 != 0)) {
                  LOCK();
                  *piVar66 = *piVar66 + -1;
                  UNLOCK();
                  if (*piVar66 == 0) {
                    *piVar66 = -0xdead;
                    ppVar9 = *(pthread_mutex_t **)(piVar66 + 2);
                    if (ppVar9 != (pthread_mutex_t *)0x0) {
                      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                  *)&ppVar9[1].__data,ppVar9);
                      free(ppVar9);
                      piVar66[2] = 0;
                      piVar66[3] = 0;
                    }
                    if (*(code **)(piVar66 + 10) != (code *)0x0) {
                      (**(code **)(piVar66 + 10))(*(undefined8 *)(piVar66 + 8));
                    }
                    free(piVar66);
                  }
                }
              }
              puVar60 = &_hb_NullPool;
              if (5 < (uint)piVar66[6]) {
                puVar60 = *(undefined4 **)(piVar66 + 4);
              }
              uVar52 = *(ushort *)(puVar60 + 1);
              uVar80 = uVar52 << 8 | uVar52 >> 8;
              if (uVar52 == 0) {
                uVar80 = 0;
              }
              *(uint *)(lVar105 + 0x18) = (uint)uVar80;
            }
            phVar90 = (hb_buffer_t *)&_hb_NullPool;
            if (*(code **)(lVar105 + 0x20) == (code *)0x0) {
LAB_003fde9b:
              uVar103 = *(uint *)phVar90;
            }
            else {
              phVar90 = (hb_buffer_t *)
                        (**(code **)(lVar105 + 0x20))
                                  (lVar105,0x616e6b72,*(undefined8 *)(lVar105 + 0x28));
              if (phVar90 != (hb_buffer_t *)0x0) goto LAB_003fde9b;
              phVar90 = (hb_buffer_t *)&_hb_NullPool;
              uVar103 = _hb_NullPool;
            }
            if (uVar103 != 0) {
              LOCK();
              *(int *)phVar90 = *(int *)phVar90 + 1;
              UNLOCK();
            }
            bVar112 = false;
            while( true ) {
              psVar76 = *(short **)(phVar90 + 0x10);
              uVar103 = *(uint *)(phVar90 + 0x18);
              phVar83 = (hb_buffer_t *)(ulong)uVar103;
              uVar104 = (uint)((long)phVar83 * 0x40);
              if (uVar104 < 0x4001) {
                uVar104 = 0x4000;
              }
              if (0x3ffffffe < uVar104) {
                uVar104 = 0x3fffffff;
              }
              uVar53 = 0x3fffffff;
              if ((int)((ulong)((long)phVar83 * 0x40) >> 0x20) == 0) {
                uVar53 = uVar104;
              }
              local_38 = local_38 & 0xffffffff00000000;
              phVar72 = phVar90;
              if (psVar76 == (short *)0x0) {
                if (*(int *)phVar90 != 0) {
                  LOCK();
                  *(int *)phVar90 = *(int *)phVar90 + -1;
                  UNLOCK();
                  if (*(int *)phVar90 == 0) {
                    *(undefined4 *)phVar90 = 0xffff2153;
                    ppVar9 = *(pthread_mutex_t **)(phVar90 + 8);
                    if (ppVar9 != (pthread_mutex_t *)0x0) {
                      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                  *)&ppVar9[1].__data,ppVar9);
                      free(ppVar9);
                      *(undefined8 *)(phVar90 + 8) = 0;
                    }
                    if (*(code **)(phVar90 + 0x28) != (code *)0x0) {
                      (**(code **)(phVar90 + 0x28))(*(undefined8 *)(phVar90 + 0x20));
                    }
                    free(phVar90);
                  }
                }
                goto LAB_003fe360;
              }
              if ((uVar103 < 0xc) || (*psVar76 != 0)) break;
              uVar104 = *(uint *)(psVar76 + 4);
              uVar104 = uVar104 >> 0x18 | (uVar104 & 0xff0000) >> 8 | (uVar104 & 0xff00) << 8 |
                        uVar104 << 0x18;
              if ((uVar103 < uVar104) || ((int)(uVar53 - uVar104) < 1)) break;
              uVar68 = *(uint *)(psVar76 + 2);
              bVar113 = true;
              if (uVar68 == 0) goto LAB_003fe0cf;
              uVar56 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                       ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                   *)((ulong)(uVar68 >> 0x18 | (uVar68 & 0xff0000) >> 8 |
                                              (uVar68 & 0xff00) << 8 | uVar68 << 0x18) +
                                     (long)psVar76),(long)&local_38,(ulong)uVar104 + (long)psVar76);
              phVar83 = (hb_buffer_t *)0x0;
              if ((char)uVar56 != '\0') goto LAB_003fe0cf;
              if (bVar112) {
                psVar76[2] = 0;
                psVar76[3] = 0;
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
                phVar83 = (hb_buffer_t *)(ulong)uVar103;
                if (((hb_buffer_t *)0xb < phVar83) && (*psVar76 == 0)) {
                  uVar68 = *(uint *)(psVar76 + 4);
                  uVar68 = uVar68 >> 0x18 | (uVar68 & 0xff0000) >> 8 | (uVar68 & 0xff00) << 8 |
                           uVar68 << 0x18;
                  if ((uVar68 <= uVar103) &&
                     ((0 < (int)((uVar53 - uVar104) - uVar68) && ((hb_buffer_t *)0x7 < phVar83)))) {
                    uVar103 = *(uint *)(psVar76 + 2);
                    if (uVar103 == 0) goto LAB_003fe0cf;
                    uVar56 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                             ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                         *)((ulong)(uVar103 >> 0x18 | (uVar103 & 0xff0000) >> 8 |
                                                    (uVar103 & 0xff00) << 8 | uVar103 << 0x18) +
                                           (long)psVar76),(long)&local_38,
                                        (ulong)uVar68 + (long)psVar76);
                    phVar83 = (hb_buffer_t *)0x0;
                    if ((char)uVar56 != '\0') goto LAB_003fe0cf;
                    psVar76[2] = 0;
                    psVar76[3] = 0;
                    if ((phVar90 != (hb_buffer_t *)0x0) && (*(int *)phVar90 != 0)) {
                      LOCK();
                      *(int *)phVar90 = *(int *)phVar90 + -1;
                      UNLOCK();
                      if (*(int *)phVar90 == 0) {
                        *(undefined4 *)phVar90 = 0xffff2153;
                        ppVar9 = *(pthread_mutex_t **)(phVar90 + 8);
                        if (ppVar9 != (pthread_mutex_t *)0x0) {
                          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::
                          fini((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                *)&ppVar9[1].__data,ppVar9);
                          free(ppVar9);
                          *(undefined8 *)(phVar90 + 8) = 0;
                        }
                        if (*(code **)(phVar90 + 0x28) != (code *)0x0) {
                          (**(code **)(phVar90 + 0x28))(*(undefined8 *)(phVar90 + 0x20));
                        }
                        free(phVar90);
                      }
                    }
                    goto LAB_003fe2f1;
                  }
                }
                break;
              }
              phVar83 = (hb_buffer_t *)0x1;
              uVar56 = (ulong)*(uint *)(phVar90 + 0x18);
              if (*(int *)(phVar90 + 4) == 0) break;
              if (uVar56 == 0) {
                *(undefined4 *)(phVar90 + 0x1c) = 2;
LAB_003fdec3:
                if (*(long *)(phVar90 + 0x10) == 0) break;
              }
              else {
                if (*(int *)(phVar90 + 0x1c) == 2) goto LAB_003fdec3;
                if (*(int *)(phVar90 + 0x1c) == 3) {
                  *(undefined4 *)(phVar90 + 0x1c) = 1;
                }
                pvVar67 = malloc(uVar56);
                if (pvVar67 == (void *)0x0) break;
                memcpy(pvVar67,*(void **)(phVar90 + 0x10),uVar56);
                if (*(code **)(phVar90 + 0x28) != (code *)0x0) {
                  (**(code **)(phVar90 + 0x28))(*(undefined8 *)(phVar90 + 0x20));
                }
                *(undefined4 *)(phVar90 + 0x1c) = 2;
                *(void **)(phVar90 + 0x10) = pvVar67;
                *(void **)(phVar90 + 0x20) = pvVar67;
                *(code **)(phVar90 + 0x28) = free;
              }
              bVar112 = true;
            }
            bVar113 = false;
LAB_003fe0cf:
            if ((phVar90 != (hb_buffer_t *)0x0) && (*(int *)phVar90 != 0)) {
              LOCK();
              *(int *)phVar90 = *(int *)phVar90 + -1;
              UNLOCK();
              if (*(int *)phVar90 == 0) {
                *(undefined4 *)phVar90 = 0xffff2153;
                ppVar9 = *(pthread_mutex_t **)(phVar90 + 8);
                if (ppVar9 != (pthread_mutex_t *)0x0) {
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar9[1].__data,ppVar9);
                  free(ppVar9);
                  *(undefined8 *)(phVar90 + 8) = 0;
                }
                if (*(code **)(phVar90 + 0x28) != (code *)0x0) {
                  (**(code **)(phVar90 + 0x28))(*(undefined8 *)(phVar90 + 0x20));
                }
                free(phVar90);
              }
            }
            if (bVar113) {
              if (*(int *)(phVar90 + 4) == 0) {
              }
              else {
                *(undefined4 *)(phVar90 + 4) = 0;
              }
            }
            else {
LAB_003fe2f1:
              phVar83 = phVar90;
              phVar72 = (hb_buffer_t *)&_hb_NullPool;
              if (*(int *)phVar90 != 0) {
                LOCK();
                *(int *)phVar90 = *(int *)phVar90 + -1;
                UNLOCK();
                phVar72 = (hb_buffer_t *)&_hb_NullPool;
                if (*(int *)phVar90 == 0) {
                  *(undefined4 *)phVar90 = 0xffff2153;
                  ppVar9 = *(pthread_mutex_t **)(phVar90 + 8);
                  if (ppVar9 != (pthread_mutex_t *)0x0) {
                    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                *)&ppVar9[1].__data,ppVar9);
                    free(ppVar9);
                    *(undefined8 *)(phVar90 + 8) = 0;
                  }
                  if (*(code **)(phVar90 + 0x28) != (code *)0x0) {
                    phVar83 = phVar90;
                    (**(code **)(phVar90 + 0x28))(*(undefined8 *)(phVar90 + 0x20));
                  }
                  free(phVar90);
                  phVar72 = (hb_buffer_t *)&_hb_NullPool;
                }
              }
            }
LAB_003fe360:
            hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&local_38);
            LOCK();
            bVar112 = *(long *)(lVar84 + 0x160) == 0;
            if (bVar112) {
              *(long *)(lVar84 + 0x160) = (long)phVar72;
            }
            UNLOCK();
            if (bVar112) break;
            if (((phVar72 != (hb_buffer_t *)0x0) && (phVar72 != (hb_buffer_t *)&_hb_NullPool)) &&
               (*(int *)phVar72 != 0)) {
              LOCK();
              *(int *)phVar72 = *(int *)phVar72 + -1;
              UNLOCK();
              if (*(int *)phVar72 == 0) {
                *(undefined4 *)phVar72 = 0xffff2153;
                ppVar9 = *(pthread_mutex_t **)(phVar72 + 8);
                if (ppVar9 != (pthread_mutex_t *)0x0) {
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar9[1].__data,ppVar9);
                  free(ppVar9);
                  *(undefined8 *)(phVar72 + 8) = 0;
                }
                if (*(code **)(phVar72 + 0x28) != (code *)0x0) {
                  (**(code **)(phVar72 + 0x28))(*(undefined8 *)(phVar72 + 0x20));
                }
                free(phVar72);
              }
            }
            phVar72 = *(hb_buffer_t **)(lVar84 + 0x160);
          } while (phVar72 == (hb_buffer_t *)0x0);
        }
        puVar95 = &_hb_NullPool;
        puVar60 = &_hb_NullPool;
        if (0xb < *(uint *)(phVar72 + 0x18)) {
          puVar60 = *(undefined4 **)(phVar72 + 0x10);
        }
        param_19._0_8_ = puVar60;
        puVar60 = *(undefined4 **)this_00;
        if (puVar60 == (undefined4 *)0x0) {
          puVar60 = &_hb_NullPool;
        }
        if (7 < (uint)puVar60[6]) {
          puVar95 = *(undefined4 **)(puVar60 + 4);
        }
        auVar210 = apply(puVar95,&param_7,this_00 + 8);
        hb_buffer_t::message
                  (auVar210._0_8_,auVar210._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                   in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,this_02,"end table kerx",phVar83,
                   param_5,phVar109);
      }
      auVar212 = hb_aat_apply_context_t::~hb_aat_apply_context_t((hb_aat_apply_context_t *)&param_7)
      ;
    }
  }
  else {
    lVar84 = *(long *)(this_02 + 0x20);
    this_01 = *(accelerator_t<OT::Layout::GPOS> **)(lVar84 + 0x138);
    while (this_01 == (accelerator_t<OT::Layout::GPOS> *)0x0) {
      uVar58 = auVar212._8_8_;
      lVar105 = *(long *)(lVar84 + 0x68);
      if (lVar105 == 0) {
        this_01 = (accelerator_t<OT::Layout::GPOS> *)&_hb_NullPool;
        break;
      }
      this_01 = calloc(1,0x18);
      auVar212._8_8_ = uVar58;
      auVar212._0_8_ = extraout_XMM0_Qa_31;
      if (this_01 == (accelerator_t<OT::Layout::GPOS> *)0x0) {
        LOCK();
        bVar112 = *(long *)(lVar84 + 0x138) == 0;
        if (bVar112) {
          *(long *)(lVar84 + 0x138) = (long)&_hb_NullPool;
        }
        UNLOCK();
        uVar65 = extraout_XMM0_Qa_31;
        if (!bVar112) goto LAB_003fe73d;
        this_01 = (accelerator_t<OT::Layout::GPOS> *)&_hb_NullPool;
        break;
      }
      auVar212 = OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t(this_01,lVar105);
      LOCK();
      bVar112 = *(long *)(lVar84 + 0x138) == 0;
      if (bVar112) {
        *(long *)(lVar84 + 0x138) = (long)this_01;
      }
      UNLOCK();
      if (bVar112) break;
      OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::~accelerator_t(this_01);
      uVar58 = extraout_XMM1_Qa_30;
      free(this_01);
      uVar65 = extraout_XMM0_Qa_30;
LAB_003fe73d:
      auVar212._8_8_ = uVar58;
      auVar212._0_8_ = uVar65;
      this_01 = *(accelerator_t<OT::Layout::GPOS> **)(lVar84 + 0x138);
    }
    uVar58 = auVar212._8_8_;
    if (*(long *)(param_2 + 0xec) != 0) {
      uVar103 = *(uint *)(phStack_98 + 0x8c);
      phVar83 = (hb_buffer_t *)(ulong)(uVar103 >> 0x18);
      param_5 = (hb_buffer_t *)(ulong)(uVar103 >> 0x10 & 0xff);
      phVar109 = (hb_buffer_t *)(ulong)(uVar103 >> 8 & 0xff);
      bVar112 = hb_buffer_t::message
                          (auVar212._0_8_,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,this_02,
                           "start table GPOS script tag \'%c%c%c%c\'",phVar83,param_5,phVar109,
                           (char)uVar103);
      auVar212._8_8_ = uVar58;
      auVar212._0_8_ = extraout_XMM0_Qa_15;
      if (!bVar112) goto LAB_003fbe61;
    }
    param_5 = *(hb_buffer_t **)this_01;
    phVar83 = phVar101;
    auVar213 = OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                         ((hb_ot_apply_context_t *)&param_7,1,(long)this_02,(undefined4 *)phVar101,
                          (GDEFVersion1_2<OT::Layout::SmallTypes> *)param_5);
    in_stack_000000f0 =
         OT::Layout::GPOS_impl::PosLookup::dispatch_recurse_func<OT::hb_ot_apply_context_t>;
    uVar56 = (ulong)*(uint *)(phStack_98 + 0xdc);
    if (*(uint *)(phStack_98 + 0xdc) != 0) {
      uVar110 = 0;
      uVar108 = 0;
      do {
        if (uVar110 < uVar56) {
          phVar72 = (hb_buffer_t *)(uVar110 * 0x10 + *(long *)(phStack_98 + 0xe0));
          uVar103 = *(uint *)phVar72;
        }
        else {
          phVar72 = (hb_buffer_t *)&_hb_NullPool;
          uVar103 = _hb_NullPool;
        }
        phVar83 = phVar72;
        if ((uint)uVar108 < uVar103) {
          uVar108 = uVar108 & 0xffffffff;
          do {
            uVar58 = auVar213._8_8_;
            if (uVar108 < *(uint *)(phStack_98 + 0xbc)) {
              puVar89 = (ushort *)(uVar108 * 0xc + *(long *)(phStack_98 + 0xc0));
              uVar52 = *puVar89;
              if ((uint)*puVar89 < *(uint *)(this_01 + 8)) goto LAB_003fb79e;
            }
            else {
              puVar89 = (ushort *)&_hb_NullPool;
              uVar52 = (ushort)_hb_NullPool;
              if ((_hb_NullPool & 0xffff) < *(uint *)(this_01 + 8)) {
LAB_003fb79e:
                phVar90 = (hb_buffer_t *)(ulong)uVar52;
                puVar62 = *(ulong **)(*(long *)(this_01 + 0x10) + (long)phVar90 * 8);
                while (puVar62 == (ulong *)0x0) {
                  puVar60 = *(undefined4 **)this_01;
                  phVar83 = (hb_buffer_t *)&_hb_NullPool;
                  if (puVar60 == (undefined4 *)0x0) {
                    puVar60 = &_hb_NullPool;
                  }
                  if (3 < (uint)puVar60[6]) {
                    phVar83 = *(hb_buffer_t **)(puVar60 + 4);
                  }
                  phVar102 = (hb_buffer_t *)&_hb_NullPool;
                  if (*(short *)phVar83 == 0x100) {
                    uVar80 = *(ushort *)(phVar83 + 8);
                    phVar63 = (hb_buffer_t *)&_hb_NullPool;
                    if (uVar80 != 0) {
                      phVar63 = phVar83 + (ushort)(uVar80 << 8 | uVar80 >> 8);
                    }
                    uVar80 = *(ushort *)phVar63 << 8 | *(ushort *)phVar63 >> 8;
                    phVar83 = (hb_buffer_t *)(ulong)uVar80;
                    phVar102 = (hb_buffer_t *)&_hb_NullPool;
                    if (uVar52 < uVar80) {
                      uVar80 = *(ushort *)(phVar63 + (long)phVar90 * 2 + 2);
                      phVar83 = (hb_buffer_t *)(ulong)uVar80;
                      phVar102 = (hb_buffer_t *)&_hb_NullPool;
                      if (uVar80 != 0) {
                        phVar83 = (hb_buffer_t *)(ulong)(ushort)(uVar80 << 8 | uVar80 >> 8);
                        phVar102 = phVar63 + (long)phVar83;
                      }
                    }
                  }
                  puVar62 = OT::hb_ot_layout_lookup_accelerator_t::
                            create<OT::Layout::GPOS_impl::PosLookup>((ushort *)phVar102);
                  auVar213._8_8_ = uVar58;
                  auVar213._0_8_ = extraout_XMM0_Qa_16;
                  if (puVar62 == (ulong *)0x0) goto LAB_003fb750;
                  phVar83 = *(hb_buffer_t **)(this_01 + 0x10);
                  LOCK();
                  bVar112 = *(long *)(phVar83 + (long)phVar90 * 8) == 0;
                  if (bVar112) {
                    *(ulong **)(phVar83 + (long)phVar90 * 8) = puVar62;
                  }
                  UNLOCK();
                  if (bVar112) break;
                  free(puVar62);
                  auVar213._8_8_ = uVar58;
                  auVar213._0_8_ = extraout_XMM0_Qa_17;
                  puVar62 = *(ulong **)(*(long *)(this_01 + 0x10) + (long)phVar90 * 8);
                }
                uVar58 = auVar213._8_8_;
                uVar103 = (uint)uVar52;
                if (*(long *)(param_2 + 0xec) != 0) {
                  uVar104 = *(uint *)(puVar89 + 4);
                  phVar109 = (hb_buffer_t *)(ulong)(uVar104 >> 0x10 & 0xff);
                  param_5 = (hb_buffer_t *)(ulong)(uVar104 >> 0x18);
                  phVar83 = phVar90;
                  bVar112 = hb_buffer_t::message
                                      (auVar213._0_8_,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,
                                       in_XMM4._0_8_,in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,
                                       this_02,"start lookup %u feature \'%c%c%c%c\'",phVar90,
                                       param_5,phVar109,(char)(uVar104 >> 8),(ulong)(uVar104 & 0xff)
                                      );
                  auVar213._8_8_ = uVar58;
                  auVar213._0_8_ = extraout_XMM0_Qa_18;
                  if (!bVar112) goto LAB_003fb750;
                }
                uVar58 = auVar213._8_8_;
                if ((((*puVar62 & in_stack_00000118) == 0) ||
                    ((puVar62[1] & in_stack_00000120) == 0)) ||
                   ((in_stack_00000128 & puVar62[2]) == 0)) {
                  if (*(long *)(param_2 + 0xec) == 0) goto LAB_003fb750;
                  uVar103 = *(uint *)(puVar89 + 4);
                  phVar109 = (hb_buffer_t *)(ulong)(uVar103 >> 0x10 & 0xff);
                  param_5 = (hb_buffer_t *)(ulong)(uVar103 >> 0x18);
                  phVar83 = phVar90;
                  hb_buffer_t::message
                            (auVar213._0_8_,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                             in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,this_02,
                             "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches",
                             phVar90,param_5,phVar109,(char)(uVar103 >> 8),(ulong)(uVar103 & 0xff));
                  auVar213._8_8_ = uVar58;
                  auVar213._0_8_ = extraout_XMM0_Qa_19;
                }
                else {
                  in_stack_00000130._4_4_ = *(uint *)(puVar89 + 2);
                  in_stack_00000150 = 0xffffffff;
                  bVar51 = (byte)puVar89[1] >> 1;
                  in_stack_00000140._6_1_ = bVar51 & 1;
                  in_stack_00000140._5_1_ = (byte)puVar89[1] & 1;
                  in_stack_00000148 = (byte)puVar89[1] >> 2 & 1;
                  in_stack_00000140._7_1_ = (byte)puVar89[1] >> 3 & 1;
                  puVar60 = *(undefined4 **)this_01;
                  puVar93 = (ushort *)&_hb_NullPool;
                  if (puVar60 == (undefined4 *)0x0) {
                    puVar60 = &_hb_NullPool;
                  }
                  if (3 < (uint)puVar60[6]) {
                    puVar93 = *(ushort **)(puVar60 + 4);
                  }
                  phVar102 = (hb_buffer_t *)&_hb_NullPool;
                  phVar83 = (hb_buffer_t *)(ulong)*puVar93;
                  if (*puVar93 == 0x100) {
                    uVar80 = puVar93[4];
                    phVar83 = (hb_buffer_t *)&_hb_NullPool;
                    if (uVar80 != 0) {
                      phVar83 = (hb_buffer_t *)
                                ((long)puVar93 + (ulong)(ushort)(uVar80 << 8 | uVar80 >> 8));
                    }
                    phVar102 = (hb_buffer_t *)&_hb_NullPool;
                    if (uVar52 < (ushort)(*(ushort *)phVar83 << 8 | *(ushort *)phVar83 >> 8)) {
                      uVar52 = *(ushort *)(phVar83 + (long)phVar90 * 2 + 2);
                      phVar102 = (hb_buffer_t *)&_hb_NullPool;
                      if (uVar52 != 0) {
                        phVar102 = phVar83 + (ushort)(uVar52 << 8 | uVar52 >> 8);
                        phVar83 = phVar102;
                      }
                    }
                  }
                  uVar104 = *(uint *)(param_25 + 0x60);
                  param_5 = param_25;
                  uStack0000000000000138 = uVar103;
                  if ((uVar104 != 0) &&
                     (phVar109 = (hb_buffer_t *)(ulong)in_stack_00000130._4_4_,
                     in_stack_00000130._4_4_ != 0)) {
                    uVar80 = *(ushort *)(phVar102 + 4) << 8 | *(ushort *)(phVar102 + 4) >> 8;
                    uVar52 = *(ushort *)(phVar102 + 2) >> 8;
                    uVar91 = *(ushort *)(phVar102 + 2) << 8 | uVar52;
                    param_17._0_4_ = (uint)uVar91;
                    if ((uVar52 & 0x10) != 0) {
                      param_17._0_4_ =
                           CONCAT22(*(ushort *)(phVar102 + (ulong)uVar80 * 2 + 6) << 8 |
                                    *(ushort *)(phVar102 + (ulong)uVar80 * 2 + 6) >> 8,uVar91);
                    }
                    param_16 = (hb_ot_apply_context_t *)&param_7;
                    param_12 = (undefined1  [16])0x0;
                    param_13 = (hb_buffer_t *)0x0;
                    param_18._3_1_ = in_stack_00000140._7_1_;
                    if (param_22 != 0) {
                      param_18._3_1_ = 0;
                    }
                    param_18._2_1_ = param_22 == 1;
                    param_11 = (code *)(CONCAT62(param_11._2_6_,CONCAT11(bVar51,param_18._2_1_)) &
                                       0xffffffffffff01ff);
                    uVar56 = (ulong)param_11;
                    param_11._0_3_ = CONCAT12(param_18._2_1_,param_11._0_2_);
                    param_10 = CONCAT44(in_stack_00000130._4_4_,(uint)param_17);
                    param_11._0_4_ = CONCAT13(param_18._3_1_,param_11._0_3_);
                    param_11._5_3_ = SUB83(uVar56,5);
                    param_11._0_5_ = (uint5)(uint)param_11;
                    param_19 = (undefined1  [16])0x0;
                    param_20 = 0;
                    param_18._0_1_ = in_stack_00000140._5_1_ != 0 || (bool)param_18._2_1_;
                    phVar83 = (hb_buffer_t *)
                              CONCAT71((int7)((ulong)param_12 >> 8),(undefined1)param_18);
                    param_18._1_1_ = 1;
                    param_17._4_4_ = 0xffffffff;
                    param_18._4_1_ = 0;
                    *(undefined4 *)(param_25 + 0x5c) = 0;
                    param_14 = uVar104;
                    param_21 = uVar104;
                    uStack000000000000013c = (uint)param_17;
                    param_9 = param_16;
                    auVar213 = apply_forward(param_16,puVar62,(uint)uVar80);
                  }
                }
                uVar58 = auVar213._8_8_;
                if (*(long *)(param_2 + 0xec) != 0) {
                  uVar103 = *(uint *)(puVar89 + 4);
                  phVar109 = (hb_buffer_t *)(ulong)(uVar103 >> 0x10 & 0xff);
                  param_5 = (hb_buffer_t *)(ulong)(uVar103 >> 0x18);
                  hb_buffer_t::message
                            (auVar213._0_8_,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                             in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,this_02,
                             "end lookup %u feature \'%c%c%c%c\'",phVar90,param_5,phVar109,
                             (char)(uVar103 >> 8),(ulong)(uVar103 & 0xff));
                  auVar213._8_8_ = uVar58;
                  auVar213._0_8_ = extraout_XMM0_Qa_20;
                  phVar83 = phVar90;
                }
              }
            }
LAB_003fb750:
            uVar108 = uVar108 + 1;
          } while (uVar108 < *(uint *)phVar72);
        }
        if (*(code **)(phVar72 + 8) != (code *)0x0) {
          cVar50 = (**(code **)(phVar72 + 8))(phStack_68,this_02,phVar101);
          auVar47._8_8_ = extraout_XMM1_Qa_20;
          auVar47._0_8_ = extraout_XMM0_Qa_21;
          auVar213._8_8_ = extraout_XMM1_Qa_20;
          auVar213._0_8_ = extraout_XMM0_Qa_21;
          if (cVar50 != '\0') {
            uVar103 = *(uint *)phStack_90;
            phVar109 = (hb_buffer_t *)(ulong)uVar103;
            if (uVar103 == 0) {
              in_stack_00000118 = 0;
              in_stack_00000120 = 0;
              in_stack_00000128 = 0;
            }
            else {
              phVar72 = *(hb_buffer_t **)phStack_a0;
              uVar104 = uVar103 - 1;
              param_5 = (hb_buffer_t *)(ulong)uVar104;
              phVar83 = phVar72;
              if (uVar104 < 3) {
                in_stack_00000118 = 0;
              }
              else {
                uVar53 = uVar103 & 0xfffffffc;
                in_stack_00000118 = 0;
                do {
                  in_stack_00000118 =
                       in_stack_00000118 | 1L << ((ulong)(*(uint *)phVar83 >> 4) & 0x3f) |
                       1L << ((ulong)(*(uint *)(phVar83 + 0x14) >> 4) & 0x3f) |
                       1L << ((ulong)(*(uint *)(phVar83 + 0x28) >> 4) & 0x3f) |
                       1L << ((ulong)(*(uint *)(phVar83 + 0x3c) >> 4) & 0x3f);
                  phVar83 = phVar83 + 0x50;
                  uVar53 = uVar53 - 4;
                } while (uVar53 != 0);
              }
              if ((uVar103 & 3) != 0) {
                lVar84 = 0;
                do {
                  in_stack_00000118 =
                       in_stack_00000118 | 1L << ((ulong)(*(uint *)(phVar83 + lVar84) >> 4) & 0x3f);
                  lVar84 = lVar84 + 0x14;
                } while ((uVar103 & 3) * 0x14 != (int)lVar84);
              }
              phVar83 = phVar72;
              if (uVar104 < 3) {
                in_stack_00000120 = 0;
              }
              else {
                uVar53 = uVar103 & 0xfffffffc;
                in_stack_00000120 = 0;
                do {
                  in_stack_00000120 =
                       in_stack_00000120 | 1L << ((ulong)(byte)*phVar83 & 0x3f) |
                       1L << ((ulong)(byte)phVar83[0x14] & 0x3f) |
                       1L << ((ulong)(byte)phVar83[0x28] & 0x3f) |
                       1L << ((ulong)(byte)phVar83[0x3c] & 0x3f);
                  phVar83 = phVar83 + 0x50;
                  uVar53 = uVar53 - 4;
                } while (uVar53 != 0);
              }
              if ((uVar103 & 3) != 0) {
                lVar84 = 0;
                do {
                  in_stack_00000120 =
                       in_stack_00000120 | 1L << ((ulong)(byte)phVar83[lVar84] & 0x3f);
                  lVar84 = lVar84 + 0x14;
                } while ((uVar103 & 3) * 0x14 != (int)lVar84);
              }
              if (uVar104 < 3) {
                in_stack_00000128 = 0;
              }
              else {
                phVar83 = (hb_buffer_t *)(ulong)(uVar103 & 0xfffffffc);
                in_stack_00000128 = 0;
                do {
                  in_stack_00000128 =
                       in_stack_00000128 | 1L << ((ulong)(*(uint *)phVar72 >> 9) & 0x3f) |
                       1L << ((ulong)(*(uint *)(phVar72 + 0x14) >> 9) & 0x3f) |
                       1L << ((ulong)(*(uint *)(phVar72 + 0x28) >> 9) & 0x3f) |
                       1L << ((ulong)(*(uint *)(phVar72 + 0x3c) >> 9) & 0x3f);
                  phVar72 = phVar72 + 0x50;
                  uVar104 = (int)phVar83 - 4;
                  phVar83 = (hb_buffer_t *)(ulong)uVar104;
                } while (uVar104 != 0);
              }
              if ((uVar103 & 3) != 0) {
                phVar109 = (hb_buffer_t *)((ulong)(uVar103 & 3) * 4);
                phVar83 = (hb_buffer_t *)((ulong)(uVar103 & 3) * 0x14);
                lVar84 = 0;
                do {
                  in_stack_00000128 =
                       in_stack_00000128 | 1L << ((ulong)(*(uint *)(phVar72 + lVar84) >> 9) & 0x3f);
                  lVar84 = lVar84 + 0x14;
                } while ((int)phVar83 != (int)lVar84);
              }
            }
            auVar213 = auVar47;
          }
        }
        uVar110 = uVar110 + 1;
        uVar56 = (ulong)*(uint *)(phStack_98 + 0xdc);
      } while (uVar110 < uVar56);
    }
    free(in_stack_00000110);
    auVar212 = hb_sanitize_context_t::~hb_sanitize_context_t(&param_26);
    uVar58 = auVar212._8_8_;
    if (*(long *)(param_2 + 0xec) != 0) {
      uVar103 = *(uint *)(phStack_98 + 0x8c);
      phVar83 = (hb_buffer_t *)(ulong)(uVar103 >> 0x18);
      param_5 = (hb_buffer_t *)(ulong)(uVar103 >> 0x10 & 0xff);
      phVar109 = (hb_buffer_t *)(ulong)(uVar103 >> 8 & 0xff);
      hb_buffer_t::message
                (auVar212._0_8_,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                 in_XMM6._0_8_,uVar209,phVar101,this_02,"end table GPOS script tag \'%c%c%c%c\'",
                 phVar83,param_5,phVar109,(char)uVar103);
      auVar212._8_8_ = uVar58;
      auVar212._0_8_ = extraout_XMM0_Qa_22;
    }
  }
LAB_003fbe61:
  uVar58 = auVar212._8_8_;
  puVar107 = (uint *)this_02;
  if ((*(ushort *)(phStack_98 + 0x108) & 0x400) == 0) {
    unaff_R14 = (uint *)phVar101;
    unaff_R15 = phStack_98;
    if ((*(ushort *)(phStack_98 + 0x108) & 0x800) != 0) {
      phVar72 = (hb_buffer_t *)this_02;
      if ((*(uint *)(param_2 + 0x54) & 0xfffffffe) == 4) {
        do {
          if (*(undefined **)(*(long *)(phVar72 + 0x90) + 0x78) !=
              PTR_hb_font_get_glyph_h_kerning_default_00718ae8) goto LAB_003fc117;
          phVar72 = *(hb_buffer_t **)(phVar72 + 0x18);
          if (phVar72 == (hb_buffer_t *)0x0) break;
        } while (phVar72 != (hb_buffer_t *)&_hb_Null_hb_font_t);
      }
      else {
        do {
          if (*(undefined **)(*(long *)(phVar72 + 0x90) + 0x80) !=
              PTR_hb_font_get_glyph_v_kerning_default_00718af0) goto LAB_003fc117;
          phVar72 = *(hb_buffer_t **)(phVar72 + 0x18);
          if (phVar72 == (hb_buffer_t *)0x0) break;
        } while (phVar72 != (hb_buffer_t *)&_hb_Null_hb_font_t);
      }
    }
  }
  else {
    hb_ot_layout_kern(auVar212._0_8_,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                      in_XMM6._0_8_,uVar209,phStack_68,(long)this_02,phVar101,(undefined4 *)phVar83,
                      param_5,(ulong)phVar109);
    unaff_R14 = (uint *)phVar101;
    unaff_R15 = phStack_98;
  }
LAB_003fbed1:
  uVar52 = *(ushort *)(unaff_R15 + 0x108);
  if ((uVar52 & 0x4000) != 0) {
    puVar60 = hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
              ::get((hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
                     *)(*(long *)((long)puVar107 + 0x20) + 0x168));
    pTVar111 = (TrackData *)&_hb_NullPool;
    hb_aat_apply_context_t::hb_aat_apply_context_t
              ((hb_aat_apply_context_t *)&param_7,phStack_68,(long)puVar107,unaff_R14,
               (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
    pcVar75 = param_11;
    phVar64 = param_9;
    fVar116 = *(float *)(param_9 + 0x70);
    if (0.0 < fVar116) {
      uVar103 = *(uint *)(param_8 + 0xa4);
      if ((*(uint *)(param_11 + 0x38) & 0xfffffffe) == 4) {
        uVar52 = *(ushort *)((long)puVar60 + 6);
        if (uVar52 == 0) {
          pTVar111 = (TrackData *)&_hb_NullPool;
        }
        else {
          pTVar111 = (TrackData *)((long)puVar60 + (ulong)(ushort)(uVar52 << 8 | uVar52 >> 8));
        }
        iVar81 = TrackData::get_tracking(fVar116,pTVar111,(long)puVar60);
        fVar116 = *(float *)(phVar64 + 0x4c);
        fVar115 = floorf((float)(iVar81 / 2) * fVar116 + 0.5);
        fVar116 = floorf((float)iVar81 * fVar116 + 0.5);
        uVar104 = *(uint *)(pcVar75 + 0x60);
        if (uVar104 != 0) {
          phVar109 = (hb_buffer_t *)(ulong)(uint)(int)fVar116;
          lVar84 = 0x24;
          uVar56 = 0;
          do {
            lVar105 = *(long *)(pcVar75 + 0x70);
            if (uVar104 - 1 == uVar56) {
              uVar56 = (ulong)uVar104;
              break;
            }
            uVar56 = uVar56 + 1;
            pbVar98 = (byte *)(lVar105 + lVar84);
            lVar84 = lVar84 + 0x14;
          } while ((*pbVar98 & 0x80) != 0);
          uVar108 = 0;
          do {
            if ((*(uint *)(lVar105 + 4 + uVar108 * 0x14) & uVar103) != 0) {
              lVar84 = *(long *)(pcVar75 + 0x80);
              piVar66 = (int *)(lVar84 + uVar108 * 0x14);
              *piVar66 = *piVar66 + (int)fVar116;
              piVar66 = (int *)(lVar84 + 8 + uVar108 * 0x14);
              *piVar66 = *piVar66 + (int)fVar115;
            }
            uVar53 = (uint)uVar56;
            uVar68 = uVar53 + 1;
            if (uVar53 + 1 < uVar104) {
              uVar68 = uVar104;
            }
            uVar71 = uVar53;
            do {
              uVar71 = uVar71 + 1;
              uVar86 = uVar68;
              if (uVar104 <= uVar71) break;
              uVar86 = uVar71;
            } while ((*(byte *)(lVar105 + 0x10 + (ulong)uVar71 * 0x14) & 0x80) != 0);
            uVar108 = uVar56 & 0xffffffff;
            uVar56 = (ulong)uVar86;
          } while (uVar53 < uVar104);
        }
      }
      else {
        uVar52 = *(ushort *)(puVar60 + 2);
        if (uVar52 != 0) {
          pTVar111 = (TrackData *)((long)puVar60 + (ulong)(ushort)(uVar52 << 8 | uVar52 >> 8));
        }
        iVar81 = TrackData::get_tracking(fVar116,pTVar111,(long)puVar60);
        fVar116 = *(float *)(phVar64 + 0x50);
        fVar115 = floorf((float)(iVar81 / 2) * fVar116 + 0.5);
        fVar116 = floorf((float)iVar81 * fVar116 + 0.5);
        uVar104 = *(uint *)(pcVar75 + 0x60);
        if (uVar104 != 0) {
          phVar109 = (hb_buffer_t *)(ulong)(uint)(int)fVar116;
          lVar84 = 0x24;
          uVar56 = 0;
          do {
            lVar105 = *(long *)(pcVar75 + 0x70);
            if (uVar104 - 1 == uVar56) {
              uVar56 = (ulong)uVar104;
              break;
            }
            uVar56 = uVar56 + 1;
            pbVar98 = (byte *)(lVar105 + lVar84);
            lVar84 = lVar84 + 0x14;
          } while ((*pbVar98 & 0x80) != 0);
          uVar53 = 0;
          do {
            uVar108 = (ulong)uVar53;
            uVar53 = (uint)uVar56;
            if ((*(uint *)(lVar105 + 4 + uVar108 * 0x14) & uVar103) != 0) {
              lVar84 = *(long *)(pcVar75 + 0x80);
              piVar66 = (int *)(lVar84 + 4 + uVar108 * 0x14);
              *piVar66 = *piVar66 + (int)fVar116;
              piVar66 = (int *)(lVar84 + 0xc + uVar108 * 0x14);
              *piVar66 = *piVar66 + (int)fVar115;
            }
            uVar68 = uVar53 + 1;
            if (uVar53 + 1 < uVar104) {
              uVar68 = uVar104;
            }
            uVar56 = uVar56 & 0xffffffff;
            do {
              uVar71 = (int)uVar56 + 1;
              uVar56 = (ulong)uVar71;
              if (uVar104 <= uVar71) {
                uVar56 = (ulong)uVar68;
                break;
              }
            } while ((*(byte *)(lVar105 + 0x10 + (ulong)uVar71 * 0x14) & 0x80) != 0);
          } while (uVar53 < uVar104);
        }
      }
    }
    hb_aat_apply_context_t::~hb_aat_apply_context_t((hb_aat_apply_context_t *)&param_7);
    uVar52 = *(ushort *)(phStack_98 + 0x108);
    unaff_R14 = (uint *)phVar101;
    unaff_R15 = phStack_98;
  }
  if ((((uVar52 & 0x20) != 0) && (*(int *)(*(long *)(unaff_R15 + 0x80) + 0x58) == 2)) &&
     (uVar56 = (ulong)*(uint *)phStack_90, uVar56 != 0)) {
    lVar84 = *(long *)phStack_a0;
    if ((byte)local_58 == 0) {
      lVar105 = 0;
      do {
        if ((*(byte *)(lVar84 + 0xc + lVar105) & 8) != 0) {
          *(undefined8 *)(*(long *)phStack_80 + lVar105) = 0;
        }
        lVar105 = lVar105 + 0x14;
      } while (uVar56 * 0x14 != lVar105);
    }
    else {
      lVar105 = 0;
      do {
        if ((*(byte *)(lVar84 + 0xc + lVar105) & 8) != 0) {
          lVar78 = *(long *)phStack_80;
          piVar66 = (int *)(lVar78 + 8 + lVar105);
          *piVar66 = *piVar66 - *(int *)(lVar78 + lVar105);
          piVar66 = (int *)(lVar78 + 0xc + lVar105);
          *piVar66 = *piVar66 - *(int *)(lVar78 + 4 + lVar105);
          *(undefined4 *)(lVar78 + lVar105) = 0;
          *(undefined4 *)(lVar78 + 4 + lVar105) = 0;
        }
        lVar105 = lVar105 + 0x14;
      } while (uVar56 * 0x14 != lVar105);
    }
  }
  if (((((byte)*(hb_buffer_t *)((long)unaff_R14 + 0xc0) & 2) != 0) &&
      (((byte)*(hb_buffer_t *)((long)unaff_R14 + 0x18) & 0xc) == 0)) &&
     (uVar103 = *(uint *)phStack_90, (ulong)uVar103 != 0)) {
    lVar84 = *(long *)phStack_a0;
    lVar105 = *(long *)phStack_80;
    lVar78 = 0;
    do {
      if (((*(byte *)(lVar84 + 0x10 + lVar78) & 0x20) != 0) &&
         ((*(byte *)(lVar84 + 0xc + lVar78) & 0x10) == 0)) {
        *(undefined1 (*) [16])(lVar105 + lVar78) = (undefined1  [16])0x0;
      }
      lVar78 = lVar78 + 0x14;
    } while ((ulong)uVar103 * 0x14 != lVar78);
  }
  if (((byte)unaff_R15[0x109] & 0x20) == 0) {
LAB_003fcbd2:
    uVar104 = *(uint *)phStack_90;
  }
  else {
    uVar103 = *(uint *)phStack_90;
    uVar104 = 0;
    if (uVar103 != 0) {
      lVar84 = *(long *)phStack_a0;
      lVar105 = *(long *)phStack_80;
      if (uVar103 == 1) {
        uVar56 = 0;
      }
      else {
        lVar78 = 0;
        uVar56 = 0;
        do {
          while (*(int *)(lVar84 + lVar78) == 0xffff) {
            *(undefined1 (*) [16])(lVar105 + lVar78) = (undefined1  [16])0x0;
            if (*(int *)(lVar84 + 0x14 + lVar78) == 0xffff) goto LAB_003fd0b4;
LAB_003fd093:
            uVar56 = uVar56 + 2;
            lVar78 = lVar78 + 0x28;
            if ((uVar103 & 0xfffffffe) == uVar56) goto LAB_003fcbbb;
          }
          if (*(int *)(lVar84 + 0x14 + lVar78) != 0xffff) goto LAB_003fd093;
LAB_003fd0b4:
          *(undefined1 (*) [16])(lVar105 + 0x14 + lVar78) = (undefined1  [16])0x0;
          uVar56 = uVar56 + 2;
          lVar78 = lVar78 + 0x28;
        } while ((uVar103 & 0xfffffffe) != uVar56);
      }
LAB_003fcbbb:
      if (((uVar103 & 1) != 0) && (*(int *)(lVar84 + uVar56 * 0x14) == 0xffff)) {
        *(undefined1 (*) [16])(lVar105 + uVar56 * 0x14) = (undefined1  [16])0x0;
      }
      goto LAB_003fcbd2;
    }
  }
  phVar83 = phStack_a0;
  if (*(hb_buffer_t *)((long)unaff_R14 + 0x5b) == (hb_buffer_t)0x0) {
    if (*(int *)((long)unaff_R14 + 0xe8) == 0) {
      *(undefined2 *)((long)unaff_R14 + 0x5a) = 0x100;
      *(undefined4 *)((long)unaff_R14 + 100) = 0;
      *(undefined8 *)((long)unaff_R14 + 0x78) = *(undefined8 *)((long)unaff_R14 + 0x70);
      if (uVar104 * 0x14 != 0) {
        memset(*(void **)phStack_80,0,(ulong)(uVar104 * 0x14));
      }
      goto LAB_003fcc26;
    }
    lVar84 = 0;
    hVar7 = *(hb_buffer_t *)((long)unaff_R14 + 0xc0);
  }
  else {
LAB_003fcc26:
    lVar84 = *(long *)phStack_80;
    hVar7 = *(hb_buffer_t *)((long)unaff_R14 + 0xc0);
  }
  if ((((byte)hVar7 & 8) != 0) && (uVar104 != 0)) {
    uVar103 = *(uint *)((long)unaff_R14 + 0x38);
    uVar53 = 0;
    do {
      phVar83 = (hb_buffer_t *)0x40;
      OT::Layout::propagate_attachment_offsets(lVar84,(ulong)uVar104,uVar53,uVar103,0x40);
      uVar53 = uVar53 + 1;
    } while (uVar104 != uVar53);
  }
  fVar116 = *(float *)(this_02 + 0x44);
  auVar137 = ZEXT416((uint)fVar116);
  auVar148 = (undefined1  [16])0x0;
  if (((fVar116 != 0.0) || (NAN(fVar116))) && (uVar104 != 0)) {
    lVar105 = 0;
    do {
      while( true ) {
        auVar148 = ZEXT816(0x3f000000);
        iVar81 = *(int *)(lVar84 + 0xc + lVar105);
        if (iVar81 != 0) break;
        lVar105 = lVar105 + 0x14;
        if ((ulong)uVar104 * 0x14 == lVar105) goto LAB_003fcc95;
      }
      auVar137._0_4_ = floorf((float)iVar81 * *(float *)(this_02 + 0x48) + auVar148._0_4_);
      auVar137._4_12_ = extraout_var;
      auVar148 = ZEXT816(0x3f000000);
      *(int *)(lVar84 + 8 + lVar105) = (int)((float)*(int *)(lVar84 + 8 + lVar105) + auVar137._0_4_)
      ;
      lVar105 = lVar105 + 0x14;
    } while ((ulong)uVar104 * 0x14 != lVar105);
  }
LAB_003fcc95:
  phVar72 = (hb_buffer_t *)this_02;
  while (*(undefined **)(*(long *)(phVar72 + 0x90) + 0x68) ==
         PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
    phVar72 = *(hb_buffer_t **)(phVar72 + 0x18);
    if ((phVar72 == (hb_buffer_t *)0x0) || (phVar72 == (hb_buffer_t *)&_hb_Null_hb_font_t))
    goto LAB_003fcd2a;
  }
  if ((int)local_50 != 0) {
    lVar84 = 0;
    do {
      auVar210 = hb_font_t::get_glyph_h_origin_with_fallback
                           (this_02,*(undefined4 *)(phStack_78 + lVar84),(int *)&param_7,
                            (int *)&uStack0000000000000178);
      auVar148._0_8_ = auVar210._8_8_;
      auVar137._0_8_ = auVar210._0_8_;
      auVar148._8_8_ = extraout_XMM1_Qb_21;
      auVar137._8_8_ = extraout_XMM0_Qb_07;
      *(uint *)(phStack_88 + lVar84 + 8) = *(int *)(phStack_88 + lVar84 + 8) - (uint)param_7;
      *(int *)(phStack_88 + lVar84 + 0xc) =
           *(int *)(phStack_88 + lVar84 + 0xc) - (int)uStack0000000000000178;
      lVar84 = lVar84 + 0x14;
      phVar72 = phStack_88;
    } while (((ulong)local_50 & 0xffffffff) * 0x14 != lVar84);
  }
LAB_003fcd2a:
  phVar64 = param_9;
  if (((byte)phStack_98[0x108] & 0x80) != 0) {
    uVar103 = 0;
    bVar112 = hb_buffer_t::message
                        (auVar137._0_8_,auVar148._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                         in_XMM5._0_8_,in_XMM6._0_8_,uVar209,(hb_buffer_t *)unaff_R14,this_02,
                         "start fallback mark",phVar72,phVar83,phVar109);
    auVar137 = extraout_XMM0_12;
    phVar64 = param_9;
    if (bVar112) {
      uVar104 = *(uint *)phStack_90;
      phVar83 = (hb_buffer_t *)(ulong)uVar104;
      uVar56 = (ulong)(byte)local_58;
      if ((hb_buffer_t *)0x1 < phVar83) {
        puVar107 = (uint *)(*(long *)phStack_a0 + 0x24);
        uVar103 = 0;
        phVar109 = (hb_buffer_t *)0x1;
        do {
          if ((0x1c00U >> (*puVar107 & 0x1f) & 1) == 0) {
            position_cluster((uint *)phStack_68,(long)this_02,phVar101,uVar103,(uint)phVar109,
                             local_58 & 0xff);
            uVar103 = (uint)phVar109;
          }
          phVar109 = phVar109 + 1;
          puVar107 = puVar107 + 5;
        } while (phVar83 != phVar109);
      }
      phVar72 = (hb_buffer_t *)(ulong)uVar103;
      auVar210 = position_cluster((uint *)phStack_68,(long)this_02,phVar101,uVar103,uVar104,
                                  local_58 & 0xff);
      auVar148._0_8_ = auVar210._8_8_;
      auVar148._8_8_ = extraout_XMM1_Qb_22;
      hb_buffer_t::message
                (auVar210._0_8_,auVar148._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,uVar209,phVar101,this_02,"end fallback mark",phVar72,
                 phVar83,uVar56);
      unaff_R14 = (uint *)phVar101;
      auVar137 = extraout_XMM0_13;
      phVar64 = param_9;
    }
  }
  param_9._4_4_ = (undefined4)((ulong)phVar64 >> 0x20);
  param_9._0_4_ = (uint)phVar64;
  phVar101 = param_8;
  if ((*(uint *)((long)unaff_R14 + 0x38) & 0xfffffffd) == 5) {
    uVar103 = *(uint *)phStack_90;
    if (1 < uVar103) {
      phVar72 = *(hb_buffer_t **)phStack_a0;
      uVar56 = (ulong)(uVar103 - 1);
      phVar109 = phVar72 + uVar56 * 0x14;
      uVar108 = 0;
      do {
        uVar56 = uVar56 - 1;
        param_9._0_4_ = *(uint *)(phVar109 + 0x10);
        phVar101 = *(hb_buffer_t **)(phVar109 + 8);
        auVar44 = *(undefined1 (*) [12])phVar109;
        param_7._0_4_ = (uint)*(undefined8 *)phVar109;
        param_7._4_4_ = (undefined4)((ulong)*(undefined8 *)phVar109 >> 0x20);
        param_8._4_4_ = (undefined4)((ulong)phVar101 >> 0x20);
        *(undefined4 *)(phVar109 + 0x10) = *(undefined4 *)(phVar72 + 0x10);
        uVar58 = *(undefined8 *)(phVar72 + 8);
        *(undefined8 *)phVar109 = *(undefined8 *)phVar72;
        *(undefined8 *)(phVar109 + 8) = uVar58;
        *(uint *)(phVar72 + 0x10) = (uint)param_9;
        auVar137._12_4_ = param_8._4_4_;
        auVar137._0_12_ = auVar44;
        *(undefined1 (*) [16])phVar72 = auVar137;
        uVar108 = uVar108 + 1;
        phVar72 = phVar72 + 0x14;
        phVar109 = phVar109 + -0x14;
      } while (uVar108 < (uVar56 & 0xffffffff));
    }
    if (*(hb_buffer_t *)((long)unaff_R14 + 0x5b) != (hb_buffer_t)0x0) {
      uVar104 = *(uint *)phStack_90;
      phVar72 = (hb_buffer_t *)(ulong)uVar104;
      if (uVar104 < uVar103) {
        uVar103 = uVar104;
      }
      if (1 < uVar103) {
        phVar72 = *(hb_buffer_t **)phStack_80;
        uVar56 = (ulong)(uVar103 - 1);
        phVar109 = phVar72 + uVar56 * 0x14;
        uVar108 = 0;
        do {
          uVar56 = uVar56 - 1;
          param_9._0_4_ = *(uint *)(phVar109 + 0x10);
          phVar101 = *(hb_buffer_t **)(phVar109 + 8);
          auVar44 = *(undefined1 (*) [12])phVar109;
          param_7._0_4_ = (uint)*(undefined8 *)phVar109;
          param_7._4_4_ = (undefined4)((ulong)*(undefined8 *)phVar109 >> 0x20);
          param_8._4_4_ = (undefined4)((ulong)phVar101 >> 0x20);
          *(undefined4 *)(phVar109 + 0x10) = *(undefined4 *)(phVar72 + 0x10);
          uVar58 = *(undefined8 *)(phVar72 + 8);
          *(undefined8 *)phVar109 = *(undefined8 *)phVar72;
          *(undefined8 *)(phVar109 + 8) = uVar58;
          *(uint *)(phVar72 + 0x10) = (uint)param_9;
          auVar137._12_4_ = param_8._4_4_;
          auVar137._0_12_ = auVar44;
          *(undefined1 (*) [16])phVar72 = auVar137;
          uVar108 = uVar108 + 1;
          phVar72 = phVar72 + 0x14;
          phVar109 = phVar109 + -0x14;
        } while (uVar108 < (uVar56 & 0xffffffff));
      }
    }
  }
  *(hb_buffer_t *)((long)unaff_R14 + 0xb8) =
       (hb_buffer_t)((byte)*(hb_buffer_t *)((long)unaff_R14 + 0xb8) & 0xf8);
  param_8 = phVar101;
  if ((*(ushort *)(phStack_98 + 0x108) & 0x2200) == 0x2000) {
    auVar210 = hb_aat_layout_remove_deleted_glyphs((hb_buffer_t *)unaff_R14);
    auVar148._0_8_ = auVar210._8_8_;
    auVar137._0_8_ = auVar210._0_8_;
    auVar148._8_8_ = extraout_XMM1_Qb_23;
    auVar137._8_8_ = extraout_XMM0_Qb_08;
  }
  uVar58 = auVar148._0_8_;
  uVar103 = *(uint *)((long)unaff_R14 + 0xc0);
  if (((uVar103 & 0x80) != 0) && (*(int *)((long)unaff_R14 + 0x2c) != -1)) {
    uVar104 = *(uint *)phStack_90;
    phVar72 = phStack_90;
    if ((ulong)uVar104 != 0) {
      lVar84 = *(long *)phStack_a0;
      phVar72 = *(hb_buffer_t **)phStack_80;
      lVar105 = 0;
      auVar137 = ZEXT816(0);
      do {
        if ((*(ushort *)(lVar84 + 0x10 + lVar105) & 0x41f) == 0x401) {
          *(undefined4 *)(lVar84 + lVar105) = *(undefined4 *)((long)unaff_R14 + 0x2c);
          *(undefined1 (*) [16])(phVar72 + lVar105) = auVar137;
          *(ushort *)(lVar84 + 0x10 + lVar105) = *(ushort *)(lVar84 + 0x10 + lVar105) & 0xe0 | 0xc;
        }
        lVar105 = lVar105 + 0x14;
      } while ((ulong)uVar104 * 0x14 != lVar105);
      uVar103 = *(uint *)((long)unaff_R14 + 0xc0);
    }
  }
  uVar65 = auVar137._0_8_;
  if (((uVar103 & 2) != 0) && ((*(uint *)((long)unaff_R14 + 0x18) & 4) == 0)) {
    uVar103 = *(uint *)((long)unaff_R14 + 0x60);
    lVar84 = *(long *)((long)unaff_R14 + 0x70);
    param_7._0_4_ = *(uint *)((long)unaff_R14 + 0x24);
    phVar72 = (hb_buffer_t *)(ulong)(uint)param_7;
    if ((*(uint *)((long)unaff_R14 + 0x18) & 8) == 0) {
      if ((uint)param_7 == 0) {
        param_7._0_4_ = 0;
        lVar105 = *(long *)(*(long *)(this_02 + 0x90) + 0x10);
        if (lVar105 == 0) {
          phVar83 = (hb_buffer_t *)0x0;
        }
        else {
          phVar83 = *(hb_buffer_t **)(lVar105 + 0x10);
        }
        phVar72 = (hb_buffer_t *)&param_7;
        iVar81 = (**(code **)(*(long *)(this_02 + 0x90) + 0x30))
                           (this_02,*(undefined8 *)(this_02 + 0x98),0x20);
        auVar148._8_8_ = extraout_XMM1_Qb_26;
        auVar148._0_8_ = extraout_XMM1_Qa_27;
        auVar137._8_8_ = extraout_XMM0_Qb_09;
        auVar137._0_8_ = extraout_XMM0_Qa_29;
        uVar65 = extraout_XMM0_Qa_29;
        uVar58 = extraout_XMM1_Qa_27;
        if (iVar81 == 0) {
          uVar103 = *(uint *)phStack_90;
          goto LAB_003fd4be;
        }
      }
      if (uVar103 != 0) {
        phVar72 = (hb_buffer_t *)0x0;
        do {
          if ((((byte)phVar72[lVar84 + 0x10] & 0x20) != 0) &&
             (((byte)phVar72[lVar84 + 0xc] & 0x10) == 0)) {
            *(uint *)(phVar72 + lVar84) = (uint)param_7;
          }
          phVar72 = phVar72 + 0x14;
        } while ((hb_buffer_t *)((ulong)uVar103 * 0x14) != phVar72);
      }
    }
    else {
LAB_003fd4be:
      uVar58 = auVar148._0_8_;
      uVar65 = auVar137._0_8_;
      if (uVar103 == 0) {
        phVar83 = (hb_buffer_t *)0x0;
      }
      else {
        phVar101 = (hb_buffer_t *)0x0;
        phVar83 = (hb_buffer_t *)0x0;
        do {
          phVar72 = *(hb_buffer_t **)phStack_a0;
          iVar81 = (int)phVar83;
          if ((((byte)phVar72[(long)phVar101 * 0x14 + 0x10] & 0x20) == 0) ||
             (((byte)phVar72[(long)phVar101 * 0x14 + 0xc] & 0x10) != 0)) {
            if (phVar101 != phVar83) {
              phVar109 = phVar72 + (long)phVar101 * 0x14;
              lVar105 = (long)phVar83 * 0x14;
              *(undefined4 *)(phVar72 + lVar105 + 0x10) = *(undefined4 *)(phVar109 + 0x10);
              uVar58 = *(undefined8 *)(phVar109 + 8);
              *(undefined8 *)(phVar72 + lVar105) = *(undefined8 *)phVar109;
              *(undefined8 *)(phVar72 + lVar105 + 8) = uVar58;
              lVar84 = *(long *)phStack_80;
              uVar104 = *(uint *)(lVar84 + 0x10 + (long)phVar101 * 0x14);
              phVar72 = (hb_buffer_t *)(ulong)uVar104;
              *(uint *)(lVar84 + 0x10 + lVar105) = uVar104;
              auVar137 = *(undefined1 (*) [16])(lVar84 + (long)phVar101 * 0x14);
              *(undefined1 (*) [16])(lVar84 + lVar105) = auVar137;
            }
            phVar83 = (hb_buffer_t *)(ulong)(iVar81 + 1);
          }
          else {
            uVar104 = *(uint *)(phVar72 + (long)phVar101 * 0x14 + 8);
            if (phVar101 + 1 < (hb_buffer_t *)(ulong)uVar103) {
              if (uVar104 != *(uint *)(phVar72 + (long)(phVar101 + 1) * 0x14 + 8)) {
                if (iVar81 != 0) goto LAB_003fd57f;
                auVar210 = hb_buffer_t::merge_clusters_impl
                                     ((hb_buffer_t *)unaff_R14,(uint)phVar101,(uint)phVar101 + 2);
                auVar148._0_8_ = auVar210._8_8_;
                auVar137._0_8_ = auVar210._0_8_;
                auVar148._8_8_ = extraout_XMM1_Qb_27;
                auVar137._8_8_ = extraout_XMM0_Qb_10;
                phVar83 = (hb_buffer_t *)0x0;
              }
            }
            else if (iVar81 == 0) {
              phVar83 = (hb_buffer_t *)0x0;
            }
            else {
LAB_003fd57f:
              uVar53 = *(uint *)(phVar72 + (ulong)(iVar81 - 1) * 0x14 + 8);
              if (uVar104 < uVar53) {
                uVar68 = *(uint *)(phVar72 + (long)phVar101 * 0x14 + 4);
                phVar72 = phVar72 + (long)phVar83 * 0x14 + -0xc;
                phVar109 = phVar83;
                do {
                  if (*(uint *)phVar72 != uVar53) break;
                  phVar109 = phVar109 + -1;
                  *(uint *)(phVar72 + -4) = *(uint *)(phVar72 + -4) & 0xfffffff8 | uVar68 & 7;
                  *(uint *)phVar72 = uVar104;
                  phVar72 = phVar72 + -0x14;
                } while (phVar109 != (hb_buffer_t *)0x0);
              }
            }
          }
          uVar58 = auVar148._0_8_;
          uVar65 = auVar137._0_8_;
          phVar101 = phVar101 + 1;
        } while (phVar101 != (hb_buffer_t *)(ulong)uVar103);
      }
      *(int *)phStack_90 = (int)phVar83;
    }
  }
  if (*(long *)(*(long *)(phStack_98 + 0x80) + 0x28) != 0) {
    bVar112 = hb_buffer_t::message
                        (uVar65,uVar58,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                         in_XMM6._0_8_,uVar209,(hb_buffer_t *)unaff_R14,this_02,
                         "start postprocess-glyphs",phVar72,phVar83,phStack_a0);
    if (bVar112) {
      auVar210 = (**(code **)(*(long *)(phStack_98 + 0x80) + 0x28))(phStack_68,unaff_R14,this_02);
      hb_buffer_t::message
                (auVar210._0_8_,auVar210._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,uVar209,(hb_buffer_t *)unaff_R14,this_02,
                 "end postprocess-glyphs",phVar72,phVar83,phStack_a0);
    }
  }
  auVar210 = _DAT_005de080;
  if ((((byte)*(hb_buffer_t *)((long)unaff_R14 + 0xc0) & 0x20) != 0) &&
     (uVar103 = *(uint *)(param_2 + 0x7c), uVar103 != 0)) {
    uVar104 = *(uint *)(param_2 + 0x34);
    lVar84 = *(long *)(param_2 + 0x8c);
    uVar56 = 0;
    piVar66 = (int *)(lVar84 + 8);
    do {
      if (uVar103 - 1 == uVar56) {
        uVar56 = (ulong)uVar103;
        break;
      }
      iVar81 = *piVar66;
      uVar56 = uVar56 + 1;
      piVar1 = piVar66 + 5;
      piVar66 = piVar66 + 5;
    } while (iVar81 == *piVar1);
    lVar105 = lVar84 + 4;
    if ((uVar104 & 0x80) == 0) {
      uVar108 = 0;
      do {
        uVar53 = (uint)uVar56;
        uVar110 = uVar56 & 0xffffffff;
        if ((uint)uVar108 < uVar53) {
          uVar97 = uVar56 & 0xffffffff;
          uVar96 = uVar97 - uVar108;
          uVar68 = 0;
          uVar88 = uVar108;
          if (8 < uVar96) {
            uVar88 = (ulong)((uint)uVar96 & 7);
            if (uVar88 == 0) {
              uVar88 = 8;
            }
            lVar78 = (uVar88 + uVar108) - uVar97;
            puVar60 = (undefined4 *)(lVar84 + 0x90 + uVar108 * 0x14);
            auVar149 = (undefined1  [16])0x0;
            auVar175 = (undefined1  [16])0x0;
            do {
              auVar205._12_4_ = puVar60[-0x14];
              auVar205._8_4_ = puVar60[-0x19];
              auVar205._4_4_ = puVar60[-0x1e];
              auVar205._0_4_ = puVar60[-0x23];
              auVar207._12_4_ = *puVar60;
              auVar207._8_4_ = puVar60[-5];
              auVar207._4_4_ = puVar60[-10];
              auVar207._0_4_ = puVar60[-0xf];
              auVar149 = auVar149 | auVar205 & auVar210;
              auVar175 = auVar175 | auVar207 & auVar210;
              puVar60 = puVar60 + 0x28;
              lVar78 = lVar78 + 8;
            } while (lVar78 != 0);
            uVar88 = (uVar96 - uVar88) + uVar108;
            auVar175 = auVar175 | auVar149;
            auVar150._0_8_ = auVar175._8_8_;
            auVar150._8_4_ = auVar175._8_4_;
            auVar150._12_4_ = auVar175._12_4_;
            uVar68 = SUB164(auVar150 | auVar175,4) | SUB164(auVar150 | auVar175,0);
          }
          lVar78 = uVar97 - uVar88;
          puVar107 = (uint *)(lVar105 + uVar88 * 0x14);
          do {
            uVar68 = uVar68 | *puVar107 & 7;
            puVar107 = puVar107 + 5;
            lVar78 = lVar78 + -1;
          } while (lVar78 != 0);
          uVar71 = uVar68 & 0xfffffffd;
          if ((uVar104 & 0x40) != 0) {
            uVar71 = uVar68;
          }
          uVar88 = ~uVar108;
          if ((uVar96 & 3) != 0) {
            puVar107 = (uint *)(lVar105 + uVar108 * 0x14);
            lVar78 = 0;
            do {
              *puVar107 = uVar71;
              lVar78 = lVar78 + -1;
              puVar107 = puVar107 + 5;
            } while (-lVar78 != (uVar96 & 3));
            uVar108 = uVar108 - lVar78;
          }
          if (2 < uVar88 + uVar97) {
            lVar78 = uVar97 - uVar108;
            puVar107 = (uint *)(lVar84 + 0x40 + uVar108 * 0x14);
            do {
              puVar107[-0xf] = uVar71;
              puVar107[-10] = uVar71;
              puVar107[-5] = uVar71;
              *puVar107 = uVar71;
              puVar107 = puVar107 + 0x14;
              lVar78 = lVar78 + -4;
            } while (lVar78 != 0);
          }
        }
        uVar68 = uVar53 + 1;
        if (uVar53 + 1 < uVar103) {
          uVar68 = uVar103;
        }
        uVar108 = uVar56 & 0xffffffff;
        do {
          uVar71 = (int)uVar108 + 1;
          uVar56 = (ulong)uVar71;
          if (uVar103 <= uVar71) {
            uVar56 = (ulong)uVar68;
            break;
          }
          lVar78 = uVar108 * 0x14;
          uVar108 = uVar56;
        } while (*(int *)(lVar84 + 8 + lVar78) == *(int *)(lVar84 + 8 + (ulong)uVar71 * 0x14));
        uVar108 = uVar110;
      } while (uVar53 < uVar103);
    }
    else {
      uVar108 = 0;
      do {
        uVar71 = (uint)uVar56;
        uVar88 = uVar56 & 0xffffffff;
        uVar53 = (uint)uVar108;
        uVar110 = uVar56 & 0xffffffff;
        uVar68 = 0;
        if (uVar53 < uVar71) {
          uVar97 = uVar110 - uVar108;
          uVar68 = 0;
          if (uVar97 < 9) {
            uVar97 = uVar108;
          }
          else {
            uVar96 = (ulong)((uint)uVar97 & 7);
            if (uVar96 == 0) {
              uVar96 = 8;
            }
            lVar78 = (uVar96 + uVar108) - uVar110;
            puVar60 = (undefined4 *)(lVar84 + 0x90 + uVar108 * 0x14);
            auVar149 = (undefined1  [16])0x0;
            auVar175 = (undefined1  [16])0x0;
            do {
              auVar206._12_4_ = puVar60[-0x14];
              auVar206._8_4_ = puVar60[-0x19];
              auVar206._4_4_ = puVar60[-0x1e];
              auVar206._0_4_ = puVar60[-0x23];
              auVar208._12_4_ = *puVar60;
              auVar208._8_4_ = puVar60[-5];
              auVar208._4_4_ = puVar60[-10];
              auVar208._0_4_ = puVar60[-0xf];
              auVar149 = auVar149 | auVar206 & auVar210;
              auVar175 = auVar175 | auVar208 & auVar210;
              puVar60 = puVar60 + 0x28;
              lVar78 = lVar78 + 8;
            } while (lVar78 != 0);
            uVar97 = (uVar97 - uVar96) + uVar108;
            auVar175 = auVar175 | auVar149;
            auVar151._0_8_ = auVar175._8_8_;
            auVar151._8_4_ = auVar175._8_4_;
            auVar151._12_4_ = auVar175._12_4_;
            uVar68 = SUB164(auVar151 | auVar175,4) | SUB164(auVar151 | auVar175,0);
          }
          lVar78 = uVar110 - uVar97;
          puVar107 = (uint *)(lVar105 + uVar97 * 0x14);
          do {
            uVar68 = uVar68 | *puVar107 & 7;
            puVar107 = puVar107 + 5;
            lVar78 = lVar78 + -1;
          } while (lVar78 != 0);
        }
        uVar86 = uVar68 & 0xfffffffb;
        if ((uVar68 & 1) == 0) {
          uVar86 = uVar68;
        }
        uVar68 = uVar86 | 3;
        if ((uVar86 & 4) == 0) {
          uVar68 = uVar86;
        }
        uVar86 = uVar68 & 0xfffffffd;
        if ((uVar104 & 0x40) != 0) {
          uVar86 = uVar68;
        }
        if (uVar53 < uVar71) {
          uVar97 = ~uVar108;
          if ((uVar71 - uVar53 & 3) != 0) {
            puVar107 = (uint *)(lVar105 + uVar108 * 0x14);
            lVar78 = 0;
            do {
              *puVar107 = uVar86;
              lVar78 = lVar78 + -1;
              puVar107 = puVar107 + 5;
            } while (-lVar78 != ((ulong)(uVar71 - uVar53) & 3));
            uVar108 = uVar108 - lVar78;
          }
          if (2 < uVar97 + uVar110) {
            lVar78 = uVar110 - uVar108;
            puVar107 = (uint *)(lVar84 + 0x40 + uVar108 * 0x14);
            do {
              puVar107[-0xf] = uVar86;
              puVar107[-10] = uVar86;
              puVar107[-5] = uVar86;
              *puVar107 = uVar86;
              puVar107 = puVar107 + 0x14;
              lVar78 = lVar78 + -4;
            } while (lVar78 != 0);
          }
        }
        uVar53 = uVar71 + 1;
        if (uVar71 + 1 < uVar103) {
          uVar53 = uVar103;
        }
        uVar108 = uVar56 & 0xffffffff;
        do {
          if (uVar53 - 1 == (int)uVar108) {
            uVar56 = (ulong)uVar53;
            break;
          }
          uVar56 = (ulong)((int)uVar108 + 1);
          lVar78 = uVar108 * 0x14;
          uVar108 = uVar56;
        } while (*(int *)(lVar84 + 8 + lVar78) == *(int *)(lVar84 + 8 + uVar56 * 0x14));
        uVar108 = uVar88;
      } while (uVar71 < uVar103);
    }
  }
  *(uint *)(param_2 + 0x54) = uStack_44;
  *(undefined8 *)(param_2 + 0xe0) = 0x1fffffff3fffffff;
  *(undefined2 *)(param_2 + 0xd4) = 0;
  return (hb_buffer_t *)0x1;
}


