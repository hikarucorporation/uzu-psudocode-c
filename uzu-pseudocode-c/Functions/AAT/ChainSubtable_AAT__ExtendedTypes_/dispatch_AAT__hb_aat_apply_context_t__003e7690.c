// Function : dispatch<AAT::hb_aat_apply_context_t>
// Namespace: AAT:ChainSubtable_AAT__ExtendedTypes_
// Entry    : 003e7690
// Prototype: return_t dispatch<AAT::hb_aat_apply_context_t>(hb_aat_apply_context_t * param_1)
// Body     : 003e7690 - 003e97f6


/* WARNING: Instruction at (ram,0x003fd014) overlaps instruction at (ram,0x003fd010)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x003eb030) */
/* WARNING: Removing unreachable block (ram,0x003f4c0e) */
/* WARNING: Removing unreachable block (ram,0x0041f4c9) */
/* WARNING: Removing unreachable block (ram,0x003f2af2) */
/* WARNING: Removing unreachable block (ram,0x003f4bbe) */
/* WARNING: Removing unreachable block (ram,0x003ea1ce) */
/* WARNING: Removing unreachable block (ram,0x003e9e13) */
/* WARNING: Removing unreachable block (ram,0x003f5311) */
/* WARNING: Removing unreachable block (ram,0x003f5328) */
/* WARNING: Removing unreachable block (ram,0x003f4bbc) */
/* WARNING: Removing unreachable block (ram,0x003f5044) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AAT::hb_aat_apply_context_t::return_t
   AAT::ChainSubtable<AAT::ExtendedTypes>::dispatch<AAT::hb_aat_apply_context_t>(AAT::hb_aat_apply_context_t*)
   const */

pthread_mutex_t *
AAT::ChainSubtable<AAT::ExtendedTypes>::dispatch<AAT::hb_aat_apply_context_t>
          (pthread_mutex_t *param_1,pthread_mutex_t *param_2,pthread_mutex_t *param_3,
          undefined8 param_4,uint *param_5,pthread_mutex_t *param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  hb_ot_apply_context_t *phVar3;
  byte bVar4;
  hb_buffer_t hVar6;
  hb_buffer_t hVar5;
  float fVar7;
  undefined1 auVar8 [16];
  hb_buffer_t hVar9;
  short sVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  hb_font_t *this;
  __pthread_internal_list *p_Var14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  pthread_mutex_t *ppVar28;
  hb_buffer_t **pphVar29;
  hb_buffer_t **pphVar30;
  hb_buffer_t **pphVar31;
  hb_buffer_t **pphVar32;
  undefined1 uVar33;
  char cVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined4 uVar38;
  int iVar39;
  ulong uVar40;
  pthread_mutex_t *ppVar41;
  undefined6 uVar59;
  Lookup<OT::HBGlyphID16> *pLVar42;
  Lookup<OT::IntType<unsigned_short,2u>> *pLVar43;
  undefined8 uVar44;
  undefined4 *puVar45;
  ushort *puVar46;
  ulong *__ptr;
  __pthread_internal_list *p_Var47;
  undefined8 uVar48;
  int *piVar49;
  accelerator_t *paVar50;
  accelerator_t<OT::Layout::GSUB> *paVar51;
  __pthread_internal_list *p_Var52;
  void *pvVar53;
  __pthread_internal_list *p_Var54;
  char *pcVar55;
  char *pcVar56;
  char *pcVar57;
  size_t sVar58;
  uint uVar60;
  pthread_mutex_t *ppVar61;
  uint *puVar62;
  undefined1 (*pauVar63) [16];
  code *pcVar64;
  uint *puVar65;
  short *psVar66;
  ulong uVar67;
  long lVar68;
  byte *pbVar69;
  byte bVar70;
  ushort uVar71;
  uint *puVar72;
  pthread_mutex_t *extraout_RDX;
  pthread_mutex_t *extraout_RDX_00;
  pthread_mutex_t *extraout_RDX_01;
  pthread_mutex_t *extraout_RDX_02;
  pthread_mutex_t *extraout_RDX_03;
  pthread_mutex_t *extraout_RDX_04;
  pthread_mutex_t *extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined7 uVar76;
  pthread_mutex_t *ppVar73;
  code *pcVar74;
  long lVar75;
  undefined8 extraout_RDX_07;
  uint uVar77;
  pthread_mutex_t *unaff_RBX;
  undefined6 uVar82;
  undefined2 *puVar78;
  long lVar79;
  undefined *puVar80;
  pthread_mutex_t *ppVar81;
  hb_buffer_t **pphVar83;
  hb_buffer_t **pphVar84;
  hb_buffer_t **pphVar85;
  hb_buffer_t **pphVar86;
  hb_buffer_t **pphVar87;
  hb_buffer_t **pphVar88;
  hb_buffer_t **pphVar89;
  hb_buffer_t **pphVar90;
  hb_buffer_t **pphVar91;
  hb_buffer_t **pphVar92;
  hb_buffer_t **pphVar93;
  hb_buffer_t **pphVar94;
  hb_buffer_t **pphVar95;
  hb_buffer_t **pphVar96;
  hb_buffer_t **pphVar97;
  uint uVar98;
  pthread_mutex_t *unaff_RBP;
  hb_buffer_t *phVar99;
  undefined1 *puVar100;
  long lVar101;
  undefined2 uVar102;
  uint uVar103;
  int iVar104;
  uint uVar105;
  pthread_mutex_t *ppVar106;
  hb_buffer_t *phVar107;
  long *plVar108;
  undefined8 *puVar109;
  ushort uVar110;
  ushort uVar111;
  Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
  *pLVar112;
  GDEF *pGVar113;
  ushort *puVar114;
  void *pvVar115;
  __pthread_internal_list *p_Var116;
  ulong uVar117;
  ulong uVar118;
  byte *pbVar119;
  undefined4 *puVar120;
  short *psVar121;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar122;
  hb_buffer_t *phVar123;
  ulong in_R10;
  long *plVar124;
  int iVar125;
  hb_buffer_t *in_R11;
  long lVar126;
  pthread_mutex_t *unaff_R12;
  uint *unaff_R13;
  ulong uVar127;
  __pthread_internal_list *p_Var128;
  uint *unaff_R14;
  hb_buffer_t *phVar129;
  ushort *puVar130;
  pthread_mutex_t *unaff_R15;
  TrackData *pTVar131;
  ulong uVar132;
  bool bVar133;
  bool bVar134;
  unkbyte10 in_ST0;
  undefined8 in_MM3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_24;
  undefined8 extraout_XMM0_Qa_37;
  undefined8 extraout_XMM0_Qa_38;
  float fVar135;
  undefined8 extraout_XMM0_Qa_39;
  undefined8 extraout_XMM0_Qa_40;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qa_07;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0_04 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 extraout_XMM0_05 [16];
  undefined1 extraout_XMM0_06 [16];
  undefined1 extraout_XMM0_07 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 extraout_XMM0_08 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 extraout_XMM0_09 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 extraout_XMM0_10 [16];
  undefined1 extraout_XMM0_11 [16];
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined1 extraout_XMM0_12 [16];
  undefined8 extraout_XMM0_Qb_10;
  undefined1 extraout_XMM0_13 [16];
  undefined1 extraout_XMM0_14 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 extraout_XMM0_15 [16];
  undefined1 extraout_XMM0_16 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 extraout_XMM0_17 [16];
  undefined1 extraout_XMM0_18 [16];
  undefined1 extraout_XMM0_19 [16];
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined1 extraout_XMM0_20 [16];
  undefined1 extraout_XMM0_21 [16];
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined1 extraout_XMM0_22 [16];
  undefined1 extraout_XMM0_23 [16];
  undefined8 extraout_XMM0_Qb_16;
  undefined1 auVar145 [16];
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined8 extraout_XMM0_Qa_23;
  undefined1 extraout_XMM0_24 [16];
  undefined1 extraout_XMM0_25 [16];
  undefined8 extraout_XMM0_Qb_17;
  undefined1 extraout_XMM0_26 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined8 extraout_XMM0_Qb_18;
  undefined1 auVar149 [16];
  undefined8 extraout_XMM0_Qa_25;
  undefined8 extraout_XMM0_Qa_26;
  undefined8 extraout_XMM0_Qa_27;
  undefined8 extraout_XMM0_Qa_28;
  undefined8 extraout_XMM0_Qa_29;
  undefined8 extraout_XMM0_Qa_30;
  undefined8 extraout_XMM0_Qa_31;
  long extraout_XMM0_Qa_32;
  undefined8 extraout_XMM0_Qa_33;
  undefined8 extraout_XMM0_Qa_34;
  undefined8 extraout_XMM0_Qa_35;
  undefined8 extraout_XMM0_Qa_36;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined8 extraout_XMM0_Qb_19;
  undefined1 extraout_XMM0_27 [16];
  undefined1 extraout_XMM0_28 [16];
  undefined8 extraout_XMM0_Qb_20;
  undefined8 extraout_XMM0_Qb_21;
  undefined8 extraout_XMM0_Qb_22;
  undefined1 extraout_XMM0_29 [16];
  undefined8 extraout_XMM0_Qb_23;
  undefined1 extraout_XMM0_30 [16];
  undefined1 extraout_var [12];
  undefined1 auVar153 [16];
  undefined1 extraout_XMM0_31 [16];
  undefined1 extraout_XMM0_32 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  ulong extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
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
  undefined8 extraout_XMM1_Qa_21;
  undefined8 extraout_XMM1_Qa_22;
  undefined8 extraout_XMM1_Qa_23;
  undefined8 extraout_XMM1_Qa_24;
  undefined8 extraout_XMM1_Qa_25;
  undefined8 extraout_XMM1_Qa_26;
  undefined8 extraout_XMM1_Qa_27;
  undefined8 extraout_XMM1_Qa_28;
  undefined8 extraout_XMM1_Qa_29;
  undefined8 extraout_XMM1_Qa_30;
  undefined8 extraout_XMM1_Qa_31;
  undefined8 extraout_XMM1_Qa_32;
  ulong extraout_XMM1_Qa_33;
  undefined8 extraout_XMM1_Qa_34;
  undefined8 extraout_XMM1_Qa_35;
  undefined8 extraout_XMM1_Qa_36;
  undefined8 extraout_XMM1_Qa_37;
  undefined8 extraout_XMM1_Qa_38;
  undefined8 extraout_XMM1_Qa_39;
  undefined8 extraout_XMM1_Qa_40;
  undefined8 extraout_XMM1_Qa_41;
  undefined8 extraout_XMM1_Qa_42;
  uint uVar169;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  uint uVar170;
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
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined8 extraout_XMM1_Qb_17;
  undefined8 extraout_XMM1_Qb_18;
  undefined8 extraout_XMM1_Qb_19;
  undefined8 extraout_XMM1_Qb_20;
  undefined8 extraout_XMM1_Qb_21;
  undefined8 extraout_XMM1_Qb_22;
  undefined8 extraout_XMM1_Qb_23;
  undefined8 extraout_XMM1_Qb_24;
  undefined8 extraout_XMM1_Qb_25;
  undefined8 extraout_XMM1_Qb_26;
  undefined8 extraout_XMM1_Qb_27;
  undefined8 extraout_XMM1_Qb_28;
  undefined8 extraout_XMM1_Qb_29;
  undefined8 extraout_XMM1_Qb_30;
  undefined8 extraout_XMM1_Qb_31;
  undefined8 extraout_XMM1_Qb_32;
  undefined8 extraout_XMM1_Qb_33;
  undefined8 extraout_XMM1_Qb_34;
  undefined8 extraout_XMM1_Qb_35;
  undefined8 extraout_XMM1_Qb_36;
  undefined8 extraout_XMM1_Qb_37;
  undefined8 extraout_XMM1_Qb_38;
  undefined8 extraout_XMM1_Qb_39;
  undefined1 auVar162 [16];
  undefined8 extraout_XMM1_Qb_40;
  undefined8 extraout_XMM1_Qb_41;
  undefined8 extraout_XMM1_Qb_42;
  undefined8 extraout_XMM1_Qb_43;
  undefined8 extraout_XMM1_Qb_44;
  undefined8 extraout_XMM1_Qb_45;
  undefined1 auVar163 [16];
  undefined8 extraout_XMM1_Qb_46;
  undefined8 extraout_XMM1_Qb_47;
  undefined8 extraout_XMM1_Qb_48;
  undefined8 extraout_XMM1_Qb_49;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined8 extraout_XMM1_Qb_50;
  undefined8 extraout_XMM1_Qb_51;
  undefined8 extraout_XMM1_Qb_52;
  undefined8 extraout_XMM1_Qb_53;
  undefined8 extraout_XMM1_Qb_54;
  undefined8 extraout_XMM1_Qb_55;
  undefined8 extraout_XMM1_Qb_56;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined8 extraout_XMM1_Qb_57;
  undefined8 extraout_XMM1_Qb_58;
  undefined8 extraout_XMM1_Qb_59;
  undefined8 extraout_XMM1_Qb_60;
  undefined8 extraout_XMM1_Qb_61;
  undefined8 uVar171;
  undefined1 auVar172 [12];
  undefined1 auVar173 [14];
  undefined1 in_XMM2 [16];
  undefined1 auVar176 [16];
  undefined1 auVar179 [16];
  undefined1 auVar178 [16];
  undefined1 auVar177 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar174 [14];
  undefined1 auVar186 [16];
  undefined1 auVar185 [16];
  undefined1 auVar184 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar175 [14];
  undefined1 auVar192 [16];
  undefined1 auVar191 [16];
  undefined1 auVar190 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar198 [16];
  undefined1 auVar197 [16];
  undefined1 auVar196 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  uint uVar205;
  uint uVar244;
  undefined8 uVar206;
  undefined1 auVar207 [12];
  undefined1 auVar208 [14];
  undefined1 in_XMM3 [16];
  uint uVar245;
  uint uVar246;
  undefined1 auVar211 [16];
  undefined1 auVar214 [16];
  undefined1 auVar213 [16];
  undefined1 auVar212 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar220 [16];
  undefined1 auVar219 [16];
  undefined1 auVar218 [16];
  undefined1 auVar221 [16];
  undefined1 auVar209 [14];
  undefined1 auVar224 [16];
  undefined1 auVar223 [16];
  undefined1 auVar222 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar210 [14];
  undefined1 auVar230 [16];
  undefined1 auVar229 [16];
  undefined1 auVar228 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined8 uVar247;
  undefined1 in_XMM4 [16];
  undefined1 auVar248 [16];
  undefined8 uVar249;
  undefined1 in_XMM5 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined8 uVar252;
  undefined1 in_XMM6 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined8 uVar255;
  undefined1 in_XMM7 [16];
  undefined1 in_XMM8 [16];
  int in_XMM9_Da;
  int in_XMM9_Db;
  int in_XMM9_Dc;
  int in_XMM9_Dd;
  int in_XMM10_Da;
  int in_XMM10_Db;
  int in_XMM10_Dc;
  int in_XMM10_Dd;
  undefined1 in_XMM11 [16];
  undefined1 in_XMM15 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  long alStack_250 [2];
  hb_buffer_t *phStack_238;
  pthread_mutex_t *local_230;
  pthread_mutex_t *ppStack_228;
  hb_buffer_t *local_220;
  pthread_mutex_t *ppStack_218;
  pthread_mutex_t *ppStack_210;
  ulong uStack_208;
  GDEF *pGStack_200;
  pthread_mutex_t *ppStack_1f8;
  hb_buffer_t *phStack_1f0;
  __pthread_internal_list *p_Stack_1e8;
  uint uStack_1dc;
  hb_buffer_t *phStack_1d8;
  undefined8 uStack_1d0;
  hb_buffer_t *phStack_1c8;
  hb_buffer_t *phStack_1c0;
  uint uStack_1b4;
  undefined1 *puStack_1b0;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  pthread_mutex_t *ppStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
  uint uStack_178;
  undefined8 uStack_174;
  undefined1 uStack_16c;
  undefined1 uStack_16b;
  int iStack_168;
  undefined4 auStack_70 [2];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 uStack_48;
  undefined1 auStack_44 [16];
  undefined1 uStack_34;
  undefined1 uStack_33;
  
  pphVar84 = &phStack_238;
  pphVar93 = &phStack_238;
  pphVar97 = &phStack_238;
  pphVar95 = &phStack_238;
  pphVar96 = &phStack_238;
  pphVar92 = &phStack_238;
  pphVar91 = &phStack_238;
  pphVar87 = &phStack_238;
  pphVar86 = &phStack_238;
  pphVar85 = &phStack_238;
  local_230 = (pthread_mutex_t *)&param_2->__data;
  local_220 = (hb_buffer_t *)param_1->__size;
  uVar35 = (param_1->__data).__count >> 0x18;
  if (5 < (byte)((param_1->__data).__count >> 0x18)) {
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
    return (pthread_mutex_t *)(ulong)uVar35;
  }
  ppVar61 = (pthread_mutex_t *)&DAT_005e0170;
  uVar40 = (ulong)*(int *)(&DAT_005e0170 + (long)(ulong)uVar35 * 4);
  bVar133 = 0xffffffffffa1fe8f < uVar40;
  ppVar41 = (pthread_mutex_t *)(&DAT_005e0170 + uVar40);
  bVar134 = ppVar41 == (pthread_mutex_t *)0x0;
  cVar34 = (char)ppVar41;
  bVar70 = (byte)((ulong)ppVar41 >> 8);
  uVar36 = (uint)ppVar41;
  uVar59 = (undefined6)((ulong)ppVar41 >> 0x10);
  uVar76 = (undefined7)((ulong)ppVar41 >> 8);
  uVar60 = (uint)param_2;
  iVar39 = (int)param_5;
  uVar37 = (uint)param_3;
  uVar71 = (ushort)param_3;
  uVar82 = (undefined6)((ulong)unaff_RBX >> 0x10);
  uVar33 = SUB81(unaff_RBX,0);
  uVar111 = (ushort)ppVar41;
  pphVar83 = &phStack_238;
  pphVar29 = &phStack_238;
  pphVar94 = &phStack_238;
  pphVar30 = &phStack_238;
  pphVar89 = &phStack_238;
  pphVar90 = &phStack_238;
  pphVar88 = &phStack_238;
  pphVar31 = &phStack_238;
  pphVar32 = &phStack_238;
  ppVar81 = (pthread_mutex_t *)unaff_R13;
  switch(uVar35) {
  case 0:
    p_Var47 = (param_2->__data).__list.__prev;
    phStack_1c8 = (hb_buffer_t *)CONCAT44(phStack_1c8._4_4_,*(int *)&p_Var47[1].__next);
    if (*(int *)&p_Var47[1].__next == -1) {
      p_Var52 = p_Var47[7].__next;
      if (p_Var52 == (__pthread_internal_list *)0x0) {
        do {
          p_Var128 = p_Var47[6].__next;
          p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
          if (p_Var128 == (__pthread_internal_list *)0x0) goto LAB_003ea5f1;
          uStack_1a8 = 0;
          auStack_190 = (undefined1  [16])0x0;
          ppStack_1a0 = (pthread_mutex_t *)0x0;
          uStack_198._0_4_ = 0;
          uStack_198._4_4_ = 0;
          uStack_180._0_4_ = (uint)uStack_180 & 0xffffff00;
          uStack_16b = 0;
          uStack_180._4_4_ = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          uStack_16c = 1;
          piVar49 = (int *)&_hb_NullPool;
          if ((p_Var128[2].__prev != (__pthread_internal_list *)0x0) &&
             (piVar49 = (int *)(*(code *)p_Var128[2].__prev)(p_Var128,0x6d617870,p_Var128[2].__next)
             , piVar49 == (int *)0x0)) {
            piVar49 = (int *)&_hb_NullPool;
          }
          p_Var52 = (__pthread_internal_list *)
                    hb_sanitize_context_t::sanitize_blob<OT::maxp>
                              ((hb_sanitize_context_t *)&uStack_1a8,piVar49);
          hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&uStack_1a8);
          if (p_Var52 == (__pthread_internal_list *)0x0) {
            p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
            LOCK();
            bVar133 = p_Var47[7].__next == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[7].__next = (__pthread_internal_list *)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar133 = p_Var47[7].__next == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[7].__next = p_Var52;
            }
            UNLOCK();
          }
          if (bVar133) goto LAB_003ea5f1;
          if (((p_Var52 != (__pthread_internal_list *)0x0) &&
              (p_Var52 != (__pthread_internal_list *)&_hb_NullPool)) &&
             (*(int *)&p_Var52->__prev != 0)) {
            LOCK();
            *(int *)&p_Var52->__prev = *(int *)&p_Var52->__prev + -1;
            UNLOCK();
            if (*(int *)&p_Var52->__prev == 0) {
              *(undefined4 *)&p_Var52->__prev = 0xffff2153;
              ppVar41 = (pthread_mutex_t *)p_Var52->__next;
              if (ppVar41 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar41[1].__data,ppVar41);
                free(ppVar41);
                p_Var52->__next = (__pthread_internal_list *)0x0;
              }
              if (p_Var52[2].__next != (__pthread_internal_list *)0x0) {
                (*(code *)p_Var52[2].__next)(p_Var52[2].__prev);
              }
              free(p_Var52);
            }
          }
          p_Var52 = p_Var47[7].__next;
        } while (p_Var52 == (__pthread_internal_list *)0x0);
      }
LAB_003ea5f1:
      if (*(uint *)&p_Var52[1].__next < 6) {
        p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
      }
      else {
        p_Var52 = p_Var52[1].__prev;
      }
      uVar111 = *(ushort *)((long)&p_Var52->__prev + 4);
      uVar35 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
      if (uVar111 == 0) {
        uVar35 = 0;
      }
      phStack_1c8 = (hb_buffer_t *)CONCAT44(phStack_1c8._4_4_,uVar35);
      *(uint *)&p_Var47[1].__next = uVar35;
    }
    uVar35 = *(uint *)(local_220 + 0x14);
    uVar36 = *(uint *)(local_220 + 0x18);
    if (*(short *)(local_220 +
                  (ulong)(ushort)(*(ushort *)
                                   (local_220 +
                                   (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                           (uVar35 & 0xff00) << 8 | uVar35 << 0x18) + 0xe) << 8 |
                                 *(ushort *)
                                  (local_220 +
                                  (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                          (uVar35 & 0xff00) << 8 | uVar35 << 0x18) + 0xe) >> 8) * 4
                  + (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                           uVar36 << 0x18) + 0xc) == 0) {
      if ((*(ulong *)((long)local_230 + 0x80) & (ulong)*(pthread_mutex_t **)((long)local_230 + 0x98)
          ) == 0) {
        return *(pthread_mutex_t **)((long)local_230 + 0x98);
      }
      if ((*(ulong *)((long)local_230 + 0x88) & (ulong)local_230[4].__align) == 0) {
        return (pthread_mutex_t *)local_230[4].__align;
      }
      if ((*(ulong *)((long)local_230 + 0xa8) & *(ulong *)((long)local_230 + 0x90)) == 0) {
        return (pthread_mutex_t *)0x0;
      }
    }
    p_Var47 = (local_230->__data).__list.__next;
    ppVar41 = *(pthread_mutex_t **)&local_230[3].__data;
    if ((ppVar41 == (pthread_mutex_t *)0x0) || ((ppVar41->__data).__count < 2)) {
      puVar65 = (uint *)0x0;
      *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
      cVar34 = *(char *)&p_Var47[5].__next;
    }
    else {
      puVar65 = *(uint **)((long)ppVar41 + 8);
      *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
      cVar34 = *(char *)&p_Var47[5].__next;
    }
    if (cVar34 != '\0') {
      uVar35 = 0;
      ppStack_228 = (pthread_mutex_t *)0x0;
      phStack_238 = (hb_buffer_t *)0x0;
      uVar36 = 0;
      do {
        phVar123 = local_220;
        uVar37 = *(uint *)&p_Var47[6].__prev;
        if (puVar65 == (uint *)0x0) {
          puVar65 = (uint *)0x0;
LAB_003e7c32:
          if (uVar35 < uVar37) {
            uVar35 = *(uint *)((long)p_Var47[7].__prev + (ulong)uVar35 * 0x14);
            if ((ulong)uVar35 == 0xffff) {
              uVar40 = 2;
            }
            else {
              uVar40 = 1;
              if ((((*(ulong *)((long)local_230 + 0x98) >> ((ulong)(uVar35 >> 4) & 0x3f) & 1) != 0)
                  && (((ulong)local_230[4].__align >> ((ulong)uVar35 & 0x3f) & 1) != 0)) &&
                 ((*(ulong *)((long)local_230 + 0xa8) >> ((ulong)(uVar35 >> 9) & 0x3f) & 1) != 0)) {
                uVar37 = *(uint *)(local_220 + 0x10);
                pLVar43 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                    ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                     (local_220 +
                                     (ulong)(uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 |
                                             (uVar37 & 0xff00) << 8 | uVar37 << 0x18) + 0xc),uVar35,
                                     (uint)phStack_1c8);
                if (pLVar43 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                  uVar40 = (ulong)(ushort)(*(ushort *)pLVar43 << 8 | *(ushort *)pLVar43 >> 8);
                }
              }
            }
          }
          else {
            uVar40 = 0;
          }
          uVar35 = *(uint *)(phVar123 + 0xc);
          uVar60 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                   uVar35 << 0x18;
          uVar105 = (uint)uVar40;
          uVar37 = uVar105;
          if (uVar60 <= uVar105) {
            uVar37 = 1;
          }
          uVar77 = *(uint *)(phVar123 + 0x14);
          uVar98 = *(uint *)(phVar123 + 0x18);
          lVar75 = (ulong)(uVar77 >> 0x18 | (uVar77 & 0xff0000) >> 8 | (uVar77 & 0xff00) << 8 |
                          uVar77 << 0x18) + 0xc;
          uVar77 = uVar98 >> 0x18 | (uVar98 & 0xff0000) >> 8 | (uVar98 & 0xff00) << 8 |
                   uVar98 << 0x18;
          ppVar41 = (pthread_mutex_t *)(phVar123 + (ulong)uVar77 + 0xc);
          uVar132 = (ulong)(ushort)(*(ushort *)
                                     (phVar123 + (ulong)(uVar37 + uVar60 * uVar36) * 2 + lVar75) <<
                                    8 | *(ushort *)
                                         (phVar123 + (ulong)(uVar37 + uVar60 * uVar36) * 2 + lVar75)
                                        >> 8);
          sVar10 = (short)(&(ppVar41->__data).__lock)[uVar132];
          ppStack_210 = (pthread_mutex_t *)CONCAT62(ppStack_210._2_6_,sVar10);
          uVar111 = *(ushort *)(phVar123 + uVar132 * 4 + (ulong)uVar77 + 0xe);
          uVar37 = (uint)phStack_238;
          if (((uVar111 & 0xf00) == 0) || (uVar37 <= (uint)ppStack_228)) {
            if ((uVar36 != 0) && (((uVar111 & 0x40) == 0 || (sVar10 != 0)))) {
              if (uVar60 <= uVar105) {
                uVar40 = 1;
              }
              uVar40 = (ulong)(ushort)(*(ushort *)(phVar123 + uVar40 * 2 + lVar75) << 8 |
                                      *(ushort *)(phVar123 + uVar40 * 2 + lVar75) >> 8);
              if (((((*(ushort *)(phVar123 + uVar40 * 4 + (ulong)uVar77 + 0xe) & 0xf00) != 0) &&
                   ((uint)ppStack_228 < uVar37)) ||
                  (sVar10 != (short)(&(ppVar41->__data).__lock)[uVar40])) ||
                 (((*(ushort *)(phVar123 + uVar40 * 4 + (ulong)uVar77 + 0xe) ^ uVar111) & 0x40) != 0
                 )) goto LAB_003e7dc0;
            }
            if ((((byte)phVar123[(ulong)(ushort)(*(ushort *)
                                                  (phVar123 +
                                                  (ulong)((uint)(uVar35 == 0) + uVar60 * uVar36) * 2
                                                  + lVar75) << 8 |
                                                *(ushort *)
                                                 (phVar123 +
                                                 (ulong)((uint)(uVar35 == 0) + uVar60 * uVar36) * 2
                                                 + lVar75) >> 8) * 4 + (ulong)uVar77 + 0xf] & 0xf)
                 != 0) && ((uint)ppStack_228 < uVar37)) goto LAB_003e7dc0;
          }
          else {
LAB_003e7dc0:
            uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
            uVar36 = uVar35;
            if (*(char *)((long)&p_Var47[5].__next + 2) != '\0') {
              uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
            }
            if ((uVar36 != 0) && (uVar35 < *(uint *)&p_Var47[6].__prev)) {
              hb_buffer_t::_set_glyph_flags((hb_buffer_t *)p_Var47,3,uVar36 - 1,uVar35 + 1,'\x01');
              uVar111 = *(ushort *)(phVar123 + uVar132 * 4 + (ulong)uVar77 + 0xe);
            }
          }
          uVar71 = uVar111 >> 8;
          if ((uVar111 << 8 & 0x8000) != 0) {
            ppStack_228 = (pthread_mutex_t *)(ulong)*(uint *)((long)&p_Var47[5].__next + 4);
          }
          if ((uVar111 << 8 & 0x2000) != 0) {
            uVar35 = *(int *)((long)&p_Var47[5].__next + 4) + 1;
            if (*(uint *)&p_Var47[6].__prev < uVar35) {
              uVar35 = *(uint *)&p_Var47[6].__prev;
            }
            phStack_238 = (hb_buffer_t *)(ulong)uVar35;
          }
          ppVar61 = (pthread_mutex_t *)((ulong)uVar71 & 0xf);
          uStack_208 = uVar132;
          ppStack_1f8 = ppVar41;
          if ((uVar71 & 0xf) != 0) {
            ppVar61 = (pthread_mutex_t *)((ulong)uVar71 & 0xf);
            uVar35 = (uint)phStack_238 - (uint)ppStack_228;
            if ((uint)ppStack_228 < (uint)phStack_238) {
              hVar9 = *(hb_buffer_t *)((long)ppVar61 + 0x5de390);
              uVar36 = (uint)((byte)hVar9 >> 4);
              ppVar61 = (pthread_mutex_t *)(ulong)uVar36;
              phVar123 = (hb_buffer_t *)0x2;
              if (uVar36 < 2) {
                phVar123 = (hb_buffer_t *)(ulong)uVar36;
              }
              uVar60 = (byte)hVar9 & 0xf;
              uVar37 = 2;
              if (uVar60 < 2) {
                uVar37 = uVar60;
              }
              if (uVar35 < 0x41) {
                uVar60 = (uint)phVar123;
                uVar105 = uVar60 + uVar37;
                if (uVar105 <= uVar35) {
                  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)(byte)hVar9) & 0xffffffff0000000f;
                  pGStack_200 = (GDEF *)CONCAT44(pGStack_200._4_4_,uVar36);
                  uVar36 = *(int *)((long)&p_Var47[5].__next + 4) + 1;
                  if (*(uint *)&p_Var47[6].__prev < uVar36) {
                    uVar36 = *(uint *)&p_Var47[6].__prev;
                  }
                  uStack_1dc = uVar105;
                  if (1 < uVar36 - (uint)ppStack_228) {
                    hb_buffer_t::merge_clusters_impl
                              ((hb_buffer_t *)p_Var47,(uint)ppStack_228,uVar36);
                  }
                  if (1 < uVar35) {
                    hb_buffer_t::merge_clusters_impl
                              ((hb_buffer_t *)p_Var47,(uint)ppStack_228,(uint)phStack_238);
                  }
                  p_Stack_1e8 = p_Var47[7].__prev;
                  ppVar41 = (pthread_mutex_t *)
                            ((long)p_Stack_1e8 + ((ulong)ppStack_228 & 0xffffffff) * 0x14);
                  phVar99 = (hb_buffer_t *)((long)phVar123 * 0x14);
                  phStack_1d8 = phVar123;
                  if (uVar60 != 0) {
                    memcpy(&uStack_1a8,ppVar41,(size_t)phVar99);
                  }
                  phVar107 = (hb_buffer_t *)(ulong)uVar37;
                  ppVar61 = (pthread_mutex_t *)((long)phVar107 * 4);
                  uVar40 = (ulong)phStack_238 & 0xffffffff;
                  phVar123 = phVar107;
                  ppStack_218 = ppVar41;
                  phStack_1c0 = phVar99;
                  if (uVar37 != 0) {
                    phStack_1f0 = phVar107;
                    ppVar61 = memcpy(&uStack_180,
                                     (void *)((long)p_Stack_1e8 +
                                             (long)phVar107 * -0x14 + uVar40 * 0x14),
                                     (long)phVar107 * 0x14);
                    phVar123 = phStack_1f0;
                  }
                  if (uVar60 != uVar37) {
                    ppVar61 = memmove(&(ppStack_218->__data).__lock + (long)phVar123 * 5,
                                      &(ppStack_218->__data).__lock + (long)phStack_1d8 * 5,
                                      (ulong)((int)phStack_238 - (uStack_1dc + (uint)ppStack_228)) *
                                      0x14);
                  }
                  ppVar41 = ppStack_218;
                  if (uVar37 != 0) {
                    ppVar61 = memcpy(ppStack_218,&uStack_180,(long)phVar107 * 0x14);
                  }
                  if (uVar60 != 0) {
                    ppVar61 = memcpy((void *)((long)p_Stack_1e8 +
                                             (long)phStack_1d8 * -0x14 + uVar40 * 0x14),&uStack_1a8,
                                     (size_t)phStack_1c0);
                  }
                  if ((int)pGStack_200 == 3) {
                    uVar40 = (ulong)((int)phStack_238 - 1);
                    uStack_198._0_4_ = *(uint *)((long)p_Stack_1e8 + uVar40 * 0x14 + 0x10);
                    pauVar63 = (undefined1 (*) [16])((long)p_Stack_1e8 + uVar40 * 0x14);
                    ppStack_1a0 = *(pthread_mutex_t **)(*pauVar63 + 8);
                    auVar261 = *pauVar63;
                    uStack_1a8 = (uint)*(undefined8 *)*pauVar63;
                    uStack_1a4 = (undefined4)((ulong)*(undefined8 *)*pauVar63 >> 0x20);
                    uVar132 = (ulong)((int)phStack_238 - 2);
                    *(undefined4 *)((long)p_Stack_1e8 + uVar40 * 0x14 + 0x10) =
                         *(undefined4 *)((long)p_Stack_1e8 + uVar132 * 0x14 + 0x10);
                    puVar109 = (undefined8 *)((long)p_Stack_1e8 + uVar132 * 0x14);
                    uVar44 = puVar109[1];
                    puVar2 = (undefined8 *)((long)p_Stack_1e8 + uVar40 * 0x14);
                    *puVar2 = *puVar109;
                    puVar2[1] = uVar44;
                    ppVar61 = (pthread_mutex_t *)(ulong)(uint)uStack_198;
                    *(uint *)((long)p_Stack_1e8 + uVar132 * 0x14 + 0x10) = (uint)uStack_198;
                    *(undefined1 (*) [16])((long)p_Stack_1e8 + uVar132 * 0x14) = auVar261;
                  }
                  if ((int)uStack_1d0 == 3) {
                    uStack_198._0_4_ = (ppVar41->__data).__kind;
                    ppStack_1a0._0_4_ = *(int *)((long)&ppVar41->__data + 8);
                    ppStack_1a0._4_4_ = *(uint *)((long)&ppVar41->__data + 0xc);
                    auVar261 = *(undefined1 (*) [16])ppVar41->__size;
                    uStack_1a8 = (uint)ppVar41->__align;
                    uStack_1a4 = (undefined4)((ulong)ppVar41->__align >> 0x20);
                    uVar40 = (ulong)((int)ppStack_228 + 1);
                    ppVar61 = (pthread_mutex_t *)(uVar40 * 5);
                    (ppVar41->__data).__kind = *(int *)((long)p_Stack_1e8 + uVar40 * 0x14 + 0x10);
                    plVar108 = (long *)((long)p_Stack_1e8 + uVar40 * 0x14);
                    lVar75 = plVar108[1];
                    ppVar41->__align = *plVar108;
                    (ppVar41->__data).__owner = (int)lVar75;
                    (ppVar41->__data).__nusers = (int)((ulong)lVar75 >> 0x20);
                    *(uint *)((long)p_Stack_1e8 + uVar40 * 0x14 + 0x10) = (uint)uStack_198;
                    *(undefined1 (*) [16])((long)p_Stack_1e8 + uVar40 * 0x14) = auVar261;
                  }
                }
              }
            }
          }
          uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
          if (uVar35 == *(uint *)&p_Var47[6].__prev) {
            return ppVar61;
          }
          if (*(char *)&p_Var47[5].__next == '\0') {
            return ppVar61;
          }
          uVar36 = (uint)(ushort)((ushort)ppStack_210 << 8 | (ushort)ppStack_210 >> 8);
          ppVar41 = ppStack_1f8;
          if (((byte)*(hb_buffer_t *)(ppStack_1f8->__size + uStack_208 * 4 + 2) & 0x40) == 0) {
LAB_003e8130:
            if (*(char *)((long)&p_Var47[5].__next + 2) == '\0') goto LAB_003e81e3;
            p_Var128 = p_Var47[7].__next;
            p_Var52 = p_Var47[7].__prev;
            uVar37 = *(uint *)((long)&p_Var47[6].__prev + 4);
            if ((p_Var128 == p_Var52) && (uVar37 == uVar35)) goto LAB_003e8150;
            uVar37 = uVar37 + 1;
            if ((uVar37 == 0) || (uVar37 < *(uint *)&p_Var47[6].__next)) {
              if (p_Var128 == p_Var52) {
LAB_003e816a:
                uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
                if (uVar35 + 1 <= *(int *)((long)&p_Var47[5].__next + 4) + 1U) goto LAB_003e81a9;
                p_Var128 = p_Var47[8].__prev;
                p_Var47[7].__next = p_Var128;
                if (uVar35 != 0) goto LAB_003e818b;
              }
            }
            else {
              ppVar41 = (pthread_mutex_t *)hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar37);
              if ((char)ppVar41 == '\0') goto LAB_003e81ea;
              p_Var52 = p_Var47[7].__prev;
              p_Var128 = p_Var47[7].__next;
              if (p_Var128 == p_Var52) goto LAB_003e816a;
            }
LAB_003e81b0:
            uVar40 = (ulong)*(uint *)((long)&p_Var47[5].__next + 4);
            uVar132 = (ulong)*(uint *)((long)&p_Var47[6].__prev + 4);
            *(undefined4 *)((long)p_Var128 + uVar132 * 0x14 + 0x10) =
                 *(undefined4 *)((long)p_Var52 + uVar40 * 0x14 + 0x10);
            *(undefined1 (*) [16])((long)p_Var128 + uVar132 * 0x14) =
                 *(undefined1 (*) [16])((long)p_Var52 + uVar40 * 0x14);
            uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
            uVar37 = *(uint *)((long)&p_Var47[6].__prev + 4);
LAB_003e81da:
            ppVar41 = (pthread_mutex_t *)(ulong)uVar35;
            *(uint *)((long)&p_Var47[6].__prev + 4) = uVar37 + 1;
            goto LAB_003e81e3;
          }
          uVar37 = *(uint *)&p_Var47[0xc].__next;
          ppVar41 = (pthread_mutex_t *)(ulong)uVar37;
          *(uint *)&p_Var47[0xc].__next = uVar37 - 1;
          if ((int)uVar37 < 1) goto LAB_003e8130;
        }
        else {
          if (uVar35 < uVar37) {
            uVar60 = *(uint *)((long)p_Var47[7].__prev + (ulong)uVar35 * 0x14 + 8);
            puVar72 = puVar65 + 3;
            puVar62 = puVar65;
            do {
              puVar62 = puVar62 + -3;
              puVar65 = puVar72 + -2;
              puVar72 = puVar72 + -3;
            } while (uVar60 < *puVar65);
            do {
              puVar65 = puVar62 + 3;
              puVar72 = puVar62 + 5;
              puVar62 = puVar65;
            } while (*puVar72 < uVar60);
          }
          ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)local_230 + 0xe0);
          if ((*puVar65 & *(uint *)((long)local_230 + 0xe0)) != 0) goto LAB_003e7c32;
          if (uVar35 == uVar37) {
            return ppVar41;
          }
          if (*(char *)((long)&p_Var47[5].__next + 2) != '\0') {
            p_Var128 = p_Var47[7].__next;
            p_Var52 = p_Var47[7].__prev;
            uVar37 = *(uint *)((long)&p_Var47[6].__prev + 4);
            if ((p_Var128 != p_Var52) || (uVar36 = 0, uVar37 != uVar35)) {
              uVar37 = uVar37 + 1;
              if ((uVar37 != 0) && (*(uint *)&p_Var47[6].__next <= uVar37)) {
                ppVar41 = (pthread_mutex_t *)hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar37);
                if ((char)ppVar41 != '\0') {
                  p_Var52 = p_Var47[7].__prev;
                  p_Var128 = p_Var47[7].__next;
                  uVar36 = 0;
                  if (p_Var128 == p_Var52) goto LAB_003e7bff;
                  goto LAB_003e81b0;
                }
                uVar36 = 0;
                goto LAB_003e81ea;
              }
              uVar36 = 0;
              if (p_Var128 != p_Var52) goto LAB_003e81b0;
LAB_003e7bff:
              uVar36 = 0;
              uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
              if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar35 + 1) {
                p_Var128 = p_Var47[8].__prev;
                p_Var47[7].__next = p_Var128;
                uVar36 = 0;
                if (uVar35 == 0) goto LAB_003e81b0;
LAB_003e818b:
                memcpy(p_Var128,p_Var52,(ulong)uVar35 * 0x14);
                p_Var52 = p_Var47[7].__prev;
                p_Var128 = p_Var47[7].__next;
              }
              else {
LAB_003e81a9:
                p_Var128 = p_Var52;
              }
              goto LAB_003e81b0;
            }
LAB_003e8150:
            uVar37 = uVar35;
            goto LAB_003e81da;
          }
          uVar36 = 0;
LAB_003e81e3:
          *(uint *)((long)&p_Var47[5].__next + 4) = uVar35 + 1;
        }
LAB_003e81ea:
        if (*(char *)&p_Var47[5].__next == '\0') {
          return ppVar41;
        }
        uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
      } while( true );
    }
    break;
  case 1:
    p_Var47 = (param_2->__data).__list.__prev;
    pGStack_200 = *(GDEF **)((long)param_2 + 0x70);
    bVar133 = *(short *)pGStack_200 != 0x100;
    sVar10 = *(short *)(pGStack_200 + 4);
    uVar35 = *(uint *)((long)&(param_1->__data).__list.__prev + 4);
    uStack_208 = CONCAT44(uStack_208._4_4_,*(int *)&p_Var47[1].__next);
    ppStack_218._0_1_ = bVar133;
    if (*(int *)&p_Var47[1].__next == -1) {
      p_Var52 = p_Var47[7].__next;
      if (p_Var52 == (__pthread_internal_list *)0x0) {
        do {
          p_Var128 = p_Var47[6].__next;
          p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
          if (p_Var128 == (__pthread_internal_list *)0x0) goto LAB_003ea614;
          uStack_1a8 = 0;
          auStack_190 = (undefined1  [16])0x0;
          ppStack_1a0 = (pthread_mutex_t *)0x0;
          uStack_198._0_4_ = 0;
          uStack_198._4_4_ = 0;
          uStack_180._0_4_ = (uint)uStack_180 & 0xffffff00;
          uStack_16b = 0;
          uStack_180._4_4_ = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          uStack_16c = 1;
          piVar49 = (int *)&_hb_NullPool;
          if ((p_Var128[2].__prev != (__pthread_internal_list *)0x0) &&
             (piVar49 = (int *)(*(code *)p_Var128[2].__prev)(p_Var128,0x6d617870,p_Var128[2].__next)
             , piVar49 == (int *)0x0)) {
            piVar49 = (int *)&_hb_NullPool;
          }
          p_Var52 = (__pthread_internal_list *)
                    hb_sanitize_context_t::sanitize_blob<OT::maxp>
                              ((hb_sanitize_context_t *)&uStack_1a8,piVar49);
          hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&uStack_1a8);
          if (p_Var52 == (__pthread_internal_list *)0x0) {
            p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
            LOCK();
            bVar133 = p_Var47[7].__next == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[7].__next = (__pthread_internal_list *)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar133 = p_Var47[7].__next == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[7].__next = p_Var52;
            }
            UNLOCK();
          }
          if (bVar133) goto LAB_003ea614;
          if (((p_Var52 != (__pthread_internal_list *)0x0) &&
              (p_Var52 != (__pthread_internal_list *)&_hb_NullPool)) &&
             (*(int *)&p_Var52->__prev != 0)) {
            LOCK();
            *(int *)&p_Var52->__prev = *(int *)&p_Var52->__prev + -1;
            UNLOCK();
            if (*(int *)&p_Var52->__prev == 0) {
              *(undefined4 *)&p_Var52->__prev = 0xffff2153;
              ppVar41 = (pthread_mutex_t *)p_Var52->__next;
              if (ppVar41 != (pthread_mutex_t *)0x0) {
                ppStack_228 = ppVar41;
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar41[1].__data,ppVar41);
                free(ppStack_228);
                p_Var52->__next = (__pthread_internal_list *)0x0;
              }
              if (p_Var52[2].__next != (__pthread_internal_list *)0x0) {
                (*(code *)p_Var52[2].__next)(p_Var52[2].__prev);
              }
              free(p_Var52);
            }
          }
          p_Var52 = p_Var47[7].__next;
        } while (p_Var52 == (__pthread_internal_list *)0x0);
      }
LAB_003ea614:
      if (*(uint *)&p_Var52[1].__next < 6) {
        p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
      }
      else {
        p_Var52 = p_Var52[1].__prev;
      }
      uVar111 = *(ushort *)((long)&p_Var52->__prev + 4);
      uVar36 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
      if (uVar111 == 0) {
        uVar36 = 0;
      }
      uStack_208 = CONCAT44(uStack_208._4_4_,uVar36);
      *(uint *)&p_Var47[1].__next = uVar36;
    }
    uVar36 = *(uint *)(local_220 + 0x14);
    uVar37 = *(uint *)(local_220 + 0x18);
    uVar40 = *(ulong *)(local_220 +
                       (ulong)(ushort)(*(ushort *)
                                        (local_220 +
                                        (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 |
                                                (uVar36 & 0xff00) << 8 | uVar36 << 0x18) + 0xe) << 8
                                      | *(ushort *)
                                         (local_220 +
                                         (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 |
                                                 (uVar36 & 0xff00) << 8 | uVar36 << 0x18) + 0xe) >>
                                        8) * 8 +
                       (ulong)(uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                              uVar37 << 0x18) + 0xc);
    p_Var47 = (local_230->__data).__list.__next;
    uVar36 = *(uint *)&p_Var47[6].__prev;
    if (*(uint *)((long)&p_Var47[5].__next + 4) == uVar36) {
      if ((short)uVar40 == 0) goto LAB_003e82ab;
    }
    else if (((short)(uVar40 >> 0x30) == -1) && ((uVar40 & 0xffff0000ffff) == 0xffff00000000)) {
LAB_003e82ab:
      if ((*(ulong *)((long)local_230 + 0x80) & *(ulong *)((long)local_230 + 0x98)) == 0) {
        return local_230;
      }
      if ((*(ulong *)((long)local_230 + 0x88) & local_230[4].__align) == 0) {
        return local_230;
      }
      if ((*(ulong *)((long)local_230 + 0xa8) & *(ulong *)((long)local_230 + 0x90)) == 0) {
        return local_230;
      }
    }
    lVar75 = *(long *)&local_230[3].__data;
    if ((lVar75 == 0) || (*(uint *)(lVar75 + 4) < 2)) {
      puVar65 = (uint *)0x0;
      *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
      cVar34 = *(char *)&p_Var47[5].__next;
    }
    else {
      puVar65 = *(uint **)(lVar75 + 8);
      *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
      cVar34 = *(char *)&p_Var47[5].__next;
    }
    ppVar41 = local_230;
    if (cVar34 != '\0') {
      ppStack_1f8 = (pthread_mutex_t *)(local_220 + 0xc);
      ppStack_218 = (pthread_mutex_t *)CONCAT71(ppStack_218._1_7_,(byte)ppStack_218 | sVar10 == 0);
      p_Stack_1e8 = (__pthread_internal_list *)
                    (local_220 +
                    (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                           uVar35 << 0x18) + 0xc);
      uVar35 = 0;
      uVar37 = 0;
      phStack_238 = (hb_buffer_t *)((ulong)phStack_238 & 0xffffffff00000000);
      uVar60 = 0;
      uVar40 = 0;
      uVar105 = 0;
      if (puVar65 == (uint *)0x0) goto LAB_003e84b0;
LAB_003e8380:
      uVar60 = uVar105;
      if (uVar35 < uVar36) {
        uVar105 = *(uint *)((long)p_Var47[7].__prev + uVar40 * 0x14 + 8);
        puVar62 = puVar65 + 3;
        puVar72 = puVar65;
        do {
          puVar72 = puVar72 + -3;
          puVar65 = puVar62 + -2;
          puVar62 = puVar62 + -3;
        } while (uVar105 < *puVar65);
        do {
          puVar65 = puVar72 + 3;
          puVar62 = puVar72 + 5;
          puVar72 = puVar65;
        } while (*puVar62 < uVar105);
      }
      ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)local_230 + 0xe0);
      if ((*puVar65 & *(uint *)((long)local_230 + 0xe0)) != 0) goto LAB_003e84b2;
      if (uVar35 != uVar36) {
        if (*(char *)((long)&p_Var47[5].__next + 2) == '\0') {
          uVar60 = 0;
          goto LAB_003e8c18;
        }
        p_Var128 = p_Var47[7].__next;
        p_Var52 = p_Var47[7].__prev;
        uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
        if ((p_Var128 == p_Var52) && (uVar60 = 0, uVar36 == uVar35)) goto LAB_003e84a0;
        uVar36 = uVar36 + 1;
        if ((uVar36 == 0) || (uVar36 < *(uint *)&p_Var47[6].__next)) {
          uVar60 = 0;
          if (p_Var128 != p_Var52) goto LAB_003e8be0;
        }
        else {
          ppVar41 = (pthread_mutex_t *)hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar36);
          if ((char)ppVar41 == '\0') {
            uVar60 = 0;
            cVar34 = *(char *)&p_Var47[5].__next;
            goto joined_r0x003e8493;
          }
          p_Var52 = p_Var47[7].__prev;
          p_Var128 = p_Var47[7].__next;
          uVar60 = 0;
          if (p_Var128 != p_Var52) goto LAB_003e8be0;
        }
        uVar60 = 0;
        uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
        if (uVar35 + 1 <= *(int *)((long)&p_Var47[5].__next + 4) + 1U) goto LAB_003e8bd0;
        p_Var128 = p_Var47[8].__prev;
        p_Var47[7].__next = p_Var128;
        uVar60 = 0;
LAB_003e8ba5:
        if (uVar35 != 0) {
          memcpy(p_Var128,p_Var52,(ulong)uVar35 * 0x14);
          p_Var52 = p_Var47[7].__prev;
          p_Var128 = p_Var47[7].__next;
        }
LAB_003e8be0:
        uVar40 = (ulong)*(uint *)((long)&p_Var47[5].__next + 4);
        uVar132 = (ulong)*(uint *)((long)&p_Var47[6].__prev + 4);
        *(undefined4 *)((long)p_Var128 + uVar132 * 0x14 + 0x10) =
             *(undefined4 *)((long)p_Var52 + uVar40 * 0x14 + 0x10);
        puVar109 = (undefined8 *)((long)p_Var52 + uVar40 * 0x14);
        uVar44 = puVar109[1];
        puVar2 = (undefined8 *)((long)p_Var128 + uVar132 * 0x14);
        *puVar2 = *puVar109;
        puVar2[1] = uVar44;
        uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
        uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
LAB_003e8c0e:
        ppVar41 = (pthread_mutex_t *)(ulong)uVar35;
        *(uint *)((long)&p_Var47[6].__prev + 4) = uVar36 + 1;
LAB_003e8c18:
        *(uint *)((long)&p_Var47[5].__next + 4) = uVar35 + 1;
LAB_003e8c20:
        cVar34 = *(char *)&p_Var47[5].__next;
joined_r0x003e8493:
        if (cVar34 == '\0') {
          return ppVar41;
        }
        do {
          uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
          uVar36 = *(uint *)&p_Var47[6].__prev;
          uVar40 = (ulong)uVar35;
          uVar105 = uVar60;
          if (puVar65 != (uint *)0x0) goto LAB_003e8380;
LAB_003e84b0:
          puVar65 = (uint *)0x0;
LAB_003e84b2:
          phVar123 = local_220;
          if (uVar35 < uVar36) {
            uVar35 = *(uint *)((long)p_Var47[7].__prev + uVar40 * 0x14);
            if ((ulong)uVar35 == 0xffff) {
              uVar40 = 2;
            }
            else {
              uVar40 = 1;
              if ((((*(ulong *)((long)local_230 + 0x98) >> ((ulong)(uVar35 >> 4) & 0x3f) & 1) != 0)
                  && (((ulong)local_230[4].__align >> ((ulong)uVar35 & 0x3f) & 1) != 0)) &&
                 ((*(ulong *)((long)local_230 + 0xa8) >> ((ulong)(uVar35 >> 9) & 0x3f) & 1) != 0)) {
                uVar36 = *(uint *)(local_220 + 0x10);
                pLVar43 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                    ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                     (local_220 +
                                     (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 |
                                             (uVar36 & 0xff00) << 8 | uVar36 << 0x18) + 0xc),uVar35,
                                     (uint)uStack_208);
                if (pLVar43 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                  uVar40 = (ulong)(ushort)(*(ushort *)pLVar43 << 8 | *(ushort *)pLVar43 >> 8);
                }
              }
            }
          }
          else {
            uVar40 = 0;
          }
          uVar36 = *(uint *)&ppStack_1f8->__data;
          uVar105 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                    uVar36 << 0x18;
          ppVar41 = (pthread_mutex_t *)(ulong)uVar105;
          uVar77 = (uint)uVar40;
          uVar35 = uVar77;
          if (uVar105 <= uVar77) {
            uVar35 = 1;
          }
          uVar98 = *(uint *)(phVar123 + 0x14);
          uVar103 = *(uint *)(phVar123 + 0x18);
          lVar75 = (ulong)(uVar98 >> 0x18 | (uVar98 & 0xff0000) >> 8 | (uVar98 & 0xff00) << 8 |
                          uVar98 << 0x18) + 0xc;
          uVar103 = uVar103 >> 0x18 | (uVar103 & 0xff0000) >> 8 | (uVar103 & 0xff00) << 8 |
                    uVar103 << 0x18;
          uVar132 = (ulong)(ushort)(*(ushort *)
                                     (phVar123 + (ulong)(uVar35 + uVar105 * uVar60) * 2 + lVar75) <<
                                    8 | *(ushort *)
                                         (phVar123 + (ulong)(uVar35 + uVar105 * uVar60) * 2 + lVar75
                                         ) >> 8);
          sVar10 = *(short *)(phVar123 + uVar132 * 8 + (ulong)uVar103 + 0xc);
          ppStack_228 = (pthread_mutex_t *)CONCAT62(ppStack_228._2_6_,sVar10);
          uVar98 = *(uint *)((long)&p_Var47[5].__next + 4);
          uVar35 = *(uint *)&p_Var47[6].__prev;
          bVar133 = uVar98 != uVar35;
          bVar134 = (char)uVar37 != '\0';
          if ((!(bVar134 || bVar133)) ||
             ((*(short *)(phVar123 + uVar132 * 8 + (ulong)uVar103 + 0x10) == -1 &&
              (*(short *)(phVar123 + uVar132 * 8 + (ulong)uVar103 + 0x12) == -1)))) {
            if ((uVar60 != 0) &&
               (((*(ushort *)(phVar123 + uVar132 * 8 + (ulong)uVar103 + 0xe) & 0x40) == 0 ||
                (sVar10 != 0)))) {
              if (uVar105 <= uVar77) {
                uVar40 = 1;
              }
              ppVar41 = (pthread_mutex_t *)
                        (ulong)(ushort)(*(ushort *)(phVar123 + uVar40 * 2 + lVar75) << 8 |
                                       *(ushort *)(phVar123 + uVar40 * 2 + lVar75) >> 8);
              if ((((bVar134 || bVar133) &&
                   ((*(short *)(phVar123 + (long)ppVar41 * 8 + (ulong)uVar103 + 0x10) != -1 ||
                    (*(short *)(phVar123 + (long)ppVar41 * 8 + (ulong)uVar103 + 0x12) != -1)))) ||
                  (sVar10 != *(short *)(phVar123 + (long)ppVar41 * 8 + (ulong)uVar103 + 0xc))) ||
                 (((*(ushort *)(phVar123 + uVar132 * 8 + (ulong)uVar103 + 0xe) ^
                   *(ushort *)(phVar123 + (long)ppVar41 * 8 + (ulong)uVar103 + 0xe)) & 0x40) != 0))
              goto LAB_003e86b0;
            }
            ppVar41 = (pthread_mutex_t *)(ulong)(uVar36 == 0);
            if (bVar134 || bVar133) {
              ppVar41 = (pthread_mutex_t *)
                        (ulong)(ushort)(*(ushort *)
                                         (phVar123 +
                                         (ulong)((uint)(uVar36 == 0) + uVar105 * uVar60) * 2 +
                                         lVar75) << 8 |
                                       *(ushort *)
                                        (phVar123 +
                                        (ulong)((uint)(uVar36 == 0) + uVar105 * uVar60) * 2 + lVar75
                                        ) >> 8);
              if ((*(short *)(phVar123 + (long)ppVar41 * 8 + (ulong)uVar103 + 0x10) != -1) ||
                 (*(short *)(phVar123 + (long)ppVar41 * 8 + (ulong)uVar103 + 0x12) != -1))
              goto LAB_003e86b0;
            }
            else {
              uVar35 = uVar98;
            }
          }
          else {
LAB_003e86b0:
            uVar36 = uVar98;
            if (*(char *)((long)&p_Var47[5].__next + 2) != '\0') {
              uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
            }
            if ((uVar36 != 0) && (uVar98 < uVar35)) {
              ppVar41 = (pthread_mutex_t *)
                        hb_buffer_t::_set_glyph_flags
                                  ((hb_buffer_t *)p_Var47,3,uVar36 - 1,uVar98 + 1,'\x01');
              uVar98 = *(uint *)((long)&p_Var47[5].__next + 4);
              uVar35 = *(uint *)&p_Var47[6].__prev;
            }
          }
          if ((uVar98 == uVar35) && ((char)uVar37 == '\0')) {
            uVar37 = 0;
          }
          else {
            uVar111 = *(ushort *)(phVar123 + uVar132 * 8 + (ulong)uVar103 + 0x10);
            ppStack_210 = (pthread_mutex_t *)CONCAT44(ppStack_210._4_4_,uVar37);
            if (uVar111 != 0xffff) {
              pLVar42 = (Lookup<OT::HBGlyphID16> *)&_hb_Null_OT_Index;
              if (p_Stack_1e8 <=
                  (hb_buffer_t *)
                  ((long)p_Stack_1e8 + (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8) * 4)) {
                uVar35 = *(uint *)((long)p_Stack_1e8 +
                                  (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8) * 4);
                pLVar42 = (Lookup<OT::HBGlyphID16> *)
                          ((long)p_Stack_1e8 +
                          (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8
                                 | uVar35 << 0x18));
              }
              uVar40 = (ulong)phStack_238 & 0xffffffff;
              phVar99 = (hb_buffer_t *)(uVar40 * 5);
              pLVar42 = Lookup<OT::HBGlyphID16>::get_value
                                  (pLVar42,*(uint *)((long)p_Var47[7].__prev + uVar40 * 0x14),
                                   (uint)uStack_208);
              uVar37 = (uint)ppStack_210;
              if (pLVar42 != (Lookup<OT::HBGlyphID16> *)0x0) {
                uVar35 = *(int *)((long)&p_Var47[5].__next + 4) + 1;
                if (*(uint *)&p_Var47[6].__prev < uVar35) {
                  uVar35 = *(uint *)&p_Var47[6].__prev;
                }
                phStack_1d8 = phVar99;
                if (1 < uVar35 - (uint)phStack_238) {
                  *(byte *)&p_Var47[0xc].__prev = *(byte *)&p_Var47[0xc].__prev | 0x20;
                  p_Var52 = p_Var47[7].__prev;
                  uVar36 = 0xffffffff;
                  if (uVar35 != (uint)phStack_238) {
                    if (*(int *)((long)&p_Var47[1].__next + 4) == 2) {
                      if ((uint)phStack_238 < uVar35) {
                        uVar127 = (ulong)uVar35;
                        uVar67 = uVar127 - uVar40;
                        uVar36 = 0xffffffff;
                        if (8 < uVar67) {
                          uVar118 = (ulong)((uint)uVar67 & 7);
                          if (uVar118 == 0) {
                            uVar118 = 8;
                          }
                          lVar75 = (uVar118 + uVar40) - uVar127;
                          puVar72 = (uint *)((long)p_Var52 + uVar40 * 0x14 + 0x94);
                          uVar60 = 0xffffffff;
                          uVar36 = 0xffffffff;
                          uVar37 = 0xffffffff;
                          uVar105 = 0xffffffff;
                          uVar169 = 0xffffffff;
                          uVar77 = 0xffffffff;
                          uVar98 = 0xffffffff;
                          uVar170 = 0xffffffff;
                          do {
                            uVar205 = -(uint)((int)(uVar36 ^ 0x80000000) <
                                             (int)(puVar72[-0x23] ^ 0x80000000));
                            uVar244 = -(uint)((int)(uVar37 ^ 0x80000000) <
                                             (int)(puVar72[-0x1e] ^ 0x80000000));
                            uVar245 = -(uint)((int)(uVar60 ^ 0x80000000) <
                                             (int)(puVar72[-0x19] ^ 0x80000000));
                            uVar246 = -(uint)((int)(uVar105 ^ 0x80000000) <
                                             (int)(puVar72[-0x14] ^ 0x80000000));
                            uVar36 = ~uVar205 & puVar72[-0x23] | uVar36 & uVar205;
                            uVar37 = ~uVar244 & puVar72[-0x1e] | uVar37 & uVar244;
                            uVar60 = ~uVar245 & puVar72[-0x19] | uVar60 & uVar245;
                            uVar105 = ~uVar246 & puVar72[-0x14] | uVar105 & uVar246;
                            uVar205 = -(uint)((int)(uVar77 ^ 0x80000000) <
                                             (int)(puVar72[-0xf] ^ 0x80000000));
                            uVar244 = -(uint)((int)(uVar98 ^ 0x80000000) <
                                             (int)(puVar72[-10] ^ 0x80000000));
                            uVar245 = -(uint)((int)(uVar169 ^ 0x80000000) <
                                             (int)(puVar72[-5] ^ 0x80000000));
                            uVar246 = -(uint)((int)(uVar170 ^ 0x80000000) <
                                             (int)(*puVar72 ^ 0x80000000));
                            uVar77 = ~uVar205 & puVar72[-0xf] | uVar77 & uVar205;
                            uVar98 = ~uVar244 & puVar72[-10] | uVar98 & uVar244;
                            uVar169 = ~uVar245 & puVar72[-5] | uVar169 & uVar245;
                            uVar170 = ~uVar246 & *puVar72 | uVar170 & uVar246;
                            puVar72 = puVar72 + 0x28;
                            lVar75 = lVar75 + 8;
                          } while (lVar75 != 0);
                          uVar40 = uVar40 + (uVar67 - uVar118);
                          uVar205 = -(uint)((int)(uVar36 ^ 0x80000000) < (int)(uVar77 ^ 0x80000000))
                          ;
                          uVar244 = -(uint)((int)(uVar37 ^ 0x80000000) < (int)(uVar98 ^ 0x80000000))
                          ;
                          uVar245 = -(uint)((int)(uVar60 ^ 0x80000000) < (int)(uVar169 ^ 0x80000000)
                                           );
                          uVar246 = -(uint)((int)(uVar105 ^ 0x80000000) <
                                           (int)(uVar170 ^ 0x80000000));
                          uVar77 = ~uVar205 & uVar77 | uVar36 & uVar205;
                          uVar98 = ~uVar244 & uVar98 | uVar37 & uVar244;
                          uVar60 = ~uVar245 & uVar169 | uVar60 & uVar245;
                          uVar105 = ~uVar246 & uVar170 | uVar105 & uVar246;
                          uVar36 = -(uint)((int)(uVar77 ^ 0x80000000) < (int)(uVar60 ^ 0x80000000));
                          uVar37 = -(uint)((int)(uVar98 ^ 0x80000000) < (int)(uVar105 ^ 0x80000000))
                          ;
                          uVar36 = ~uVar36 & uVar60 | uVar77 & uVar36;
                          uVar37 = ~uVar37 & uVar105 | uVar98 & uVar37;
                          uVar60 = -(uint)((int)(uVar36 ^ 0x80000000) < (int)(uVar37 ^ 0x80000000));
                          uVar36 = ~uVar60 & uVar37 | uVar36 & uVar60;
                        }
                        lVar75 = uVar127 - uVar40;
                        puVar72 = (uint *)((long)p_Var52 + uVar40 * 0x14 + 8);
                        do {
                          if (*puVar72 < uVar36) {
                            uVar36 = *puVar72;
                          }
                          puVar72 = puVar72 + 5;
                          lVar75 = lVar75 + -1;
                        } while (lVar75 != 0);
                      }
                    }
                    else {
                      uVar36 = *(uint *)((long)p_Var52 + uVar40 * 0x14 + 8);
                      uVar37 = *(uint *)((long)p_Var52 + (ulong)(uVar35 - 1) * 0x14 + 8);
                      if (uVar37 < uVar36) {
                        uVar36 = uVar37;
                      }
                    }
                  }
                  hb_buffer_t::_infos_set_glyph_flags
                            ((hb_buffer_t *)p_Var47,(long)p_Var52,(uint)phStack_238,uVar35,uVar36,3)
                  ;
                }
                phVar99 = phStack_1d8;
                uVar111 = *(ushort *)pLVar42;
                uVar71 = uVar111 << 8 | uVar111 >> 8;
                p_Var52 = p_Var47[7].__prev;
                *(uint *)((long)&p_Var52->__prev + (long)phStack_1d8 * 4) = (uint)uVar71;
                *(ulong *)((long)local_230 + 0x80) =
                     *(ulong *)((long)local_230 + 0x80) | 1L << ((byte)(uVar71 >> 4) & 0x3f);
                *(ulong *)((long)local_230 + 0x88) =
                     *(ulong *)((long)local_230 + 0x88) | 1L << ((byte)(uVar111 >> 8) & 0x3f);
                *(ulong *)((long)local_230 + 0x90) =
                     *(ulong *)((long)local_230 + 0x90) | 1L << ((byte)uVar111 >> 1 & 0x3f);
                uVar37 = (uint)ppStack_210;
                if ((byte)ppStack_218 == '\0') {
                  uVar35 = OT::GDEF::get_glyph_props(pGStack_200,(uint)uVar71);
                  *(short *)((long)&p_Var52->__next + (long)phVar99 * 4 + 4) = (short)uVar35;
                  uVar37 = (uint)ppStack_210;
                }
              }
            }
            uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
            uVar36 = *(int *)&p_Var47[6].__prev - 1;
            if (uVar35 <= uVar36) {
              uVar36 = uVar35;
            }
            uVar111 = *(ushort *)(phVar123 + uVar132 * 8 + (ulong)uVar103 + 0x12);
            if (uVar111 != 0xffff) {
              pLVar42 = (Lookup<OT::HBGlyphID16> *)&_hb_Null_OT_Index;
              if (p_Stack_1e8 <=
                  (hb_buffer_t *)
                  ((long)p_Stack_1e8 + (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8) * 4)) {
                uVar35 = *(uint *)((long)p_Stack_1e8 +
                                  (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8) * 4);
                pLVar42 = (Lookup<OT::HBGlyphID16> *)
                          ((long)p_Stack_1e8 +
                          (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8
                                 | uVar35 << 0x18));
              }
              uVar40 = (ulong)uVar36;
              pLVar42 = Lookup<OT::HBGlyphID16>::get_value
                                  (pLVar42,*(uint *)((long)p_Var47[7].__prev + uVar40 * 0x14),
                                   (uint)uStack_208);
              uVar37 = (uint)ppStack_210;
              if (pLVar42 != (Lookup<OT::HBGlyphID16> *)0x0) {
                uVar111 = *(ushort *)pLVar42;
                uVar71 = uVar111 << 8 | uVar111 >> 8;
                p_Var52 = p_Var47[7].__prev;
                *(uint *)((long)p_Var52 + uVar40 * 0x14) = (uint)uVar71;
                *(ulong *)((long)local_230 + 0x80) =
                     *(ulong *)((long)local_230 + 0x80) | 1L << ((byte)(uVar71 >> 4) & 0x3f);
                *(ulong *)((long)local_230 + 0x88) =
                     *(ulong *)((long)local_230 + 0x88) | 1L << ((byte)(uVar111 >> 8) & 0x3f);
                *(ulong *)((long)local_230 + 0x90) =
                     *(ulong *)((long)local_230 + 0x90) | 1L << ((byte)uVar111 >> 1 & 0x3f);
                if ((byte)ppStack_218 == '\0') {
                  uVar35 = OT::GDEF::get_glyph_props(pGStack_200,(uint)uVar71);
                  *(short *)((long)p_Var52 + uVar40 * 0x14 + 0xc) = (short)uVar35;
                  uVar37 = (uint)ppStack_210;
                }
              }
            }
            bVar133 = ((byte)phVar123[uVar132 * 8 + (ulong)uVar103 + 0xe] & 0x80) != 0;
            uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
            uVar37 = uVar37 & 0xff;
            if (bVar133) {
              uVar37 = 1;
            }
            uVar36 = (uint)phStack_238;
            if (bVar133) {
              uVar36 = uVar35;
            }
            ppVar41 = (pthread_mutex_t *)(ulong)uVar36;
            phStack_238 = (hb_buffer_t *)CONCAT44(phStack_238._4_4_,uVar36);
          }
          if (uVar35 == *(uint *)&p_Var47[6].__prev) {
            return ppVar41;
          }
          if (*(char *)&p_Var47[5].__next == '\0') {
            return ppVar41;
          }
          uVar111 = (ushort)ppStack_228 << 8 | (ushort)ppStack_228 >> 8;
          ppVar41 = (pthread_mutex_t *)(ulong)uVar111;
          uVar60 = (uint)uVar111;
          if (((byte)phVar123[uVar132 * 8 + (ulong)uVar103 + 0xe] & 0x40) != 0) {
            uVar36 = *(uint *)&p_Var47[0xc].__next;
            ppVar41 = (pthread_mutex_t *)(ulong)uVar36;
            *(uint *)&p_Var47[0xc].__next = uVar36 - 1;
            if (0 < (int)uVar36) goto LAB_003e8c20;
          }
          if (*(char *)((long)&p_Var47[5].__next + 2) == '\0') goto LAB_003e8c18;
          p_Var128 = p_Var47[7].__next;
          p_Var52 = p_Var47[7].__prev;
          uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
          if ((p_Var128 == p_Var52) && (uVar36 == uVar35)) goto LAB_003e84a0;
          uVar36 = uVar36 + 1;
          if ((uVar36 == 0) || (uVar36 < *(uint *)&p_Var47[6].__next)) {
            if (p_Var128 != p_Var52) goto LAB_003e8be0;
LAB_003e8b84:
            uVar60 = (uint)uVar111;
            uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
            if (uVar35 + 1 <= *(int *)((long)&p_Var47[5].__next + 4) + 1U) goto LAB_003e8bd0;
            p_Var128 = p_Var47[8].__prev;
            p_Var47[7].__next = p_Var128;
            goto LAB_003e8ba5;
          }
          uVar60 = (uint)uVar111;
          ppVar41 = (pthread_mutex_t *)hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar36);
          if ((char)ppVar41 != '\0') {
            p_Var52 = p_Var47[7].__prev;
            p_Var128 = p_Var47[7].__next;
            if (p_Var128 == p_Var52) goto LAB_003e8b84;
            goto LAB_003e8be0;
          }
          if (*(char *)&p_Var47[5].__next == '\0') {
            return ppVar41;
          }
        } while( true );
      }
    }
    break;
  case 2:
    phVar123 = (hb_buffer_t *)((long)param_1 + 0xc);
    uStack_1a8 = uStack_1a8 & 0xffffff00;
    ppStack_1a0 = param_2;
    phStack_1c8 = phVar123;
    uStack_198._0_4_ = (uint)phVar123;
    uStack_198._4_4_ = (undefined4)((ulong)phVar123 >> 0x20);
    uVar35 = *(uint *)((long)&(param_1->__data).__list.__prev + 4);
    uVar36 = *(uint *)&(param_1->__data).__list.__next;
    auStack_190._0_8_ =
         (undefined1 *)
         ((long)&(param_1->__data).__nusers +
         (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18
                ));
    auStack_190._8_8_ =
         (hb_buffer_t *)
         ((long)&(param_1->__data).__nusers +
         (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 | uVar36 << 0x18
                ));
    uVar35 = *(uint *)((long)&(param_1->__data).__list.__next + 4);
    puVar100 = (undefined1 *)
               ((long)&(param_1->__data).__nusers +
               (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18));
    uStack_180._0_4_ = (uint)puVar100;
    uStack_180._4_4_ = (undefined4)((ulong)puVar100 >> 0x20);
    uStack_178 = 0;
    p_Var47 = (param_2->__data).__list.__prev;
    uStack_1b4 = *(uint *)&p_Var47[1].__next;
    if (*(uint *)&p_Var47[1].__next == 0xffffffff) {
      p_Var52 = p_Var47[7].__next;
      if (p_Var52 == (__pthread_internal_list *)0x0) {
        do {
          p_Var128 = p_Var47[6].__next;
          p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
          if (p_Var128 == (__pthread_internal_list *)0x0) goto LAB_003ea5ce;
          auStack_70[0] = 0;
          auStack_58 = (undefined1  [16])0x0;
          auStack_68 = (undefined1  [16])0x0;
          uStack_48 = 0;
          uStack_33 = 0;
          auStack_44 = (undefined1  [16])0x0;
          uStack_34 = 1;
          piVar49 = (int *)&_hb_NullPool;
          uStack_198 = phVar123;
          uStack_180 = puVar100;
          if (p_Var128[2].__prev != (__pthread_internal_list *)0x0) {
            piVar49 = (int *)(*(code *)p_Var128[2].__prev)(p_Var128,0x6d617870,p_Var128[2].__next);
            if (piVar49 == (int *)0x0) {
              piVar49 = (int *)&_hb_NullPool;
            }
          }
          p_Var52 = (__pthread_internal_list *)
                    hb_sanitize_context_t::sanitize_blob<OT::maxp>
                              ((hb_sanitize_context_t *)auStack_70,piVar49);
          hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)auStack_70);
          if (p_Var52 == (__pthread_internal_list *)0x0) {
            p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
            LOCK();
            bVar133 = p_Var47[7].__next == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[7].__next = (__pthread_internal_list *)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar133 = p_Var47[7].__next == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[7].__next = p_Var52;
            }
            UNLOCK();
          }
          phVar123 = uStack_198;
          puVar100 = uStack_180;
          if (bVar133) goto LAB_003ea5ce;
          if (((p_Var52 != (__pthread_internal_list *)0x0) &&
              (p_Var52 != (__pthread_internal_list *)&_hb_NullPool)) &&
             (*(int *)&p_Var52->__prev != 0)) {
            LOCK();
            *(int *)&p_Var52->__prev = *(int *)&p_Var52->__prev + -1;
            UNLOCK();
            if (*(int *)&p_Var52->__prev == 0) {
              *(undefined4 *)&p_Var52->__prev = 0xffff2153;
              ppVar41 = (pthread_mutex_t *)p_Var52->__next;
              if (ppVar41 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar41[1].__data,ppVar41);
                free(ppVar41);
                p_Var52->__next = (__pthread_internal_list *)0x0;
              }
              if (p_Var52[2].__next != (__pthread_internal_list *)0x0) {
                (*(code *)p_Var52[2].__next)(p_Var52[2].__prev);
              }
              free(p_Var52);
              phVar123 = uStack_198;
              puVar100 = uStack_180;
            }
          }
          p_Var52 = p_Var47[7].__next;
        } while (p_Var52 == (__pthread_internal_list *)0x0);
      }
LAB_003ea5ce:
      if (*(uint *)&p_Var52[1].__next < 6) {
        p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
      }
      else {
        p_Var52 = p_Var52[1].__prev;
      }
      uVar111 = *(ushort *)((long)&p_Var52->__prev + 4);
      uStack_1b4 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
      if (uVar111 == 0) {
        uStack_1b4 = 0;
      }
      *(uint *)&p_Var47[1].__next = uStack_1b4;
    }
    uVar35 = *(uint *)(local_220 + 0x14);
    uVar36 = *(uint *)(local_220 + 0x18);
    uVar36 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 | uVar36 << 0x18;
    uVar40 = (ulong)(ushort)(*(ushort *)
                              (local_220 +
                              (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                      (uVar35 & 0xff00) << 8 | uVar35 << 0x18) + 0xe) << 8 |
                            *(ushort *)
                             (local_220 +
                             (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                     (uVar35 & 0xff00) << 8 | uVar35 << 0x18) + 0xe) >> 8);
    if (((*(ushort *)(local_220 + uVar40 * 6 + (ulong)uVar36 + 0xe) & 0x20) != 0 ||
         *(short *)(local_220 + uVar40 * 6 + (ulong)uVar36 + 0xc) != 0) ||
       (((ppVar41 = *(pthread_mutex_t **)((long)local_230 + 0x98),
         (*(ulong *)((long)local_230 + 0x80) & (ulong)*(pthread_mutex_t **)((long)local_230 + 0x98))
         != 0 && (ppVar41 = (pthread_mutex_t *)local_230[4].__align,
                 (*(ulong *)((long)local_230 + 0x88) & (ulong)local_230[4].__align) != 0)) &&
        (ppVar41 = (pthread_mutex_t *)0x0,
        (*(ulong *)((long)local_230 + 0xa8) & *(ulong *)((long)local_230 + 0x90)) != 0)))) {
      p_Var47 = (local_230->__data).__list.__next;
      *(undefined2 *)((long)&p_Var47[5].__next + 2) = 1;
      *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
      *(undefined4 *)((long)&p_Var47[6].__prev + 4) = 0;
      p_Var47[7].__next = p_Var47[7].__prev;
      lVar75 = *(long *)&local_230[3].__data;
      if ((lVar75 == 0) || (*(uint *)(lVar75 + 4) < 2)) {
        phVar99 = (hb_buffer_t *)0x0;
      }
      else {
        phVar99 = *(hb_buffer_t **)(lVar75 + 8);
      }
      if (*(char *)&p_Var47[5].__next != '\0') {
        ppStack_218 = ppStack_1a0;
        puStack_1b0 = (undefined1 *)auStack_190._0_8_;
        phStack_1d8 = (hb_buffer_t *)auStack_190._8_8_;
        pGStack_200 = (GDEF *)puVar100;
        uVar37 = 0;
        uVar60 = 0;
        uVar36 = *(uint *)&p_Var47[6].__prev;
        uVar40 = 0;
        uVar35 = uStack_178;
        uVar105 = 0;
        if (phVar99 == (hb_buffer_t *)0x0) goto LAB_003e8e10;
        while( true ) {
          uVar60 = uVar105;
          if (uVar37 < uVar36) {
            uVar105 = *(uint *)((long)p_Var47[7].__prev + uVar40 * 0x14 + 8);
            phVar107 = phVar99 + 0xc;
            phVar129 = phVar99;
            do {
              phVar129 = phVar129 + -0xc;
              phVar99 = phVar107 + -8;
              phVar107 = phVar107 + -0xc;
            } while (uVar105 < *(uint *)phVar99);
            do {
              phVar99 = phVar129 + 0xc;
              phVar107 = phVar129 + 0x14;
              phVar129 = phVar99;
            } while (*(uint *)phVar107 < uVar105);
          }
          if ((*(uint *)phVar99 & *(uint *)((long)local_230 + 0xe0)) != 0) goto LAB_003e8e13;
          if (uVar37 == uVar36) break;
          if (*(char *)((long)&p_Var47[5].__next + 2) == '\0') {
            uVar60 = 0;
            goto LAB_003e966e;
          }
          p_Var128 = p_Var47[7].__next;
          p_Var52 = p_Var47[7].__prev;
          uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
          if ((p_Var128 == p_Var52) && (uVar36 == uVar37)) {
            uVar60 = 0;
            uVar36 = uVar37;
            goto LAB_003e9666;
          }
          uVar36 = uVar36 + 1;
          uStack_198 = phVar123;
          uStack_180 = puVar100;
          if ((uVar36 == 0) || (uVar36 < *(uint *)&p_Var47[6].__next)) {
            if (p_Var128 == p_Var52) {
LAB_003e8dd2:
              uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
              if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar36 + 1) {
                p_Var128 = p_Var47[8].__prev;
                p_Var47[7].__next = p_Var128;
                uVar60 = 0;
                goto LAB_003e961c;
              }
              uVar60 = 0;
              goto LAB_003e9639;
            }
LAB_003e8db0:
            uVar60 = 0;
            phVar123 = uStack_198;
            puVar100 = uStack_180;
            goto LAB_003e9640;
          }
          uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar36);
          if ((char)uVar44 != '\0') {
            p_Var52 = p_Var47[7].__prev;
            p_Var128 = p_Var47[7].__next;
            if (p_Var128 == p_Var52) goto LAB_003e8dd2;
            goto LAB_003e8db0;
          }
          uVar60 = 0;
          cVar34 = *(char *)&p_Var47[5].__next;
          phVar123 = uStack_198;
          puVar100 = uStack_180;
          while( true ) {
            if (cVar34 == '\0') goto LAB_003e96f0;
            uVar37 = *(uint *)((long)&p_Var47[5].__next + 4);
            uVar36 = *(uint *)&p_Var47[6].__prev;
            uVar40 = (ulong)uVar37;
            uVar105 = uVar60;
            if (phVar99 != (hb_buffer_t *)0x0) break;
LAB_003e8e10:
            phVar99 = (hb_buffer_t *)0x0;
LAB_003e8e13:
            if (uVar37 < uVar36) {
              uVar37 = *(uint *)((long)p_Var47[7].__prev + uVar40 * 0x14);
              if ((ulong)uVar37 == 0xffff) {
                uVar36 = 2;
              }
              else {
                uVar36 = 1;
                if ((*(ulong *)((long)local_230 + 0x98) >> ((ulong)(uVar37 >> 4) & 0x3f) & 1) != 0)
                {
                  if (((ulong)local_230[4].__align >> ((ulong)uVar37 & 0x3f) & 1) != 0) {
                    if ((*(ulong *)((long)local_230 + 0xa8) >> ((ulong)(uVar37 >> 9) & 0x3f) & 1) !=
                        0) {
                      uVar105 = *(uint *)(local_220 + 0x10);
                      uStack_198 = phVar123;
                      uStack_180 = puVar100;
                      pLVar43 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                          ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                           (local_220 +
                                           (ulong)(uVar105 >> 0x18 | (uVar105 & 0xff0000) >> 8 |
                                                   (uVar105 & 0xff00) << 8 | uVar105 << 0x18) + 0xc)
                                           ,uVar37,uStack_1b4);
                      phVar123 = uStack_198;
                      puVar100 = uStack_180;
                      if (pLVar43 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                        uVar36 = (uint)(ushort)(*(ushort *)pLVar43 << 8 | *(ushort *)pLVar43 >> 8);
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar36 = 0;
            }
            phVar107 = local_220;
            phStack_1f0 = phVar99;
            uVar37 = *(uint *)phStack_1c8;
            uVar77 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                     uVar37 << 0x18;
            uVar105 = uVar36;
            if (uVar77 <= uVar36) {
              uVar105 = 1;
            }
            uVar98 = *(uint *)(local_220 + 0x14);
            uVar103 = *(uint *)(local_220 + 0x18);
            lVar75 = (ulong)(uVar98 >> 0x18 | (uVar98 & 0xff0000) >> 8 | (uVar98 & 0xff00) << 8 |
                            uVar98 << 0x18) + 0xc;
            uVar98 = uVar103 >> 0x18 | (uVar103 & 0xff0000) >> 8 | (uVar103 & 0xff00) << 8 |
                     uVar103 << 0x18;
            lVar79 = (ulong)uVar98 + 0xc;
            uVar40 = (ulong)(ushort)(*(ushort *)
                                      (local_220 + (ulong)(uVar105 + uVar77 * uVar60) * 2 + lVar75)
                                     << 8 | *(ushort *)
                                             (local_220 +
                                             (ulong)(uVar105 + uVar77 * uVar60) * 2 + lVar75) >> 8);
            uVar111 = *(ushort *)(local_220 + uVar40 * 6 + lVar79);
            uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)uVar111);
            phStack_1c0 = local_220 + uVar40 * 6 + lVar79 + 2;
            uVar71 = *(ushort *)(local_220 + uVar40 * 6 + (ulong)uVar98 + 0xe);
            if ((uVar71 & 0x20) == 0) {
              if ((uVar60 != 0) && (((uVar71 & 0x40) == 0 || (uVar111 != 0)))) {
                if (uVar77 <= uVar36) {
                  uVar36 = 1;
                }
                uVar132 = (ulong)(ushort)(*(ushort *)(local_220 + (ulong)uVar36 * 2 + lVar75) << 8 |
                                         *(ushort *)(local_220 + (ulong)uVar36 * 2 + lVar75) >> 8);
                if ((((*(ushort *)(local_220 + uVar132 * 6 + (ulong)uVar98 + 0xe) & 0x20) != 0) ||
                    (uVar111 != *(ushort *)(local_220 + uVar132 * 6 + lVar79))) ||
                   (((*(ushort *)(local_220 + uVar132 * 6 + (ulong)uVar98 + 0xe) ^ uVar71) & 0x40)
                    != 0)) goto LAB_003e8f80;
              }
              if (((byte)local_220[(ulong)(ushort)(*(ushort *)
                                                    (local_220 +
                                                    (ulong)((uint)(uVar37 == 0) + uVar77 * uVar60) *
                                                    2 + lVar75) << 8 |
                                                  *(ushort *)
                                                   (local_220 +
                                                   (ulong)((uint)(uVar37 == 0) + uVar77 * uVar60) *
                                                   2 + lVar75) >> 8) * 6 + (ulong)uVar98 + 0xe] &
                  0x20) != 0) goto LAB_003e8f80;
            }
            else {
LAB_003e8f80:
              uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
              uVar37 = uVar36;
              if (*(char *)((long)&p_Var47[5].__next + 2) != '\0') {
                uVar37 = *(uint *)((long)&p_Var47[6].__prev + 4);
              }
              if (uVar37 != 0) {
                if (uVar36 < *(uint *)&p_Var47[6].__prev) {
                  uStack_198 = phVar123;
                  uStack_180 = puVar100;
                  hb_buffer_t::_set_glyph_flags
                            ((hb_buffer_t *)p_Var47,3,uVar37 - 1,uVar36 + 1,'\x01');
                  uVar71 = *(ushort *)phStack_1c0;
                  phVar123 = uStack_198;
                  puVar100 = uStack_180;
                }
              }
            }
            uStack_198 = phVar123;
            uStack_180 = puVar100;
            if ((uVar71 & 0x80) == 0) {
              if ((uVar71 & 0x20) != 0) goto LAB_003e900f;
LAB_003e9570:
              phVar123 = uStack_198;
              puVar100 = uStack_180;
            }
            else {
              if (uVar35 == 0) {
                iVar39 = *(int *)((long)&p_Var47[6].__prev + 4);
                uVar36 = 0;
              }
              else {
                iVar39 = *(int *)((long)&p_Var47[6].__prev + 4);
                uVar36 = uVar35 - (*(int *)((long)&uStack_174 + (ulong)(uVar35 - 1 & 0x3f) * 4) ==
                                  iVar39);
              }
              uVar35 = uVar36 + 1;
              *(int *)((long)&uStack_174 + (ulong)(uVar36 & 0x3f) * 4) = iVar39;
              if ((uVar71 & 0x20) == 0) goto LAB_003e9570;
LAB_003e900f:
              if (uVar35 == 0) {
                uVar35 = 0;
              }
              else {
                if (*(uint *)&p_Var47[6].__prev <= *(uint *)((long)&p_Var47[5].__next + 4))
                goto LAB_003e9570;
                uStack_1dc = *(uint *)((long)&p_Var47[6].__prev + 4);
                phVar123 = (hb_buffer_t *)
                           (puStack_1b0 +
                           (ulong)(ushort)(*(ushort *)(phVar107 + uVar40 * 6 + (ulong)uVar98 + 0x10)
                                           << 8 | *(ushort *)
                                                   (phVar107 + uVar40 * 6 + (ulong)uVar98 + 0x10) >>
                                                  8) * 4);
                ppStack_210 = (pthread_mutex_t *)((ulong)ppStack_210 & 0xffffffff00000000);
                ppStack_228 = (pthread_mutex_t *)CONCAT44(ppStack_228._4_4_,uVar35);
                ppVar41 = ppStack_218;
                phVar99 = phStack_1d8;
                do {
                  while( true ) {
                    uVar36 = (uint)ppStack_228 - 1;
                    if ((uint)ppStack_228 == 0) {
                      uVar35 = 0;
                      goto LAB_003e957d;
                    }
                    phStack_238 = phVar123;
                    ppStack_228 = (pthread_mutex_t *)CONCAT44(ppStack_228._4_4_,uVar36);
                    uVar36 = *(uint *)((long)&uStack_174 + (ulong)(uVar36 & 0x3f) * 4);
                    uVar44 = hb_buffer_t::move_to((hb_buffer_t *)p_Var47,uVar36);
                    if ((char)uVar44 == '\0') goto LAB_003e9570;
                    ppStack_1f8 = (pthread_mutex_t *)CONCAT44(ppStack_1f8._4_4_,uVar36);
                    if ((hb_buffer_t *)(ulong)*(uint *)((long)ppVar41 + 0x40) <
                        phStack_238 + (4 - *(long *)((long)ppVar41 + 0x30))) goto LAB_003e957d;
                    uVar36 = *(uint *)phStack_238;
                    uVar37 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8;
                    uVar60 = uVar37 | uVar36 << 0x18;
                    uVar40 = (ulong)((uVar37 | uVar36 << 0x18 & 0x3fffffff) +
                                     *(int *)((long)p_Var47[7].__prev +
                                             (ulong)*(uint *)((long)&p_Var47[5].__next + 4) * 0x14)
                                    + ((int)(uVar60 * 4) >> 0x1f & 0xc0000000U));
                    if ((hb_buffer_t *)(ulong)*(uint *)((long)ppVar41 + 0x40) <
                        phVar99 + (uVar40 * 2 - *(long *)((long)ppVar41 + 0x30)) + 2)
                    goto LAB_003e957d;
                    uVar36 = (uint)ppStack_210 +
                             (ushort)(*(ushort *)(phVar99 + uVar40 * 2) << 8 |
                                     *(ushort *)(phVar99 + uVar40 * 2) >> 8);
                    ppStack_210 = (pthread_mutex_t *)CONCAT44(ppStack_210._4_4_,uVar36);
                    if (uVar60 < 0x40000000) break;
                    if ((undefined1 *)(ulong)*(uint *)((long)ppVar41 + 0x40) <
                        pGStack_200 + ((ulong)uVar36 * 2 - *(long *)((long)ppVar41 + 0x30)) + 2)
                    goto LAB_003e957d;
                    p_Stack_1e8 = (__pthread_internal_list *)(ulong)uVar60;
                    uVar111 = *(ushort *)(pGStack_200 + (ulong)uVar36 * 2);
                    uVar36 = *(int *)((long)&p_Var47[6].__prev + 4) + 1;
                    if ((uVar36 != 0) && (*(uint *)&p_Var47[6].__next <= uVar36)) {
                      uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar36);
                      if ((char)uVar44 == '\0') goto LAB_003e9570;
                    }
                    p_Var52 = p_Var47[7].__prev;
                    p_Var128 = p_Var47[7].__next;
                    p_Var116 = p_Var128;
                    if (p_Var128 == p_Var52) {
                      uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
                      if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar36 + 1) {
                        p_Var116 = p_Var47[8].__prev;
                        p_Var47[7].__next = p_Var116;
                        if ((ulong)uVar36 != 0) {
                          memcpy(p_Var116,p_Var52,(ulong)uVar36 * 0x14);
                          p_Var116 = p_Var47[7].__next;
                          p_Var52 = p_Var47[7].__prev;
                          goto LAB_003e91c0;
                        }
                      }
                      p_Var52 = p_Var128;
                    }
                    else {
                    }
LAB_003e91c0:
                    uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
                    uVar37 = *(uint *)((long)&p_Var47[6].__prev + 4);
                    uVar40 = (ulong)uVar37;
                    uVar60 = uVar37 - 1;
                    if (uVar37 == 0) {
                      uVar60 = 0;
                    }
                    bVar133 = uVar36 < *(uint *)&p_Var47[6].__prev;
                    if (bVar133) {
                      uVar60 = uVar36;
                    }
                    if (!bVar133) {
                      p_Var52 = p_Var116;
                    }
                    puVar109 = (undefined8 *)((long)p_Var52 + (ulong)uVar60 * 0x14);
                    uVar44 = puVar109[1];
                    puVar2 = (undefined8 *)((long)p_Var116 + uVar40 * 0x14);
                    *puVar2 = *puVar109;
                    puVar2[1] = uVar44;
                    *(undefined4 *)((long)p_Var116 + uVar40 * 0x14 + 0x10) =
                         *(undefined4 *)((long)p_Var52 + (ulong)uVar60 * 0x14 + 0x10);
                    *(uint *)((long)p_Var116 + uVar40 * 0x14) =
                         (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
                    iVar39 = *(int *)((long)&p_Var47[6].__prev + 4);
                    uVar37 = *(int *)((long)&p_Var47[5].__next + 4) + 1;
                    *(uint *)((long)&p_Var47[5].__next + 4) = uVar37;
                    uVar36 = iVar39 + 1;
                    *(uint *)((long)&p_Var47[6].__prev + 4) = uVar36;
                    uStack_208 = CONCAT44(uStack_208._4_4_,
                                          *(undefined4 *)
                                           ((long)&uStack_174 + (ulong)(uVar35 - 1 & 0x3f) * 4));
                    uVar60 = uVar35;
                    if ((uint)ppStack_228 < uVar35 - 1) {
                      do {
                        uVar35 = uVar60 - 1;
                        uVar105 = *(uint *)((long)&uStack_174 + (ulong)(uVar35 & 0x3f) * 4);
                        if (*(char *)((long)&p_Var47[5].__next + 2) == '\0') {
                          *(uint *)((long)&p_Var47[5].__next + 4) = uVar105;
                        }
                        else {
                          phVar123 = uStack_198;
                          puVar100 = uStack_180;
                          if (*(char *)&p_Var47[5].__next == '\0') goto LAB_003e9589;
                          uVar77 = uVar36 - uVar105;
                          if (uVar36 < uVar105) {
                            if (*(uint *)&p_Var47[6].__next <= uVar105) {
                              uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar105);
                              phVar123 = uStack_198;
                              puVar100 = uStack_180;
                              if ((char)uVar44 == '\0') goto LAB_003e9589;
                            }
                            uVar36 = uVar105 - uVar36;
                            p_Var52 = p_Var47[7].__prev;
                            p_Var128 = p_Var47[7].__next;
                            p_Var116 = p_Var128;
                            if (p_Var128 == p_Var52) {
                              uVar37 = *(uint *)((long)&p_Var47[6].__prev + 4);
                              if (*(int *)((long)&p_Var47[5].__next + 4) + uVar36 < uVar37 + uVar36)
                              {
                                p_Var116 = p_Var47[8].__prev;
                                p_Var47[7].__next = p_Var116;
                                if ((ulong)uVar37 == 0) {
                                  p_Var52 = p_Var128;
                                }
                                else {
                                  memcpy(p_Var116,p_Var52,(ulong)uVar37 * 0x14);
                                  p_Var116 = p_Var47[7].__next;
                                  p_Var52 = p_Var47[7].__prev;
                                }
                              }
                              else {
                                p_Var52 = p_Var128;
                              }
                            }
                            memmove((void *)((long)p_Var116 +
                                            (ulong)*(uint *)((long)&p_Var47[6].__prev + 4) * 0x14),
                                    (void *)((long)p_Var52 +
                                            (ulong)*(uint *)((long)&p_Var47[5].__next + 4) * 0x14),
                                    (ulong)uVar36 * 0x14);
                            uVar105 = *(int *)((long)&p_Var47[5].__next + 4) + uVar36;
                            *(uint *)((long)&p_Var47[5].__next + 4) = uVar105;
                            piVar49 = (int *)((long)&p_Var47[6].__prev + 4);
                            *piVar49 = *piVar49 + uVar36;
                          }
                          else if (uVar36 < uVar105 || uVar77 == 0) {
                            uVar105 = uVar37;
                          }
                          else {
                            uVar105 = uVar77 - uVar37;
                            if (uVar37 <= uVar77 && uVar105 != 0) {
                              iVar39 = *(int *)&p_Var47[6].__prev;
                              uVar36 = iVar39 + uVar105;
                              if ((uVar36 != 0) && (*(uint *)&p_Var47[6].__next <= uVar36)) {
                                uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar36);
                                phVar123 = uStack_198;
                                puVar100 = uStack_180;
                                if ((char)uVar44 == '\0') goto LAB_003e9589;
                                uVar37 = *(uint *)((long)&p_Var47[5].__next + 4);
                                iVar39 = *(int *)&p_Var47[6].__prev;
                              }
                              pvVar53 = (void *)((ulong)uVar37 * 0x14 + (long)p_Var47[7].__prev);
                              memmove((void *)((long)pvVar53 + (ulong)uVar105 * 0x14),pvVar53,
                                      (ulong)(iVar39 - uVar37) * 0x14);
                              uVar37 = *(int *)((long)&p_Var47[5].__next + 4) + uVar105;
                              uVar36 = *(uint *)&p_Var47[6].__prev;
                              if ((uVar36 <= uVar37 && uVar37 - uVar36 != 0) &&
                                 (uVar98 = (uVar37 - uVar36) * 0x14, uVar98 != 0)) {
                                memset((void *)((ulong)uVar36 * 0x14 + (long)p_Var47[7].__prev),0,
                                       (ulong)uVar98);
                                uVar36 = *(uint *)&p_Var47[6].__prev;
                                uVar37 = *(int *)((long)&p_Var47[5].__next + 4) + uVar105;
                              }
                              *(uint *)&p_Var47[6].__prev = uVar36 + uVar105;
                              uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
                            }
                            *(uint *)((long)&p_Var47[5].__next + 4) = uVar37 - uVar77;
                            *(uint *)((long)&p_Var47[6].__prev + 4) = uVar36 - uVar77;
                            memmove((void *)((ulong)(uVar37 - uVar77) * 0x14 +
                                            (long)p_Var47[7].__prev),
                                    (void *)((ulong)(uVar36 - uVar77) * 0x14 +
                                            (long)p_Var47[7].__next),(ulong)uVar77 * 0x14);
                            uVar105 = *(uint *)((long)&p_Var47[5].__next + 4);
                          }
                        }
                        puVar130 = (ushort *)
                                   ((long)p_Var47[7].__prev + (ulong)uVar105 * 0x14 + 0x10);
                        *puVar130 = *puVar130 | 0x20;
                        uVar36 = *(int *)((long)&p_Var47[6].__prev + 4) + 1;
                        if ((uVar36 != 0) && (*(uint *)&p_Var47[6].__next <= uVar36)) {
                          uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar36);
                          phVar123 = uStack_198;
                          puVar100 = uStack_180;
                          if ((char)uVar44 == '\0') goto LAB_003e9589;
                        }
                        p_Var52 = p_Var47[7].__prev;
                        p_Var128 = p_Var47[7].__next;
                        if (p_Var128 == p_Var52) {
                          uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
                          if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar35 + 1) {
                            p_Var116 = p_Var47[8].__prev;
                            p_Var47[7].__next = p_Var116;
                            if ((ulong)uVar35 == 0) {
                              p_Var52 = p_Var128;
                              p_Var128 = p_Var116;
                            }
                            else {
                              memcpy(p_Var116,p_Var52,(ulong)uVar35 * 0x14);
                              p_Var52 = p_Var47[7].__prev;
                              p_Var128 = p_Var47[7].__next;
                            }
                          }
                          else {
                            p_Var52 = p_Var128;
                          }
                        }
                        uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
                        uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
                        uVar40 = (ulong)uVar36;
                        uVar37 = uVar36 - 1;
                        if (uVar36 == 0) {
                          uVar37 = 0;
                        }
                        bVar133 = uVar35 < *(uint *)&p_Var47[6].__prev;
                        if (bVar133) {
                          uVar37 = uVar35;
                        }
                        if (!bVar133) {
                          p_Var52 = p_Var128;
                        }
                        puVar109 = (undefined8 *)((long)p_Var52 + (ulong)uVar37 * 0x14);
                        uVar44 = puVar109[1];
                        puVar2 = (undefined8 *)((long)p_Var128 + uVar40 * 0x14);
                        *puVar2 = *puVar109;
                        puVar2[1] = uVar44;
                        *(undefined4 *)((long)p_Var128 + uVar40 * 0x14 + 0x10) =
                             *(undefined4 *)((long)p_Var52 + (ulong)uVar37 * 0x14 + 0x10);
                        *(undefined4 *)((long)p_Var128 + uVar40 * 0x14) = 0xffff;
                        iVar39 = *(int *)((long)&p_Var47[6].__prev + 4);
                        uVar37 = *(int *)((long)&p_Var47[5].__next + 4) + 1;
                        *(uint *)((long)&p_Var47[5].__next + 4) = uVar37;
                        uVar36 = iVar39 + 1;
                        *(uint *)((long)&p_Var47[6].__prev + 4) = uVar36;
                        uVar35 = uVar60 - 1;
                        uVar105 = uVar60 - 2;
                        uVar60 = uVar35;
                      } while ((uint)ppStack_228 < uVar105);
                    }
                    uVar44 = hb_buffer_t::move_to((hb_buffer_t *)p_Var47,(uint)uStack_208 + 1);
                    phVar123 = uStack_198;
                    puVar100 = uStack_180;
                    if ((char)uVar44 == '\0') goto LAB_003e9589;
                    hb_buffer_t::merge_out_clusters
                              ((hb_buffer_t *)p_Var47,(uint)ppStack_1f8,
                               *(uint *)((long)&p_Var47[6].__prev + 4));
                    phVar123 = phStack_238 + 4;
                    ppVar41 = ppStack_218;
                    phVar99 = phStack_1d8;
                    if ((int)p_Stack_1e8 < 0) goto LAB_003e957d;
                  }
                  phVar123 = phStack_238 + 4;
                } while (-1 < (int)uVar60);
LAB_003e957d:
                hb_buffer_t::move_to((hb_buffer_t *)p_Var47,uStack_1dc);
                phVar123 = uStack_198;
                puVar100 = uStack_180;
              }
            }
LAB_003e9589:
            phVar99 = phStack_1f0;
            uVar37 = *(uint *)((long)&p_Var47[5].__next + 4);
            if ((uVar37 == *(uint *)&p_Var47[6].__prev) || (*(char *)&p_Var47[5].__next == '\0'))
            goto LAB_003e96f0;
            uVar60 = (uint)(ushort)((ushort)uStack_1d0 << 8 | (ushort)uStack_1d0 >> 8);
            uStack_198 = phVar123;
            uStack_180 = puVar100;
            if ((((byte)*phStack_1c0 & 0x40) == 0) ||
               (iVar39 = *(int *)&p_Var47[0xc].__next, *(int *)&p_Var47[0xc].__next = iVar39 + -1,
               iVar39 < 1)) {
              if (*(char *)((long)&p_Var47[5].__next + 2) != '\0') {
                p_Var128 = p_Var47[7].__next;
                p_Var52 = p_Var47[7].__prev;
                uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
                if ((p_Var128 == p_Var52) && (uVar36 == uVar37)) {
                  uVar36 = uVar37;
                }
                else {
                  uVar36 = uVar36 + 1;
                  if ((uVar36 == 0) || (uVar36 < *(uint *)&p_Var47[6].__next)) {
                    if (p_Var128 == p_Var52) {
LAB_003e9601:
                      uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
                      if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar36 + 1) {
                        p_Var128 = p_Var47[8].__prev;
                        p_Var47[7].__next = p_Var128;
LAB_003e961c:
                        phVar123 = uStack_198;
                        puVar100 = uStack_180;
                        if (uVar36 != 0) {
                          memcpy(p_Var128,p_Var52,(ulong)uVar36 * 0x14);
                          p_Var52 = p_Var47[7].__prev;
                          p_Var128 = p_Var47[7].__next;
                          phVar123 = uStack_198;
                          puVar100 = uStack_180;
                        }
                      }
                      else {
LAB_003e9639:
                        p_Var128 = p_Var52;
                        phVar123 = uStack_198;
                        puVar100 = uStack_180;
                      }
                    }
                  }
                  else {
                    uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar36);
                    if ((char)uVar44 == '\0') goto LAB_003e9674;
                    p_Var52 = p_Var47[7].__prev;
                    p_Var128 = p_Var47[7].__next;
                    phVar123 = uStack_198;
                    puVar100 = uStack_180;
                    if (p_Var128 == p_Var52) goto LAB_003e9601;
                  }
LAB_003e9640:
                  uVar40 = (ulong)*(uint *)((long)&p_Var47[5].__next + 4);
                  uVar132 = (ulong)*(uint *)((long)&p_Var47[6].__prev + 4);
                  *(undefined4 *)((long)p_Var128 + uVar132 * 0x14 + 0x10) =
                       *(undefined4 *)((long)p_Var52 + uVar40 * 0x14 + 0x10);
                  puVar109 = (undefined8 *)((long)p_Var52 + uVar40 * 0x14);
                  uVar44 = puVar109[1];
                  puVar2 = (undefined8 *)((long)p_Var128 + uVar132 * 0x14);
                  *puVar2 = *puVar109;
                  puVar2[1] = uVar44;
                  uVar37 = *(uint *)((long)&p_Var47[5].__next + 4);
                  uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
                }
LAB_003e9666:
                *(uint *)((long)&p_Var47[6].__prev + 4) = uVar36 + 1;
              }
LAB_003e966e:
              *(uint *)((long)&p_Var47[5].__next + 4) = uVar37 + 1;
              uStack_198 = phVar123;
              uStack_180 = puVar100;
            }
LAB_003e9674:
            cVar34 = *(char *)&p_Var47[5].__next;
            phVar123 = uStack_198;
            puVar100 = uStack_180;
          }
        }
      }
LAB_003e96f0:
      uStack_198 = phVar123;
      uStack_180 = puVar100;
      ppVar41 = (pthread_mutex_t *)hb_buffer_t::sync((hb_buffer_t *)p_Var47);
    }
    break;
  case 3:
    break;
  case 4:
    phStack_238 = *(hb_buffer_t **)((long)param_2 + 0x70);
    bVar133 = *(short *)phStack_238 == 0x100;
    sVar10 = *(short *)(phStack_238 + 4);
    p_Var47 = (param_2->__data).__list.__prev;
    uVar35 = *(uint *)&p_Var47[1].__next;
    ppStack_228._0_1_ = bVar133;
    if (uVar35 == 0xffffffff) {
      p_Var52 = p_Var47[7].__next;
      if (p_Var52 == (__pthread_internal_list *)0x0) {
        do {
          p_Var128 = p_Var47[6].__next;
          p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
          if (p_Var128 == (__pthread_internal_list *)0x0) goto LAB_003ea638;
          uStack_1a8 = 0;
          auStack_190 = (undefined1  [16])0x0;
          ppStack_1a0 = (pthread_mutex_t *)0x0;
          uStack_198._0_4_ = 0;
          uStack_198._4_4_ = 0;
          uStack_180._0_4_ = (uint)uStack_180 & 0xffffff00;
          uStack_16b = 0;
          uStack_180._4_4_ = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          uStack_16c = 1;
          piVar49 = (int *)&_hb_NullPool;
          if ((p_Var128[2].__prev != (__pthread_internal_list *)0x0) &&
             (piVar49 = (int *)(*(code *)p_Var128[2].__prev)(p_Var128,0x6d617870,p_Var128[2].__next)
             , piVar49 == (int *)0x0)) {
            piVar49 = (int *)&_hb_NullPool;
          }
          p_Var52 = (__pthread_internal_list *)
                    hb_sanitize_context_t::sanitize_blob<OT::maxp>
                              ((hb_sanitize_context_t *)&uStack_1a8,piVar49);
          hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&uStack_1a8);
          if (p_Var52 == (__pthread_internal_list *)0x0) {
            p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
            LOCK();
            bVar133 = p_Var47[7].__next == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[7].__next = (__pthread_internal_list *)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar133 = p_Var47[7].__next == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[7].__next = p_Var52;
            }
            UNLOCK();
          }
          if (bVar133) goto LAB_003ea638;
          if (((p_Var52 != (__pthread_internal_list *)0x0) &&
              (p_Var52 != (__pthread_internal_list *)&_hb_NullPool)) &&
             (*(int *)&p_Var52->__prev != 0)) {
            LOCK();
            *(int *)&p_Var52->__prev = *(int *)&p_Var52->__prev + -1;
            UNLOCK();
            if (*(int *)&p_Var52->__prev == 0) {
              *(undefined4 *)&p_Var52->__prev = 0xffff2153;
              ppVar41 = (pthread_mutex_t *)p_Var52->__next;
              if (ppVar41 != (pthread_mutex_t *)0x0) {
                ppStack_210 = ppVar41;
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar41[1].__data,ppVar41);
                free(ppStack_210);
                p_Var52->__next = (__pthread_internal_list *)0x0;
              }
              if (p_Var52[2].__next != (__pthread_internal_list *)0x0) {
                (*(code *)p_Var52[2].__next)(p_Var52[2].__prev);
              }
              free(p_Var52);
            }
          }
          p_Var52 = p_Var47[7].__next;
        } while (p_Var52 == (__pthread_internal_list *)0x0);
      }
LAB_003ea638:
      if (*(uint *)&p_Var52[1].__next < 6) {
        p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
      }
      else {
        p_Var52 = p_Var52[1].__prev;
      }
      uVar111 = *(ushort *)((long)&p_Var52->__prev + 4);
      uVar35 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
      if (uVar111 == 0) {
        uVar35 = 0;
      }
      *(uint *)&p_Var47[1].__next = uVar35;
    }
    ppVar41 = (pthread_mutex_t *)(local_230->__data).__list.__next;
    lVar75 = *(long *)&local_230[3].__data;
    uVar36 = *(uint *)((long)ppVar41 + 0x60);
    if ((lVar75 == 0) || (*(uint *)(lVar75 + 4) < 2)) {
      puVar65 = (uint *)0x0;
    }
    else {
      puVar65 = *(uint **)(lVar75 + 8);
    }
    if ((ulong)uVar36 != 0) {
      local_220 = local_220 + 0xc;
      ppStack_228 = (pthread_mutex_t *)CONCAT71(ppStack_228._1_7_,(byte)ppStack_228 & sVar10 != 0);
      lVar75 = *(long *)((long)ppVar41 + 0x70);
      uVar40 = 0;
      do {
        if (puVar65 == (uint *)0x0) {
          puVar65 = (uint *)0x0;
LAB_003e7a82:
          pLVar42 = Lookup<OT::HBGlyphID16>::get_value
                              ((Lookup<OT::HBGlyphID16> *)local_220,
                               *(uint *)(lVar75 + uVar40 * 0x14),uVar35);
          ppVar41 = (pthread_mutex_t *)0x0;
          if (pLVar42 != (Lookup<OT::HBGlyphID16> *)0x0) {
            uVar111 = *(ushort *)pLVar42;
            uVar71 = uVar111 << 8 | uVar111 >> 8;
            *(uint *)(lVar75 + uVar40 * 0x14) = (uint)uVar71;
            *(ulong *)((long)local_230 + 0x80) =
                 *(ulong *)((long)local_230 + 0x80) | 1L << ((byte)(uVar71 >> 4) & 0x3f);
            *(ulong *)((long)local_230 + 0x88) =
                 *(ulong *)((long)local_230 + 0x88) | 1L << ((byte)(uVar111 >> 8) & 0x3f);
            ppVar41 = (pthread_mutex_t *)(1L << ((byte)uVar111 >> 1 & 0x3f));
            *(ulong *)((long)local_230 + 0x90) = *(ulong *)((long)local_230 + 0x90) | (ulong)ppVar41
            ;
            if ((byte)ppStack_228 != '\0') {
              uVar37 = OT::GDEF::get_glyph_props((GDEF *)phStack_238,(uint)uVar71);
              ppVar41 = (pthread_mutex_t *)(ulong)uVar37;
              *(short *)(lVar75 + 0xc + uVar40 * 0x14) = (short)uVar37;
            }
          }
        }
        else {
          uVar37 = *(uint *)(lVar75 + 8 + uVar40 * 0x14);
          puVar62 = puVar65 + 3;
          puVar72 = puVar65;
          do {
            puVar72 = puVar72 + -3;
            puVar65 = puVar62 + -2;
            puVar62 = puVar62 + -3;
          } while (uVar37 < *puVar65);
          do {
            puVar65 = puVar72 + 3;
            puVar62 = puVar72 + 5;
            puVar72 = puVar65;
          } while (*puVar62 < uVar37);
          ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)local_230 + 0xe0);
          if ((*puVar65 & *(uint *)((long)local_230 + 0xe0)) != 0) goto LAB_003e7a82;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar36);
    }
    break;
  case 5:
    uVar35 = *(uint *)((long)&(param_1->__data).__list.__prev + 4);
    p_Var47 = (param_2->__data).__list.__prev;
    uStack_1dc = *(uint *)&p_Var47[1].__next;
    if (uStack_1dc == 0xffffffff) {
      p_Var52 = p_Var47[7].__next;
      if (p_Var52 == (__pthread_internal_list *)0x0) {
        uStack_1dc = 0xffffffff;
        do {
          p_Var128 = p_Var47[6].__next;
          p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
          if (p_Var128 == (__pthread_internal_list *)0x0) goto LAB_003ea65b;
          uStack_1a8 = 0;
          auStack_190 = (undefined1  [16])0x0;
          ppStack_1a0 = (pthread_mutex_t *)0x0;
          uStack_198._0_4_ = 0;
          uStack_198._4_4_ = 0;
          uStack_180._0_4_ = (uint)uStack_180 & 0xffffff00;
          uStack_16b = 0;
          uStack_180._4_4_ = 0;
          uStack_178 = 0;
          uStack_174 = 0;
          uStack_16c = 1;
          piVar49 = (int *)&_hb_NullPool;
          if ((p_Var128[2].__prev != (__pthread_internal_list *)0x0) &&
             (piVar49 = (int *)(*(code *)p_Var128[2].__prev)(p_Var128,0x6d617870,p_Var128[2].__next)
             , piVar49 == (int *)0x0)) {
            piVar49 = (int *)&_hb_NullPool;
          }
          p_Var52 = (__pthread_internal_list *)
                    hb_sanitize_context_t::sanitize_blob<OT::maxp>
                              ((hb_sanitize_context_t *)&uStack_1a8,piVar49);
          hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&uStack_1a8);
          if (p_Var52 == (__pthread_internal_list *)0x0) {
            p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
            LOCK();
            bVar133 = p_Var47[7].__next == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[7].__next = (__pthread_internal_list *)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar133 = p_Var47[7].__next == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[7].__next = p_Var52;
            }
            UNLOCK();
          }
          if (bVar133) goto LAB_003ea65b;
          if (((p_Var52 != (__pthread_internal_list *)0x0) &&
              (p_Var52 != (__pthread_internal_list *)&_hb_NullPool)) &&
             (*(int *)&p_Var52->__prev != 0)) {
            LOCK();
            *(int *)&p_Var52->__prev = *(int *)&p_Var52->__prev + -1;
            UNLOCK();
            if (*(int *)&p_Var52->__prev == 0) {
              *(undefined4 *)&p_Var52->__prev = 0xffff2153;
              ppVar41 = (pthread_mutex_t *)p_Var52->__next;
              if (ppVar41 != (pthread_mutex_t *)0x0) {
                ppStack_228 = ppVar41;
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar41[1].__data,ppVar41);
                free(ppStack_228);
                p_Var52->__next = (__pthread_internal_list *)0x0;
              }
              if (p_Var52[2].__next != (__pthread_internal_list *)0x0) {
                (*(code *)p_Var52[2].__next)(p_Var52[2].__prev);
              }
              free(p_Var52);
            }
          }
          p_Var52 = p_Var47[7].__next;
        } while (p_Var52 == (__pthread_internal_list *)0x0);
      }
LAB_003ea65b:
      if (*(uint *)&p_Var52[1].__next < 6) {
        p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
      }
      else {
        p_Var52 = p_Var52[1].__prev;
      }
      uVar111 = *(ushort *)((long)&p_Var52->__prev + 4);
      uStack_1dc = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
      if (uVar111 == 0) {
        uStack_1dc = 0;
      }
      *(uint *)&p_Var47[1].__next = uStack_1dc;
    }
    uVar36 = *(uint *)(local_220 + 0x14);
    uVar37 = *(uint *)(local_220 + 0x18);
    uVar40 = *(ulong *)(local_220 +
                       (ulong)(ushort)(*(ushort *)
                                        (local_220 +
                                        (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 |
                                                (uVar36 & 0xff00) << 8 | uVar36 << 0x18) + 0xe) << 8
                                      | *(ushort *)
                                         (local_220 +
                                         (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 |
                                                 (uVar36 & 0xff00) << 8 | uVar36 << 0x18) + 0xe) >>
                                        8) * 8 +
                       (ulong)(uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                              uVar37 << 0x18) + 0xc);
    if ((uVar40 & 0xff030000) == 0) {
      if ((short)uVar40 != 0) goto LAB_003e9791;
    }
    else if (((short)(uVar40 >> 0x30) != -1) || ((uVar40 & 0xffff0000ffff) != 0xffff00000000))
    goto LAB_003e9791;
    ppVar41 = *(pthread_mutex_t **)((long)local_230 + 0x98);
    if (((*(ulong *)((long)local_230 + 0x80) & (ulong)*(pthread_mutex_t **)((long)local_230 + 0x98))
         != 0) &&
       ((ppVar41 = (pthread_mutex_t *)local_230[4].__align,
        (*(ulong *)((long)local_230 + 0x88) & (ulong)local_230[4].__align) != 0 &&
        (ppVar41 = (pthread_mutex_t *)0x0,
        (*(ulong *)((long)local_230 + 0xa8) & *(ulong *)((long)local_230 + 0x90)) != 0)))) {
LAB_003e9791:
      p_Var47 = (local_230->__data).__list.__next;
      *(undefined2 *)((long)&p_Var47[5].__next + 2) = 1;
      *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
      *(undefined4 *)((long)&p_Var47[6].__prev + 4) = 0;
      p_Var47[7].__next = p_Var47[7].__prev;
      lVar75 = *(long *)&local_230[3].__data;
      if (lVar75 == 0) {
        puVar65 = (uint *)0x0;
        *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
        cVar34 = *(char *)&p_Var47[5].__next;
      }
      else if (*(uint *)(lVar75 + 4) < 2) {
        puVar65 = (uint *)0x0;
        *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
        cVar34 = *(char *)&p_Var47[5].__next;
      }
      else {
        puVar65 = *(uint **)(lVar75 + 8);
        *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
        cVar34 = *(char *)&p_Var47[5].__next;
      }
      if (cVar34 != '\0') {
        uVar40 = (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                        uVar35 << 0x18);
        phStack_1c0 = local_220 + 0xc;
        phStack_1d8 = local_220 + uVar40 + 0xc;
        ppStack_228 = (pthread_mutex_t *)(p_Var47 + 7);
        ppStack_210 = (pthread_mutex_t *)&p_Var47[7].__next;
        phStack_1f0 = local_220 + uVar40 + 0xe;
        uVar36 = 0;
        phStack_238 = (hb_buffer_t *)((ulong)phStack_238 & 0xffffffff00000000);
        uVar37 = 0;
        uVar35 = *(uint *)&p_Var47[6].__prev;
        uVar40 = 0;
        ppVar41 = local_230;
        phVar123 = local_220;
        uVar60 = 0;
        if (puVar65 == (uint *)0x0) goto LAB_003e99b0;
LAB_003e9880:
        uVar37 = uVar60;
        if (uVar36 < uVar35) {
          uVar60 = *(uint *)(ppStack_228->__align + 8 + uVar40 * 0x14);
          puVar72 = puVar65 + 3;
          puVar62 = puVar65;
          do {
            puVar62 = puVar62 + -3;
            puVar65 = puVar72 + -2;
            puVar72 = puVar72 + -3;
          } while (uVar60 < *puVar65);
          do {
            puVar65 = puVar62 + 3;
            puVar72 = puVar62 + 5;
            ppVar41 = local_230;
            puVar62 = puVar65;
          } while (*puVar72 < uVar60);
        }
        if ((*puVar65 & *(uint *)((long)ppVar41 + 0xe0)) != 0) goto LAB_003e99b3;
        if (uVar36 != uVar35) {
          if (*(char *)((long)&p_Var47[5].__next + 2) == '\0') {
            uVar37 = 0;
            goto LAB_003ea3e2;
          }
          p_Var52 = p_Var47[7].__next;
          p_Var128 = p_Var47[7].__prev;
          uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
          if ((p_Var52 == p_Var128) && (uVar37 = 0, uVar35 == uVar36)) {
            uVar35 = uVar36;
            goto LAB_003ea3d9;
          }
          uVar35 = uVar35 + 1;
          if ((uVar35 == 0) || (uVar35 < *(uint *)&p_Var47[6].__next)) {
            uVar37 = 0;
            if (p_Var52 != p_Var128) goto LAB_003ea3af;
          }
          else {
            uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar35);
            ppVar41 = local_230;
            phVar123 = local_220;
            if ((char)uVar44 == '\0') {
              uVar37 = 0;
              cVar34 = *(char *)&p_Var47[5].__next;
              goto joined_r0x003e999c;
            }
            p_Var52 = *(__pthread_internal_list **)&ppStack_210->__data;
            p_Var128 = *(__pthread_internal_list **)&ppStack_228->__data;
            uVar37 = 0;
            if (p_Var52 != p_Var128) goto LAB_003ea3af;
          }
          uVar37 = 0;
          uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
          if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar35 + 1) {
            p_Var52 = p_Var47[8].__prev;
            p_Var47[7].__next = p_Var52;
            uVar37 = 0;
            goto LAB_003ea37d;
          }
          p_Var52 = p_Var128;
LAB_003ea3af:
          uVar40 = (ulong)*(uint *)((long)&p_Var47[5].__next + 4);
          uVar132 = (ulong)*(uint *)((long)&p_Var47[6].__prev + 4);
          *(undefined4 *)((long)p_Var52 + uVar132 * 0x14 + 0x10) =
               *(undefined4 *)((long)p_Var128 + uVar40 * 0x14 + 0x10);
          *(undefined1 (*) [16])((long)p_Var52 + uVar132 * 0x14) =
               *(undefined1 (*) [16])((long)p_Var128 + uVar40 * 0x14);
          uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
          uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
LAB_003ea3d9:
          *(uint *)((long)&p_Var47[6].__prev + 4) = uVar35 + 1;
LAB_003ea3e2:
          *(uint *)((long)&p_Var47[5].__next + 4) = uVar36 + 1;
          cVar34 = *(char *)&p_Var47[5].__next;
joined_r0x003e999c:
          if (cVar34 != '\0') {
            do {
              uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
              uVar35 = *(uint *)&p_Var47[6].__prev;
              uVar40 = (ulong)uVar36;
              uVar60 = uVar37;
              if (puVar65 != (uint *)0x0) goto LAB_003e9880;
LAB_003e99b0:
              puVar65 = (uint *)0x0;
LAB_003e99b3:
              if (uVar36 < uVar35) {
                uVar36 = *(uint *)(ppStack_228->__align + uVar40 * 0x14);
                if ((ulong)uVar36 == 0xffff) {
                  uVar35 = 2;
                }
                else {
                  uVar35 = 1;
                  if ((((*(ulong *)((long)ppVar41 + 0x98) >> ((ulong)(uVar36 >> 4) & 0x3f) & 1) != 0
                       ) && (((ulong)ppVar41[4].__align >> ((ulong)uVar36 & 0x3f) & 1) != 0)) &&
                     ((*(ulong *)((long)ppVar41 + 0xa8) >> ((ulong)(uVar36 >> 9) & 0x3f) & 1) != 0))
                  {
                    uVar60 = *(uint *)(phVar123 + 0x10);
                    pLVar43 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                        ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                         (phVar123 +
                                         (ulong)(uVar60 >> 0x18 | (uVar60 & 0xff0000) >> 8 |
                                                 (uVar60 & 0xff00) << 8 | uVar60 << 0x18) + 0xc),
                                         uVar36,uStack_1dc);
                    if (pLVar43 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                      uVar35 = (uint)(ushort)(*(ushort *)pLVar43 << 8 | *(ushort *)pLVar43 >> 8);
                    }
                  }
                }
              }
              else {
                uVar35 = 0;
              }
              ppVar41 = local_230;
              uVar36 = *(uint *)phStack_1c0;
              uVar105 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                        uVar36 << 0x18;
              uVar60 = uVar35;
              if (uVar105 <= uVar35) {
                uVar60 = 1;
              }
              uVar77 = *(uint *)(phVar123 + 0x14);
              uVar98 = *(uint *)(phVar123 + 0x18);
              lVar75 = (ulong)(uVar77 >> 0x18 | (uVar77 & 0xff0000) >> 8 | (uVar77 & 0xff00) << 8 |
                              uVar77 << 0x18) + 0xc;
              uVar77 = uVar98 >> 0x18 | (uVar98 & 0xff0000) >> 8 | (uVar98 & 0xff00) << 8 |
                       uVar98 << 0x18;
              ppStack_1f8 = (pthread_mutex_t *)(phVar123 + (ulong)uVar77 + 0xc);
              uStack_208 = (ulong)(ushort)(*(ushort *)
                                            (phVar123 +
                                            (ulong)(uVar60 + uVar105 * uVar37) * 2 + lVar75) << 8 |
                                          *(ushort *)
                                           (phVar123 +
                                           (ulong)(uVar60 + uVar105 * uVar37) * 2 + lVar75) >> 8);
              sVar10 = (short)(&(ppStack_1f8->__data).__lock)[uStack_208 * 2];
              p_Stack_1e8 = (__pthread_internal_list *)CONCAT62(p_Stack_1e8._2_6_,sVar10);
              uVar111 = *(ushort *)(phVar123 + uStack_208 * 8 + (ulong)uVar77 + 0xe);
              if (((uVar111 & 0xff03) == 0) ||
                 ((*(short *)(phVar123 + uStack_208 * 8 + (ulong)uVar77 + 0x10) == -1 &&
                  (*(short *)(phVar123 + uStack_208 * 8 + (ulong)uVar77 + 0x12) == -1)))) {
                if ((uVar37 != 0) && (((uVar111 & 0x40) == 0 || (sVar10 != 0)))) {
                  if (uVar105 <= uVar35) {
                    uVar35 = 1;
                  }
                  uVar40 = (ulong)(ushort)(*(ushort *)(phVar123 + (ulong)uVar35 * 2 + lVar75) << 8 |
                                          *(ushort *)(phVar123 + (ulong)uVar35 * 2 + lVar75) >> 8);
                  if (((((*(ushort *)(phVar123 + uVar40 * 8 + (ulong)uVar77 + 0xe) & 0xff03) != 0)
                       && ((*(short *)(phVar123 + uVar40 * 8 + (ulong)uVar77 + 0x10) != -1 ||
                           (*(short *)(phVar123 + uVar40 * 8 + (ulong)uVar77 + 0x12) != -1)))) ||
                      (sVar10 != (short)(&(ppStack_1f8->__data).__lock)[uVar40 * 2])) ||
                     (((*(ushort *)(phVar123 + uVar40 * 8 + (ulong)uVar77 + 0xe) ^ uVar111) & 0x40)
                      != 0)) goto LAB_003e9b70;
                }
                uVar40 = (ulong)(ushort)(*(ushort *)
                                          (phVar123 +
                                          (ulong)((uint)(uVar36 == 0) + uVar105 * uVar37) * 2 +
                                          lVar75) << 8 |
                                        *(ushort *)
                                         (phVar123 +
                                         (ulong)((uint)(uVar36 == 0) + uVar105 * uVar37) * 2 +
                                         lVar75) >> 8);
                if (((*(ushort *)(phVar123 + uVar40 * 8 + (ulong)uVar77 + 0xe) & 0xff03) != 0) &&
                   ((*(short *)(phVar123 + uVar40 * 8 + (ulong)uVar77 + 0x10) != -1 ||
                    (*(short *)(phVar123 + uVar40 * 8 + (ulong)uVar77 + 0x12) != -1))))
                goto LAB_003e9b70;
              }
              else {
LAB_003e9b70:
                uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
                uVar36 = uVar35;
                if (*(char *)((long)&p_Var47[5].__next + 2) != '\0') {
                  uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
                }
                if ((uVar36 != 0) && (uVar35 < *(uint *)&p_Var47[6].__prev)) {
                  hb_buffer_t::_set_glyph_flags
                            ((hb_buffer_t *)p_Var47,3,uVar36 - 1,uVar35 + 1,'\x01');
                  uVar111 = *(ushort *)((long)&(ppStack_1f8->__data).__lock + uStack_208 * 8 + 2);
                }
              }
              uVar71 = uVar111 << 8 | uVar111 >> 8;
              uVar60 = *(uint *)((long)&p_Var47[6].__prev + 4);
              uVar111 = *(ushort *)((long)&(ppStack_1f8->__data).__count + uStack_208 * 8 + 2);
              uVar35 = (uint)uVar71;
              if (uVar111 == 0xffff) {
LAB_003e9f8e:
                if ((uVar35 & 0x8000) == 0) {
                  uVar60 = (uint)phStack_238;
                }
                uVar111 = (ushort)(&(ppStack_1f8->__data).__count)[uStack_208 * 2];
                if (uVar111 != 0xffff) {
                  uVar36 = uVar35 >> 5 & 0x1f;
                  iVar39 = *(int *)&p_Var47[0xc].__next - uVar36;
                  *(int *)&p_Var47[0xc].__next = iVar39;
                  if (iVar39 < 1) goto LAB_003ea43e;
                  phStack_238 = (hb_buffer_t *)CONCAT44(phStack_238._4_4_,uVar60);
                  pGVar113 = (GDEF *)(ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
                  ppVar61 = (pthread_mutex_t *)(phStack_1d8 + (long)pGVar113 * 2);
                  if ((((ulong)*(uint *)((long)ppVar41 + 0x40) <
                        (ulong)((long)ppVar61 - *(long *)((long)ppVar41 + 0x30))) ||
                      ((uint)(*(int *)((long)ppVar41 + 0x38) - (int)ppVar61) < uVar36 * 2)) ||
                     (iVar39 = *(int *)((long)ppVar41 + 0x44) + uVar36 * -2,
                     *(int *)((long)ppVar41 + 0x44) = iVar39, iVar39 < 1)) {
                    uVar36 = 0;
                  }
                  iVar39 = *(int *)((long)&p_Var47[6].__prev + 4);
                  iVar104 = iVar39;
                  if (((uVar35 & 0x800) == 0) &&
                     (uVar37 = *(uint *)((long)&p_Var47[5].__next + 4),
                     uVar37 < *(uint *)&p_Var47[6].__prev)) {
                    p_Var52 = p_Var47[7].__prev;
                    uStack_198._0_4_ = *(uint *)((long)p_Var52 + (ulong)uVar37 * 0x14 + 0x10);
                    puVar109 = (undefined8 *)((long)p_Var52 + (ulong)uVar37 * 0x14);
                    uVar44 = *puVar109;
                    ppStack_1a0 = (pthread_mutex_t *)puVar109[1];
                    uStack_1a8 = (uint)uVar44;
                    uStack_1a4 = (undefined4)((ulong)uVar44 >> 0x20);
                    uVar37 = iVar39 + 1;
                    if ((uVar37 == 0) || (uVar37 < *(uint *)&p_Var47[6].__next)) {
                      p_Var128 = *(__pthread_internal_list **)&ppStack_210->__data;
                      if (*(__pthread_internal_list **)&ppStack_210->__data == p_Var52) {
LAB_003ea07c:
                        uVar37 = *(uint *)((long)&p_Var47[6].__prev + 4);
                        if (*(uint *)((long)&p_Var47[5].__next + 4) < uVar37 + 1) {
                          ppStack_218 = (pthread_mutex_t *)CONCAT44(ppStack_218._4_4_,uVar35);
                          p_Var128 = p_Var47[8].__prev;
                          p_Var47[7].__next = p_Var128;
                          pGStack_200 = pGVar113;
                          if ((ulong)uVar37 != 0) {
                            memcpy(p_Var128,p_Var52,(ulong)uVar37 * 0x14);
                            p_Var128 = *(__pthread_internal_list **)&ppStack_210->__data;
                          }
                          pGVar113 = pGStack_200;
                          uVar35 = (uint)ppStack_218;
                        }
                        else {
                          p_Var128 = p_Var52;
                        }
                      }
LAB_003ea0d0:
                      uVar40 = (ulong)*(uint *)((long)&p_Var47[6].__prev + 4);
                      *(uint *)((long)p_Var128 + uVar40 * 0x14 + 0x10) = (uint)uStack_198;
                      puVar109 = (undefined8 *)((long)p_Var128 + uVar40 * 0x14);
                      *puVar109 = CONCAT44(uStack_1a4,uStack_1a8);
                      puVar109[1] = &ppStack_1a0->__data;
                      iVar104 = *(int *)((long)&p_Var47[6].__prev + 4) + 1;
                      *(int *)((long)&p_Var47[6].__prev + 4) = iVar104;
                      goto LAB_003ea0fc;
                    }
                    ppStack_218 = ppVar61;
                    pGStack_200 = pGVar113;
                    uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar37);
                    if ((char)uVar44 != '\0') {
                      p_Var52 = *(__pthread_internal_list **)&ppStack_228->__data;
                      p_Var128 = *(__pthread_internal_list **)&ppStack_210->__data;
                      ppVar61 = ppStack_218;
                      pGVar113 = pGStack_200;
                      if (p_Var128 == p_Var52) goto LAB_003ea07c;
                      goto LAB_003ea0d0;
                    }
                  }
                  else {
LAB_003ea0fc:
                    uVar37 = iVar104 + uVar36;
                    if (uVar37 != 0) {
                      if (*(uint *)&p_Var47[6].__next <= uVar37) {
                        ppStack_218 = ppVar61;
                        pGStack_200 = pGVar113;
                        uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar37);
                        ppVar61 = ppStack_218;
                        pGVar113 = pGStack_200;
                        if ((char)uVar44 == '\0') goto LAB_003ea2ad;
                      }
                    }
                    pvVar53 = (void *)ppStack_228->__align;
                    if ((void *)ppStack_210->__align == pvVar53) {
                      uVar37 = *(uint *)((long)&p_Var47[6].__prev + 4);
                      if (*(uint *)((long)&p_Var47[5].__next + 4) < uVar37 + uVar36) {
                        p_Var52 = p_Var47[8].__prev;
                        p_Var47[7].__next = p_Var52;
                        if ((ulong)uVar37 != 0) {
                          ppStack_218 = ppVar61;
                          pGStack_200 = pGVar113;
                          memcpy(p_Var52,pvVar53,(ulong)uVar37 * 0x14);
                          ppVar61 = ppStack_218;
                          pGVar113 = pGStack_200;
                        }
                      }
                    }
                    uVar37 = *(uint *)((long)&p_Var47[5].__next + 4);
                    uVar60 = *(uint *)&p_Var47[6].__prev;
                    ppVar81 = ppStack_228;
                    uVar105 = uVar37;
                    if (uVar60 <= uVar37) {
                      iVar104 = *(int *)((long)&p_Var47[6].__prev + 4);
                      uVar105 = iVar104 - 1;
                      if (iVar104 == 0) {
                        uVar105 = 0;
                      }
                      ppVar81 = ppStack_210;
                    }
                    if (uVar36 != 0) {
                      puVar109 = (undefined8 *)((ulong)uVar105 * 0x14 + *(long *)&ppVar81->__data);
                      puVar72 = (uint *)((ulong)*(uint *)((long)&p_Var47[6].__prev + 4) * 0x14 +
                                        (long)p_Var47[7].__next);
                      if (uVar36 == 1) {
                        uVar40 = 0;
LAB_003ea240:
                        puVar72[4] = *(uint *)(puVar109 + 2);
                        uVar44 = puVar109[1];
                        *(undefined8 *)puVar72 = *puVar109;
                        *(undefined8 *)(puVar72 + 2) = uVar44;
                        uVar111 = *(ushort *)((long)&(ppVar61->__data).__lock + uVar40 * 2);
                        *puVar72 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
                      }
                      else {
                        uVar40 = 0;
                        do {
                          puVar72[4] = *(uint *)(puVar109 + 2);
                          uVar44 = puVar109[1];
                          *(undefined8 *)puVar72 = *puVar109;
                          *(undefined8 *)(puVar72 + 2) = uVar44;
                          *puVar72 = (uint)(ushort)(*(ushort *)
                                                     (phStack_1f0 +
                                                     uVar40 * 2 + (long)pGVar113 * 2 + -2) << 8 |
                                                   *(ushort *)
                                                    (phStack_1f0 +
                                                    uVar40 * 2 + (long)pGVar113 * 2 + -2) >> 8);
                          puVar72[9] = *(uint *)(puVar109 + 2);
                          uVar44 = puVar109[1];
                          *(undefined8 *)(puVar72 + 5) = *puVar109;
                          *(undefined8 *)(puVar72 + 7) = uVar44;
                          puVar72[5] = (uint)(ushort)(*(ushort *)
                                                       (phStack_1f0 +
                                                       uVar40 * 2 + (long)pGVar113 * 2) << 8 |
                                                     *(ushort *)
                                                      (phStack_1f0 + uVar40 * 2 + (long)pGVar113 * 2
                                                      ) >> 8);
                          puVar72 = puVar72 + 10;
                          uVar40 = uVar40 + 2;
                        } while ((uVar36 & 0xfffffffe) != uVar40);
                        ppVar41 = local_230;
                        if ((uVar36 & 1) != 0) goto LAB_003ea240;
                      }
                      uVar37 = *(uint *)((long)&p_Var47[5].__next + 4);
                      uVar60 = *(uint *)&p_Var47[6].__prev;
                    }
                    piVar49 = (int *)((long)&p_Var47[6].__prev + 4);
                    *piVar49 = *piVar49 + uVar36;
                    *(uint *)((long)&p_Var47[5].__next + 4) = uVar37;
                    if (((uVar35 & 0x800) == 0) && (uVar37 < uVar60)) {
                      *(uint *)((long)&p_Var47[5].__next + 4) = uVar37 + 1;
                    }
                    if ((uVar35 & 0x4000) != 0) {
                      uVar36 = 0;
                    }
                    hb_buffer_t::move_to((hb_buffer_t *)p_Var47,iVar39 + uVar36);
                  }
LAB_003ea2ad:
                  phVar123 = local_220;
                  uVar60 = (uint)phStack_238;
                }
              }
              else {
                uVar35 = uVar71 & 0x1f;
                iVar39 = *(int *)&p_Var47[0xc].__next - uVar35;
                *(int *)&p_Var47[0xc].__next = iVar39;
                if (iVar39 < 1) {
                  uVar60 = (uint)phStack_238;
LAB_003ea43e:
                  phVar123 = local_220;
                }
                else {
                  ppStack_218 = (pthread_mutex_t *)CONCAT44(ppStack_218._4_4_,(uint)uVar71);
                  uStack_1d0 = (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
                  phStack_1c8 = phStack_1d8 + uStack_1d0 * 2;
                  if ((((ulong)*(uint *)((long)ppVar41 + 0x40) <
                        (ulong)((long)phStack_1c8 - *(long *)((long)ppVar41 + 0x30))) ||
                      ((uint)(*(int *)((long)ppVar41 + 0x38) - (int)phStack_1c8) < uVar35 * 2)) ||
                     (iVar39 = *(int *)((long)ppVar41 + 0x44) + uVar35 * -2,
                     *(int *)((long)ppVar41 + 0x44) = iVar39, iVar39 < 1)) {
                    uVar35 = 0;
                  }
                  uVar38 = *(undefined4 *)((long)&p_Var47[6].__prev + 4);
                  uVar44 = hb_buffer_t::move_to((hb_buffer_t *)p_Var47,(uint)phStack_238);
                  if ((char)uVar44 == '\0') {
LAB_003ea4ef:
                  }
                  else {
                    pGStack_200 = (GDEF *)CONCAT44(pGStack_200._4_4_,uVar38);
                    uVar36 = (uint)ppStack_218;
                    if ((((ulong)ppStack_218 & 0x400) == 0) &&
                       (uVar37 = *(uint *)((long)&p_Var47[5].__next + 4),
                       uVar37 < *(uint *)&p_Var47[6].__prev)) {
                      p_Var52 = p_Var47[7].__prev;
                      uStack_198._0_4_ = *(uint *)((long)p_Var52 + (ulong)uVar37 * 0x14 + 0x10);
                      puVar109 = (undefined8 *)((long)p_Var52 + (ulong)uVar37 * 0x14);
                      uVar44 = *puVar109;
                      ppStack_1a0 = (pthread_mutex_t *)puVar109[1];
                      uStack_1a8 = (uint)uVar44;
                      uStack_1a4 = (undefined4)((ulong)uVar44 >> 0x20);
                      uVar37 = *(int *)((long)&p_Var47[6].__prev + 4) + 1;
                      if ((uVar37 == 0) || (uVar37 < *(uint *)&p_Var47[6].__next)) {
                        p_Var128 = *(__pthread_internal_list **)&ppStack_210->__data;
                        if (*(__pthread_internal_list **)&ppStack_210->__data == p_Var52) {
LAB_003e9ccb:
                          uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
                          if (*(uint *)((long)&p_Var47[5].__next + 4) < uVar36 + 1) {
                            p_Var128 = p_Var47[8].__prev;
                            p_Var47[7].__next = p_Var128;
                            if ((ulong)uVar36 != 0) {
                              memcpy(p_Var128,p_Var52,(ulong)uVar36 * 0x14);
                              p_Var128 = *(__pthread_internal_list **)&ppStack_210->__data;
                            }
                            uVar36 = (uint)ppStack_218;
                          }
                          else {
                            p_Var128 = p_Var52;
                            uVar36 = (uint)ppStack_218;
                          }
                        }
                      }
                      else {
                        uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar37);
                        if ((char)uVar44 == '\0') goto LAB_003ea4ef;
                        p_Var52 = *(__pthread_internal_list **)&ppStack_228->__data;
                        p_Var128 = *(__pthread_internal_list **)&ppStack_210->__data;
                        uVar36 = (uint)ppStack_218;
                        if (p_Var128 == p_Var52) goto LAB_003e9ccb;
                      }
                      uVar40 = (ulong)*(uint *)((long)&p_Var47[6].__prev + 4);
                      *(uint *)((long)p_Var128 + uVar40 * 0x14 + 0x10) = (uint)uStack_198;
                      puVar109 = (undefined8 *)((long)p_Var128 + uVar40 * 0x14);
                      *puVar109 = CONCAT44(uStack_1a4,uStack_1a8);
                      puVar109[1] = &ppStack_1a0->__data;
                      iVar39 = *(int *)((long)&p_Var47[6].__prev + 4) + 1;
                      *(int *)((long)&p_Var47[6].__prev + 4) = iVar39;
                      uVar37 = iVar39 + uVar35;
                      if (uVar37 != 0) goto LAB_003e9d61;
LAB_003e9d6b:
                      pvVar53 = (void *)ppStack_228->__align;
                      if ((void *)ppStack_210->__align == pvVar53) {
                        uVar37 = *(uint *)((long)&p_Var47[6].__prev + 4);
                        if (*(uint *)((long)&p_Var47[5].__next + 4) < uVar37 + uVar35) {
                          p_Var52 = p_Var47[8].__prev;
                          p_Var47[7].__next = p_Var52;
                          if ((ulong)uVar37 != 0) {
                            memcpy(p_Var52,pvVar53,(ulong)uVar37 * 0x14);
                            uVar36 = (uint)ppStack_218;
                          }
                        }
                      }
                      uVar37 = *(uint *)((long)&p_Var47[5].__next + 4);
                      uVar105 = *(uint *)&p_Var47[6].__prev;
                      ppVar61 = ppStack_228;
                      uVar77 = uVar37;
                      if (uVar105 <= uVar37) {
                        iVar39 = *(int *)((long)&p_Var47[6].__prev + 4);
                        uVar77 = iVar39 - 1;
                        if (iVar39 == 0) {
                          uVar77 = 0;
                        }
                        ppVar61 = ppStack_210;
                      }
                      if (uVar35 != 0) {
                        puVar109 = (undefined8 *)((ulong)uVar77 * 0x14 + *(long *)&ppVar61->__data);
                        puVar72 = (uint *)((ulong)*(uint *)((long)&p_Var47[6].__prev + 4) * 0x14 +
                                          (long)p_Var47[7].__next);
                        if (uVar35 == 1) {
                          uVar40 = 0;
LAB_003e9e80:
                          puVar72[4] = *(uint *)(puVar109 + 2);
                          uVar44 = puVar109[1];
                          *(undefined8 *)puVar72 = *puVar109;
                          *(undefined8 *)(puVar72 + 2) = uVar44;
                          *puVar72 = (uint)(ushort)(*(ushort *)(phStack_1c8 + uVar40 * 2) << 8 |
                                                   *(ushort *)(phStack_1c8 + uVar40 * 2) >> 8);
                        }
                        else {
                          uVar40 = 0;
                          do {
                            puVar72[4] = *(uint *)(puVar109 + 2);
                            uVar44 = puVar109[1];
                            *(undefined8 *)puVar72 = *puVar109;
                            *(undefined8 *)(puVar72 + 2) = uVar44;
                            *puVar72 = (uint)(ushort)(*(ushort *)
                                                       (phStack_1f0 +
                                                       uVar40 * 2 + uStack_1d0 * 2 + -2) << 8 |
                                                     *(ushort *)
                                                      (phStack_1f0 +
                                                      uVar40 * 2 + uStack_1d0 * 2 + -2) >> 8);
                            puVar72[9] = *(uint *)(puVar109 + 2);
                            uVar44 = puVar109[1];
                            *(undefined8 *)(puVar72 + 5) = *puVar109;
                            *(undefined8 *)(puVar72 + 7) = uVar44;
                            puVar72[5] = (uint)(ushort)(*(ushort *)
                                                         (phStack_1f0 + uVar40 * 2 + uStack_1d0 * 2)
                                                        << 8 | *(ushort *)
                                                                (phStack_1f0 +
                                                                uVar40 * 2 + uStack_1d0 * 2) >> 8);
                            puVar72 = puVar72 + 10;
                            uVar40 = uVar40 + 2;
                          } while ((uVar35 & 0xfffffffe) != uVar40);
                          ppVar41 = local_230;
                          if ((uVar35 & 1) != 0) goto LAB_003e9e80;
                        }
                        uVar37 = *(uint *)((long)&p_Var47[5].__next + 4);
                        piVar49 = (int *)((long)&p_Var47[6].__prev + 4);
                        *piVar49 = *piVar49 + uVar35;
                        uVar40 = *(ulong *)((long)ppVar41 + 0x80);
                        uVar132 = *(ulong *)((long)ppVar41 + 0x88);
                        uVar127 = *(ulong *)((long)ppVar41 + 0x90);
                        uVar67 = 0;
                        do {
                          uVar111 = *(ushort *)(phStack_1f0 + uVar67 * 2 + uStack_1d0 * 2 + -2);
                          uVar71 = uVar111 << 8 | uVar111 >> 8;
                          uVar40 = uVar40 | 1L << ((ulong)(uVar71 >> 4) & 0x3f);
                          uVar132 = uVar132 | 1L << ((ulong)uVar71 & 0x3f);
                          uVar127 = uVar127 | 1L << ((ulong)((uVar111 & 0xff) >> 1) & 0x3f);
                          uVar67 = uVar67 + 1;
                        } while (uVar35 != uVar67);
                        *(ulong *)((long)local_230 + 0x80) = uVar40;
                        *(ulong *)((long)local_230 + 0x88) = uVar132;
                        *(ulong *)((long)local_230 + 0x90) = uVar127;
                        uVar105 = *(uint *)&p_Var47[6].__prev;
                        ppVar41 = local_230;
                      }
                      if (((uVar36 & 0x400) == 0) && (uVar37 < uVar105)) {
                        *(uint *)((long)&p_Var47[5].__next + 4) = uVar37 + 1;
                      }
                      uVar44 = hb_buffer_t::move_to
                                         ((hb_buffer_t *)p_Var47,(int)pGStack_200 + uVar35);
                      if ((char)uVar44 != '\0') {
                        uVar35 = *(int *)((long)&p_Var47[5].__next + 4) + 1;
                        if (*(uint *)&p_Var47[6].__prev < uVar35) {
                          uVar35 = *(uint *)&p_Var47[6].__prev;
                        }
                        hb_buffer_t::_set_glyph_flags
                                  ((hb_buffer_t *)p_Var47,3,(uint)phStack_238,uVar35,'\x01');
                        phVar123 = local_220;
                        uVar35 = (uint)ppStack_218;
                        goto LAB_003e9f8e;
                      }
                    }
                    else {
                      uVar37 = *(int *)((long)&p_Var47[6].__prev + 4) + uVar35;
                      if (uVar37 == 0) goto LAB_003e9d6b;
LAB_003e9d61:
                      if (uVar37 < *(uint *)&p_Var47[6].__next) goto LAB_003e9d6b;
                      uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar37);
                      uVar36 = (uint)ppStack_218;
                      if ((char)uVar44 != '\0') goto LAB_003e9d6b;
                    }
                  }
                  phVar123 = local_220;
                  uVar60 = (uint)phStack_238;
                }
              }
              uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
              if ((uVar36 == *(uint *)&p_Var47[6].__prev) || (*(char *)&p_Var47[5].__next == '\0'))
              break;
              uVar111 = (ushort)p_Stack_1e8 << 8 | (ushort)p_Stack_1e8 >> 8;
              uVar37 = (uint)uVar111;
              if ((((byte)*(hb_buffer_t *)(ppStack_1f8->__size + uStack_208 * 8 + 2) & 0x40) == 0)
                 || (iVar39 = *(int *)&p_Var47[0xc].__next,
                    *(int *)&p_Var47[0xc].__next = iVar39 + -1, iVar39 < 1)) goto LAB_003ea310;
              phStack_238 = (hb_buffer_t *)CONCAT44(phStack_238._4_4_,uVar60);
              if (*(char *)&p_Var47[5].__next == '\0') break;
            } while( true );
          }
        }
      }
      ppVar41 = (pthread_mutex_t *)hb_buffer_t::sync((hb_buffer_t *)p_Var47);
      return ppVar41;
    }
    break;
  case 6:
    LOCK();
    *(int *)((long)&(param_1->__data).__lock + 2) = (int)param_1;
    UNLOCK();
    ppVar41->__size[0] = ppVar41->__size[0] + cVar34;
    goto AAT_Lookup<OT::IntType<unsigned_short,2u>>_get_value_switchD_003eae35_switchD;
  case 7:
  case 9:
  case 0xb:
  case 0xd:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
AAT_Lookup<OT::IntType<unsigned_short,2u>>_get_value_switchD_003eae35_switchD:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar35) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
    case 9:
    case 0xb:
    case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1d:
    case 0x1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x21:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x22:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x24:
    case 0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x29:
    case 0x2b:
    case 0x2d:
    case 0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x32:
    case 0x34:
    case 0x36:
    case 0x38:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x35:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x37:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x39:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3b:
    case 0x3d:
    case 0x3f:
    case 0x41:
    case 0x43:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x42:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x46:
    case 0x48:
    case 0x4a:
    case 0x4c:
    case 0x4e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x47:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x49:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x50:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x51:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x53:
    case 0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x54:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x56:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x57:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x58:
    case 0x5a:
    case 0x5c:
    case 0x5e:
    case 0x60:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x61:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case 10:
    while( true ) {
      hVar9 = (hb_buffer_t)ppVar61->__size[0];
      ppVar61->__size[0] = ppVar61->__size[0] >> 0x10;
      if (((char)hVar9 >> 0xf & 1U) == 0) break;
      iVar104 = (int)ppVar61 + 1;
      uVar35 = (uint)in_R11;
      while( true ) {
        if ((int)uVar35 < iVar104) goto LAB_003eb0af;
        uVar35 = (uint)((int)in_R11 + iVar104) >> 1;
        ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
        uVar111 = *(ushort *)((long)&(param_1->__data).__lock + in_R10 * (long)ppVar61 + 2);
        if ((ushort)(uVar111 << 8 | uVar111 >> 8) <= uVar60) break;
        uVar35 = uVar35 - 1;
        in_R11 = (hb_buffer_t *)(ulong)uVar35;
      }
    }
    param_6 = (pthread_mutex_t *)(param_1->__size + (uint)((int)ppVar61 * iVar39));
LAB_003eb0af:
    ppVar41 = (pthread_mutex_t *)&(param_6->__data).__count;
    if (param_6 == (pthread_mutex_t *)0x0) {
      ppVar41 = (pthread_mutex_t *)0x0;
    }
    return ppVar41;
  case 0xc:
    iVar104 = (int)in_R10 + iVar39;
    if (iVar104 != 0 && SCARRY4((int)in_R10,iVar39) == iVar104 < 0) {
      iVar104 = iVar104 + -1;
      iVar39 = 0;
      do {
        while( true ) {
          uVar35 = (uint)(iVar104 + iVar39) >> 1;
          uVar111 = *(ushort *)
                     ((long)&(param_1->__data).__nusers + (long)param_6 * (ulong)uVar35 + 2);
          if (uVar60 < (ushort)(uVar111 << 8 | uVar111 >> 8)) break;
          uVar111 = (ushort)*(uint *)((long)&(param_1->__data).__nusers +
                                     (long)param_6 * (ulong)uVar35);
          if (uVar60 <= (ushort)(uVar111 << 8 | uVar111 >> 8)) {
            uVar40 = (ulong)(uVar35 * (uVar37 & 0xffff));
            uVar111 = *(ushort *)((long)&(param_1->__data).__nusers + uVar40 + 2);
            uVar35 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
            if ((uVar60 < uVar35) ||
               (uVar111 = *(ushort *)((long)&(param_1->__data).__nusers + uVar40),
               (ushort)(uVar111 << 8 | uVar111 >> 8) < uVar60)) {
              UNK_005e00f9 = 0xf;
              UNK_005e00fb = 0xff;
              _DAT_005e0170 = 0xffe07709ffe07559;
              UNK_005e0181 = 0x77;
              _DAT_005e01d8 = 0xffe0d854;
              DAT_005e02b0 = 100;
              return (pthread_mutex_t *)0x0;
            }
            uVar111 = *(ushort *)((long)&(param_1->__data).__kind + uVar40);
            UNK_005e00f9 = 0xf;
            UNK_005e00fb = 0xff;
            _DAT_005e0170 = 0xffe07709ffe07559;
            UNK_005e0181 = 0x77;
            _DAT_005e01d8 = 0xffe0d854;
            DAT_005e02b0 = 100;
            return (pthread_mutex_t *)
                   ((long)&(param_1->__data).__lock +
                   (ulong)(uVar60 - uVar35) * 2 + (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
          }
          iVar39 = uVar35 + 1;
          if (iVar104 < iVar39) {
            UNK_005e00f9 = 0xf;
            UNK_005e00fb = 0xff;
            _DAT_005e0170 = 0xffe07709ffe07559;
            UNK_005e0181 = 0x77;
            _DAT_005e01d8 = 0xffe0d854;
            DAT_005e02b0 = 100;
            return (pthread_mutex_t *)0x0;
          }
        }
        iVar104 = uVar35 - 1;
      } while (iVar39 <= iVar104);
    }
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
    return (pthread_mutex_t *)0x0;
  case 0xe:
    do {
      iVar104 = (int)ppVar61;
      if (uVar60 < (uint)unaff_RBX) {
        ppVar41 = (pthread_mutex_t *)(ulong)(iVar104 - 1U);
        if ((int)(iVar104 - 1U) < (int)param_3) goto LAB_003eb0c6;
      }
      else {
        if ((uint)unaff_RBX == uVar60) {
          param_6 = (pthread_mutex_t *)(param_1->__size + (uint)(iVar104 * iVar39));
LAB_003eb0c6:
          ppVar41 = (pthread_mutex_t *)(param_6->__size + 2);
          if (param_6 == (pthread_mutex_t *)0x0) {
            ppVar41 = (pthread_mutex_t *)0x0;
          }
          UNK_005e00f9 = 0xf;
          UNK_005e00fb = 0xff;
          _DAT_005e0170 = 0xffe07709ffe07559;
          UNK_005e0181 = 0x77;
          _DAT_005e01d8 = 0xffe0d854;
          DAT_005e02b0 = 100;
          return ppVar41;
        }
        param_3 = (pthread_mutex_t *)(ulong)(iVar104 + 1U);
        if ((int)ppVar41 < (int)(iVar104 + 1U)) goto LAB_003eb0c6;
      }
      ppVar61 = (pthread_mutex_t *)(ulong)((uint)((int)ppVar41 + (int)param_3) >> 1);
      uVar111 = (ushort)*(int *)((long)&(param_1->__data).__lock + in_R10 * (long)ppVar61);
      unaff_RBX = (pthread_mutex_t *)(ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
    } while( true );
  case 0xf:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x18:
    ppVar41 = (pthread_mutex_t *)
              hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                           *)unaff_R14,0x7001,(ushort)(uVar111 << 8 | uVar111 >> 8) + 0x7000);
    return ppVar41;
  case 0x11:
    ppVar41 = *(pthread_mutex_t **)((long)unaff_R14 + 0x10);
    if (ppVar41 != (pthread_mutex_t *)0xffffffffffffffff) {
      ppVar41 = (pthread_mutex_t *)
                ((ulong)ppVar41 | (2L << ((byte)((ulong)param_3 >> 9) & 0x3f)) - 1U);
      ppVar61 = (pthread_mutex_t *)0xffffffffffffffff;
      if (uVar37 < 0x7e00) {
        ppVar61 = ppVar41;
      }
      *(__pthread_mutex_s **)&((__pthread_mutex_s *)unaff_R14)->__kind = &ppVar61->__data;
    }
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    return ppVar41;
  case 0x13:
    lVar75 = CONCAT62(uVar82,CONCAT11(0x48,uVar33));
    ppVar41 = (pthread_mutex_t *)
              CONCAT62(uVar59,CONCAT11(bVar70 + (char)*(hb_buffer_t *)((long)param_2 + -0x7d),cVar34
                                      ));
    uVar35 = 0x5e017000;
    do {
      uVar111 = (ushort)(ppVar41->__data).__lock;
      ppVar41 = (pthread_mutex_t *)
                hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                             *)unaff_R14,uVar35 & 0xffff,(uint)(ushort)(uVar111 << 8 | uVar111 >> 8)
                           );
      do {
        if ((int)unaff_R13 == (int)unaff_RBP) {
          return ppVar41;
        }
        uVar111 = *(ushort *)(lVar75 + 4);
        uVar35 = (int)unaff_RBP + 1;
        unaff_RBP = (pthread_mutex_t *)(ulong)uVar35;
        uVar71 = uVar111 << 8 | uVar111 >> 8;
        iVar39 = 0;
        if (uVar111 != 0) {
          uVar40 = (ulong)((uint)(ushort)(*(ushort *)(lVar75 + 2) << 8 |
                                         *(ushort *)(lVar75 + 2) >> 8) * (uVar71 - 1));
          iVar39 = 0;
          if (*(short *)(lVar75 + 0xc + uVar40) == -1) {
            iVar39 = -(uint)(*(short *)((long)&(unaff_R12->__data).__lock + uVar40 + 2) == -1);
          }
        }
        ppVar41 = unaff_R15;
        if (uVar35 < iVar39 + (uint)uVar71) {
          ppVar41 = (pthread_mutex_t *)
                    ((long)&(unaff_R12->__data).__lock +
                    (ulong)((ushort)(*(ushort *)(lVar75 + 2) << 8 | *(ushort *)(lVar75 + 2) >> 8) *
                           uVar35));
        }
        uVar111 = *(ushort *)((long)&(ppVar41->__data).__lock + 2);
      } while (uVar111 == 0xffff);
      uVar35 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
    } while( true );
  case 0x15:
    lVar75 = CONCAT62(uVar82,CONCAT11(0x48,uVar33));
    ppVar41 = (pthread_mutex_t *)
              CONCAT62(uVar59,CONCAT11(bVar70 + (char)*(hb_buffer_t *)((long)param_2 + -0x7d),cVar34
                                      ));
    uVar35 = 0x5e017000;
    do {
      uVar111 = (ushort)(ppVar41->__data).__lock;
      ppVar41 = (pthread_mutex_t *)
                hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                             *)unaff_R14,uVar35 & 0xffff,(uint)(ushort)(uVar111 << 8 | uVar111 >> 8)
                           );
      do {
        if ((int)unaff_R13 == (int)unaff_RBP) {
          return ppVar41;
        }
        uVar111 = *(ushort *)(lVar75 + 4);
        uVar35 = (int)unaff_RBP + 1;
        unaff_RBP = (pthread_mutex_t *)(ulong)uVar35;
        uVar71 = uVar111 << 8 | uVar111 >> 8;
        iVar39 = 0;
        if (uVar111 != 0) {
          uVar40 = (ulong)((uint)(ushort)(*(ushort *)(lVar75 + 2) << 8 |
                                         *(ushort *)(lVar75 + 2) >> 8) * (uVar71 - 1));
          iVar39 = 0;
          if (*(short *)(lVar75 + 0xc + uVar40) == -1) {
            iVar39 = -(uint)(*(short *)((long)&(unaff_R12->__data).__lock + uVar40 + 2) == -1);
          }
        }
        ppVar41 = unaff_R15;
        if (uVar35 < iVar39 + (uint)uVar71) {
          ppVar41 = (pthread_mutex_t *)
                    ((long)&(unaff_R12->__data).__lock +
                    (ulong)((ushort)(*(ushort *)(lVar75 + 2) << 8 | *(ushort *)(lVar75 + 2) >> 8) *
                           uVar35));
        }
        uVar111 = *(ushort *)((long)&(ppVar41->__data).__lock + 2);
      } while (uVar111 == 0xffff);
      uVar35 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
    } while( true );
  case 0x17:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
    return ppVar41;
  case 0x19:
    uVar40 = (ulong)(uint)((int)unaff_RBP << 0x10);
    do {
      *(ulong *)((long)unaff_R14 + 8) = *(ulong *)((long)unaff_R14 + 8) | uVar40;
      ppVar41 = (pthread_mutex_t *)((ulong)ppVar41 >> 9 & 0x7fffff);
      *(ulong *)((long)unaff_R14 + 0x10) =
           *(ulong *)((long)unaff_R14 + 0x10) | 1L << ((byte)ppVar41 & 0x3f);
      do {
        if ((int)param_1 == (int)param_3) {
          return ppVar41;
        }
        uVar111 = (ushort)(unaff_RBX->__data).__count;
        uVar35 = (int)param_3 + 1;
        param_3 = (pthread_mutex_t *)(ulong)uVar35;
        uVar71 = uVar111 << 8 | uVar111 >> 8;
        iVar104 = 0;
        if (uVar111 != 0) {
          uVar111 = *(ushort *)((long)&(unaff_RBX->__data).__lock + 2);
          iVar104 = -(uint)(*(short *)((long)&(unaff_RBX->__data).__nusers +
                                      (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) *
                                             ((uint)uVar71 + iVar39))) == -1);
        }
        ppVar41 = param_6;
        if (uVar35 < iVar104 + (uint)uVar71) {
          uVar111 = *(ushort *)((long)&(unaff_RBX->__data).__lock + 2);
          ppVar41 = (pthread_mutex_t *)
                    ((long)&(param_2->__data).__lock +
                    (ulong)((ushort)(uVar111 << 8 | uVar111 >> 8) * uVar35));
        }
        iVar104 = (ppVar41->__data).__lock;
        uVar111 = (ushort)iVar104;
        ppVar41 = (pthread_mutex_t *)(ulong)uVar111;
      } while (uVar111 == 0xffff);
      uVar111 = uVar111 << 8 | uVar111 >> 8;
      ppVar41 = (pthread_mutex_t *)(ulong)uVar111;
      *(ulong *)unaff_R14 = *(ulong *)unaff_R14 | 1L << ((byte)(uVar111 >> 4) & 0x3f);
      uVar40 = 1L << ((byte)((uint)iVar104 >> 8) & 0x3f);
    } while( true );
  case 0x1a:
    pphVar85 = (hb_buffer_t **)(alStack_250 + 2);
    ppVar41->__size[0] = ppVar41->__size[0] + cVar34;
LAB_003ed9c0:
    lVar75 = (long)in_ST0;
    auVar172 = in_XMM2._0_12_;
    auVar207 = in_XMM3._0_12_;
    *(__pthread_mutex_s **)((long)pphVar85 + 0x68) = &unaff_RBX->__data;
    *(__pthread_mutex_s **)((long)pphVar85 + 0xa8) = &ppVar41->__data;
    *(uint *)((long)pphVar85 + 0x1c) = (uint)unaff_RBP;
    *(__pthread_mutex_s **)((long)pphVar85 + 0xb8) = &param_1->__data;
    *(__pthread_mutex_s **)((long)pphVar85 + 0x10) = &ppVar61->__data;
    *(int *)((long)pphVar85 + 0xc) = (int)param_2;
    in_XMM1 = ZEXT816(0);
    *(undefined1 (*) [16])((long)pphVar85 + 0x90) = in_XMM1;
    *(undefined8 *)((long)pphVar85 + 0xa0) = 0;
    in_XMM0 = ZEXT816(0);
    uVar44 = 0;
    *(undefined1 (*) [16])((long)pphVar85 + 0x70) = in_XMM1;
    *(undefined8 *)((long)pphVar85 + 0x80) = 0;
    uVar35 = (unaff_R15->__data).__count >> 0x18;
    if (6 < (byte)((unaff_R15->__data).__count >> 0x18)) goto LAB_003edba0;
    ppVar61 = (pthread_mutex_t *)&DAT_005e01d8;
    uVar40 = (ulong)*(int *)(&DAT_005e01d8 + (ulong)uVar35 * 4);
    bVar133 = 0xffffffffffa1fe27 < uVar40;
    ppVar41 = (pthread_mutex_t *)(&DAT_005e01d8 + uVar40);
    bVar134 = ppVar41 == (pthread_mutex_t *)0x0;
    bVar70 = (byte)ppVar41;
    uVar76 = (undefined7)((ulong)ppVar41 >> 8);
    uVar36 = (uint)ppVar41;
    uVar59 = (undefined6)((ulong)unaff_RBX >> 0x10);
    pphVar83 = pphVar85;
    pphVar97 = pphVar85;
    switch(uVar35) {
    case 0:
      uVar35 = (unaff_R15->__data).__nusers;
      if (uVar35 != 0) {
        phVar123 = (hb_buffer_t *)((long)&(unaff_R15->__data).__list.__prev + 4);
        param_6 = (pthread_mutex_t *)0x0;
        in_R10 = 0;
        in_R11 = (hb_buffer_t *)0x0;
        uVar40 = 0;
        uVar132 = 0;
        param_3 = (pthread_mutex_t *)0x0;
        do {
          uVar111 = *(ushort *)phVar123;
          uVar71 = *(ushort *)(phVar123 + 2);
          uVar110 = uVar111 << 8 | uVar111 >> 8;
          param_3 = (pthread_mutex_t *)((ulong)param_3 | 1L << ((ulong)(uVar110 >> 4) & 0x3f));
          uVar132 = uVar132 | 1L << ((ulong)uVar110 & 0x3f);
          uVar40 = uVar40 | 1L << ((ulong)((uVar111 & 0xff) >> 1) & 0x3f);
          uVar111 = uVar71 << 8 | uVar71 >> 8;
          in_R11 = (hb_buffer_t *)((ulong)in_R11 | 1L << ((ulong)(uVar111 >> 4) & 0x3f));
          in_R10 = in_R10 | 1L << ((ulong)uVar111 & 0x3f);
          param_6 = (pthread_mutex_t *)
                    ((ulong)param_6 | 1L << ((ulong)((uVar71 & 0xff) >> 1) & 0x3f));
          phVar123 = phVar123 + 6;
        } while (phVar123 !=
                 (hb_buffer_t *)
                 (unaff_R15->__size +
                 (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                        uVar35 << 0x18) * 6 + 0x1c));
        *(__pthread_mutex_s **)((long)pphVar85 + 0x90) = &param_3->__data;
        *(ulong *)((long)pphVar85 + 0x98) = uVar132;
        *(ulong *)((long)pphVar85 + 0xa0) = uVar40;
        *(hb_buffer_t **)((long)pphVar85 + 0x70) = in_R11;
        *(ulong *)((long)pphVar85 + 0x78) = in_R10;
        *(__pthread_mutex_s **)((long)pphVar85 + 0x80) = &param_6->__data;
      }
      break;
    case 1:
      *(undefined1 (*) [16])((long)pphVar85 + 0xc0) = in_XMM0;
      *(undefined8 *)((long)pphVar85 + 0xd0) = 0;
      uVar35 = (unaff_R15->__data).__kind;
      *(undefined8 *)((long)pphVar85 + -8) = 0x3edb3e;
      Lookup<OT::IntType<unsigned_short,2u>>::
      collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                ((Lookup<OT::IntType<unsigned_short,2u>> *)
                 ((long)&(unaff_R15->__data).__nusers +
                 (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                        uVar35 << 0x18)),
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)((long)pphVar85 + 0xc0),*(int *)((long)pphVar85 + 8));
      param_3 = extraout_RDX_00;
      goto LAB_003edb73;
    case 2:
      uVar35 = (unaff_R15->__data).__kind;
      *(undefined8 *)((long)pphVar85 + -8) = 0x3edaef;
      Lookup<OT::IntType<unsigned_short,2u>>::
      collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                ((Lookup<OT::IntType<unsigned_short,2u>> *)
                 ((long)&(unaff_R15->__data).__lock +
                 (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                        uVar35 << 0x18)),
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)((long)pphVar85 + 0x90),*(int *)((long)pphVar85 + 8));
      uVar35 = (unaff_R15->__data).__spins;
      *(undefined8 *)((long)pphVar85 + -8) = 0x3edb06;
      Lookup<OT::IntType<unsigned_short,2u>>::
      collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                ((Lookup<OT::IntType<unsigned_short,2u>> *)
                 ((long)&(unaff_R15->__data).__lock +
                 (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                        uVar35 << 0x18)),
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)((long)pphVar85 + 0x70),*(int *)((long)pphVar85 + 8));
      param_3 = extraout_RDX;
      break;
    case 3:
    case 5:
      break;
    case 4:
      *(undefined1 (*) [16])((long)pphVar85 + 0xc0) = in_XMM0;
      *(undefined8 *)((long)pphVar85 + 0xd0) = 0;
      uVar35 = (unaff_R15->__data).__kind;
      *(undefined1 **)((long)pphVar85 + -8) = &LAB_003edb73;
      Lookup<OT::IntType<unsigned_short,2u>>::
      collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                ((Lookup<OT::IntType<unsigned_short,2u>> *)
                 ((long)&(unaff_R15->__data).__nusers +
                 (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                        uVar35 << 0x18)),
                 (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                  *)((long)pphVar85 + 0xc0),*(int *)((long)pphVar85 + 8));
      param_3 = extraout_RDX_01;
LAB_003edb73:
      *(undefined8 *)((long)pphVar85 + 0x90) = *(undefined8 *)((long)pphVar85 + 0xc0);
      *(undefined8 *)((long)pphVar85 + 0x98) = *(undefined8 *)((long)pphVar85 + 200);
      *(undefined8 *)((long)pphVar85 + 0xa0) = *(undefined8 *)((long)pphVar85 + 0xd0);
      *(undefined8 *)((long)pphVar85 + 0x70) = *(undefined8 *)((long)pphVar85 + 0xc0);
      *(undefined8 *)((long)pphVar85 + 0x78) = *(undefined8 *)((long)pphVar85 + 200);
      *(undefined8 *)((long)pphVar85 + 0x80) = *(undefined8 *)((long)pphVar85 + 0xd0);
      break;
    case 6:
      if (((byte)*(hb_buffer_t *)(unaff_R15->__size + 0xf) & 1) == 0) {
        uVar35 = (unaff_R15->__data).__spins;
        *(undefined8 *)((long)pphVar85 + -8) = 0x3edc67;
        Lookup<OT::IntType<unsigned_short,2u>>::
        collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                  ((Lookup<OT::IntType<unsigned_short,2u>> *)
                   ((long)&(unaff_R15->__data).__lock +
                   (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                          uVar35 << 0x18)),
                   (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)((long)pphVar85 + 0x90),*(int *)((long)pphVar85 + 8));
        uVar35 = *(uint *)&(unaff_R15->__data).__list.__prev;
        *(undefined8 *)((long)pphVar85 + -8) = 0x3edc7e;
        Lookup<OT::IntType<unsigned_short,2u>>::
        collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                  ((Lookup<OT::IntType<unsigned_short,2u>> *)
                   ((long)&(unaff_R15->__data).__lock +
                   (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                          uVar35 << 0x18)),
                   (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)((long)pphVar85 + 0x70),*(int *)((long)pphVar85 + 8));
        param_3 = extraout_RDX_02;
      }
      else {
        uVar35 = (unaff_R15->__data).__spins;
        *(undefined8 *)((long)pphVar85 + -8) = 0x3edc9d;
        Lookup<OT::IntType<unsigned_int,4u>>::
        collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                  ((Lookup<OT::IntType<unsigned_int,4u>> *)
                   ((long)&(unaff_R15->__data).__lock +
                   (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                          uVar35 << 0x18)),
                   (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)((long)pphVar85 + 0x90),*(int *)((long)pphVar85 + 8));
        uVar35 = *(uint *)&(unaff_R15->__data).__list.__prev;
        *(undefined8 *)((long)pphVar85 + -8) = 0x3edcb4;
        Lookup<OT::IntType<unsigned_int,4u>>::
        collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                  ((Lookup<OT::IntType<unsigned_int,4u>> *)
                   ((long)&(unaff_R15->__data).__lock +
                   (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                          uVar35 << 0x18)),
                   (hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                    *)((long)pphVar85 + 0x70),*(int *)((long)pphVar85 + 8));
        param_3 = extraout_RDX_03;
      }
      break;
    case 7:
      *(undefined8 *)((long)pphVar85 + -8) = 0x3ee6c8;
      func_0x3c57cf89();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
      goto code_r0x003eeb7e;
    case 9:
      goto code_r0x003ee923;
    case 10:
    case 0xc:
      ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
      goto LAB_003f0e9e;
    case 0xb:
      goto code_r0x003eecc0;
    case 0xd:
      goto code_r0x003eedb3;
    case 0xe:
      goto code_r0x003f258f;
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x15:
      goto LAB_003f27fb;
    case 0x10:
      (ppVar41->__data).__lock =
           (uint)(ppVar41->__data).__lock >> 0x11 | (ppVar41->__data).__lock << 0xf;
      *(hb_buffer_t *)((long)param_2 + -0x7d) = (hb_buffer_t)0x0;
      param_1->__size[0] = param_1->__size[0] | 0xd8;
      LOCK();
      *(int *)((long)&(param_1->__data).__lock + 2) = (int)param_1;
      UNLOCK();
      ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
      param_5 = &Lookup<OT::IntType<unsigned_int,4u>>::get_value::switchD_003f25c5::
                 switchdataD_005e0210;
      uVar40 = 0xffffffffffe1cab6;
code_r0x003f25c2:
                    /* WARNING: Could not recover jumptable at 0x003f25c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppVar41 = (pthread_mutex_t *)
                (*(code *)((long)&((__pthread_mutex_s *)param_5)->__lock + uVar40))();
      return ppVar41;
    case 0x12:
      goto LAB_003f265f;
    case 0x14:
      pcVar55 = (char *)((long)&UINT_005e01d4 + uVar40 + 3);
      *pcVar55 = *pcVar55 + (char)((ulong)unaff_RBX >> 8);
      uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
      uVar111 = uVar111 << 8 | uVar111 >> 8;
      param_3 = (pthread_mutex_t *)(ulong)uVar111;
      param_6 = (pthread_mutex_t *)(ulong)uVar111;
      ppVar41 = (pthread_mutex_t *)(ulong)((uVar36 + (int)param_5) * (uint)uVar111);
      in_R10 = 0;
code_r0x003f26d0:
      iVar39 = (int)param_5;
      if (*(short *)((long)&(param_1->__data).__nusers + (long)&ppVar41->__data) == -1) {
        iVar104 = -(uint)(*(short *)((hb_buffer_t *)(param_1->__size + 0xe) + (long)&ppVar41->__data
                                    ) == -1) + iVar39;
        if (iVar104 == 0 ||
            SCARRY4(-(uint)(*(short *)((hb_buffer_t *)(param_1->__size + 0xe) +
                                      (long)&ppVar41->__data) == -1),iVar39) != iVar104 < 0) {
          return (pthread_mutex_t *)0x0;
        }
      }
      else {
        iVar104 = (int)in_R10 + iVar39;
        if (iVar104 == 0 || SCARRY4((int)in_R10,iVar39) != iVar104 < 0) {
          return (pthread_mutex_t *)0x0;
        }
      }
      ppVar41 = (pthread_mutex_t *)0x0;
      param_5 = (uint *)((ulong)param_3 & 0xffff);
      in_R10 = (ulong)(iVar104 - 1);
      in_R11 = (hb_buffer_t *)0x0;
LAB_003f27fb:
      while( true ) {
        while( true ) {
          uVar35 = (uint)((int)in_R10 + (int)in_R11) >> 1;
          uVar111 = *(ushort *)
                     ((long)&(param_1->__data).__nusers + (long)param_6 * (ulong)uVar35 + 2);
          uVar36 = (uint)param_2;
          if ((ushort)(uVar111 << 8 | uVar111 >> 8) <= uVar36) break;
          in_R10 = (ulong)(uVar35 - 1);
          if ((int)(uVar35 - 1) < (int)in_R11) {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
            return ppVar41;
          }
        }
        uVar111 = (ushort)*(uint *)((long)&(param_1->__data).__nusers +
                                   (long)param_6 * (ulong)uVar35);
        if (uVar36 <= (ushort)(uVar111 << 8 | uVar111 >> 8)) break;
        in_R11 = (hb_buffer_t *)(ulong)(uVar35 + 1);
        if ((int)in_R10 < (int)(uVar35 + 1)) {
          return ppVar41;
        }
      }
      uVar40 = (ulong)(uVar35 * (int)param_5);
      uVar111 = *(ushort *)((long)&(param_1->__data).__nusers + uVar40 + 2);
      uVar35 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
      if (uVar36 < uVar35) {
        return (pthread_mutex_t *)0x0;
      }
      uVar111 = *(ushort *)((long)&(param_1->__data).__nusers + uVar40);
      if ((ushort)(uVar111 << 8 | uVar111 >> 8) < uVar36) {
        return (pthread_mutex_t *)0x0;
      }
      uVar111 = *(ushort *)((long)&(param_1->__data).__kind + uVar40);
      return (pthread_mutex_t *)
             ((long)&(param_1->__data).__lock +
             (ulong)(uVar36 - uVar35) * 4 + (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
    case 0x16:
      plVar108 = (long *)((long)pphVar85 + -8);
      *(__pthread_mutex_s **)((long)pphVar85 + -8) = &unaff_RBP->__data;
      cVar34 = '\x0e';
      do {
        unaff_RBP = (pthread_mutex_t *)((long)unaff_RBP + -8);
        plVar108 = plVar108 + -1;
        *plVar108 = unaff_RBP->__align;
        cVar34 = cVar34 + -1;
      } while ('\0' < cVar34);
      *(undefined1 **)((long)pphVar85 + -0x80) = (undefined1 *)((long)pphVar85 + -8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x17:
      *(__pthread_mutex_s **)((long)pphVar85 + -8) = &param_1->__data;
      goto LAB_003f2b4e;
    case 0x18:
    case 0x1a:
    case 0x1c:
    case 0x1e:
      goto LAB_003f2db7;
    case 0x19:
      goto LAB_003f2b62;
    case 0x1b:
      goto LAB_003f2c30;
    case 0x1d:
                    /* WARNING (jumptable): Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
      _DAT_005e01d8 = 0xc1b0a9ff;
      return ppVar41;
    case 0x1f:
      pcVar55 = (char *)((ulong)ppVar41 & 0xffffffffffffff54);
      *pcVar55 = *pcVar55 + (bVar70 & 0x54);
LAB_003f2d14:
      iVar39 = (int)pcVar55 + -1;
      iVar104 = 0;
      do {
        while( true ) {
          uVar35 = (uint)(iVar39 + iVar104) >> 1;
          uVar111 = (ushort)*(uint *)((long)&(param_1->__data).__nusers + in_R10 * uVar35);
          uVar36 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
          if (uVar36 <= (uint)param_2) break;
          iVar39 = uVar35 - 1;
          if (iVar39 < iVar104) goto LAB_003f2e36;
        }
        if (uVar36 == (uint)param_2) {
          param_6 = (pthread_mutex_t *)
                    (param_1->__size + (ulong)(uVar35 * ((uint)param_3 & 0xffff)) + 0xc);
          break;
        }
        iVar104 = uVar35 + 1;
      } while (iVar104 <= iVar39);
LAB_003f2e36:
      ppVar41 = (pthread_mutex_t *)(param_6->__size + 2);
      if (param_6 == (pthread_mutex_t *)0x0) {
        ppVar41 = (pthread_mutex_t *)0x0;
      }
      return ppVar41;
    case 0x20:
      goto code_r0x003f30f2;
    case 0x21:
    case 0x23:
    case 0x25:
    case 0x27:
    case 0x29:
      goto code_r0x003f3804;
    case 0x22:
      LOCK();
      *(undefined4 *)((long)unaff_RBX + -1) = 0x5e01d8;
      UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x26:
      param_1->__size[0] = param_1->__size[0] + -0x28;
      puVar100 = (undefined1 *)((long)pphVar85 + -8);
      *(__pthread_mutex_s **)((long)pphVar85 + -8) = &unaff_RBP->__data;
      pphVar85 = (hb_buffer_t **)((long)pphVar85 + -0x4c2);
      ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
      goto code_r0x003f364d;
    case 0x28:
      ppVar41->__size[0] = (byte)ppVar41->__size[0] >> 7 | ppVar41->__size[0] << 1;
      goto code_r0x003f380a;
    case 0x2a:
      goto code_r0x003f30b0;
    case 0x2b:
      goto code_r0x003f3958;
    case 0x2c:
    case 0x2e:
    case 0x30:
    case 0x32:
    case 0x34:
      unaff_RBX = (pthread_mutex_t *)CONCAT62(uVar59,(ushort)(byte)unaff_RBX);
      goto LAB_003f3d3d;
    case 0x2d:
                    /* WARNING: Could not emulate address calculation at 0x003f39fc */
                    /* WARNING: Treating indirect jump as call */
      ppVar41 = (pthread_mutex_t *)
                (*(code *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::
                                  collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                                  ::switchD_003f3a03::switchdataD_005e0284 +
                          (long)(int)(&Lookup<OT::IntType<unsigned_int,4u>>::
                                       collect_glyphs<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>>
                                       ::switchD_003f3a03::switchdataD_005e0284)
                                     [(long)&ppVar41->__data]))();
      return ppVar41;
    case 0x2f:
      *(hb_buffer_t *)((long)unaff_RBP + 0x17807c3) =
           (hb_buffer_t)((char)*(hb_buffer_t *)((long)unaff_RBP + 0x17807c3) + -0x28);
      ppVar41 = (pthread_mutex_t *)((ulong)ppVar41 | 0x44);
      unaff_R13 = (uint *)(ulong)((int)unaff_R13 - 1);
      unaff_RBP = (pthread_mutex_t *)0x0;
      unaff_R15 = (pthread_mutex_t *)&_hb_NullPool;
      goto LAB_003f3b00;
    case 0x31:
      pphVar87 = (hb_buffer_t **)((long)pphVar85 + -8);
      *(undefined8 *)((long)pphVar85 + -8) = 0xffe0d933ffe0d854;
      uVar35 = in((short)param_3);
      ppVar41 = (pthread_mutex_t *)(ulong)uVar35;
      unaff_R15 = (pthread_mutex_t *)&_hb_NullPool;
      goto LAB_003f3c00;
    case 0x33:
      goto code_r0x003f3cdf;
    case 0x35:
      param_1->__size[0] = param_1->__size[0] | 0xd8;
      unaff_RBX = (pthread_mutex_t *)CONCAT62(uVar59,CONCAT11(0xc9,(byte)unaff_RBX));
      goto LAB_003f3cf0;
    case 0x36:
      ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
      ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
      unaff_RBP = param_2;
      goto code_r0x003f3f23;
    case 0x37:
      goto code_r0x003f3f89;
    case 0x38:
      goto code_r0x003f4587;
    case 0x39:
    case 0x3b:
      goto code_r0x003f3df8;
    case 0x3a:
      *(char *)param_5 = (char)*(hb_buffer_t *)param_5 + (char)param_5;
      ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
      goto LAB_003f4620;
    case 0x3c:
      if (!SCARRY8(uVar40,0x5e01d8)) {
        pshufw(in_MM3,in_MM3,0xe6);
        pphVar89 = pphVar85;
        goto code_r0x003f4b9f;
      }
      *(hb_buffer_t *)(param_2->__size + 0xf) =
           (hb_buffer_t)
           ((byte)*(hb_buffer_t *)(param_2->__size + 0xf) | (byte)((ulong)ppVar41 >> 8));
      in_XMM4 = in_XMM0;
      goto code_r0x003f4c01;
    case 0x3d:
      uRam00000000011a0588 = 0x6574e939;
      goto LAB_003f4efd;
    case 0x3e:
    case 0x40:
    case 0x42:
    case 0x44:
    case 0x46:
      goto code_r0x003f519f;
    case 0x3f:
      goto code_r0x003f4f2b;
    case 0x41:
      *(uint *)((long)pphVar85 + 0x1c) = uVar36;
      goto code_r0x003f4f4c;
    case 0x43:
      goto code_r0x003f5133;
    case 0x45:
      *(int *)(&UNK_005e0161 + uVar40) = *(int *)(&UNK_005e0161 + uVar40) + -1;
      return ppVar41;
    case 0x47:
      return ppVar41;
    case 0x48:
      pcVar55 = (char *)CONCAT71(uVar76,bVar70 & param_3->__size[0]);
      *pcVar55 = *pcVar55 + (bVar70 & param_3->__size[0]);
      goto code_r0x003f7f59;
    default:
      if ((long)uVar40 < -0x5e01d8) {
        cVar34 = bVar70 + 0x85;
        pcVar55 = (char *)CONCAT71(uVar76,cVar34);
        *pcVar55 = *pcVar55 + cVar34;
        *pcVar55 = *pcVar55 + cVar34;
        goto code_r0x003f7e92;
      }
      ppVar41->__size[0] = (ppVar41->__size[0] - bVar70) - bVar133;
      goto code_r0x003f7e86;
    case 0x4f:
      ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
      (&UNK_005e0163)[uVar40] = (&UNK_005e0163)[uVar40] + -0x28;
      uVar36 = uVar36 & 0xffffff08;
      goto code_r0x003f7eff;
    case 0x50:
      ppVar41 = (pthread_mutex_t *)
                (ulong)*(uint *)((long)&(param_1->__data).__lock + (long)&unaff_RBX->__data);
      goto code_r0x003f7fb9;
    case 0x53:
      (ppVar41->__data).__lock = (ppVar41->__data).__lock + 1;
      ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
      goto code_r0x003f8008;
    case 0x61:
      ppVar61 = (pthread_mutex_t *)(ulong)*(uint *)((long)param_2 + 0x1780760);
code_r0x003f801b:
                    /* WARNING: Could not recover jumptable at 0x003f8027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppVar41 = (pthread_mutex_t *)
                (*(code *)((long)&((__pthread_mutex_s *)unaff_R14)->__lock +
                          (long)(&((__pthread_mutex_s *)unaff_R14)->__lock)[(long)&ppVar61->__data])
                )();
      return ppVar41;
    case 0x62:
      goto code_r0x003f7fcb;
    case 0x66:
      ppVar61 = (pthread_mutex_t *)&DAT_005e01d8;
      goto code_r0x003f7fe5;
    case 0x82:
      ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
      param_1->__size[0] = param_1->__size[0] + -0x28;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x84:
      LOCK();
      *(int *)((ulong)((param_1->__data).__lock + 0x5e01d8 + (uint)bVar133) - 1) = (int)pphVar85;
      UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x86:
      pphVar93 = pphVar85;
      if ((uint)unaff_RBP == uVar36) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
      goto LAB_003f807d;
    case 0xa2:
      goto code_r0x003f7fa7;
    case 0xa4:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
      halt_baddata();
    case 0xa5:
      goto code_r0x003f7de1;
    case 0xa6:
      ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
      phVar123 = (hb_buffer_t *)((long)unaff_RBX + 0x78891079);
      hVar9 = *phVar123;
      *phVar123 = (hb_buffer_t)((char)*phVar123 - 0x28);
      hVar5 = (hb_buffer_t)param_1->__size[0];
      hVar6 = (hb_buffer_t)param_1->__size[0];
      param_1->__size[0] = ((char)hVar6 - 0x28U) + (0x27 < (byte)hVar9);
                    /* WARNING (jumptable): Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e01d9) is written */
      _DAT_005e01d8 =
           CONCAT31(_UNK_005e01d9,
                    bVar70 + 0x54 +
                    (0x27 < (byte)hVar5 || CARRY1((char)hVar6 - 0x28U,0x27 < (byte)hVar9)));
      goto code_r0x003f7dc5;
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
      goto code_r0x003f7d14;
    case 0xb7:
      goto code_r0x003f7e15;
    case 0xb8:
      goto code_r0x003f7e1c;
    case 0xb9:
    case 0xbb:
      out((short)param_3,uVar36);
                    /* WARNING (jumptable): Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
      _DAT_005e01d8 = _DAT_005e01d8 & 0xffffff00;
      goto LAB_003fd080;
    case 0xba:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf6:
    case 0xf7:
    case 0xf8:
    case 0xf9:
    case 0xfa:
    case 0xfb:
    case 0xfc:
    case 0xfd:
    case 0xfe:
    case 0xff:
      out(0xfe,bVar70);
      goto LAB_003fd072;
    case 0xbc:
      goto code_r0x003fd0fd;
    }
LAB_003edba0:
    ppVar61 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
    uVar36 = (int)ppVar61 + 1;
    unaff_R12 = (pthread_mutex_t *)(ulong)uVar36;
    uVar35 = *(uint *)((long)pphVar85 + 0xc);
    param_2 = (pthread_mutex_t *)(ulong)uVar35;
    if ((int)ppVar61 < (int)uVar35) {
      param_5 = (uint *)(*(ulong *)((long)pphVar85 + 0xa8) & 0xffffffff);
LAB_003edbdc:
      ppVar41 = (pthread_mutex_t *)((ulong)ppVar61 & 0xffffffff);
      pphVar29 = pphVar85;
code_r0x003edbde:
      unaff_RBX = (pthread_mutex_t *)unaff_R14;
      pphVar85 = pphVar29;
      lVar75 = (long)ppVar41 * 0x30;
      *(undefined8 *)((long)unaff_RBX + lVar75 + 0x28) = *(undefined8 *)((long)pphVar85 + 0x80);
      uVar44 = *(undefined8 *)((long)pphVar85 + 0x78);
      *(undefined8 *)(unaff_RBX->__size + lVar75 + 0x18) = *(undefined8 *)((long)pphVar85 + 0x70);
      *(undefined8 *)((hb_buffer_t *)(unaff_RBX->__size + lVar75 + 0x18) + 8) = uVar44;
      uVar44 = *(undefined8 *)((long)pphVar85 + 0x98);
      *(undefined8 *)((long)unaff_RBX + lVar75) = *(undefined8 *)((long)pphVar85 + 0x90);
      *(undefined8 *)((hb_buffer_t *)((long)unaff_RBX + lVar75) + 8) = uVar44;
      *(undefined8 *)(unaff_RBX->__size + lVar75 + 0x10) = *(undefined8 *)((long)pphVar85 + 0xa0);
      ppVar61 = (pthread_mutex_t *)((ulong)unaff_R12 & 0xffffffff);
      unaff_RBP = (pthread_mutex_t *)((ulong)unaff_R12 & 0xffffffff);
      param_1 = unaff_RBX;
      unaff_R14 = (uint *)unaff_RBX;
    }
    else {
      uVar37 = (uint)*(ulong *)((long)pphVar85 + 0xa8);
      if (-1 < (int)uVar35) {
        if (uVar35 < uVar36) {
          param_3 = (pthread_mutex_t *)(ulong)uVar35;
          pvVar53 = *(void **)((long)pphVar85 + 0xb8);
          do {
            uVar37 = (uint)param_3 + ((uint)param_3 >> 1) + 8;
            param_3 = (pthread_mutex_t *)(ulong)uVar37;
          } while (uVar37 < uVar36);
          if (0x5555555 < uVar37) {
LAB_003edd41:
            uVar37 = ~uVar35;
            param_2 = (pthread_mutex_t *)(ulong)uVar37;
            goto LAB_003edd45;
          }
          param_2 = param_3;
          param_5 = (uint *)param_3;
          if (uVar37 == 0) {
            *(undefined8 *)((long)pphVar85 + -8) = 0x3edd14;
            free(pvVar53);
            unaff_R14 = (uint *)((pthread_mutex_t *)0x0)->__size;
            ppVar61 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
            param_3 = extraout_RDX_05;
          }
          else {
            *(undefined8 *)((long)pphVar85 + -8) = 0x3edcf2;
            ppVar41 = realloc(pvVar53,(ulong)uVar37 * 0x30);
            param_3 = extraout_RDX_04;
            if (ppVar41 == (pthread_mutex_t *)0x0) {
              *(void **)((long)pphVar85 + 0x68) = pvVar53;
              uVar35 = *(uint *)((long)pphVar85 + 0xc);
              ppVar61 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
              if (uVar35 < uVar37) goto LAB_003edd41;
              param_2 = (pthread_mutex_t *)(ulong)uVar35;
              param_5 = (uint *)(*(ulong *)((long)pphVar85 + 0xa8) & 0xffffffff);
            }
            else {
              ppVar61 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
              unaff_R14 = (uint *)ppVar41;
            }
          }
        }
        else {
          param_5 = (uint *)(*(ulong *)((long)pphVar85 + 0xa8) & 0xffffffff);
        }
        goto LAB_003edbdc;
      }
LAB_003edd45:
      unaff_RBP = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar85 + 0x1c);
      unaff_RBX = *(pthread_mutex_t **)((long)pphVar85 + 0x68);
      DAT_0071cda0 = 0;
      _DAT_0071cda8 = 0;
      DAT_0071cd90 = 0;
      _DAT_0071cd98 = 0;
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      param_5 = (uint *)(ulong)uVar37;
      unaff_R12 = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar85 + 0x1c);
      param_1 = *(pthread_mutex_t **)((long)pphVar85 + 0xb8);
    }
    uVar35 = (unaff_R15->__data).__lock;
    unaff_R15 = (pthread_mutex_t *)
                ((long)&(unaff_R15->__data).__lock +
                (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                       uVar35 << 0x18));
    uVar35 = (int)unaff_R13 + 1;
    unaff_R13 = (uint *)(ulong)uVar35;
    ppVar41 = (pthread_mutex_t *)((ulong)param_5 & 0xffffffff);
    if (uVar35 == *(uint *)((long)pphVar85 + 0xb4)) {
      lVar75 = *(long *)((long)pphVar85 + 0x60);
      iVar39 = *(int *)(lVar75 + 8);
      *(int *)(lVar75 + 8) = (int)param_5;
      *(int *)(lVar75 + 0xc) = (int)unaff_R12;
      pvVar53 = *(void **)(lVar75 + 0x10);
      *(uint **)(lVar75 + 0x10) = unaff_R14;
      if (iVar39 != 0) {
        *(undefined8 *)((long)pphVar85 + -8) = 0x3eddaa;
        free(pvVar53);
      }
      *(undefined8 *)((long)pphVar85 + -8) = 0x3eddb4;
      ppVar41 = (pthread_mutex_t *)
                hb_sanitize_context_t::~hb_sanitize_context_t
                          ((hb_sanitize_context_t *)((long)pphVar85 + 0x20));
      return ppVar41;
    }
    goto LAB_003ed9c0;
  case 0x1b:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1c:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1d:
  case 0x1f:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1e:
    param_1->__size[0] = param_1->__size[0] + 'p' + bVar133;
    return ppVar41;
  case 0x20:
    goto code_r0x003edbde;
  case 0x21:
                    /* WARNING (jumptable): Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
    UNK_005e00f9 = bVar133 + '\x7f';
    in_R11[-0x72b7e7b0] = (hb_buffer_t)((byte)in_R11[-0x72b7e7b0] ^ (byte)param_6);
    pphVar85 = &phStack_238;
    goto LAB_003ee654;
  case 0x22:
    goto code_r0x003eeb16;
  case 0x23:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x24:
  case 0x26:
    (&UNK_005e00f9)[uVar40] = (&UNK_005e00f9)[uVar40] & 0x70;
    out(uVar71,uVar36);
    goto code_r0x003f0e40;
  case 0x25:
    ppVar41->__size[0] = ppVar41->__size[0] + cVar34;
    pphVar85 = &phStack_238;
    goto code_r0x003eec5a;
  case 0x27:
    ppVar41->__size[0] = ppVar41->__size[0] + cVar34;
    pphVar85 = &phStack_238;
    goto code_r0x003eed4d;
  case 0x28:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
    return ppVar41;
  case 0x29:
  case 0x2b:
  case 0x2d:
  case 0x2f:
    param_1->__size[0] = param_1->__size[0] | 0x70;
    if ((uVar60 < uVar36) ||
       (uVar111 = (ushort)(param_1->__data).__count,
       (uint)(ushort)(uVar111 << 8 | uVar111 >> 8) <= uVar60 - uVar36)) {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
      return (pthread_mutex_t *)0x0;
    }
    return (pthread_mutex_t *)((long)&(param_1->__data).__count + (ulong)(uVar60 - uVar36) * 4 + 2);
  case 0x2a:
    plVar108 = alStack_250 + 2;
    cVar34 = '\v';
    do {
      unaff_RBP = (pthread_mutex_t *)((long)unaff_RBP + -8);
      plVar108 = plVar108 + -1;
      *plVar108 = unaff_RBP->__align;
      cVar34 = cVar34 + -1;
    } while ('\0' < cVar34);
    *(undefined4 *)(&UNK_005e00fd + uVar40) = 0x5e0170;
    uVar40 = (ulong)ppVar41 | 0x8e;
    puVar65 = (uint *)&UNK_005e0178;
    do {
      uVar35 = (uint)param_5;
      param_5 = (uint *)((ulong)param_5 & 0xffffffff);
      if (*puVar65 < uVar35) {
        param_5 = (uint *)(ulong)*puVar65;
      }
      puVar65 = puVar65 + 5;
      uVar40 = uVar40 - 1;
    } while (uVar40 != 0);
    param_3 = (pthread_mutex_t *)((ulong)in_R11 & 0xffffffff);
    ppVar61 = (pthread_mutex_t *)((ulong)unaff_RBX & 0xffffffff);
    param_6 = (pthread_mutex_t *)0x3;
code_r0x003f258f:
    ppVar41 = (pthread_mutex_t *)
              hb_buffer_t::_infos_set_glyph_flags
                        ((hb_buffer_t *)&param_1->__data,(long)param_2,(uint)param_3,(uint)ppVar61,
                         (uint)param_5,(uint)param_6);
    return ppVar41;
  case 0x2c:
    uVar111 = uVar71 << 8 | uVar71 >> 8;
    in_R10 = (ulong)uVar111;
    iVar104 = 0;
    if (*(short *)((long)&(param_1->__data).__nusers + (ulong)((uint)uVar111 * 0x5e0170)) == -1) {
      iVar104 = -(uint)(*(short *)((long)&(param_1->__data).__nusers +
                                  (ulong)((uint)uVar111 * 0x5e0170) + 2) == -1);
    }
    param_6 = (pthread_mutex_t *)&((pthread_mutex_t *)0x0)->__data;
    iVar125 = iVar104 + iVar39;
    if (iVar125 != 0 && SCARRY4(iVar104,iVar39) == iVar125 < 0) {
      param_1 = (pthread_mutex_t *)&(param_1->__data).__nusers;
      param_5 = (uint *)(ulong)uVar111;
      in_R11 = (hb_buffer_t *)(ulong)(iVar125 - 1);
      param_3 = (pthread_mutex_t *)0x0;
      goto LAB_003f265f;
    }
    goto LAB_003f283f;
  case 0x2e:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x30:
    uVar111 = (ushort)(param_1->__data).__count;
    uVar71 = uVar111 << 8 | uVar111 >> 8;
    uVar35 = (uint)uVar71;
    if (uVar111 == 0) {
      uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
      uVar111 = uVar111 << 8 | uVar111 >> 8;
      param_6 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
      if (uVar35 == 0) goto LAB_003f2856;
    }
    else {
      uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
      uVar111 = uVar111 << 8 | uVar111 >> 8;
      iVar39 = -(uint)(*(short *)((long)&(param_1->__data).__nusers +
                                 (ulong)((uVar71 - 1) * (uint)uVar111)) == -1);
      param_6 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
      uVar35 = iVar39 + uVar35;
      if (uVar35 == 0 || SCARRY4(iVar39,(uint)uVar71) != (int)uVar35 < 0) goto LAB_003f2856;
    }
    in_R10 = (ulong)uVar111;
    param_6 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
    param_1 = (pthread_mutex_t *)&(param_1->__data).__nusers;
    param_5 = (uint *)(ulong)uVar111;
    ppVar41 = (pthread_mutex_t *)(ulong)(uVar35 - 1);
    param_3 = (pthread_mutex_t *)0x0;
LAB_003f275d:
    do {
      uVar35 = (uint)((int)ppVar41 + (int)param_3) >> 1;
      uVar111 = (ushort)*(int *)((long)&(param_1->__data).__lock + in_R10 * uVar35);
      uVar36 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
      if ((uint)param_2 < uVar36) {
        ppVar41 = (pthread_mutex_t *)(ulong)(uVar35 - 1);
        if ((int)(uVar35 - 1) < (int)param_3) break;
        goto LAB_003f275d;
      }
      if (uVar36 == (uint)param_2) {
        param_6 = (pthread_mutex_t *)(param_1->__size + uVar35 * (int)param_5);
        break;
      }
      param_3 = (pthread_mutex_t *)(ulong)(uVar35 + 1);
    } while ((int)(uVar35 + 1) <= (int)ppVar41);
LAB_003f2856:
    ppVar41 = (pthread_mutex_t *)(param_6->__size + 2);
    if (param_6 == (pthread_mutex_t *)0x0) {
      ppVar41 = (pthread_mutex_t *)0x0;
    }
    return ppVar41;
  case 0x31:
    ppVar41 = *(pthread_mutex_t **)((long)&UINT_005e01b8 + uVar40);
  case 0x33:
    iVar39 = (*(code *)ppVar41)();
    ppStack_218 = (pthread_mutex_t *)0x0;
    ppStack_210 = (pthread_mutex_t *)0x0;
    ppStack_228 = (pthread_mutex_t *)0x0;
    local_220 = (hb_buffer_t *)0x0;
    phStack_238 = (hb_buffer_t *)0x0;
    local_230 = (pthread_mutex_t *)0x0;
    unaff_RBP = (pthread_mutex_t *)(ulong)(uint)-(iVar39 / 2);
    iVar39 = (**(code **)(*(long *)((long)unaff_RBX + 0x90) + 0x20))();
    if (iVar39 == 0) {
LAB_003f2b4e:
      ppVar41 = (pthread_mutex_t *)
                (ulong)(uint)(int)((double)*(int *)((long)unaff_RBX + 0x2c) * 0.8);
    }
    else {
      ppVar41 = (pthread_mutex_t *)((ulong)phStack_238 & 0xffffffff);
    }
LAB_003f2b62:
    (unaff_R15->__data).__lock = (unaff_R15->__data).__lock + (int)unaff_RBP;
    ((__pthread_mutex_s *)unaff_R14)->__lock =
         ((__pthread_mutex_s *)unaff_R14)->__lock - (int)ppVar41;
    return ppVar41;
  case 0x32:
  case 0x34:
  case 0x36:
  case 0x38:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
    return ppVar41;
  case 0x35:
    DAT_005e02b0 = 100;
    _DAT_005e01d8 = 0xffe0d854;
    UNK_005e0181 = 0x77;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e00fb = 0xff;
    UNK_005e00f9 = 0xf;
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    return ppVar41;
  case 0x37:
code_r0x003f2c08:
    uVar111 = (ushort)param_3;
    uVar35 = (int)in_R11 + (int)param_5;
    if (uVar35 != 0 && SCARRY4((int)in_R11,(int)param_5) == (int)uVar35 < 0) {
LAB_003f2c11:
      param_1 = (pthread_mutex_t *)&(param_1->__data).__nusers;
      param_5 = (uint *)(ulong)uVar111;
      in_R11 = (hb_buffer_t *)(ulong)(uVar35 - 1);
      param_3 = (pthread_mutex_t *)0x0;
LAB_003f2c3f:
      do {
        uVar35 = (uint)((int)in_R11 + (int)param_3) >> 1;
        ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
        uVar111 = *(ushort *)((long)&(param_1->__data).__lock + in_R10 * (long)ppVar61 + 2);
        if ((uint)param_2 < (uint)(ushort)(uVar111 << 8 | uVar111 >> 8)) {
LAB_003f2c30:
          uVar35 = (int)ppVar61 - 1;
          in_R11 = (hb_buffer_t *)(ulong)uVar35;
          if ((int)uVar35 < (int)param_3) break;
          goto LAB_003f2c3f;
        }
        uVar111 = (ushort)*(int *)((long)&(param_1->__data).__lock + in_R10 * (long)ppVar61);
        if ((uint)param_2 <= (uint)(ushort)(uVar111 << 8 | uVar111 >> 8)) {
          param_6 = (pthread_mutex_t *)(param_1->__size + uVar35 * (int)param_5);
          break;
        }
        param_3 = (pthread_mutex_t *)(ulong)(uVar35 + 1);
      } while ((int)(uVar35 + 1) <= (int)in_R11);
    }
LAB_003f2e1f:
    ppVar41 = (pthread_mutex_t *)&(param_6->__data).__count;
    if (param_6 == (pthread_mutex_t *)0x0) {
      ppVar41 = (pthread_mutex_t *)0x0;
    }
    return ppVar41;
  case 0x39:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
    return ppVar41;
  case 0x3a:
    param_1->__size[0] = param_1->__size[0] | 0x70;
    unaff_RBX = (pthread_mutex_t *)CONCAT62(uVar82,CONCAT11(0xc9,uVar33));
    uVar35 = *(uint *)&(unaff_RBX->__data).__list.__prev;
    param_3 = (pthread_mutex_t *)
              (unaff_RBX->__size +
              (uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18))
    ;
    ppVar61 = (pthread_mutex_t *)((long)unaff_R12 + 0x5e0170);
    bVar133 = (hb_buffer_t *)
              (param_3->__size + ((long)ppVar61 * 2 - *(long *)((long)unaff_R14 + 0x30)) + 2) <
              (hb_buffer_t *)(ulong)*(uint *)((long)unaff_R14 + 0x40);
    bVar134 = (hb_buffer_t *)
              (param_3->__size + ((long)ppVar61 * 2 - *(long *)((long)unaff_R14 + 0x30)) + 2) ==
              (hb_buffer_t *)(ulong)*(uint *)((long)unaff_R14 + 0x40);
code_r0x003f30b0:
    if (bVar133 || bVar134) {
      uVar111 = *(ushort *)((long)&(param_3->__data).__lock + (long)ppVar61 * 2);
      uVar36 = (uint)(short)(uVar111 << 8 | uVar111 >> 8);
      uVar35 = (unaff_RBX->__data).__owner;
      if (uVar35 == 0) {
        ppVar41 = (pthread_mutex_t *)(ulong)uVar36;
      }
      else {
        uVar37 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18
        ;
        uVar35 = uVar37 * 2;
        ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
        if ((!CARRY4(uVar37,uVar37)) &&
           (unaff_RBX = (pthread_mutex_t *)((long)&(unaff_RBX->__data).__lock + (ulong)uVar36),
           (ulong)((long)unaff_RBX - *(long *)((long)unaff_R14 + 0x30)) <=
           (ulong)*(uint *)((long)unaff_R14 + 0x40))) {
          uVar36 = *(int *)((long)unaff_R14 + 0x38) - (int)unaff_RBX;
          bVar133 = uVar35 < uVar36;
          bVar134 = uVar35 == uVar36;
code_r0x003f30f2:
          if ((bVar133 || bVar134) &&
             (iVar39 = *(int *)((long)unaff_R14 + 0x44) - (int)ppVar61,
             *(int *)((long)unaff_R14 + 0x44) = iVar39, 0 < iVar39)) {
            uVar111 = (ushort)(unaff_RBX->__data).__lock;
            ppVar41 = (pthread_mutex_t *)(ulong)(uint)(int)(short)(uVar111 << 8 | uVar111 >> 8);
          }
        }
      }
    }
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    return ppVar41;
  case 0x3b:
  case 0x3d:
  case 0x3f:
  case 0x41:
  case 0x43:
    if (!bVar134) {
      param_1->__size[0] = (byte)param_1->__size[0] >> 1 | param_1->__size[0] << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
    return (pthread_mutex_t *)0x0;
  case 0x3c:
code_r0x003f3175:
    uVar35 = (uint)ppVar41 + (uint)unaff_R15;
    if (((CARRY4((uint)ppVar41,(uint)unaff_R15)) ||
        (lVar75 = *(long *)((long)pphVar84 + -0x20),
        (ulong)*(uint *)in_R11 < (ulong)((long)param_5 - param_6->__align))) ||
       (((uint)((param_2->__data).__kind - (int)param_5) < uVar35 ||
        (iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) - uVar35,
        *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39, iVar39 < 1)))) {
LAB_003f312d:
      in_R10 = 0;
    }
    else {
      in_R10 = CONCAT71((int7)(in_R10 >> 8),1);
      if (unaff_R15 != (pthread_mutex_t *)0x0) {
        lVar79 = param_6->__align;
        phVar123 = (hb_buffer_t *)(ulong)*(uint *)in_R11;
        lVar68 = 0;
        do {
          if (phVar123 < (hb_buffer_t *)((long)param_5 + ((lVar68 + 2) - lVar79)))
          goto LAB_003f312d;
          uVar111 = *(ushort *)((long)&(param_1->__data).__lock + lVar68 + 2);
          uVar40 = (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
          lVar126 = uVar40 + lVar75 + 4;
          if ((ulong)*(uint *)in_R11 < (ulong)(lVar126 - param_6->__align)) goto LAB_003f312d;
          uVar35 = *(uint *)(uVar40 + lVar75);
          lVar79 = (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                          uVar35 << 0x18) * 4;
          uVar35 = (uint)lVar79;
          if ((int)((ulong)lVar79 >> 0x20) != 0) goto LAB_003f312d;
          lVar79 = param_6->__align;
          phVar123 = (hb_buffer_t *)(ulong)*(uint *)in_R11;
          if (((phVar123 < (hb_buffer_t *)(lVar126 - lVar79)) ||
              ((uint)((param_2->__data).__kind - (int)lVar126) < uVar35)) ||
             (iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) - uVar35,
             *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39, iVar39 < 1))
          goto LAB_003f312d;
          lVar68 = lVar68 + 2;
        } while ((long)unaff_R15 * 2 != lVar68);
      }
    }
    goto 
    AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
    ;
  case 0x3e:
    goto code_r0x003f3342;
  case 0x40:
    goto code_r0x003f35e9;
  case 0x42:
    goto code_r0x003f37a6;
  case 0x44:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
    return ppVar41;
  case 0x45:
    param_1->__size[0] = (byte)param_1->__size[0] >> 4 | param_1->__size[0] << 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4c:
  case 0x4e:
    (ppVar41->__data).__lock = (ppVar41->__data).__lock + uVar36;
    pbVar119 = &UNK_005e00fd + uVar40;
    bVar4 = *pbVar119;
    *pbVar119 = *pbVar119 + 0x70;
    if (bVar4 < 0x90) {
      hVar9 = (hb_buffer_t)ppVar41->__size[0];
      ppVar41 = (pthread_mutex_t *)(ulong)CONCAT11(bVar70 | (byte)hVar9,cVar34);
      *(hb_buffer_t *)((long)param_2 + -0x70) =
           (hb_buffer_t)((char)*(hb_buffer_t *)((long)param_2 + -0x70) + (bVar70 | (byte)hVar9));
      goto LAB_003f3cf0;
    }
code_r0x003f3cdf:
    param_1 = (pthread_mutex_t *)(ulong)(((int)param_3 + (int)ppVar61) - 1);
    param_3 = (pthread_mutex_t *)0x0;
    param_6 = (pthread_mutex_t *)&_hb_NullPool;
    goto LAB_003f3cf0;
  case 0x47:
    goto code_r0x003f398e;
  case 0x49:
    ppVar41 = (pthread_mutex_t *)((ulong)ppVar41 | (ulong)(uVar60 - 1));
    ppVar61 = (pthread_mutex_t *)0xffffffffffffffff;
    if (uVar37 < 0x7e00) {
      ppVar61 = ppVar41;
    }
    *(__pthread_mutex_s **)&((__pthread_mutex_s *)unaff_R14)->__kind = &ppVar61->__data;
    return ppVar41;
  case 0x4b:
    bVar133 = true;
    goto code_r0x003f3b84;
  case 0x4d:
    ppVar41 = (pthread_mutex_t *)((ulong)ppVar41 & 0xffffffffffffffd6);
    *(int *)((long)param_1 + -1) = *(int *)((long)param_1 + -1) + 1;
    goto LAB_003f3c81;
  case 0x4f:
    vpsubsw_avx(in_XMM15,*(undefined1 (*) [16])((long)param_3 + -1));
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x50:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x51:
    ppVar41->__size[0] = ppVar41->__size[0] + cVar34;
    pphVar85 = &phStack_238;
    unaff_RBP = (pthread_mutex_t *)&param_2->__data;
    goto code_r0x003f3f23;
  case 0x52:
    goto code_r0x003f4521;
  case 0x53:
  case 0x55:
    if (uVar111 == 0) {
      UNK_005e00f9 = 0xf;
      UNK_005e00fb = 0xff;
      _DAT_005e0170 = 0xffe07709ffe07559;
      UNK_005e0181 = 0x77;
      _DAT_005e01d8 = 0xffe0d854;
      DAT_005e02b0 = 100;
      return ppVar41;
    }
    uVar71 = *(ushort *)((long)&(unaff_RBX->__data).__lock + 2);
    if (uVar71 == 0xffff) {
      UNK_005e00f9 = 0xf;
      UNK_005e00fb = 0xff;
      _DAT_005e0170 = 0xffe07709ffe07559;
      UNK_005e0181 = 0x77;
      _DAT_005e01d8 = 0xffe0d854;
      DAT_005e02b0 = 100;
      return ppVar41;
    }
    uVar71 = uVar71 << 8 | uVar71 >> 8;
    ppVar41 = (pthread_mutex_t *)
              hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
              ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                           *)unaff_R14,(uint)uVar71,
                          ((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) + (uint)uVar71) - 1);
    return ppVar41;
  case 0x54:
    goto code_r0x003f45bb;
  case 0x56:
    goto code_r0x003f4b9f;
  case 0x57:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x58:
  case 0x5a:
  case 0x5c:
  case 0x5e:
  case 0x60:
    goto code_r0x003f5137;
  case 0x59:
code_r0x003f4ec3:
    if ((int)param_3 < 1) {
LAB_003f4e62:
      param_5 = (uint *)0x0;
    }
    else if ((int)param_6 != 0) {
      in_R10 = (ulong)(*(int *)((long)unaff_R12 + 0x38) + 7U >> 3);
      param_6 = (pthread_mutex_t *)((ulong)in_R11 & 0xffffffff);
      param_1 = (pthread_mutex_t *)&(param_2->__data).__count;
      unaff_RBP = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
LAB_003f4efd:
      do {
        uVar35 = (&(param_2->__data).__lock)[(long)&unaff_RBP->__data];
        if (1 < (uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18
                ) + 1) {
          param_3 = (pthread_mutex_t *)((long)param_1 - (long)unaff_RBX->__size);
code_r0x003f4f12:
          if (ppVar61 < param_3) goto LAB_003f4e62;
          uVar35 = (&(param_2->__data).__lock)[(long)&unaff_RBP->__data];
          ppVar41 = (pthread_mutex_t *)
                    ((long)&(param_2->__data).__lock +
                    (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                           uVar35 << 0x18));
          unaff_RBX = *(pthread_mutex_t **)((long)unaff_R12 + 8);
          param_3 = ppVar41;
code_r0x003f4f2b:
          ppVar61 = (pthread_mutex_t *)(ulong)*(uint *)&(unaff_R12->__data).__list.__prev;
          if ((ppVar61 < (pthread_mutex_t *)((long)ppVar41 - (long)unaff_RBX->__size)) ||
             ((uint)((unaff_R12->__data).__kind - (int)param_3) < (uint)in_R10)) goto LAB_003f4e62;
code_r0x003f4f4c:
          iVar39 = *(int *)((long)&(unaff_R12->__data).__list.__prev + 4) - (int)in_R10;
          *(int *)((long)&(unaff_R12->__data).__list.__prev + 4) = iVar39;
          if (iVar39 < 1) goto LAB_003f4e62;
        }
        unaff_RBP = (pthread_mutex_t *)(unaff_RBP->__size + 1);
        param_1 = (pthread_mutex_t *)&(param_1->__data).__count;
      } while (param_6 != unaff_RBP);
    }
LAB_003f4f62:
    ppVar41 = (pthread_mutex_t *)((ulong)param_5 & 0xffffffff);
code_r0x003f4f71:
    return ppVar41;
  case 0x5b:
    ppVar41->__size[0] = ppVar41->__size[0] + cVar34;
    (&UNK_005e00f3)[uVar40] = (&UNK_005e00f3)[uVar40] + 'p';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5d:
code_r0x003f50cd:
    iVar39 = (int)ppVar61;
    iVar104 = (int)param_3;
    if (((short)ppVar41 != 0) &&
       (uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2),
       uVar40 = (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (iVar104 + (int)param_6)),
       *(short *)((long)&(param_1->__data).__nusers + uVar40) == -1)) {
      iVar39 = -(uint)(*(short *)((long)&(param_1->__data).__nusers + uVar40 + 2) == -1);
    }
    if (iVar39 + iVar104 != 0) {
      in_R10 = (ulong)((iVar39 + iVar104) - 1);
      unaff_R12 = (pthread_mutex_t *)0x0;
      unaff_R15 = (pthread_mutex_t *)&_hb_NullPool;
      unaff_R14 = (uint *)0x4;
      while( true ) {
        uVar111 = (ushort)ppVar41;
        uVar71 = uVar111 << 8 | uVar111 >> 8;
        param_3 = (pthread_mutex_t *)(ulong)uVar71;
        uVar35 = (uint)uVar71;
        iVar39 = 0;
        if (uVar111 != 0) {
code_r0x003f5133:
          unaff_RBX = (pthread_mutex_t *)(ulong)(uint)((int)param_3 + (int)param_6);
code_r0x003f5137:
          uVar35 = (uint)param_3;
          uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
          ppVar41 = (pthread_mutex_t *)
                    (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (int)unaff_RBX);
          iVar39 = 0;
          if (*(short *)((long)&(param_1->__data).__nusers + (long)&ppVar41->__data) == -1) {
code_r0x003f5152:
            uVar35 = (uint)param_3;
            iVar39 = -(uint)(*(short *)((hb_buffer_t *)((long)param_5 + 2) + (long)&ppVar41->__data)
                            == -1);
          }
        }
        ppVar61 = unaff_R15;
        if ((uint)unaff_R12 < iVar39 + uVar35) {
          uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
          ppVar61 = (pthread_mutex_t *)
                    ((long)&((__pthread_mutex_s *)param_5)->__lock +
                    (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (uint)unaff_R12));
        }
        phVar123 = (hb_buffer_t *)(ulong)*(uint *)&(param_2->__data).__list.__prev;
        bVar133 = (hb_buffer_t *)(ppVar61->__size + (6 - *(long *)((long)param_2 + 8))) < phVar123;
        bVar134 = (hb_buffer_t *)(ppVar61->__size + (6 - *(long *)((long)param_2 + 8))) == phVar123;
code_r0x003f518e:
        if (!bVar133 && !bVar134) goto LAB_003f4fbb;
        uVar111 = *(ushort *)((long)&(ppVar61->__data).__lock + 2);
        param_3 = (pthread_mutex_t *)(ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
        ppVar41 = (pthread_mutex_t *)(ulong)(ushort)(ppVar61->__data).__lock;
code_r0x003f519f:
        uVar111 = (ushort)ppVar41 << 8 | (ushort)ppVar41 >> 8;
        ppVar41 = (pthread_mutex_t *)(ulong)uVar111;
        if (uVar111 < (ushort)param_3) goto LAB_003f4fbb;
code_r0x003f51ac:
        if ((hb_buffer_t *)(ulong)*(uint *)&(param_2->__data).__list.__prev <
            (hb_buffer_t *)(ppVar61->__size + (6 - *(long *)((long)param_2 + 8))))
        goto LAB_003f4fbb;
code_r0x003f51c3:
        lVar75 = (ulong)((((uint)ppVar41 & 0xffff) - ((uint)param_3 & 0xffff)) + 1) *
                 ((ulong)unaff_R14 & 0xffffffff);
        uVar35 = (uint)lVar75;
        if ((((int)((ulong)lVar75 >> 0x20) != 0) ||
            (uVar111 = (ushort)(ppVar61->__data).__count,
            puVar80 = (undefined *)
                      ((long)&(param_1->__data).__lock +
                      (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8)),
            (ulong)*(uint *)&(param_2->__data).__list.__prev <
            (ulong)((long)puVar80 - *(long *)((long)param_2 + 8)))) ||
           ((uint)((param_2->__data).__kind - (int)puVar80) < uVar35)) goto LAB_003f4fbb;
code_r0x003f5205:
        iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) - uVar35;
        *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39;
        if (iVar39 < 1) goto LAB_003f4fbb;
code_r0x003f5215:
        if ((int)in_R10 == (int)unaff_R12) break;
        ppVar41 = (pthread_mutex_t *)(ulong)(ushort)(param_1->__data).__count;
        unaff_R12 = (pthread_mutex_t *)(ulong)((int)unaff_R12 + 1);
      }
    }
    goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
  case 0x5f:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
    return ppVar41;
  case 0x61:
    bVar133 = uVar36 < uVar37;
    bVar134 = uVar36 == uVar37;
    goto code_r0x003f518e;
  case 0x62:
code_r0x003f7eed:
    pphVar85 = pphVar90;
    goto LAB_003f7eeb;
  default:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x69:
    pphVar85 = &phStack_238;
    goto code_r0x003f7e92;
  case 0x6a:
                    /* WARNING (jumptable): Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0171) is written */
    _DAT_005e0170 = CONCAT71(0xffe07709ffe075,cVar34) | 0x59;
    ppVar41->__size[0] = ppVar41->__size[0] + cVar34;
    param_1->__size[0] = param_1->__size[0] | 0x70;
    phVar123 = (hb_buffer_t *)((long)unaff_RBX + 0x18247c);
    *phVar123 = (hb_buffer_t)((char)*phVar123 + cVar34 + ppVar41->__size[0]);
    bVar133 = *phVar123 == (hb_buffer_t)0x0;
    goto code_r0x003f7f5e;
  case 0x6d:
    goto code_r0x003f7fa2;
  case 0x7b:
                    /* WARNING (jumptable): Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
    UNK_005e00fb = cVar34 + -1;
    ppVar41 = (pthread_mutex_t *)CONCAT71(uVar76,cVar34 + '\x1f');
    pphVar85 = &phStack_238;
    goto code_r0x003f7fb9;
  case 0x7c:
    param_1->__size[0] = param_1->__size[0] + 'p';
    pcVar55 = (char *)(CONCAT71(uVar76,cVar34 + ppVar41->__size[0]) + -0x75);
    *pcVar55 = *pcVar55 + 'p';
    goto code_r0x003f7f64;
  case 0x80:
    (param_2->__data).__lock = (param_2->__data).__lock - (uint)bVar133;
    pphVar85 = &phStack_238;
    goto code_r0x003f7f73;
  case 0x9c:
    ppVar41->__size[0] = ppVar41->__size[0] + cVar34;
    cRamffffffff8ceb4a5a = cRamffffffff8ceb4a5a + 'p';
    ppVar41 = (pthread_mutex_t *)((ulong)ppVar41 & 0xffffffffffffffd0);
    ppVar41->__size[0] = ppVar41->__size[0] + (byte)ppVar41;
    *(hb_buffer_t *)((long)unaff_RBP + -0x357af040) =
         (hb_buffer_t)((byte)*(hb_buffer_t *)((long)unaff_RBP + -0x357af040) ^ (byte)ppVar41);
    (ppVar41->__data).__lock = (ppVar41->__data).__lock + (int)ppVar41;
code_r0x003f7fa7:
    *(hb_buffer_t *)((long)ppVar41 + -0x7d) =
         (hb_buffer_t)((char)*(hb_buffer_t *)((long)ppVar41 + -0x7d) + (char)ppVar61);
    return ppVar41;
  case 0x9e:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa0:
    goto code_r0x003f7fc6;
  case 0xbc:
    UNK_005e00f9 = 0xf;
    UNK_005e00fb = 0xff;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e0181 = 0x77;
    _DAT_005e01d8 = 0xffe0d854;
    DAT_005e02b0 = 100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbe:
    pbVar119 = (byte *)CONCAT71(0x5e01,(char)*(hb_buffer_t *)((long)unaff_RBP + 0x17805e4) + 'p');
    *pbVar119 = *pbVar119 ^ 0xdb;
    pphVar85 = &phStack_238;
    goto code_r0x003f7f73;
  case 0xbf:
    uVar33 = in(uVar71);
    ppVar41 = (pthread_mutex_t *)CONCAT71(uVar76,uVar33);
    pphVar97 = &phStack_238;
    goto LAB_003f7d30;
  case 0xc0:
    *(hb_buffer_t *)(param_2->__size + 0xf) =
         (hb_buffer_t)((char)*(hb_buffer_t *)(param_2->__size + 0xf) + bVar70 + bVar133);
    out((param_2->__data).__lock,uVar71);
    ppVar41->__size[0] = ppVar41->__size[0] + cVar34;
                    /* WARNING (jumptable): Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
    _DAT_005e0170 = (ulong)in_ST0;
    pphVar97 = &phStack_238;
    param_2 = (pthread_mutex_t *)((long)&param_2->__align + 4);
    goto LAB_003f7d30;
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
    goto code_r0x003f7cac;
  case 0xd1:
    goto code_r0x003f7dad;
  case 0xd2:
    param_1->__size[0] = param_1->__size[0] + 'p';
    iStack_168 = iStack_168 - uVar36;
    pphVar85 = &phStack_238;
    goto code_r0x003f7dc5;
  case 0xd3:
  case 0xd5:
    ppVar41->__size[0] = ppVar41->__size[0] + cVar34;
    goto code_r0x003fd016;
  case 0xd4:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
    bVar133 = false;
code_r0x003fd010:
    pphVar96 = pphVar95;
    if (bVar133) {
      param_5 = (uint *)0x0;
      goto LAB_003fd449;
    }
code_r0x003fd016:
    param_5 = *(uint **)&(ppVar61->__data).__kind;
    pphVar95 = pphVar96;
LAB_003fd449:
    ppVar61 = (pthread_mutex_t *)((long)pphVar95 + 0xd0);
    *(undefined8 *)((long)pphVar95 + -8) = 0x3fd45b;
    iVar39 = (*(code *)ppVar41)(unaff_R12,param_2,0x20);
    auVar165._8_8_ = extraout_XMM1_Qb_55;
    auVar165._0_8_ = extraout_XMM1_Qa_39;
    auVar153._8_8_ = extraout_XMM0_Qb_21;
    auVar153._0_8_ = extraout_XMM0_Qa_38;
    plVar108 = *(long **)((long)pphVar95 + 0x28);
    plVar124 = *(long **)((long)pphVar95 + 0x48);
    uVar48 = extraout_XMM0_Qa_38;
    uVar44 = extraout_XMM1_Qa_39;
    if (iVar39 == 0) {
      uVar36 = **(uint **)((long)pphVar95 + 0x38);
LAB_003fd4be:
      uVar44 = auVar165._0_8_;
      uVar48 = auVar153._0_8_;
      if (uVar36 == 0) {
        param_5 = (uint *)0x0;
      }
      else {
        ppVar41 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
        param_5 = (uint *)0x0;
        do {
          ppVar61 = (pthread_mutex_t *)*plVar108;
          iVar39 = (int)param_5;
          if (((ppVar61->__size[(long)ppVar41 * 0x14 + 0x10] & 0x20U) == 0) ||
             ((ppVar61->__size[(long)ppVar41 * 0x14 + 0xc] & 0x10U) != 0)) {
            if (ppVar41 != (pthread_mutex_t *)param_5) {
              piVar49 = &(ppVar61->__data).__lock + (long)ppVar41 * 5;
              (&(ppVar61->__data).__kind)[(long)param_5 * 5] = piVar49[4];
              uVar44 = *(undefined8 *)(piVar49 + 2);
              *(undefined8 *)(&(ppVar61->__data).__lock + (long)param_5 * 5) =
                   *(undefined8 *)piVar49;
              *(undefined8 *)(&(ppVar61->__data).__lock + (long)param_5 * 5 + 2) = uVar44;
              lVar75 = *plVar124;
              uVar35 = *(uint *)(lVar75 + 0x10 + (long)ppVar41 * 0x14);
              ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
              *(uint *)(lVar75 + 0x10 + (long)param_5 * 0x14) = uVar35;
              auVar153 = *(undefined1 (*) [16])(lVar75 + (long)ppVar41 * 0x14);
              *(undefined1 (*) [16])(lVar75 + (long)param_5 * 0x14) = auVar153;
            }
            param_5 = (uint *)(ulong)(iVar39 + 1);
          }
          else {
            uVar35 = (&(ppVar61->__data).__owner)[(long)ppVar41 * 5];
            if ((pthread_mutex_t *)(ppVar41->__size + 1) < (pthread_mutex_t *)(ulong)uVar36) {
              if (uVar35 != (&(ppVar61->__data).__owner)[(long)(ppVar41->__size + 1) * 5]) {
                if (iVar39 != 0) goto LAB_003fd57f;
                *(undefined8 *)((long)pphVar95 + -8) = 0x3fd52a;
                auVar261 = hb_buffer_t::merge_clusters_impl
                                     ((hb_buffer_t *)unaff_R13,(uint)ppVar41,(uint)ppVar41 + 2);
                auVar165._0_8_ = auVar261._8_8_;
                auVar153._0_8_ = auVar261._0_8_;
                auVar165._8_8_ = extraout_XMM1_Qb_56;
                auVar153._8_8_ = extraout_XMM0_Qb_22;
                plVar124 = *(long **)((long)pphVar95 + 0x48);
                plVar108 = *(long **)((long)pphVar95 + 0x28);
                param_5 = (uint *)0x0;
              }
            }
            else if (iVar39 == 0) {
              param_5 = (uint *)0x0;
            }
            else {
LAB_003fd57f:
              uVar37 = (&(ppVar61->__data).__owner)[(ulong)(iVar39 - 1) * 5];
              if (uVar35 < uVar37) {
                uVar60 = (&(ppVar61->__data).__count)[(long)ppVar41 * 5];
                ppVar61 = (pthread_mutex_t *)((long)&ppVar61->__data + (long)param_5 * 0x14 + -0xc);
                ppVar81 = (pthread_mutex_t *)param_5;
                do {
                  if ((ppVar61->__data).__lock != uVar37) break;
                  ppVar81 = (pthread_mutex_t *)((long)ppVar81 + -1);
                  *(uint *)((long)ppVar61 + -4) =
                       *(uint *)((long)ppVar61 + -4) & 0xfffffff8 | uVar60 & 7;
                  (ppVar61->__data).__lock = uVar35;
                  ppVar61 = (pthread_mutex_t *)((long)ppVar61 + -0x14);
                } while (ppVar81 != (pthread_mutex_t *)0x0);
              }
            }
          }
          uVar44 = auVar165._0_8_;
          uVar48 = auVar153._0_8_;
          ppVar41 = (pthread_mutex_t *)(ppVar41->__size + 1);
        } while (ppVar41 != (pthread_mutex_t *)(ulong)uVar36);
      }
      **(undefined4 **)((long)pphVar95 + 0x38) = (int)param_5;
    }
    else {
LAB_003fd469:
      if ((int)unaff_RBP != 0) {
        ppVar61 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
        do {
          if ((((byte)((hb_buffer_t *)(unaff_RBX->__size + 0x10))[(long)ppVar61->__size] & 0x20) !=
               0) && (((byte)((hb_buffer_t *)(unaff_RBX->__size + 0xc))[(long)ppVar61->__size] &
                      0x10) == 0)) {
            *(undefined4 *)(unaff_RBX->__size + (long)ppVar61->__size) =
                 *(undefined4 *)((long)pphVar95 + 0xd0);
          }
          ppVar61 = (pthread_mutex_t *)((long)ppVar61 + 0x14);
        } while ((pthread_mutex_t *)((long)unaff_RBP * 0x14) != ppVar61);
      }
    }
LAB_003fd5ea:
    if (*(long *)(*(long *)((long)unaff_R15 + 0x80) + 0x28) != 0) {
      *(undefined8 *)((long)pphVar95 + -8) = 0x3fd60c;
      bVar133 = hb_buffer_t::message
                          (uVar48,uVar44,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                           in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)unaff_R13,unaff_R12,
                           "start postprocess-glyphs",ppVar61,param_5,plVar108,
                           *(undefined1 *)pphVar95);
      if (bVar133) {
        pcVar74 = *(code **)(*(long *)((long)unaff_R15 + 0x80) + 0x28);
        *(undefined8 *)((long)pphVar95 + -8) = 0x3fd625;
        auVar261 = (*pcVar74)(*(undefined8 *)((long)pphVar95 + 0x60),unaff_R13,unaff_R12);
        *(undefined8 *)((long)pphVar95 + -8) = 0x3fd639;
        hb_buffer_t::message
                  (auVar261._0_8_,auVar261._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                   in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)unaff_R13,unaff_R12,
                   "end postprocess-glyphs",ppVar61,param_5,plVar108,*(undefined1 *)pphVar95);
      }
    }
    auVar261 = _DAT_005de080;
    if (((*(byte *)((long)unaff_R13 + 0xc0) & 0x20) != 0) &&
       (uVar35 = *(uint *)(*(long *)((long)pphVar95 + 0x10) + 0x60), uVar35 != 0)) {
      uVar36 = *(uint *)(*(long *)((long)pphVar95 + 0x10) + 0x18);
      lVar75 = *(long *)(*(long *)((long)pphVar95 + 0x10) + 0x70);
      uVar40 = 0;
      piVar49 = (int *)(lVar75 + 8);
      do {
        if (uVar35 - 1 == uVar40) {
          uVar40 = (ulong)uVar35;
          break;
        }
        iVar39 = *piVar49;
        uVar40 = uVar40 + 1;
        piVar1 = piVar49 + 5;
        piVar49 = piVar49 + 5;
      } while (iVar39 == *piVar1);
      lVar79 = lVar75 + 4;
      if ((uVar36 & 0x80) == 0) {
        uVar132 = 0;
        do {
          uVar37 = (uint)uVar40;
          uVar127 = uVar40 & 0xffffffff;
          if ((uint)uVar132 < uVar37) {
            uVar118 = uVar40 & 0xffffffff;
            uVar117 = uVar118 - uVar132;
            uVar60 = 0;
            uVar67 = uVar132;
            if (8 < uVar117) {
              uVar67 = (ulong)((uint)uVar117 & 7);
              if (uVar67 == 0) {
                uVar67 = 8;
              }
              lVar68 = (uVar67 + uVar132) - uVar118;
              puVar45 = (undefined4 *)(lVar75 + 0x90 + uVar132 * 0x14);
              auVar166 = (undefined1  [16])0x0;
              auVar204 = (undefined1  [16])0x0;
              do {
                auVar250._12_4_ = puVar45[-0x14];
                auVar250._8_4_ = puVar45[-0x19];
                auVar250._4_4_ = puVar45[-0x1e];
                auVar250._0_4_ = puVar45[-0x23];
                auVar253._12_4_ = *puVar45;
                auVar253._8_4_ = puVar45[-5];
                auVar253._4_4_ = puVar45[-10];
                auVar253._0_4_ = puVar45[-0xf];
                auVar166 = auVar166 | auVar250 & auVar261;
                auVar204 = auVar204 | auVar253 & auVar261;
                puVar45 = puVar45 + 0x28;
                lVar68 = lVar68 + 8;
              } while (lVar68 != 0);
              uVar67 = (uVar117 - uVar67) + uVar132;
              auVar204 = auVar204 | auVar166;
              auVar167._0_8_ = auVar204._8_8_;
              auVar167._8_4_ = auVar204._8_4_;
              auVar167._12_4_ = auVar204._12_4_;
              uVar60 = SUB164(auVar167 | auVar204,4) | SUB164(auVar167 | auVar204,0);
            }
            lVar68 = uVar118 - uVar67;
            puVar65 = (uint *)(lVar79 + uVar67 * 0x14);
            do {
              uVar60 = uVar60 | *puVar65 & 7;
              puVar65 = puVar65 + 5;
              lVar68 = lVar68 + -1;
            } while (lVar68 != 0);
            uVar105 = uVar60 & 0xfffffffd;
            if ((uVar36 & 0x40) != 0) {
              uVar105 = uVar60;
            }
            uVar67 = ~uVar132;
            if ((uVar117 & 3) != 0) {
              puVar65 = (uint *)(lVar79 + uVar132 * 0x14);
              lVar68 = 0;
              do {
                *puVar65 = uVar105;
                lVar68 = lVar68 + -1;
                puVar65 = puVar65 + 5;
              } while (-lVar68 != (uVar117 & 3));
              uVar132 = uVar132 - lVar68;
            }
            if (2 < uVar67 + uVar118) {
              lVar68 = uVar118 - uVar132;
              puVar65 = (uint *)(lVar75 + 0x40 + uVar132 * 0x14);
              do {
                puVar65[-0xf] = uVar105;
                puVar65[-10] = uVar105;
                puVar65[-5] = uVar105;
                *puVar65 = uVar105;
                puVar65 = puVar65 + 0x14;
                lVar68 = lVar68 + -4;
              } while (lVar68 != 0);
            }
          }
          uVar60 = uVar37 + 1;
          if (uVar37 + 1 < uVar35) {
            uVar60 = uVar35;
          }
          uVar132 = uVar40 & 0xffffffff;
          do {
            uVar105 = (int)uVar132 + 1;
            uVar40 = (ulong)uVar105;
            if (uVar35 <= uVar105) {
              uVar40 = (ulong)uVar60;
              break;
            }
            lVar68 = uVar132 * 0x14;
            uVar132 = uVar40;
          } while (*(int *)(lVar75 + 8 + lVar68) == *(int *)(lVar75 + 8 + (ulong)uVar105 * 0x14));
          uVar132 = uVar127;
        } while (uVar37 < uVar35);
      }
      else {
        uVar132 = 0;
        do {
          uVar105 = (uint)uVar40;
          uVar67 = uVar40 & 0xffffffff;
          uVar37 = (uint)uVar132;
          uVar127 = uVar40 & 0xffffffff;
          uVar60 = 0;
          if (uVar37 < uVar105) {
            uVar118 = uVar127 - uVar132;
            uVar60 = 0;
            if (uVar118 < 9) {
              uVar118 = uVar132;
            }
            else {
              uVar117 = (ulong)((uint)uVar118 & 7);
              if (uVar117 == 0) {
                uVar117 = 8;
              }
              lVar68 = (uVar117 + uVar132) - uVar127;
              puVar45 = (undefined4 *)(lVar75 + 0x90 + uVar132 * 0x14);
              auVar166 = (undefined1  [16])0x0;
              auVar204 = (undefined1  [16])0x0;
              do {
                auVar251._12_4_ = puVar45[-0x14];
                auVar251._8_4_ = puVar45[-0x19];
                auVar251._4_4_ = puVar45[-0x1e];
                auVar251._0_4_ = puVar45[-0x23];
                auVar254._12_4_ = *puVar45;
                auVar254._8_4_ = puVar45[-5];
                auVar254._4_4_ = puVar45[-10];
                auVar254._0_4_ = puVar45[-0xf];
                auVar166 = auVar166 | auVar251 & auVar261;
                auVar204 = auVar204 | auVar254 & auVar261;
                puVar45 = puVar45 + 0x28;
                lVar68 = lVar68 + 8;
              } while (lVar68 != 0);
              uVar118 = (uVar118 - uVar117) + uVar132;
              auVar204 = auVar204 | auVar166;
              auVar168._0_8_ = auVar204._8_8_;
              auVar168._8_4_ = auVar204._8_4_;
              auVar168._12_4_ = auVar204._12_4_;
              uVar60 = SUB164(auVar168 | auVar204,4) | SUB164(auVar168 | auVar204,0);
            }
            lVar68 = uVar127 - uVar118;
            puVar65 = (uint *)(lVar79 + uVar118 * 0x14);
            do {
              uVar60 = uVar60 | *puVar65 & 7;
              puVar65 = puVar65 + 5;
              lVar68 = lVar68 + -1;
            } while (lVar68 != 0);
          }
          uVar77 = uVar60 & 0xfffffffb;
          if ((uVar60 & 1) == 0) {
            uVar77 = uVar60;
          }
          uVar60 = uVar77 | 3;
          if ((uVar77 & 4) == 0) {
            uVar60 = uVar77;
          }
          uVar77 = uVar60 & 0xfffffffd;
          if ((uVar36 & 0x40) != 0) {
            uVar77 = uVar60;
          }
          if (uVar37 < uVar105) {
            uVar118 = ~uVar132;
            if ((uVar105 - uVar37 & 3) != 0) {
              puVar65 = (uint *)(lVar79 + uVar132 * 0x14);
              lVar68 = 0;
              do {
                *puVar65 = uVar77;
                lVar68 = lVar68 + -1;
                puVar65 = puVar65 + 5;
              } while (-lVar68 != ((ulong)(uVar105 - uVar37) & 3));
              uVar132 = uVar132 - lVar68;
            }
            if (2 < uVar118 + uVar127) {
              lVar68 = uVar127 - uVar132;
              puVar65 = (uint *)(lVar75 + 0x40 + uVar132 * 0x14);
              do {
                puVar65[-0xf] = uVar77;
                puVar65[-10] = uVar77;
                puVar65[-5] = uVar77;
                *puVar65 = uVar77;
                puVar65 = puVar65 + 0x14;
                lVar68 = lVar68 + -4;
              } while (lVar68 != 0);
            }
          }
          uVar37 = uVar105 + 1;
          if (uVar105 + 1 < uVar35) {
            uVar37 = uVar35;
          }
          uVar132 = uVar40 & 0xffffffff;
          do {
            if (uVar37 - 1 == (int)uVar132) {
              uVar40 = (ulong)uVar37;
              break;
            }
            uVar40 = (ulong)((int)uVar132 + 1);
            lVar68 = uVar132 * 0x14;
            uVar132 = uVar40;
          } while (*(int *)(lVar75 + 8 + lVar68) == *(int *)(lVar75 + 8 + uVar40 * 0x14));
          uVar132 = uVar67;
        } while (uVar105 < uVar35);
      }
    }
    lVar75 = *(long *)((long)pphVar95 + 0x10);
    *(undefined4 *)(lVar75 + 0x38) = *(undefined4 *)((long)pphVar95 + 0x84);
    *(undefined8 *)(lVar75 + 0xc4) = 0x1fffffff3fffffff;
    *(undefined2 *)(lVar75 + 0xb8) = 0;
    return (pthread_mutex_t *)0x1;
  case 0xd6:
    DAT_005e02b0 = 100;
    _DAT_005e01d8 = 0xffe0d854;
    UNK_005e0181 = 0x77;
    _DAT_005e0170 = 0xffe07709ffe07559;
    UNK_005e00fb = 0xff;
    UNK_005e00f9 = 0xf;
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    return ppVar41;
  }
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
  return ppVar41;
code_r0x003eeb7e:
  *(undefined8 *)((long)pphVar83 + 0x38) = *(undefined8 *)((long)unaff_RBP + 0x70);
  *(undefined8 *)((long)pphVar83 + 0x50) = *(undefined8 *)((long)unaff_RBP + 0x80);
  unaff_RBX = (pthread_mutex_t *)0x0;
  do {
    iVar39 = (int)unaff_RBX;
    ppVar61 = *(pthread_mutex_t **)((long)pphVar83 + 0x38);
    if (((&(ppVar61->__data).__count)[(long)unaff_RBX * 5] & *(uint *)((long)pphVar83 + 8)) == 0) {
      unaff_RBX = (pthread_mutex_t *)(ulong)(iVar39 + 1);
    }
    else {
      *(int *)((long)pphVar83 + 0x88) = iVar39;
      lVar75 = *(long *)((long)pphVar83 + 0x90);
      ppVar61 = *(pthread_mutex_t **)(lVar75 + 0xa0);
      iVar104 = *(int *)((long)ppVar61 + 0x60);
      *(int *)((long)pphVar83 + 0xc0) = iVar104;
      iVar125 = *(int *)((long)ppVar61 + 0x5c);
      *(long *)((long)pphVar83 + 0x40) = (long)unaff_RBX * 5;
      if (iVar125 == iVar39) {
        uVar33 = *(undefined1 *)(*(long *)((long)ppVar61 + 0x70) + 0xf + (long)unaff_RBX * 0x14);
      }
      else {
        uVar33 = 0;
      }
      if (*(char *)((long)pphVar83 + 0xa3) == '\0') {
        uVar33 = 0;
      }
      *(undefined1 *)((long)pphVar83 + 0xa4) = uVar33;
      iVar104 = iVar104 + -1;
      if (iVar39 < iVar104) {
        *(int *)((long)pphVar83 + 0x30) = iVar39;
        ppVar41 = unaff_RBX;
        do {
          uVar35 = (int)unaff_RBX + 1;
          uVar40 = (ulong)uVar35;
          *(uint *)((long)pphVar83 + 0x88) = uVar35;
          lVar79 = *(long *)((long)ppVar61 + 0x70);
          uVar35 = *(uint *)((long)pphVar83 + 0x98);
          uVar111 = *(ushort *)(lVar79 + 0xc + uVar40 * 0x14);
          ppVar61 = (pthread_mutex_t *)(ulong)uVar111;
          if ((uVar35 & uVar111 & 0xe) != 0) goto LAB_003f088e;
          puVar65 = (uint *)(lVar79 + uVar40 * 0x14);
          if ((uVar111 & 8) == 0) {
LAB_003f07a9:
            lVar75 = lVar79 + uVar40 * 0x14;
            uVar111 = *(ushort *)(lVar79 + 0x10 + uVar40 * 0x14);
            uVar71 = 0;
            bVar133 = false;
            if (((((uVar111 & 0x20) != 0) &&
                 (bVar133 = false, (*(byte *)(lVar75 + 0xc) & 0x10) == 0)) &&
                ((*(char *)((long)pphVar83 + 0xa0) != '\0' ||
                 (bVar133 = false, (uVar111 & 0x21f) != 0x201)))) &&
               ((*(char *)((long)pphVar83 + 0xa1) != '\0' ||
                (bVar133 = false, (uVar111 & 0x11f) != 0x101)))) {
              bVar133 = (uVar111 & 0x40) == 0 || *(char *)((long)pphVar83 + 0xa2) != '\0';
            }
            ppVar61 = *(pthread_mutex_t **)((long)pphVar83 + 0xb8);
            if (ppVar61 != (pthread_mutex_t *)0x0) {
              uVar111 = (ushort)(ppVar61->__data).__lock;
              uVar71 = uVar111 << 8 | uVar111 >> 8;
            }
            if (((*(uint *)(lVar79 + 4 + uVar40 * 0x14) & *(uint *)((long)pphVar83 + 0x9c)) != 0) &&
               ((*(char *)((long)pphVar83 + 0xa4) == '\0' ||
                (*(char *)((long)pphVar83 + 0xa4) == *(char *)(lVar75 + 0xf))))) {
              if (*(code **)((long)pphVar83 + 0xa8) == (code *)0x0) {
                if (bVar133) goto LAB_003f088e;
              }
              else {
                *(undefined8 *)((long)pphVar83 + -8) = 0x3f087d;
                cVar34 = (**(code **)((long)pphVar83 + 0xa8))
                                   (puVar65,uVar71,*(undefined8 *)((long)pphVar83 + 0xb0));
                in_XMM1._8_8_ = extraout_XMM1_Qb_08;
                in_XMM1._0_8_ = extraout_XMM1_Qa_05;
                in_XMM0._8_8_ = extraout_XMM0_Qb_06;
                in_XMM0._0_8_ = extraout_XMM0_Qa_03;
                ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar83 + 0x30);
                if (cVar34 == '\0') goto LAB_003f0885;
                ppVar61 = *(pthread_mutex_t **)((long)pphVar83 + 0xb8);
              }
              if (ppVar61 != (pthread_mutex_t *)0x0) {
                *(hb_buffer_t **)((long)pphVar83 + 0xb8) = (hb_buffer_t *)(ppVar61->__size + 2);
              }
              uVar35 = *(uint *)(*(long *)((long)pphVar83 + 0x38) +
                                *(long *)((long)pphVar83 + 0x40) * 4);
              unaff_R15 = *(pthread_mutex_t **)((long)pphVar83 + 0x10);
              ppVar61 = (pthread_mutex_t *)(ulong)(uVar35 >> 4);
              unaff_RBP = *(pthread_mutex_t **)((long)pphVar83 + 0x20);
              if ((((*(ulong *)((long)unaff_R15 + 0xb0) >> ((ulong)ppVar61 & 0x3f) & 1) != 0) &&
                  ((*(ulong *)((long)unaff_R15 + 0xb8) >> ((ulong)uVar35 & 0x3f) & 1) != 0)) &&
                 (ppVar61 = (pthread_mutex_t *)(ulong)(uVar35 >> 9),
                 (*(ulong *)((long)unaff_R15 + 0xc0) >> ((ulong)ppVar61 & 0x3f) & 1) != 0)) {
                uVar36 = *(uint *)((long)pphVar83 + 0x88);
                uVar40 = (ulong)uVar36;
                uVar37 = *(uint *)(*(long *)((long)pphVar83 + 0x38) + uVar40 * 0x14);
                ppVar61 = (pthread_mutex_t *)(ulong)(uVar37 >> 4);
                if (((((ulong)unaff_R15[5].__align >> ((ulong)ppVar61 & 0x3f) & 1) != 0) &&
                    ((*(ulong *)((long)unaff_R15 + 0xd0) >> ((ulong)uVar37 & 0x3f) & 1) != 0)) &&
                   (ppVar61 = (pthread_mutex_t *)(ulong)(uVar37 >> 9),
                   (*(ulong *)((long)unaff_R15 + 0xd8) >> ((ulong)ppVar61 & 0x3f) & 1) != 0)) {
                  *(undefined8 *)((long)pphVar83 + -8) = 0x3f09b9;
                  ppVar61 = unaff_R15;
                  uVar35 = KerxSubTableFormat2<AAT::KerxSubTableHeader>::get_kerning
                                     (*(KerxSubTableFormat2<AAT::KerxSubTableHeader> **)
                                       ((long)pphVar83 + 0x58),uVar35,uVar37,(long)unaff_R15);
                  in_XMM0 = extraout_XMM0_11;
                  if (uVar35 != 0) {
                    if (*(int *)((long)pphVar83 + 0x60) == 4) {
                      uVar35 = (uint)((ulong)((long)(short)uVar35 *
                                              *(long *)(*(long *)((long)pphVar83 + 0x48) + 0x58) +
                                             0x8000) >> 0x10);
                      if (((ulong)unaff_R13 & 0x40000000) != 0) {
                        ppVar61 = *(pthread_mutex_t **)((long)pphVar83 + 0x50);
                        (&(ppVar61->__data).__nusers)[uVar40 * 5] = uVar35;
                        goto LAB_003f0a68;
                      }
                      uVar37 = (int)uVar35 >> 1;
                      ppVar61 = (pthread_mutex_t *)(ulong)uVar37;
                      lVar75 = *(long *)((long)pphVar83 + 0x50);
                      *(int *)(lVar75 + *(long *)((long)pphVar83 + 0x40) * 4) =
                           *(int *)(lVar75 + *(long *)((long)pphVar83 + 0x40) * 4) + uVar37;
                      piVar49 = (int *)(lVar75 + uVar40 * 0x14);
                      *piVar49 = *piVar49 + (uVar35 - uVar37);
                      piVar49 = (int *)(lVar75 + 8 + uVar40 * 0x14);
                      *piVar49 = *piVar49 + (uVar35 - uVar37);
                    }
                    else {
                      iVar39 = (int)((ulong)((long)(short)uVar35 *
                                             *(long *)(*(long *)((long)pphVar83 + 0x48) + 0x60) +
                                            0x8000) >> 0x10);
                      if (((ulong)unaff_R13 & 0x40000000) == 0) {
                        uVar35 = iVar39 >> 1;
                        ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
                        lVar75 = *(long *)((long)pphVar83 + 0x50);
                        piVar49 = (int *)(lVar75 + 4 + *(long *)((long)pphVar83 + 0x40) * 4);
                        *piVar49 = *piVar49 + uVar35;
                        piVar49 = (int *)(lVar75 + 4 + uVar40 * 0x14);
                        *piVar49 = *piVar49 + (iVar39 - uVar35);
                        piVar49 = (int *)(lVar75 + 0xc + uVar40 * 0x14);
                        *piVar49 = *piVar49 + (iVar39 - uVar35);
                      }
                      else {
                        ppVar61 = *(pthread_mutex_t **)((long)pphVar83 + 0x50);
                        (&(ppVar61->__data).__owner)[uVar40 * 5] = iVar39;
LAB_003f0a68:
                        *(byte *)(*(long *)((long)pphVar83 + 0x20) + 0xc0) =
                             *(byte *)(*(long *)((long)pphVar83 + 0x20) + 0xc0) | 8;
                      }
                    }
                    unaff_RBP = *(pthread_mutex_t **)((long)pphVar83 + 0x20);
                    *(undefined8 *)((long)pphVar83 + -8) = 0x3f0a8c;
                    auVar261 = hb_buffer_t::unsafe_to_break
                                         ((hb_buffer_t *)&unaff_RBP->__data,
                                          *(uint *)((long)pphVar83 + 0x30),uVar36 + 1);
                    in_XMM1._0_8_ = auVar261._8_8_;
                    in_XMM0._0_8_ = auVar261._0_8_;
                    in_XMM1._8_8_ = extraout_XMM1_Qb_09;
                    in_XMM0._8_8_ = extraout_XMM0_Qb_07;
                    unaff_R15 = *(pthread_mutex_t **)((long)pphVar83 + 0x10);
                  }
                }
              }
              unaff_RBX = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar83 + 0x88);
              goto LAB_003f06e1;
            }
LAB_003f0885:
            iVar39 = (int)ppVar41;
            if (!bVar133) break;
          }
          else if ((uVar35 & 0x10) == 0) {
            if (((uVar35 & 0xff00) == 0) ||
               (uVar36 = uVar111 & 0xff00, ppVar61 = (pthread_mutex_t *)(ulong)uVar36,
               (uVar35 & 0xff00) == uVar36)) goto LAB_003f07a9;
          }
          else {
            uVar36 = *puVar65;
            paVar50 = *(accelerator_t **)(lVar75 + 0xf8);
            *(undefined8 *)((long)pphVar83 + -8) = 0x3f08ee;
            uVar44 = OT::GDEF::accelerator_t::mark_set_covers(paVar50,uVar35 >> 0x10,uVar36);
            ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar83 + 0x30);
            in_XMM0 = extraout_XMM0_10;
            if ((char)uVar44 != '\0') goto LAB_003f07a9;
          }
LAB_003f088e:
          iVar39 = (int)ppVar41;
          unaff_RBX = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar83 + 0x88);
          if (iVar104 <= (int)*(uint *)((long)pphVar83 + 0x88)) break;
          lVar75 = *(long *)((long)pphVar83 + 0x90);
          ppVar61 = *(pthread_mutex_t **)(lVar75 + 0xa0);
        } while( true );
      }
      unaff_RBX = (pthread_mutex_t *)(ulong)(iVar39 + 1);
      unaff_R15 = *(pthread_mutex_t **)((long)pphVar83 + 0x10);
      unaff_RBP = *(pthread_mutex_t **)((long)pphVar83 + 0x20);
    }
LAB_003f06e1:
  } while ((uint)unaff_RBX < *(uint *)((long)pphVar83 + 0x2c));
LAB_003f0e70:
  *(undefined8 *)((long)pphVar83 + -8) = 0x3f0e86;
  hb_buffer_t::message
            (in_XMM0._0_8_,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
             in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)&unaff_RBP->__data,
             *(undefined8 *)((long)pphVar83 + 0x48),"end kern",ppVar61,param_5,param_6,
             *(undefined1 *)pphVar83);
  pphVar85 = pphVar83;
LAB_003f0e9e:
  *(undefined8 *)((long)pphVar85 + -8) = 0x3f0eab;
  free(*(void **)((long)pphVar85 + 0x188));
  *(undefined8 *)((long)pphVar85 + -8) = 0x3f0eb8;
  auVar261 = hb_sanitize_context_t::~hb_sanitize_context_t
                       ((hb_sanitize_context_t *)((long)pphVar85 + 0x128));
  in_XMM1._0_8_ = auVar261._8_8_;
  in_XMM0._0_8_ = auVar261._0_8_;
  in_XMM1._8_8_ = extraout_XMM1_Qb_10;
  in_XMM0._8_8_ = extraout_XMM0_Qb_08;
LAB_003f0ec0:
  do {
    p_Var47 = in_XMM0._0_8_;
    lVar75 = *(long *)(*(long *)((long)unaff_R15 + 0x58) + 0x10);
    *(long *)((long)unaff_R15 + 0x30) = lVar75;
    uVar35 = *(uint *)(*(long *)((long)unaff_R15 + 0x58) + 0x18);
    *(ulong *)((long)unaff_R15 + 0x38) = lVar75 + (ulong)uVar35;
    *(uint *)((long)unaff_R15 + 0x40) = uVar35;
    unaff_R12 = (pthread_mutex_t *)pphVar85[0xb];
    lVar75 = (long)pphVar85[0x48];
    if (*(char *)((long)pphVar85 + 0x1f) == '\0') {
      p_Var52 = (unaff_R15->__data).__list.__next;
      uVar35 = *(uint *)&p_Var52[6].__prev;
      if (1 < uVar35) {
        p_Var128 = p_Var52[7].__prev;
        uVar40 = (ulong)(uVar35 - 1);
        puVar109 = (undefined8 *)((long)p_Var128 + uVar40 * 0x14);
        ppVar41 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
        do {
          uVar40 = uVar40 - 1;
          *(undefined4 *)(pphVar85 + 0x12) = *(undefined4 *)(puVar109 + 2);
          uVar44 = puVar109[1];
          pphVar85[0x10] = (hb_buffer_t *)*puVar109;
          pphVar85[0x11] = (hb_buffer_t *)uVar44;
          *(undefined4 *)(puVar109 + 2) = *(undefined4 *)&p_Var128[1].__prev;
          p_Var47 = p_Var128->__next;
          *puVar109 = p_Var128->__prev;
          puVar109[1] = p_Var47;
          *(undefined4 *)&p_Var128[1].__prev = *(undefined4 *)(pphVar85 + 0x12);
          p_Var47 = (__pthread_internal_list *)pphVar85[0x10];
          p_Var116 = (__pthread_internal_list *)pphVar85[0x11];
          p_Var128->__prev = p_Var47;
          p_Var128->__next = p_Var116;
          ppVar41 = (pthread_mutex_t *)(ppVar41->__size + 1);
          unaff_RBX = (pthread_mutex_t *)(uVar40 & 0xffffffff);
          p_Var128 = (__pthread_internal_list *)((long)&p_Var128[1].__prev + 4);
          puVar109 = (undefined8 *)((long)puVar109 + -0x14);
        } while (ppVar41 < unaff_RBX);
      }
      if (*(char *)((long)&p_Var52[5].__next + 3) != '\0') {
        if (*(uint *)&p_Var52[6].__prev < uVar35) {
          uVar35 = *(uint *)&p_Var52[6].__prev;
        }
        if (1 < uVar35) {
          p_Var52 = p_Var52[8].__prev;
          uVar40 = (ulong)(uVar35 - 1);
          puVar109 = (undefined8 *)((long)p_Var52 + uVar40 * 0x14);
          uVar132 = 0;
          do {
            uVar40 = uVar40 - 1;
            *(undefined4 *)(pphVar85 + 0x12) = *(undefined4 *)(puVar109 + 2);
            uVar44 = puVar109[1];
            pphVar85[0x10] = (hb_buffer_t *)*puVar109;
            pphVar85[0x11] = (hb_buffer_t *)uVar44;
            *(undefined4 *)(puVar109 + 2) = *(undefined4 *)&p_Var52[1].__prev;
            p_Var47 = p_Var52->__next;
            *puVar109 = p_Var52->__prev;
            puVar109[1] = p_Var47;
            *(undefined4 *)&p_Var52[1].__prev = *(undefined4 *)(pphVar85 + 0x12);
            p_Var47 = (__pthread_internal_list *)pphVar85[0x10];
            p_Var128 = (__pthread_internal_list *)pphVar85[0x11];
            p_Var52->__prev = p_Var47;
            p_Var52->__next = p_Var128;
            uVar132 = uVar132 + 1;
            p_Var52 = (__pthread_internal_list *)((long)&p_Var52[1].__prev + 4);
            puVar109 = (undefined8 *)((long)puVar109 + -0x14);
          } while (uVar132 < (uVar40 & 0xffffffff));
        }
      }
    }
    uVar44 = *(undefined8 *)((long)unaff_R15 + 0x10);
    p_Var52 = (unaff_R15->__data).__list.__next;
    uVar35 = *(uint *)((long)unaff_R15 + 0xe4);
    pphVar85[-1] = (hb_buffer_t *)0x3f100d;
    hb_buffer_t::message
              (p_Var47,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
               in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)p_Var52,uVar44,"end subtable %u",
               (ulong)uVar35,param_5,param_6,*(undefined1 *)pphVar85);
    unaff_R14 = (uint *)pphVar85[0x49];
    uVar44 = extraout_XMM0_Qa_07;
    do {
      do {
        uVar35 = (unaff_R12->__data).__lock;
        uVar36 = *(int *)((long)unaff_R15 + 0xe4) + 1;
        *(uint *)((long)unaff_R15 + 0xe4) = uVar36;
        lVar79 = (long)pphVar85[0xf];
        pphVar85[0xf] = (hb_buffer_t *)(lVar79 + 1);
        if (lVar79 + 1 == lVar75) {
          return (pthread_mutex_t *)(ulong)uVar35;
        }
        unaff_R12 = (pthread_mutex_t *)
                    (unaff_R12->__size +
                    (uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                    uVar35 << 0x18));
        param_1 = (pthread_mutex_t *)(unaff_R15->__data).__list.__next;
        uVar35 = (unaff_R12->__data).__count;
        bVar133 = (uVar35 & 0x80) == 0;
        unaff_RBX = (pthread_mutex_t *)CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar133);
      } while (((*(uint *)((long)param_1 + 0x38) & 0xfffffffe) != 4) == bVar133);
      *(bool *)((long)pphVar85 + 0x1f) = (*(uint *)((long)param_1 + 0x38) & 0xfffffffd) != 5;
      param_2 = *(pthread_mutex_t **)((long)unaff_R15 + 0x10);
      pphVar85[-1] = (hb_buffer_t *)0x3ee3df;
      bVar133 = hb_buffer_t::message
                          (uVar44,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)&param_1->__data
                           ,param_2,"start subtable %u",(ulong)uVar36,param_5,param_6,
                           *(undefined1 *)pphVar85);
      uVar44 = extraout_XMM0_Qa;
    } while (!bVar133);
    uVar35 = (uVar35 & 0x10) >> 4;
    unaff_RBP = (pthread_mutex_t *)(ulong)uVar35;
    *(byte *)((long)pphVar85 + 0x1f) = *(byte *)((long)pphVar85 + 0x1f) ^ (byte)uVar35;
    if (((*(byte *)(pphVar85 + 0x3d) & 1) == 0) &&
       (((byte)*(hb_buffer_t *)(unaff_R12->__size + 4) & 0x40) != 0)) {
      p_Var47 = (unaff_R15->__data).__list.__next;
      uVar35 = *(uint *)&p_Var47[6].__prev;
      pphVar85[0x3d] = (hb_buffer_t *)CONCAT71((int7)((ulong)extraout_RDX_06 >> 8),1);
      if (uVar35 != 0) {
        p_Var47 = p_Var47[8].__prev;
        if (uVar35 == 1) {
          ppVar41 = (pthread_mutex_t *)0x0;
        }
        else {
          param_2 = (pthread_mutex_t *)(ulong)(uVar35 & 0xfffffffe);
          param_1 = (pthread_mutex_t *)((long)&p_Var47[2].__prev + 6);
          ppVar41 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
          do {
            *(hb_buffer_t *)((long)param_1 + -0x14) = (hb_buffer_t)0x2;
            *(ushort *)((long)param_1 + -0x16) =
                 (ushort)(((ulong)(unaff_R15->__data).__list.__next[3].__next & 0xfffffffd) != 4) *
                 2 + -1;
            param_1->__size[0] = '\x02';
            bVar133 = ((ulong)(unaff_R15->__data).__list.__next[3].__next & 0xfffffffd) != 4;
            unaff_RBX = (pthread_mutex_t *)(ulong)bVar133;
            uVar36 = (uint)bVar133 * 2 - 1;
            unaff_RBP = (pthread_mutex_t *)(ulong)uVar36;
            *(short *)((long)param_1 + -2) = (short)uVar36;
            ppVar41 = (pthread_mutex_t *)(ppVar41->__size + 2);
            param_1 = param_1 + 1;
          } while (param_2 != ppVar41);
        }
        if ((uVar35 & 1) != 0) {
          *(undefined1 *)((long)p_Var47 + (long)ppVar41 * 0x14 + 0x12) = 2;
          bVar133 = ((ulong)(unaff_R15->__data).__list.__next[3].__next & 0xfffffffd) != 4;
          param_2 = (pthread_mutex_t *)(ulong)bVar133;
          *(ushort *)((long)p_Var47 + (long)ppVar41 * 0x14 + 0x10) = (ushort)bVar133 * 2 + -1;
        }
      }
    }
    if (*(char *)((long)pphVar85 + 0x1f) == '\0') {
      p_Var47 = (unaff_R15->__data).__list.__next;
      uVar35 = *(uint *)&p_Var47[6].__prev;
      if (1 < uVar35) {
        p_Var52 = p_Var47[7].__prev;
        param_2 = (pthread_mutex_t *)((ulong)(uVar35 - 1) - 1);
        param_1 = (pthread_mutex_t *)((long)p_Var52 + (ulong)(uVar35 - 1) * 0x14);
        unaff_RBP = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
        do {
          *(int *)(pphVar85 + 0x12) = (param_1->__data).__kind;
          p_Var128 = *(__pthread_internal_list **)&(param_1->__data).__owner;
          pphVar85[0x10] = (hb_buffer_t *)param_1->__align;
          pphVar85[0x11] = (hb_buffer_t *)p_Var128;
          (param_1->__data).__kind = *(int *)&p_Var52[1].__prev;
          p_Var128 = p_Var52->__next;
          param_1->__align = (long)p_Var52->__prev;
          *(__pthread_internal_list **)&(param_1->__data).__owner = p_Var128;
          *(undefined4 *)&p_Var52[1].__prev = *(undefined4 *)(pphVar85 + 0x12);
          p_Var128 = (__pthread_internal_list *)pphVar85[0x11];
          p_Var52->__prev = (__pthread_internal_list *)pphVar85[0x10];
          p_Var52->__next = p_Var128;
          unaff_RBP = (pthread_mutex_t *)(unaff_RBP->__size + 1);
          unaff_RBX = (pthread_mutex_t *)((ulong)param_2 & 0xffffffff);
          p_Var52 = (__pthread_internal_list *)((long)&p_Var52[1].__prev + 4);
          param_2 = (pthread_mutex_t *)((long)param_2 + -1);
          param_1 = (pthread_mutex_t *)((long)param_1 + -0x14);
        } while (unaff_RBP < unaff_RBX);
      }
      if (*(char *)((long)&p_Var47[5].__next + 3) != '\0') {
        if (*(uint *)&p_Var47[6].__prev < uVar35) {
          uVar35 = *(uint *)&p_Var47[6].__prev;
        }
        if (1 < uVar35) {
          p_Var47 = p_Var47[8].__prev;
          uVar40 = (ulong)(uVar35 - 1);
          puVar109 = (undefined8 *)((long)p_Var47 + uVar40 * 0x14);
          param_2 = (pthread_mutex_t *)0x0;
          do {
            uVar40 = uVar40 - 1;
            *(undefined4 *)(pphVar85 + 0x12) = *(undefined4 *)(puVar109 + 2);
            uVar44 = puVar109[1];
            pphVar85[0x10] = (hb_buffer_t *)*puVar109;
            pphVar85[0x11] = (hb_buffer_t *)uVar44;
            *(undefined4 *)(puVar109 + 2) = *(undefined4 *)&p_Var47[1].__prev;
            p_Var52 = p_Var47->__next;
            *puVar109 = p_Var47->__prev;
            puVar109[1] = p_Var52;
            *(undefined4 *)&p_Var47[1].__prev = *(undefined4 *)(pphVar85 + 0x12);
            p_Var52 = (__pthread_internal_list *)pphVar85[0x11];
            p_Var47->__prev = (__pthread_internal_list *)pphVar85[0x10];
            p_Var47->__next = p_Var52;
            param_2 = (pthread_mutex_t *)((long)&(param_2->__data).__lock + 1);
            param_1 = (pthread_mutex_t *)(uVar40 & 0xffffffff);
            p_Var47 = (__pthread_internal_list *)((long)&p_Var47[1].__prev + 4);
            puVar109 = (undefined8 *)((long)puVar109 + -0x14);
          } while (param_2 < param_1);
        }
      }
    }
    if ((pthread_mutex_t *)unaff_R14 == (pthread_mutex_t *)0x0) {
      pauVar63 = (undefined1 (*) [16])pphVar85[0x3c];
      in_XMM0._8_4_ = 0xffffffff;
      in_XMM0._0_8_ = 0xffffffffffffffff;
      in_XMM0._12_4_ = 0xffffffff;
      pauVar63[2] = in_XMM0;
      pauVar63[1] = in_XMM0;
      *pauVar63 = in_XMM0;
    }
    else {
      lVar75 = (long)pphVar85[0xf] * 0x30;
      if (pphVar85[0xf] < (ulong)((__pthread_mutex_s *)unaff_R14)->__count) {
        plVar108 = (long *)(*(long *)((long)unaff_R14 + 8) + lVar75);
      }
      else {
        plVar108 = (long *)&_hb_NullPool;
      }
      lVar79 = plVar108[2];
      param_2 = (pthread_mutex_t *)pphVar85[0x3c];
      *(int *)((long)&param_2->__data + 0x10) = (int)lVar79;
      *(int *)((long)&param_2->__data + 0x14) = (int)((ulong)lVar79 >> 0x20);
      lVar79 = plVar108[1];
      param_2->__align = *plVar108;
      *(int *)((long)&param_2->__data + 8) = (int)lVar79;
      *(int *)((long)&param_2->__data + 0xc) = (int)((ulong)lVar79 >> 0x20);
      if (pphVar85[0xf] < (ulong)((__pthread_mutex_s *)unaff_R14)->__count) {
        puVar45 = (undefined4 *)(lVar75 + *(long *)((long)unaff_R14 + 8));
      }
      else {
        puVar45 = &_hb_NullPool;
      }
      pauVar63 = (undefined1 (*) [16])pphVar85[0x47];
      *(undefined8 *)pauVar63[1] = *(undefined8 *)(puVar45 + 10);
      in_XMM0 = *(undefined1 (*) [16])(puVar45 + 6);
      *pauVar63 = in_XMM0;
    }
LAB_003ee654:
    lVar75 = (long)in_ST0;
    ppVar61 = *(pthread_mutex_t **)(*(long *)((long)unaff_R15 + 0x58) + 0x10);
    *(__pthread_mutex_s **)((long)unaff_R15 + 0x30) = &ppVar61->__data;
    uVar35 = *(uint *)(*(long *)((long)unaff_R15 + 0x58) + 0x18);
    ppVar41 = (pthread_mutex_t *)(ppVar61->__size + uVar35);
    *(__pthread_mutex_s **)((long)unaff_R15 + 0x38) = &ppVar41->__data;
    *(uint *)((long)unaff_R15 + 0x40) = uVar35;
    param_3 = *(pthread_mutex_t **)((long)pphVar85 + 0x78);
    if ((param_3 < *(pthread_mutex_t **)((long)pphVar85 + 0x250)) &&
       (unaff_R12 != (pthread_mutex_t *)0x0)) {
      uVar40 = (long)ppVar41 - (long)unaff_R12;
      uVar76 = (undefined7)((ulong)param_3 >> 8);
      param_3 = (pthread_mutex_t *)CONCAT71(uVar76,ppVar41 < unaff_R12 || uVar40 == 0);
      if (unaff_R12 < ppVar61) {
        param_3 = (pthread_mutex_t *)CONCAT71(uVar76,1);
      }
      else if (ppVar41 >= unaff_R12 && uVar40 != 0) {
        *(__pthread_mutex_s **)((long)unaff_R15 + 0x30) = &unaff_R12->__data;
        uVar35 = (unaff_R12->__data).__lock;
        uVar132 = (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                         uVar35 << 0x18);
        if (uVar132 < uVar40) {
          uVar40 = uVar132;
        }
        *(hb_buffer_t **)((long)unaff_R15 + 0x38) = (hb_buffer_t *)(unaff_R12->__size + uVar40);
        *(int *)((long)unaff_R15 + 0x40) = (int)uVar40;
        goto LAB_003ee6b7;
      }
      pauVar63 = *(undefined1 (**) [16])((long)pphVar85 + 0x230);
      in_XMM0 = (undefined1  [16])0x0;
      *pauVar63 = (undefined1  [16])0x0;
      *(undefined4 *)pauVar63[1] = 0;
    }
LAB_003ee6b7:
    *(__pthread_mutex_s **)((long)pphVar85 + 0x58) = &unaff_R12->__data;
    uVar35 = (unaff_R12->__data).__count;
    unaff_R13 = (uint *)(ulong)uVar35;
  } while (6 < (byte)(uVar35 >> 0x18));
  ppVar61 = (pthread_mutex_t *)&DAT_005e01f4;
  uVar40 = (ulong)*(int *)(&DAT_005e01f4 + (ulong)(uVar35 >> 0x18) * 4);
  bVar133 = 0xffffffffffa1fe0b < uVar40;
  ppVar41 = (pthread_mutex_t *)(&DAT_005e01f4 + uVar40);
  uVar44 = in_XMM0._0_8_;
  uVar48 = in_XMM1._0_8_;
  uVar171 = in_XMM2._0_8_;
  uVar206 = in_XMM3._0_8_;
  uVar247 = in_XMM4._0_8_;
  uVar249 = in_XMM5._0_8_;
  uVar252 = in_XMM6._0_8_;
  uVar255 = in_XMM7._0_8_;
  bVar70 = (byte)ppVar41;
  uVar36 = (uint)param_2;
  pphVar87 = pphVar85;
  pphVar86 = pphVar85;
  pphVar97 = pphVar85;
  switch(uVar35 >> 0x18) {
  case 0:
    if ((*(byte *)(*(long *)((long)unaff_R15 + 8) + 0xa8) & 1) == 0) goto LAB_003f0ec0;
    unaff_R13 = (uint *)(ulong)(uVar35 << 0x18);
    if ((uVar35 << 0x18 & 0x10000000) != 0) goto LAB_003f0ec0;
    uVar40 = *(ulong *)((long)unaff_R15 + 0x80);
    if ((*(ulong *)((long)unaff_R15 + 0xb0) & uVar40) == 0) goto LAB_003f0ec0;
    if ((*(ulong *)((long)unaff_R15 + 0xb8) & *(ulong *)((long)unaff_R15 + 0x88)) == 0)
    goto LAB_003f0ec0;
    if (((((*(ulong *)((long)unaff_R15 + 0xc0) & *(ulong *)((long)unaff_R15 + 0x90)) == 0) ||
         ((unaff_R15[5].__align & uVar40) == 0)) ||
        ((*(ulong *)((long)unaff_R15 + 0xd0) & *(ulong *)((long)unaff_R15 + 0x88)) == 0)) ||
       ((*(ulong *)((long)unaff_R15 + 0x90) & *(ulong *)((long)unaff_R15 + 0xd8)) == 0))
    goto LAB_003f0ec0;
    uVar13 = *(undefined8 *)((long)unaff_R15 + 0x10);
    p_Var47 = (unaff_R15->__data).__list.__next;
    *(uint *)((long)pphVar85 + 8) = *(uint *)(*(long *)((long)unaff_R15 + 8) + 0xa0);
    *(__pthread_internal_list **)((long)pphVar85 + 0x20) = p_Var47;
    *(undefined8 *)((long)pphVar85 + 0x40) = uVar13;
    *(uint *)((long)pphVar85 + -8) = 0x3ee790;
    *(uint *)((long)pphVar85 + -4) = 0;
    bVar133 = hb_buffer_t::message
                        (uVar44,uVar48,uVar171,uVar206,uVar247,uVar249,uVar252,uVar255,
                         (hb_buffer_t *)p_Var47,uVar13,"start kern",uVar40,param_5,param_6,
                         (char)*(uint *)pphVar85);
    in_XMM0 = extraout_XMM0;
    if (!bVar133) goto LAB_003f0ec0;
    puVar45 = *(undefined4 **)((long)pphVar85 + 0x20);
    if ((*(byte *)(puVar45 + 6) & 0x40) != 0) {
      uVar35 = puVar45[0x18];
      *(byte *)(puVar45 + 0x30) = *(byte *)(puVar45 + 0x30) | 0x20;
      if ((ulong)uVar35 != 0) {
        lVar75 = *(long *)(puVar45 + 0x1c);
        if ((ulong)uVar35 - 1 < 3) {
          uVar40 = 0;
        }
        else {
          pbVar119 = (byte *)(lVar75 + 0x40);
          uVar40 = 0;
          do {
            pbVar119[-0x3c] = pbVar119[-0x3c] | 2;
            pbVar119[-0x28] = pbVar119[-0x28] | 2;
            pbVar119[-0x14] = pbVar119[-0x14] | 2;
            *pbVar119 = *pbVar119 | 2;
            uVar40 = uVar40 + 4;
            pbVar119 = pbVar119 + 0x50;
          } while ((uVar35 & 0xfffffffc) != uVar40);
        }
        unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
        puVar45 = *(undefined4 **)((long)pphVar85 + 0x20);
        if ((ulong)(uVar35 & 3) != 0) {
          lVar79 = 0;
          do {
            pbVar119 = (byte *)(lVar75 + uVar40 * 0x14 + 4 + lVar79);
            *pbVar119 = *pbVar119 | 2;
            lVar79 = lVar79 + 0x14;
          } while ((ulong)(uVar35 & 3) * 0x14 != lVar79);
        }
      }
    }
    puVar120 = &_hb_NullPool;
    *(uint *)((long)pphVar85 + -8) = 0x3ee7c5;
    *(uint *)((long)pphVar85 + -4) = 0;
    OT::hb_ot_apply_context_t::hb_ot_apply_context_t
              ((hb_ot_apply_context_t *)((long)pphVar85 + 0x80),1,*(long *)((long)pphVar85 + 0x40),
               puVar45,(GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
    in_XMM1._8_8_ = extraout_XMM1_Qb;
    in_XMM1._0_8_ = extraout_XMM1_Qa;
    *(uint *)((long)pphVar85 + 0x1ac) = *(uint *)((long)pphVar85 + 8);
    *(uint *)((long)pphVar85 + 0x1c8) = 0xffffffff;
    *(uint *)((long)pphVar85 + 0x1cc) = 0;
    unaff_RBX = (pthread_mutex_t *)
                CONCAT71((int7)((ulong)unaff_RBX >> 8),*(undefined1 *)((long)pphVar85 + 0x1be));
    uVar33 = *(undefined1 *)((long)pphVar85 + 0x1bf);
    if (*(uint *)((long)pphVar85 + 0x108) != 0) {
      uVar33 = 0;
    }
    in_XMM0 = (undefined1  [16])0x0;
    uVar48 = 0;
    *(undefined1 (*) [16])((long)pphVar85 + 0xe8) = (undefined1  [16])0x0;
    *(uint *)((long)pphVar85 + 0xf8) = 0;
    *(uint *)((long)pphVar85 + 0xfc) = 0;
    param_5 = (uint *)CONCAT71((int7)((ulong)puVar120 >> 8),
                               *(char *)((long)pphVar85 + 0x1bd) != '\0');
    bVar133 = *(uint *)((long)pphVar85 + 0x108) == 1;
    *(undefined1 *)((long)pphVar85 + 0xe1) = 1;
    *(bool *)((long)pphVar85 + 0xe2) = bVar133;
    *(uint *)((long)pphVar85 + 0x1b4) = 8;
    *(uint **)((long)pphVar85 + 0x90) = (uint *)((long)pphVar85 + 0x80);
    uVar35 = *(uint *)(*(long *)((long)pphVar85 + 0x120) + 0x60);
    *(uint *)((long)pphVar85 + 0xc0) = uVar35;
    *(undefined1 (*) [16])((long)pphVar85 + 0xa8) = (undefined1  [16])0x0;
    *(uint *)((long)pphVar85 + 0xb8) = 0;
    *(uint *)((long)pphVar85 + 0xbc) = 0;
    *(uint *)((long)pphVar85 + 0x98) = 8;
    *(bool *)((long)pphVar85 + 0xa0) = bVar133;
    *(undefined1 *)((long)pphVar85 + 0xa1) = *(undefined1 *)((long)pphVar85 + 0x1be);
    *(bool *)((long)pphVar85 + 0xa2) = bVar133;
    *(uint *)((long)pphVar85 + 0x9c) = *(uint *)((long)pphVar85 + 8);
    *(undefined1 *)((long)pphVar85 + 0xa3) = uVar33;
    *(undefined1 *)((long)pphVar85 + 0xa4) = 0;
    *(uint **)((long)pphVar85 + 0xd0) = (uint *)((long)pphVar85 + 0x80);
    *(uint *)((long)pphVar85 + 0x100) = uVar35;
    *(undefined1 (*) [16])((long)pphVar85 + 0xe8) = (undefined1  [16])0x0;
    *(uint *)((long)pphVar85 + 0xf8) = 0;
    *(uint *)((long)pphVar85 + 0xfc) = 0;
    *(bool *)((long)pphVar85 + 0xe2) = bVar133;
    puVar130 = (ushort *)0xffffffff00000008;
    *(uint *)((long)pphVar85 + 0xd8) = 8;
    *(uint *)((long)pphVar85 + 0xdc) = 0xffffffff;
    *(bool *)((long)pphVar85 + 0xe0) = bVar133 || *(char *)((long)pphVar85 + 0x1bd) != '\0';
    *(undefined1 *)((long)pphVar85 + 0xe1) = 1;
    *(undefined1 *)((long)pphVar85 + 0xe3) = uVar33;
    *(undefined1 *)((long)pphVar85 + 0xe4) = 0;
    uVar35 = *(uint *)(*(long *)((long)pphVar85 + 0x20) + 0x60);
    *(uint *)((long)pphVar85 + 0x2c) = uVar35;
    uVar44 = extraout_XMM1_Qa;
    if (uVar35 == 0) goto LAB_003f0e56;
    ppVar61 = *(pthread_mutex_t **)((long)pphVar85 + 0x20);
    *(uint *)((long)pphVar85 + 0x48) = *(uint *)((long)ppVar61 + 0x38) & 0xfffffffe;
code_r0x003ee923:
    *(undefined8 *)((long)pphVar85 + 0x38) = *(undefined8 *)((long)ppVar61 + 0x70);
    *(undefined8 *)((long)pphVar85 + 0x60) = *(undefined8 *)((long)ppVar61 + 0x80);
    unaff_RBX = (pthread_mutex_t *)0x0;
LAB_003f025e:
    uVar35 = (uint)unaff_RBX;
    puVar130 = *(ushort **)((long)pphVar85 + 0x38);
    if ((*(uint *)(puVar130 + (long)unaff_RBX * 10 + 2) & *(uint *)((long)pphVar85 + 8)) == 0) {
      unaff_RBX = (pthread_mutex_t *)(ulong)(uVar35 + 1);
    }
    else {
      *(uint *)((long)pphVar85 + 0x88) = uVar35;
      lVar75 = *(long *)((long)pphVar85 + 0x90);
      puVar130 = *(ushort **)(lVar75 + 0xa0);
      iVar39 = *(int *)(puVar130 + 0x30);
      *(int *)((long)pphVar85 + 0xc0) = iVar39;
      uVar36 = *(uint *)(puVar130 + 0x2e);
      *(long *)((long)pphVar85 + 0x30) = (long)unaff_RBX * 5;
      if (uVar36 == uVar35) {
        uVar33 = *(undefined1 *)(*(long *)(puVar130 + 0x38) + 0xf + (long)unaff_RBX * 0x14);
      }
      else {
        uVar33 = 0;
      }
      if (*(char *)((long)pphVar85 + 0xa3) == '\0') {
        uVar33 = 0;
      }
      *(undefined1 *)((long)pphVar85 + 0xa4) = uVar33;
      iVar39 = iVar39 + -1;
      if ((int)uVar35 < iVar39) {
        do {
          uVar36 = (int)unaff_RBX + 1;
          uVar40 = (ulong)uVar36;
          *(uint *)((long)pphVar85 + 0x88) = uVar36;
          lVar79 = *(long *)(puVar130 + 0x38);
          uVar36 = *(uint *)((long)pphVar85 + 0x98);
          uVar111 = *(ushort *)(lVar79 + 0xc + uVar40 * 0x14);
          puVar130 = (ushort *)(ulong)uVar111;
          if ((uVar36 & uVar111 & 0xe) != 0) goto LAB_003f03fa;
          puVar65 = (uint *)(lVar79 + uVar40 * 0x14);
          if ((uVar111 & 8) == 0) {
LAB_003f0319:
            lVar75 = lVar79 + uVar40 * 0x14;
            uVar111 = *(ushort *)(lVar79 + 0x10 + uVar40 * 0x14);
            uVar71 = 0;
            bVar133 = false;
            if (((((uVar111 & 0x20) != 0) &&
                 (bVar133 = false, (*(byte *)(lVar75 + 0xc) & 0x10) == 0)) &&
                ((*(char *)((long)pphVar85 + 0xa0) != '\0' ||
                 (bVar133 = false, (uVar111 & 0x21f) != 0x201)))) &&
               ((*(char *)((long)pphVar85 + 0xa1) != '\0' ||
                (bVar133 = false, (uVar111 & 0x11f) != 0x101)))) {
              bVar133 = (uVar111 & 0x40) == 0 || *(char *)((long)pphVar85 + 0xa2) != '\0';
            }
            puVar130 = *(ushort **)((long)pphVar85 + 0xb8);
            if (puVar130 != (ushort *)0x0) {
              uVar71 = *puVar130 << 8 | *puVar130 >> 8;
            }
            if (((*(uint *)(lVar79 + 4 + uVar40 * 0x14) & *(uint *)((long)pphVar85 + 0x9c)) != 0) &&
               ((*(char *)((long)pphVar85 + 0xa4) == '\0' ||
                (*(char *)((long)pphVar85 + 0xa4) == *(char *)(lVar75 + 0xf))))) {
              if (*(code **)((long)pphVar85 + 0xa8) == (code *)0x0) {
                if (bVar133) goto LAB_003f03fa;
              }
              else {
                *(undefined8 *)((long)pphVar85 + -8) = 0x3f03ed;
                cVar34 = (**(code **)((long)pphVar85 + 0xa8))
                                   (puVar65,uVar71,*(undefined8 *)((long)pphVar85 + 0xb0));
                in_XMM1._8_8_ = extraout_XMM1_Qb_06;
                in_XMM1._0_8_ = extraout_XMM1_Qa_04;
                in_XMM0._8_8_ = extraout_XMM0_Qb_04;
                in_XMM0._0_8_ = extraout_XMM0_Qa_02;
                if (cVar34 == '\0') goto LAB_003f03f1;
                puVar130 = *(ushort **)((long)pphVar85 + 0xb8);
              }
              if (puVar130 != (ushort *)0x0) {
                *(ushort **)((long)pphVar85 + 0xb8) = puVar130 + 1;
              }
              lVar75 = *(long *)((long)pphVar85 + 0x30);
              uVar36 = *(uint *)(*(long *)((long)pphVar85 + 0x38) + lVar75 * 4);
              puVar130 = (ushort *)(ulong)uVar36;
              unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
              in_R10 = *(ulong *)((long)pphVar85 + 0x58);
              if ((((*(ulong *)((long)unaff_R15 + 0xb0) >> ((ulong)(uVar36 >> 4) & 0x3f) & 1) == 0)
                  || ((*(ulong *)((long)unaff_R15 + 0xb8) >> ((ulong)puVar130 & 0x3f) & 1) == 0)) ||
                 ((*(ulong *)((long)unaff_R15 + 0xc0) >> ((ulong)(uVar36 >> 9) & 0x3f) & 1) == 0))
              goto LAB_003f05cb;
              uVar37 = *(uint *)((long)pphVar85 + 0x88);
              uVar40 = (ulong)uVar37;
              param_5 = (uint *)(uVar40 * 5);
              uVar60 = *(uint *)(*(long *)((long)pphVar85 + 0x38) + uVar40 * 0x14);
              param_6 = (pthread_mutex_t *)(ulong)uVar60;
              if (((((ulong)unaff_R15[5].__align >> ((ulong)(uVar60 >> 4) & 0x3f) & 1) == 0) ||
                  ((*(ulong *)((long)unaff_R15 + 0xd0) >> ((ulong)param_6 & 0x3f) & 1) == 0)) ||
                 ((*(ulong *)((long)unaff_R15 + 0xd8) >> ((ulong)(uVar60 >> 9) & 0x3f) & 1) == 0))
              goto LAB_003f05cb;
              uVar105 = *(uint *)(in_R10 + 0xc);
              uVar105 = uVar105 >> 0x18 | (uVar105 & 0xff0000) >> 8 | (uVar105 & 0xff00) << 8 |
                        uVar105 << 0x18;
              in_R11 = (hb_buffer_t *)(ulong)uVar105;
              puVar45 = &_hb_NullPool;
              if ((int)uVar105 < 1) goto LAB_003f05af;
              in_R11 = (hb_buffer_t *)(ulong)(uVar105 - 1);
              iVar39 = 0;
              goto LAB_003f0554;
            }
LAB_003f03f1:
            if (!bVar133) break;
          }
          else if ((uVar36 & 0x10) == 0) {
            if (((uVar36 & 0xff00) == 0) ||
               (uVar37 = uVar111 & 0xff00, puVar130 = (ushort *)(ulong)uVar37,
               (uVar36 & 0xff00) == uVar37)) goto LAB_003f0319;
          }
          else {
            uVar37 = *puVar65;
            paVar50 = *(accelerator_t **)(lVar75 + 0xf8);
            *(undefined8 *)((long)pphVar85 + -8) = 0x3f045a;
            uVar44 = OT::GDEF::accelerator_t::mark_set_covers(paVar50,uVar36 >> 0x10,uVar37);
            in_XMM0 = extraout_XMM0_09;
            if ((char)uVar44 != '\0') goto LAB_003f0319;
          }
LAB_003f03fa:
          unaff_RBX = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar85 + 0x88);
          if (iVar39 <= (int)*(uint *)((long)pphVar85 + 0x88)) break;
          lVar75 = *(long *)((long)pphVar85 + 0x90);
          puVar130 = *(ushort **)(lVar75 + 0xa0);
        } while( true );
      }
      unaff_RBX = (pthread_mutex_t *)(ulong)(uVar35 + 1);
      unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
    }
    goto LAB_003f0254;
  case 1:
    if (((*(byte *)(*(long *)((long)unaff_R15 + 8) + 0xa8) & 1) != 0) || ((uVar35 & 0x40) != 0)) {
      *(__pthread_mutex_s **)((long)pphVar85 + 0x1f0) = &unaff_R15->__data;
      lVar75 = *(long *)((long)pphVar85 + 0x58);
      *(long *)((long)pphVar85 + 0x1f8) = lVar75;
      uVar36 = *(uint *)(lVar75 + 0x1c);
      *(ulong *)((long)pphVar85 + 0x200) =
           (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                  uVar36 << 0x18) + lVar75 + 0xc;
      *(uint *)((long)pphVar85 + 0x228) = 0;
      *(byte *)((long)pphVar85 + 0x22c) = (byte)uVar35 >> 6 & 1;
      lVar79 = *(long *)(*(long *)((long)unaff_R15 + 0x10) + 0x20);
      uVar35 = *(uint *)(lVar79 + 0x18);
      *(uint *)((long)pphVar85 + 0x38) = uVar35;
      if (uVar35 == 0xffffffff) {
        piVar49 = *(int **)(lVar79 + 0x78);
        while (piVar49 == (int *)0x0) {
          lVar75 = *(long *)(lVar79 + 0x68);
          if (lVar75 == 0) {
            piVar49 = (int *)&_hb_NullPool;
            lVar75 = *(long *)((long)pphVar85 + 0x58);
            break;
          }
          *(uint *)((long)pphVar85 + 0x80) = 0;
          *(undefined1 (*) [16])((long)pphVar85 + 0x98) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])((long)pphVar85 + 0x88) = (undefined1  [16])0x0;
          *(undefined1 *)((long)pphVar85 + 0xa8) = 0;
          *(undefined1 *)((long)pphVar85 + 0xbd) = 0;
          *(undefined1 (*) [16])((long)pphVar85 + 0xac) = (undefined1  [16])0x0;
          *(undefined1 *)((long)pphVar85 + 0xbc) = 1;
          pcVar74 = *(code **)(lVar75 + 0x20);
          piVar49 = (int *)&_hb_NullPool;
          if (pcVar74 != (code *)0x0) {
            uVar44 = *(undefined8 *)(lVar75 + 0x28);
            *(uint *)((long)pphVar85 + -8) = 0x3f14cc;
            *(uint *)((long)pphVar85 + -4) = 0;
            piVar49 = (int *)(*pcVar74)(lVar75,0x6d617870,uVar44);
            if (piVar49 == (int *)0x0) {
              piVar49 = (int *)&_hb_NullPool;
            }
          }
          *(uint *)((long)pphVar85 + -8) = 0x3f14e5;
          *(uint *)((long)pphVar85 + -4) = 0;
          piVar49 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                              ((hb_sanitize_context_t *)((long)pphVar85 + 0x80),piVar49);
          *(uint *)((long)pphVar85 + -8) = 0x3f14f5;
          *(uint *)((long)pphVar85 + -4) = 0;
          auVar261 = hb_sanitize_context_t::~hb_sanitize_context_t
                               ((hb_sanitize_context_t *)((long)pphVar85 + 0x80));
          in_XMM1._0_8_ = auVar261._8_8_;
          in_XMM0._0_8_ = auVar261._0_8_;
          in_XMM1._8_8_ = extraout_XMM1_Qb_14;
          in_XMM0._8_8_ = extraout_XMM0_Qb_10;
          if (piVar49 == (int *)0x0) {
            piVar49 = (int *)&_hb_NullPool;
            LOCK();
            bVar133 = *(long *)(lVar79 + 0x78) == 0;
            if (bVar133) {
              *(long *)(lVar79 + 0x78) = (long)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar133 = *(long *)(lVar79 + 0x78) == 0;
            if (bVar133) {
              *(long *)(lVar79 + 0x78) = (long)piVar49;
            }
            UNLOCK();
          }
          if (bVar133) {
            lVar75 = *(long *)((long)pphVar85 + 0x58);
            break;
          }
          if (((piVar49 != (int *)0x0) && ((uint *)piVar49 != &_hb_NullPool)) && (*piVar49 != 0)) {
            LOCK();
            *piVar49 = *piVar49 + -1;
            UNLOCK();
            if (*piVar49 == 0) {
              *piVar49 = -0xdead;
              ppVar41 = *(pthread_mutex_t **)(piVar49 + 2);
              if (ppVar41 != (pthread_mutex_t *)0x0) {
                *(uint *)((long)pphVar85 + -8) = 0x3f1546;
                *(uint *)((long)pphVar85 + -4) = 0;
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar41[1].__data,ppVar41);
                in_XMM1._8_8_ = extraout_XMM1_Qb_15;
                in_XMM1._0_8_ = extraout_XMM1_Qa_09;
                *(uint *)((long)pphVar85 + -8) = 0x3f154e;
                *(uint *)((long)pphVar85 + -4) = 0;
                free(ppVar41);
                piVar49[2] = 0;
                piVar49[3] = 0;
              }
              pcVar74 = *(code **)(piVar49 + 10);
              if (pcVar74 != (code *)0x0) {
                uVar44 = *(undefined8 *)(piVar49 + 8);
                *(undefined1 **)((long)pphVar85 + -8) = &LAB_003f1565;
                (*pcVar74)(uVar44);
                in_XMM1._8_8_ = extraout_XMM1_Qb_16;
                in_XMM1._0_8_ = extraout_XMM1_Qa_10;
              }
              *(undefined1 **)((long)pphVar85 + -8) = &LAB_003f156d;
              free(piVar49);
              in_XMM0 = extraout_XMM0_13;
            }
          }
          lVar75 = *(long *)((long)pphVar85 + 0x58);
          piVar49 = *(int **)(lVar79 + 0x78);
        }
        puVar45 = &_hb_NullPool;
        if (5 < (uint)piVar49[6]) {
          puVar45 = *(undefined4 **)(piVar49 + 4);
        }
        uVar111 = *(ushort *)(puVar45 + 1);
        uVar71 = uVar111 << 8 | uVar111 >> 8;
        if (uVar111 == 0) {
          uVar71 = 0;
        }
        *(uint *)((long)pphVar85 + 0x38) = (uint)uVar71;
        *(uint *)(lVar79 + 0x18) = (uint)uVar71;
        unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
      }
      unaff_RBP = (pthread_mutex_t *)(lVar75 + 0xc);
      uVar35 = *(uint *)(lVar75 + 0x14);
      uVar36 = *(uint *)(lVar75 + 0x18);
      uVar36 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 | uVar36 << 0x18;
      uVar111 = *(ushort *)
                 (lVar75 + 0xe +
                 (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                        uVar35 << 0x18));
      uVar40 = (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
      if ((*(short *)((long)&(unaff_RBP->__data).__count + uVar40 * 6 + (ulong)uVar36) == -1) &&
         (*(short *)((long)&(unaff_RBP->__data).__lock + uVar40 * 6 + (ulong)uVar36) == 0)) {
        ppVar41 = *(pthread_mutex_t **)((long)unaff_R15 + 0x80);
        if ((*(ulong *)((long)unaff_R15 + 0xb0) & (ulong)ppVar41) == 0) goto LAB_003f0ec0;
        param_3 = *(pthread_mutex_t **)((long)unaff_R15 + 0x88);
code_r0x003eec5a:
        if ((*(ulong *)((long)unaff_R15 + 0xb8) & (ulong)param_3) == 0) goto LAB_003f0ec0;
        if ((*(ulong *)((long)unaff_R15 + 0xc0) & *(ulong *)((long)unaff_R15 + 0x90)) == 0)
        goto LAB_003f0ec0;
        if ((unaff_R15[5].__align & (ulong)ppVar41) == 0) goto LAB_003f0ec0;
        if ((*(ulong *)((long)unaff_R15 + 0xd0) & (ulong)param_3) == 0) goto LAB_003f0ec0;
        if ((*(ulong *)((long)unaff_R15 + 0x90) & *(ulong *)((long)unaff_R15 + 0xd8)) == 0)
        goto LAB_003f0ec0;
      }
      lVar75 = *(long *)&unaff_R15[3].__data;
      if ((lVar75 == 0) || (*(uint *)(lVar75 + 4) < 2)) {
        unaff_R13 = (uint *)&((pthread_mutex_t *)0x0)->__data;
        p_Var47 = (unaff_R15->__data).__list.__next;
        *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
        cVar34 = *(char *)&p_Var47[5].__next;
      }
      else {
        unaff_R13 = *(uint **)(lVar75 + 8);
code_r0x003eecc0:
        p_Var47 = (unaff_R15->__data).__list.__next;
        *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
        cVar34 = *(char *)&p_Var47[5].__next;
      }
      if (cVar34 != '\0') {
        uVar36 = 0;
        param_6 = (pthread_mutex_t *)0x0;
        *(__pthread_mutex_s **)((long)pphVar85 + 8) = &unaff_RBP->__data;
        uVar35 = *(uint *)&p_Var47[6].__prev;
        uVar40 = 0;
        ppVar41 = unaff_RBX;
        ppVar61 = unaff_RBP;
        if ((pthread_mutex_t *)unaff_R13 == (pthread_mutex_t *)0x0) goto LAB_003efbd0;
LAB_003efac0:
        if (uVar36 < uVar35) {
          uVar37 = *(uint *)((long)p_Var47[7].__prev + uVar40 * 0x14 + 8);
          ppVar61 = (pthread_mutex_t *)&((__pthread_mutex_s *)unaff_R13)->__nusers;
          do {
            unaff_R13 = (uint *)((long)&(((pthread_mutex_t *)((long)unaff_R13 + -0x28))->__data).
                                        __list.__prev + 4);
            ppVar41 = (pthread_mutex_t *)((long)ppVar61 + -0xc);
            phVar123 = (hb_buffer_t *)((long)ppVar61 + -8);
            ppVar61 = ppVar41;
          } while (uVar37 < *(uint *)phVar123);
          unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + 8);
          ppVar61 = (pthread_mutex_t *)unaff_R13;
          do {
            unaff_R13 = &(ppVar61->__data).__nusers;
            piVar49 = &(ppVar61->__data).__spins;
            ppVar61 = (pthread_mutex_t *)unaff_R13;
          } while ((uint)*piVar49 < uVar37);
        }
        ppVar61 = unaff_RBP;
        if ((((__pthread_mutex_s *)unaff_R13)->__lock & *(uint *)((long)unaff_R15 + 0xe0)) != 0)
        goto LAB_003efbd3;
        unaff_RBX = ppVar41;
        if (uVar36 != uVar35) {
          if (*(char *)((long)&p_Var47[5].__next + 2) == '\0') {
            unaff_RBX = (pthread_mutex_t *)0x0;
            goto LAB_003effc3;
          }
          p_Var128 = p_Var47[7].__next;
          p_Var52 = p_Var47[7].__prev;
          uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
          if ((p_Var128 == p_Var52) && (uVar35 == uVar36)) {
            unaff_RBX = (pthread_mutex_t *)0x0;
            uVar35 = uVar36;
            goto LAB_003effba;
          }
          uVar35 = uVar35 + 1;
          if ((uVar35 == 0) || (uVar35 < *(uint *)&p_Var47[6].__next)) {
            if (p_Var128 == p_Var52) goto LAB_003efb85;
          }
          else {
            *(undefined8 *)((long)pphVar85 + -8) = 0x3efb74;
            uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar35);
            if ((char)uVar44 == '\0') {
              cVar34 = *(char *)&p_Var47[5].__next;
              param_5 = (uint *)(pthread_mutex_t *)0x0;
              in_XMM0 = extraout_XMM0_06;
              goto joined_r0x003efbc2;
            }
            p_Var52 = p_Var47[7].__prev;
            p_Var128 = p_Var47[7].__next;
            if (p_Var128 == p_Var52) {
LAB_003efb85:
              uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
              if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar35 + 1) {
                p_Var128 = p_Var47[8].__prev;
                p_Var47[7].__next = p_Var128;
                unaff_RBX = (pthread_mutex_t *)0x0;
                goto joined_r0x003efba7;
              }
              unaff_RBX = (pthread_mutex_t *)0x0;
              goto LAB_003eff83;
            }
          }
          unaff_RBX = (pthread_mutex_t *)0x0;
LAB_003eff90:
          uVar40 = (ulong)*(uint *)((long)&p_Var47[5].__next + 4);
          uVar132 = (ulong)*(uint *)((long)&p_Var47[6].__prev + 4);
          *(undefined4 *)((long)p_Var128 + uVar132 * 0x14 + 0x10) =
               *(undefined4 *)((long)p_Var52 + uVar40 * 0x14 + 0x10);
          in_XMM0 = *(undefined1 (*) [16])((long)p_Var52 + uVar40 * 0x14);
          *(undefined1 (*) [16])((long)p_Var128 + uVar132 * 0x14) = in_XMM0;
          uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
          uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
LAB_003effba:
          *(uint *)((long)&p_Var47[6].__prev + 4) = uVar35 + 1;
LAB_003effc3:
          *(uint *)((long)&p_Var47[5].__next + 4) = uVar36 + 1;
LAB_003effca:
          cVar34 = *(char *)&p_Var47[5].__next;
          param_5 = (uint *)unaff_RBX;
joined_r0x003efbc2:
          unaff_RBX = ppVar41;
          if (cVar34 != '\0') {
            do {
              uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
              uVar35 = *(uint *)&p_Var47[6].__prev;
              uVar40 = (ulong)uVar36;
              ppVar41 = unaff_RBX;
              ppVar61 = unaff_RBP;
              param_6 = (pthread_mutex_t *)param_5;
              if ((pthread_mutex_t *)unaff_R13 != (pthread_mutex_t *)0x0) goto LAB_003efac0;
LAB_003efbd0:
              unaff_R13 = (uint *)&((pthread_mutex_t *)0x0)->__data;
LAB_003efbd3:
              if (uVar36 < uVar35) {
                uVar36 = *(uint *)((long)p_Var47[7].__prev + uVar40 * 0x14);
                if ((ulong)uVar36 == 0xffff) {
                  uVar35 = 2;
                }
                else {
                  uVar35 = 1;
                  if ((((*(ulong *)((long)unaff_R15 + 0x98) >> ((ulong)(uVar36 >> 4) & 0x3f) & 1) !=
                        0) && (((ulong)unaff_R15[4].__align >> ((ulong)uVar36 & 0x3f) & 1) != 0)) &&
                     ((*(ulong *)((long)unaff_R15 + 0xa8) >> ((ulong)(uVar36 >> 9) & 0x3f) & 1) != 0
                     )) {
                    uVar37 = (ppVar61->__data).__count;
                    *(undefined1 **)((long)pphVar85 + -8) = &LAB_003efc43;
                    pLVar43 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                        ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                         ((long)&(ppVar61->__data).__lock +
                                         (ulong)(uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 |
                                                 (uVar37 & 0xff00) << 8 | uVar37 << 0x18)),uVar36,
                                         *(uint *)((long)pphVar85 + 0x38));
                    in_XMM0 = extraout_XMM0_07;
                    if (pLVar43 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                      uVar35 = (uint)(ushort)(*(ushort *)pLVar43 << 8 | *(ushort *)pLVar43 >> 8);
                    }
                  }
                }
              }
              else {
                uVar35 = 0;
              }
              uVar36 = (ppVar61->__data).__lock;
              uVar60 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                       uVar36 << 0x18;
              uVar37 = uVar35;
              if (uVar60 <= uVar35) {
                uVar37 = 1;
              }
              uVar105 = (ppVar61->__data).__owner;
              uVar77 = (ppVar61->__data).__nusers;
              uVar105 = uVar105 >> 0x18 | (uVar105 & 0xff0000) >> 8 | (uVar105 & 0xff00) << 8 |
                        uVar105 << 0x18;
              uVar77 = uVar77 >> 0x18 | (uVar77 & 0xff0000) >> 8 | (uVar77 & 0xff00) << 8 |
                       uVar77 << 0x18;
              iVar39 = uVar60 * (int)param_6;
              uVar111 = *(ushort *)
                         ((long)&(ppVar61->__data).__lock +
                         (ulong)(uVar37 + iVar39) * 2 + (ulong)uVar105);
              uVar40 = (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
              ppVar41 = (pthread_mutex_t *)(uVar40 * 3);
              uVar111 = *(ushort *)((long)&(ppVar61->__data).__lock + uVar40 * 6 + (ulong)uVar77);
              if (*(short *)((long)&(ppVar61->__data).__count + uVar40 * 6 + (ulong)uVar77) == -1) {
                if (((int)param_6 != 0) &&
                   ((uVar71 = *(ushort *)
                               ((long)&(ppVar61->__data).__lock + uVar40 * 6 + (ulong)uVar77 + 2),
                    (uVar71 & 0x40) == 0 || (uVar111 != 0)))) {
                  if (uVar60 <= uVar35) {
                    uVar35 = 1;
                  }
                  uVar110 = *(ushort *)
                             ((long)&(ppVar61->__data).__lock + (ulong)uVar35 * 2 + (ulong)uVar105);
                  uVar132 = (ulong)(ushort)(uVar110 << 8 | uVar110 >> 8);
                  if (((*(short *)((long)&(ppVar61->__data).__count + uVar132 * 6 + (ulong)uVar77)
                        != -1) ||
                      (uVar111 !=
                       *(ushort *)((long)&(ppVar61->__data).__lock + uVar132 * 6 + (ulong)uVar77)))
                     || (((uVar71 ^ *(ushort *)
                                     ((long)&(ppVar61->__data).__lock +
                                     uVar132 * 6 + (ulong)uVar77 + 2)) & 0x40) != 0))
                  goto LAB_003efd30;
                }
                uVar71 = *(ushort *)
                          ((long)&(ppVar61->__data).__lock +
                          (ulong)((uint)(uVar36 == 0) + iVar39) * 2 + (ulong)uVar105);
                if (*(short *)((long)&(ppVar61->__data).__count +
                              (ulong)(ushort)(uVar71 << 8 | uVar71 >> 8) * 6 + (ulong)uVar77) != -1)
                goto LAB_003efd30;
              }
              else {
LAB_003efd30:
                uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
                uVar36 = uVar35;
                if (*(char *)((long)&p_Var47[5].__next + 2) != '\0') {
                  uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
                }
                if ((uVar36 != 0) && (uVar35 < *(uint *)&p_Var47[6].__prev)) {
                  *(undefined8 *)((long)pphVar85 + -8) = 0x3efd6a;
                  auVar261 = hb_buffer_t::_set_glyph_flags
                                       ((hb_buffer_t *)p_Var47,3,uVar36 - 1,uVar35 + 1,'\x01');
                  in_XMM1._0_8_ = auVar261._8_8_;
                  in_XMM0._0_8_ = auVar261._0_8_;
                  in_XMM1._8_8_ = extraout_XMM1_Qb_05;
                  in_XMM0._8_8_ = extraout_XMM0_Qb_03;
                }
              }
              uVar71 = *(short *)((long)&(ppVar61->__data).__lock + uVar40 * 6 + (ulong)uVar77 + 2)
                       << 8;
              if ((uVar71 & 0x2000) == 0) {
                unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
                if ((uVar71 & 0x8000) != 0) goto LAB_003efdc7;
LAB_003efd90:
                uVar71 = *(ushort *)((long)&(ppVar61->__data).__count + uVar40 * 6 + (ulong)uVar77);
              }
              else {
                *(undefined4 *)((long)pphVar85 + 0x228) = 0;
                unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
                if ((uVar71 & 0x8000) == 0) goto LAB_003efd90;
LAB_003efdc7:
                uVar35 = *(uint *)((long)pphVar85 + 0x228);
                if ((ulong)uVar35 < 8) {
                  uVar38 = *(undefined4 *)((long)&p_Var47[5].__next + 4);
                  *(uint *)((long)pphVar85 + 0x228) = uVar35 + 1;
                  *(undefined4 *)((long)pphVar85 + (ulong)uVar35 * 4 + 0x208) = uVar38;
                  uVar71 = *(ushort *)
                            ((long)&(ppVar61->__data).__count + uVar40 * 6 + (ulong)uVar77);
                }
                else {
                  *(undefined4 *)((long)pphVar85 + 0x228) = 0;
                  uVar71 = *(ushort *)
                            ((long)&(ppVar61->__data).__count + uVar40 * 6 + (ulong)uVar77);
                }
              }
              unaff_RBP = ppVar61;
              if (uVar71 != 0xffff) {
                uVar35 = *(uint *)((long)pphVar85 + 0x228);
                uVar132 = (ulong)uVar35;
                if (uVar132 != 0) {
                  uVar36 = *(uint *)(*(long *)((long)pphVar85 + 0x1f8) + 8);
                  uVar36 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                           uVar36 << 0x18;
                  if (uVar36 == 0) {
                    uVar36 = 1;
                  }
                  if ((!CARRY4(uVar35,uVar35)) &&
                     (lVar75 = (ulong)(uVar35 * 2) * (ulong)uVar36, uVar35 = (uint)lVar75,
                     (int)((ulong)lVar75 >> 0x20) == 0)) {
                    in_R11 = *(hb_buffer_t **)((long)pphVar85 + 0x1f0);
                    puVar130 = (ushort *)
                               (*(long *)((long)pphVar85 + 0x200) +
                               (ulong)((ushort)(uVar71 << 8 | uVar71 >> 8) >> 1) * 2);
                    unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + 8);
                    if (((ulong)((long)puVar130 - *(long *)(in_R11 + 0x30)) <=
                         (ulong)*(uint *)(in_R11 + 0x40)) &&
                       ((uVar35 <= *(uint *)(in_R11 + 0x38) - (int)puVar130 &&
                        (uVar35 = *(uint *)(in_R11 + 0x44) - uVar35,
                        *(uint *)(in_R11 + 0x44) = uVar35, 0 < (int)uVar35)))) {
                      *(undefined4 *)((long)pphVar85 + 0x20) =
                           *(undefined4 *)(*(long *)(in_R11 + 8) + 0xa0);
                      *(undefined1 *)((long)pphVar85 + 0x2c) =
                           *(undefined1 *)((long)pphVar85 + 0x22c);
                      in_R10 = (ulong)uVar36 * 2;
                      bVar70 = 0;
                      *(ulong *)((long)pphVar85 + 0x30) = in_R10;
                      do {
                        if (uVar132 == 0) break;
                        uVar132 = uVar132 - 1;
                        *(int *)((long)pphVar85 + 0x228) = (int)uVar132;
                        uVar127 = (ulong)*(uint *)((long)pphVar85 +
                                                  (uVar132 & 0xffffffff) * 4 + 0x208);
                        if (*(uint *)((long)pphVar85 + (uVar132 & 0xffffffff) * 4 + 0x208) <
                            *(uint *)&p_Var47[6].__prev) {
                          uVar71 = *puVar130;
                          bVar70 = (byte)(uVar71 >> 8) & 1;
                          uVar71 = uVar71 << 8 | uVar71 >> 8 & 0xfffe;
                          p_Var52 = p_Var47[8].__prev;
                          param_6 = ppVar41;
                          if (((ulong)p_Var47[3].__next & 0xfffffffe) == 4) {
                            if (*(char *)((long)pphVar85 + 0x2c) == '\0') {
                              if ((*(uint *)((long)p_Var47[7].__prev + uVar127 * 0x14 + 4) &
                                  *(uint *)((long)pphVar85 + 0x20)) != 0) {
                                piVar49 = (int *)((long)p_Var52 + uVar127 * 0x14);
                                iVar39 = (int)((ulong)((long)(short)uVar71 *
                                                       *(long *)(*(long *)(in_R11 + 0x10) + 0x58) +
                                                      0x8000) >> 0x10);
                                *piVar49 = *piVar49 + iVar39;
                                piVar49 = (int *)((long)p_Var52 + uVar127 * 0x14 + 8);
                                *piVar49 = *piVar49 + iVar39;
                              }
                              goto LAB_003f016f;
                            }
                            puVar78 = (undefined2 *)(uVar127 * 0x14 + 0x10 + (long)p_Var52);
                            if (uVar71 == 0x8000) {
                              *(undefined1 *)(puVar78 + 1) = 0;
                              *puVar78 = 0;
                              *(undefined4 *)((long)p_Var52 + uVar127 * 0x14 + 0xc) = 0;
                              goto LAB_003f0002;
                            }
                            unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
                            if (*(char *)(puVar78 + 1) != '\0') {
                              piVar49 = (int *)((long)p_Var52 + uVar127 * 0x14 + 0xc);
                              *piVar49 = *piVar49 +
                                         (int)((ulong)((long)(short)uVar71 *
                                                       *(long *)(*(long *)(in_R11 + 0x10) + 0x60) +
                                                      0x8000) >> 0x10);
                              *(byte *)&p_Var47[0xc].__prev = *(byte *)&p_Var47[0xc].__prev | 8;
                            }
                          }
                          else {
                            if (*(char *)((long)pphVar85 + 0x2c) == '\0') {
                              if ((*(uint *)((long)p_Var47[7].__prev + uVar127 * 0x14 + 4) &
                                  *(uint *)((long)pphVar85 + 0x20)) != 0) {
                                piVar49 = (int *)((long)p_Var52 + uVar127 * 0x14 + 4);
                                iVar39 = (int)((ulong)((long)(short)uVar71 *
                                                       *(long *)(*(long *)(in_R11 + 0x10) + 0x60) +
                                                      0x8000) >> 0x10);
                                *piVar49 = *piVar49 + iVar39;
                                piVar49 = (int *)((long)p_Var52 + uVar127 * 0x14 + 0xc);
                                *piVar49 = *piVar49 + iVar39;
                              }
LAB_003f016f:
                              unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + 8);
                              in_R10 = *(ulong *)((long)pphVar85 + 0x30);
                              goto LAB_003f000f;
                            }
                            puVar78 = (undefined2 *)(uVar127 * 0x14 + 0x10 + (long)p_Var52);
                            if (uVar71 == 0x8000) {
                              *(undefined1 *)(puVar78 + 1) = 0;
                              *puVar78 = 0;
                              *(undefined4 *)((long)p_Var52 + uVar127 * 0x14 + 8) = 0;
LAB_003f0002:
                              unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
                            }
                            else {
                              unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
                              if (*(char *)(puVar78 + 1) != '\0') {
                                piVar49 = (int *)((long)p_Var52 + uVar127 * 0x14 + 8);
                                *piVar49 = *piVar49 +
                                           (int)((ulong)((long)(short)uVar71 *
                                                         *(long *)(*(long *)(in_R11 + 0x10) + 0x58)
                                                        + 0x8000) >> 0x10);
                                *(byte *)&p_Var47[0xc].__prev = *(byte *)&p_Var47[0xc].__prev | 8;
                              }
                            }
                          }
                          unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + 8);
                        }
LAB_003f000f:
                        puVar130 = (ushort *)((long)puVar130 + in_R10);
                      } while (bVar70 == 0);
                      goto LAB_003efebb;
                    }
                  }
                  *(undefined4 *)((long)pphVar85 + 0x228) = 0;
                }
              }
LAB_003efebb:
              uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
              unaff_RBX = ppVar41;
              param_5 = (uint *)(ulong)uVar111;
              if ((uVar36 == *(uint *)&p_Var47[6].__prev) || (*(char *)&p_Var47[5].__next == '\0'))
              break;
              unaff_RBX = (pthread_mutex_t *)(ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
              if ((((byte)*(hb_buffer_t *)(ppVar61->__size + uVar40 * 6 + (ulong)uVar77 + 2) & 0x40)
                   != 0) &&
                 (iVar39 = *(int *)&p_Var47[0xc].__next, *(int *)&p_Var47[0xc].__next = iVar39 + -1,
                 0 < iVar39)) goto LAB_003effca;
              if (*(char *)((long)&p_Var47[5].__next + 2) == '\0') goto LAB_003effc3;
              p_Var128 = p_Var47[7].__next;
              p_Var52 = p_Var47[7].__prev;
              uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
              if ((p_Var128 == p_Var52) && (uVar35 == uVar36)) {
                uVar35 = uVar36;
                goto LAB_003effba;
              }
              uVar35 = uVar35 + 1;
              if ((uVar35 == 0) || (uVar35 < *(uint *)&p_Var47[6].__next)) {
                if (p_Var128 == p_Var52) {
LAB_003eff43:
                  uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
                  if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar35 + 1) {
                    p_Var128 = p_Var47[8].__prev;
                    p_Var47[7].__next = p_Var128;
joined_r0x003efba7:
                    if (uVar35 != 0) {
                      *(undefined8 *)((long)pphVar85 + -8) = 0x3eff76;
                      memcpy(p_Var128,p_Var52,(ulong)uVar35 * 0x14);
                      p_Var52 = p_Var47[7].__prev;
                      ppVar41 = unaff_RBX;
                      p_Var128 = p_Var47[7].__next;
                    }
                  }
                  else {
LAB_003eff83:
                    p_Var128 = p_Var52;
                  }
                }
                goto LAB_003eff90;
              }
              *(undefined8 *)((long)pphVar85 + -8) = 0x3f0211;
              uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar35);
              if ((char)uVar44 != '\0') {
                p_Var52 = p_Var47[7].__prev;
                p_Var128 = p_Var47[7].__next;
                ppVar41 = unaff_RBX;
                if (p_Var128 == p_Var52) goto LAB_003eff43;
                goto LAB_003eff90;
              }
              param_5 = (uint *)unaff_RBX;
              in_XMM0 = extraout_XMM0_08;
              if (*(char *)&p_Var47[5].__next == '\0') break;
            } while( true );
          }
        }
      }
    }
    goto LAB_003f0ec0;
  case 2:
    goto code_r0x003ee93f;
  case 3:
  case 5:
    goto LAB_003f0ec0;
  case 4:
    lVar75 = *(long *)((long)pphVar85 + 0x58);
    unaff_R14 = (uint *)(ulong)*(uint *)(lVar75 + 0x1c);
    lVar79 = *(long *)(*(long *)((long)unaff_R15 + 0x10) + 0x20);
    uVar35 = *(uint *)(lVar79 + 0x18);
    *(uint *)((long)pphVar85 + 0x40) = uVar35;
    if (uVar35 == 0xffffffff) {
      piVar49 = *(int **)(lVar79 + 0x78);
      while (piVar49 == (int *)0x0) {
        lVar75 = *(long *)(lVar79 + 0x68);
        if (lVar75 == 0) {
          piVar49 = (int *)&_hb_NullPool;
LAB_003f1424:
          unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
          lVar75 = *(long *)((long)pphVar85 + 0x58);
          uVar35 = piVar49[6];
          goto joined_r0x003f143a;
        }
        *(uint *)((long)pphVar85 + 0x80) = 0;
        *(undefined1 (*) [16])((long)pphVar85 + 0x98) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)pphVar85 + 0x88) = (undefined1  [16])0x0;
        *(undefined1 *)((long)pphVar85 + 0xa8) = 0;
        *(undefined1 *)((long)pphVar85 + 0xbd) = 0;
        *(undefined1 (*) [16])((long)pphVar85 + 0xac) = (undefined1  [16])0x0;
        *(undefined1 *)((long)pphVar85 + 0xbc) = 1;
        pcVar74 = *(code **)(lVar75 + 0x20);
        piVar49 = (int *)&_hb_NullPool;
        if (pcVar74 != (code *)0x0) {
          uVar44 = *(undefined8 *)(lVar75 + 0x28);
          *(uint *)((long)pphVar85 + -8) = 0x3f1358;
          *(uint *)((long)pphVar85 + -4) = 0;
          piVar49 = (int *)(*pcVar74)(lVar75,0x6d617870,uVar44);
          if (piVar49 == (int *)0x0) {
            piVar49 = (int *)&_hb_NullPool;
          }
        }
        *(uint *)((long)pphVar85 + -8) = 0x3f1371;
        *(uint *)((long)pphVar85 + -4) = 0;
        piVar49 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                            ((hb_sanitize_context_t *)((long)pphVar85 + 0x80),piVar49);
        *(uint *)((long)pphVar85 + -8) = 0x3f1381;
        *(uint *)((long)pphVar85 + -4) = 0;
        auVar261 = hb_sanitize_context_t::~hb_sanitize_context_t
                             ((hb_sanitize_context_t *)((long)pphVar85 + 0x80));
        in_XMM1._0_8_ = auVar261._8_8_;
        in_XMM0._0_8_ = auVar261._0_8_;
        in_XMM1._8_8_ = extraout_XMM1_Qb_11;
        in_XMM0._8_8_ = extraout_XMM0_Qb_09;
        if (piVar49 == (int *)0x0) {
          piVar49 = (int *)&_hb_NullPool;
          LOCK();
          bVar133 = *(long *)(lVar79 + 0x78) == 0;
          if (bVar133) {
            *(long *)(lVar79 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar133 = *(long *)(lVar79 + 0x78) == 0;
          if (bVar133) {
            *(long *)(lVar79 + 0x78) = (long)piVar49;
          }
          UNLOCK();
        }
        if (bVar133) goto LAB_003f1424;
        if (((piVar49 != (int *)0x0) && ((uint *)piVar49 != &_hb_NullPool)) && (*piVar49 != 0)) {
          LOCK();
          *piVar49 = *piVar49 + -1;
          UNLOCK();
          if (*piVar49 == 0) {
            *piVar49 = -0xdead;
            unaff_RBX = *(pthread_mutex_t **)(piVar49 + 2);
            if (unaff_RBX != (pthread_mutex_t *)0x0) {
              *(uint *)((long)pphVar85 + -8) = 0x3f13da;
              *(uint *)((long)pphVar85 + -4) = 0;
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &unaff_RBX[1].__data,unaff_RBX);
              in_XMM1._8_8_ = extraout_XMM1_Qb_12;
              in_XMM1._0_8_ = extraout_XMM1_Qa_07;
              *(uint *)((long)pphVar85 + -8) = 0x3f13e2;
              *(uint *)((long)pphVar85 + -4) = 0;
              free(unaff_RBX);
              piVar49[2] = 0;
              piVar49[3] = 0;
            }
            pcVar74 = *(code **)(piVar49 + 10);
            if (pcVar74 != (code *)0x0) {
              uVar44 = *(undefined8 *)(piVar49 + 8);
              *(undefined1 **)((long)pphVar85 + -8) = &LAB_003f13f9;
              (*pcVar74)(uVar44);
              in_XMM1._8_8_ = extraout_XMM1_Qb_13;
              in_XMM1._0_8_ = extraout_XMM1_Qa_08;
            }
            *(undefined1 **)((long)pphVar85 + -8) = &LAB_003f1401;
            free(piVar49);
            in_XMM0 = extraout_XMM0_12;
          }
        }
        unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
        lVar75 = *(long *)((long)pphVar85 + 0x58);
        piVar49 = *(int **)(lVar79 + 0x78);
      }
      uVar35 = piVar49[6];
joined_r0x003f143a:
      puVar45 = &_hb_NullPool;
      if (5 < uVar35) {
        puVar45 = *(undefined4 **)(piVar49 + 4);
      }
      uVar111 = *(ushort *)(puVar45 + 1);
      uVar71 = uVar111 << 8 | uVar111 >> 8;
      if (uVar111 == 0) {
        uVar71 = 0;
      }
      *(uint *)((long)pphVar85 + 0x40) = (uint)uVar71;
      *(uint *)(lVar79 + 0x18) = (uint)uVar71;
    }
    uVar35 = *(uint *)(lVar75 + 0x14);
    uVar36 = *(uint *)(lVar75 + 0x18);
    lVar79 = (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                    uVar36 << 0x18) + lVar75 + 0xc;
    *(long *)((long)pphVar85 + 0x30) = lVar75 + 0xc;
    uVar111 = *(ushort *)
               (lVar75 + 0xe +
               (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18));
    uVar40 = (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
    if ((*(short *)(lVar79 + 4 + uVar40 * 6) == -1) && (*(short *)(lVar79 + uVar40 * 6) == 0)) {
      ppVar41 = *(pthread_mutex_t **)((long)unaff_R15 + 0x80);
      if ((*(ulong *)((long)unaff_R15 + 0xb0) & (ulong)ppVar41) == 0) goto LAB_003f0ec0;
      param_3 = *(pthread_mutex_t **)((long)unaff_R15 + 0x88);
code_r0x003eed4d:
      if ((*(ulong *)((long)unaff_R15 + 0xb8) & (ulong)param_3) == 0) goto LAB_003f0ec0;
      if ((*(ulong *)((long)unaff_R15 + 0xc0) & *(ulong *)((long)unaff_R15 + 0x90)) == 0)
      goto LAB_003f0ec0;
      if ((unaff_R15[5].__align & (ulong)ppVar41) == 0) goto LAB_003f0ec0;
      if ((*(ulong *)((long)unaff_R15 + 0xd0) & (ulong)param_3) == 0) goto LAB_003f0ec0;
      if ((*(ulong *)((long)unaff_R15 + 0x90) & *(ulong *)((long)unaff_R15 + 0xd8)) == 0)
      goto LAB_003f0ec0;
    }
    uVar35 = (uint)unaff_R14;
    lVar75 = *(long *)&unaff_R15[3].__data;
    if ((lVar75 == 0) || (*(uint *)(lVar75 + 4) < 2)) {
      unaff_R12 = (pthread_mutex_t *)&((pthread_mutex_t *)0x0)->__data;
      p_Var47 = (unaff_R15->__data).__list.__next;
      *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
      cVar34 = *(char *)&p_Var47[5].__next;
    }
    else {
      unaff_R12 = *(pthread_mutex_t **)(lVar75 + 8);
code_r0x003eedb3:
      uVar35 = (uint)unaff_R14;
      p_Var47 = (unaff_R15->__data).__list.__next;
      *(undefined4 *)((long)&p_Var47[5].__next + 4) = 0;
      cVar34 = *(char *)&p_Var47[5].__next;
    }
    if (cVar34 != '\0') {
      *(uint *)(pphVar85 + 0xc) = (uVar35 & 0xff) >> 6;
      pphVar85[10] = (hb_buffer_t *)
                     ((ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8) +
                      (long)pphVar85[0xb] + 0xc);
      uVar36 = 0;
      *(undefined4 *)((long)pphVar85 + 0x2c) = 0;
      *(undefined4 *)(pphVar85 + 4) = 0;
      uVar37 = 0;
      uVar35 = *(uint *)&p_Var47[6].__prev;
      uVar40 = 0;
      if (unaff_R12 == (pthread_mutex_t *)0x0) goto LAB_003ef1d0;
LAB_003ef090:
      if (uVar36 < uVar35) {
        uVar60 = *(uint *)((long)p_Var47[7].__prev + uVar40 * 0x14 + 8);
        ppVar41 = (pthread_mutex_t *)&(unaff_R12->__data).__nusers;
        ppVar61 = unaff_R12;
        do {
          ppVar61 = (pthread_mutex_t *)((long)&ppVar61[-1].__data.__list.__prev + 4);
          unaff_RBX = (pthread_mutex_t *)((long)ppVar41 + -0xc);
          phVar123 = (hb_buffer_t *)((long)ppVar41 + -8);
          ppVar41 = unaff_RBX;
        } while (uVar60 < *(uint *)phVar123);
        do {
          unaff_R12 = (pthread_mutex_t *)&(ppVar61->__data).__nusers;
          piVar49 = &(ppVar61->__data).__spins;
          ppVar61 = unaff_R12;
        } while ((uint)*piVar49 < uVar60);
      }
      if (((unaff_R12->__data).__lock & *(uint *)((long)pphVar85[2] + 0xe0)) != 0)
      goto LAB_003ef1d3;
      unaff_R15 = (pthread_mutex_t *)pphVar85[2];
      if (uVar36 == uVar35) goto LAB_003f0ec0;
      if (*(char *)((long)&p_Var47[5].__next + 2) == '\0') {
        *(undefined4 *)(pphVar85 + 1) = 0;
        goto LAB_003ef9f3;
      }
      p_Var128 = p_Var47[7].__next;
      p_Var52 = p_Var47[7].__prev;
      uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
      if ((p_Var128 == p_Var52) && (uVar35 == uVar36)) {
        *(undefined4 *)(pphVar85 + 1) = 0;
        uVar35 = uVar36;
        goto LAB_003ef9ea;
      }
      uVar35 = uVar35 + 1;
      if ((uVar35 == 0) || (uVar35 < *(uint *)&p_Var47[6].__next)) {
        if (p_Var128 == p_Var52) {
LAB_003ef16d:
          uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
          if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar35 + 1) {
            p_Var128 = p_Var47[8].__prev;
            p_Var47[7].__next = p_Var128;
            *(undefined4 *)(pphVar85 + 1) = 0;
            goto joined_r0x003ef194;
          }
          *(undefined4 *)(pphVar85 + 1) = 0;
          goto LAB_003ef9bd;
        }
      }
      else {
        pphVar85[-1] = (hb_buffer_t *)0x3ef15c;
        uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar35);
        if ((char)uVar44 == '\0') {
          *(undefined4 *)(pphVar85 + 1) = 0;
          in_XMM0 = extraout_XMM0_02;
          if (*(char *)&p_Var47[5].__next != '\0') goto LAB_003efa05;
          goto LAB_003f0ec0;
        }
        p_Var52 = p_Var47[7].__prev;
        p_Var128 = p_Var47[7].__next;
        if (p_Var128 == p_Var52) goto LAB_003ef16d;
      }
      *(undefined4 *)(pphVar85 + 1) = 0;
LAB_003ef9c0:
      do {
        uVar40 = (ulong)*(uint *)((long)&p_Var47[5].__next + 4);
        uVar132 = (ulong)*(uint *)((long)&p_Var47[6].__prev + 4);
        *(undefined4 *)((long)p_Var128 + uVar132 * 0x14 + 0x10) =
             *(undefined4 *)((long)p_Var52 + uVar40 * 0x14 + 0x10);
        in_XMM0 = *(undefined1 (*) [16])((long)p_Var52 + uVar40 * 0x14);
        *(undefined1 (*) [16])((long)p_Var128 + uVar132 * 0x14) = in_XMM0;
        uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
        uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
LAB_003ef9ea:
        *(uint *)((long)&p_Var47[6].__prev + 4) = uVar35 + 1;
LAB_003ef9f3:
        do {
          *(uint *)((long)&p_Var47[5].__next + 4) = uVar36 + 1;
LAB_003ef9fa:
          do {
            if (*(char *)&p_Var47[5].__next == '\0') goto LAB_003f0ec0;
LAB_003efa05:
            uVar37 = (uint)*(ushort *)(pphVar85 + 1);
            uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
            uVar35 = *(uint *)&p_Var47[6].__prev;
            uVar40 = (ulong)uVar36;
            if (unaff_R12 != (pthread_mutex_t *)0x0) goto LAB_003ef090;
LAB_003ef1d0:
            unaff_R12 = (pthread_mutex_t *)&((pthread_mutex_t *)0x0)->__data;
LAB_003ef1d3:
            if (uVar36 < uVar35) {
              uVar35 = *(uint *)((long)p_Var47[7].__prev + uVar40 * 0x14);
              if ((ulong)uVar35 == 0xffff) {
                uVar40 = 2;
                goto LAB_003ef270;
              }
              lVar75 = (long)pphVar85[2];
              uVar40 = 1;
              if ((((*(ulong *)(lVar75 + 0x98) >> ((ulong)(uVar35 >> 4) & 0x3f) & 1) == 0) ||
                  ((*(ulong *)(lVar75 + 0xa0) >> ((ulong)uVar35 & 0x3f) & 1) == 0)) ||
                 ((*(ulong *)(lVar75 + 0xa8) >> ((ulong)(uVar35 >> 9) & 0x3f) & 1) == 0))
              goto LAB_003ef270;
              uVar36 = *(uint *)((long)pphVar85[6] + 4);
              pphVar85[-1] = (hb_buffer_t *)0x3ef23f;
              pLVar43 = Lookup<OT::IntType<unsigned_short,2u>>::get_value
                                  ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                   ((ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 |
                                            (uVar36 & 0xff00) << 8 | uVar36 << 0x18) +
                                   (long)pphVar85[6]),uVar35,*(uint *)(pphVar85 + 8));
              puVar65 = (uint *)pphVar85[6];
              in_XMM0 = extraout_XMM0_03;
              if (pLVar43 != (Lookup<OT::IntType<unsigned_short,2u>> *)0x0) {
                uVar40 = (ulong)(ushort)(*(ushort *)pLVar43 << 8 | *(ushort *)pLVar43 >> 8);
              }
            }
            else {
              uVar40 = 0;
LAB_003ef270:
              puVar65 = (uint *)pphVar85[6];
            }
            uVar35 = *puVar65;
            uVar60 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                     uVar35 << 0x18;
            uVar105 = (uint)uVar40;
            uVar36 = uVar105;
            if (uVar60 <= uVar105) {
              uVar36 = 1;
            }
            uVar77 = puVar65[2];
            uVar98 = puVar65[3];
            uVar77 = uVar77 >> 0x18 | (uVar77 & 0xff0000) >> 8 | (uVar77 & 0xff00) << 8 |
                     uVar77 << 0x18;
            uVar98 = uVar98 >> 0x18 | (uVar98 & 0xff0000) >> 8 | (uVar98 & 0xff00) << 8 |
                     uVar98 << 0x18;
            uVar111 = *(ushort *)
                       ((long)puVar65 + (ulong)(uVar36 + uVar60 * uVar37) * 2 + (ulong)uVar77);
            uVar132 = (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
            unaff_RBX = (pthread_mutex_t *)(uVar132 * 3);
            *(uint *)(pphVar85 + 1) = (uint)*(ushort *)((long)puVar65 + uVar132 * 6 + (ulong)uVar98)
            ;
            pphVar85[7] = (hb_buffer_t *)&unaff_RBX->__data;
            if (*(short *)((long)puVar65 + uVar132 * 6 + (ulong)uVar98 + 4) == -1) {
              if ((uVar37 != 0) &&
                 ((uVar111 = *(ushort *)((long)puVar65 + (long)pphVar85[7] * 2 + (ulong)uVar98 + 2),
                  (uVar111 & 0x40) == 0 || (*(short *)(pphVar85 + 1) != 0)))) {
                if (uVar60 <= uVar105) {
                  uVar40 = 1;
                }
                uVar71 = *(ushort *)((long)puVar65 + uVar40 * 2 + (ulong)uVar77);
                uVar40 = (ulong)(ushort)(uVar71 << 8 | uVar71 >> 8);
                if (((*(short *)((long)puVar65 + uVar40 * 6 + (ulong)uVar98 + 4) != -1) ||
                    (unaff_RBX = (pthread_mutex_t *)(ulong)*(uint *)(pphVar85 + 1),
                    (short)*(uint *)(pphVar85 + 1) !=
                    *(short *)((long)puVar65 + uVar40 * 6 + (ulong)uVar98))) ||
                   (((uVar111 ^ *(ushort *)((long)puVar65 + uVar40 * 6 + (ulong)uVar98 + 2)) & 0x40)
                    != 0)) goto LAB_003ef350;
              }
              uVar111 = *(ushort *)
                         ((long)puVar65 +
                         (ulong)((uint)(uVar35 == 0) + uVar60 * uVar37) * 2 + (ulong)uVar77);
              if (*(short *)((long)puVar65 +
                            (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8) * 6 + (ulong)uVar98 + 4) !=
                  -1) goto LAB_003ef350;
            }
            else {
LAB_003ef350:
              uVar35 = *(uint *)((long)&p_Var47[5].__next + 4);
              uVar36 = uVar35;
              if (*(char *)((long)&p_Var47[5].__next + 2) != '\0') {
                uVar36 = *(uint *)((long)&p_Var47[6].__prev + 4);
              }
              if ((uVar36 != 0) && (uVar35 < *(uint *)&p_Var47[6].__prev)) {
                param_5 = (uint *)0x1;
                pphVar85[-1] = (hb_buffer_t *)&LAB_003ef384;
                auVar261 = hb_buffer_t::_set_glyph_flags
                                     ((hb_buffer_t *)p_Var47,3,uVar36 - 1,uVar35 + 1,'\x01');
                in_XMM1._0_8_ = auVar261._8_8_;
                in_XMM0._0_8_ = auVar261._0_8_;
                in_XMM1._8_8_ = extraout_XMM1_Qb_01;
                in_XMM0._8_8_ = extraout_XMM0_Qb;
              }
            }
            unaff_R15 = (pthread_mutex_t *)pphVar85[2];
            if (((*(char *)((long)pphVar85 + 0x2c) == '\0') ||
                (uVar111 = *(ushort *)((long)puVar65 + (long)pphVar85[7] * 2 + 4 + (ulong)uVar98),
                uVar111 == 0xffff)) ||
               (uVar35 = *(uint *)((long)&p_Var47[5].__next + 4),
               unaff_RBX = (pthread_mutex_t *)(ulong)uVar35, *(uint *)&p_Var47[6].__prev <= uVar35))
            {
LAB_003ef8e0:
              if ((*(byte *)((long)puVar65 + (long)pphVar85[7] * 2 + (ulong)uVar98 + 2) & 0x80) != 0
                 ) {
                uVar38 = *(undefined4 *)((long)&p_Var47[5].__next + 4);
                *(undefined4 *)(pphVar85 + 4) = uVar38;
                *(int *)((long)pphVar85 + 0x2c) = (int)CONCAT71((uint7)(uint3)((uint)uVar38 >> 8),1)
                ;
              }
LAB_003ef8fa:
              uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
              if (uVar36 == *(uint *)&p_Var47[6].__prev) goto LAB_003f0ec0;
            }
            else {
              uVar111 = uVar111 << 8 | uVar111 >> 8;
              pphVar85[9] = (hb_buffer_t *)p_Var47[8].__prev;
              iVar39 = *(int *)(pphVar85 + 0xc);
              if (iVar39 == 2) {
                puVar130 = (ushort *)((long)pphVar85[10] + (ulong)uVar111 * 8);
                if ((((ulong)((long)puVar130 - *(long *)((long)unaff_R15 + 0x30)) <=
                      (ulong)*(uint *)((long)unaff_R15 + 0x40)) &&
                    ((*(int *)((long)unaff_R15 + 0x38) - (int)puVar130 & 0xfffffff8U) != 0)) &&
                   (iVar39 = *(int *)((long)unaff_R15 + 0x44) + -8,
                   *(int *)((long)unaff_R15 + 0x44) = iVar39, 0 < iVar39)) {
                  uVar111 = puVar130[1];
                  uVar71 = puVar130[3];
                  param_6 = *(pthread_mutex_t **)((long)unaff_R15 + 0x10);
                  lVar75 = (long)pphVar85[9];
                  *(int *)(lVar75 + 8 + (long)unaff_RBX * 0x14) =
                       (int)((ulong)((long)(short)(*puVar130 << 8 | *puVar130 >> 8) *
                                     *(long *)((long)param_6 + 0x58) + 0x8000) >> 0x10) -
                       (int)((ulong)((long)(short)(puVar130[2] << 8 | puVar130[2] >> 8) *
                                     *(long *)((long)param_6 + 0x58) + 0x8000) >> 0x10);
                  *(int *)(lVar75 + 0xc + (long)unaff_RBX * 0x14) =
                       (int)((ulong)((long)(short)(uVar111 << 8 | uVar111 >> 8) *
                                     *(long *)((long)param_6 + 0x60) + 0x8000) >> 0x10) -
                       (int)((ulong)((long)(short)(uVar71 << 8 | uVar71 >> 8) *
                                     *(long *)((long)param_6 + 0x60) + 0x8000) >> 0x10);
                  param_5 = (uint *)unaff_RBX;
                  goto LAB_003ef8b4;
                }
                goto LAB_003ef8fa;
              }
              if (iVar39 == 1) {
                puVar130 = (ushort *)((long)pphVar85[10] + (ulong)((uint)uVar111 * 2) * 2);
                if ((((ulong)*(uint *)((long)unaff_R15 + 0x40) <
                      (ulong)((long)puVar130 - *(long *)((long)unaff_R15 + 0x30))) ||
                    ((*(int *)((long)unaff_R15 + 0x38) - (int)puVar130 & 0xfffffffcU) == 0)) ||
                   (iVar39 = *(int *)((long)unaff_R15 + 0x44) + -4,
                   *(int *)((long)unaff_R15 + 0x44) = iVar39, iVar39 < 1)) goto LAB_003ef8fa;
                lVar75 = *(long *)((long)unaff_R15 + 0x68);
                uVar35 = *(uint *)(lVar75 + 4);
                pLVar112 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                            *)&_hb_Null_OT_Index;
                if (uVar35 != 0) {
                  pLVar112 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                              *)((ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                         (uVar35 & 0xff00) << 8 | uVar35 << 0x18) + lVar75);
                }
                *(ushort *)(pphVar85 + 0x3a) = puVar130[1];
                uVar111 = *puVar130;
                uVar35 = *(uint *)(*(long *)(*(long *)((long)pphVar85[2] + 0x20) + 0x70) +
                                  (ulong)*(uint *)(pphVar85 + 4) * 0x14);
                uVar36 = *(uint *)((long)pphVar85[2] + 0x60);
                pphVar85[-1] = (hb_buffer_t *)0x3ef529;
                pLVar112 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                           ::get_value(pLVar112,uVar35,uVar36);
                puVar45 = &_hb_NullPool;
                if (pLVar112 !=
                    (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                     *)0x0) {
                  uVar111 = uVar111 << 8 | uVar111 >> 8;
                  uVar35 = *(uint *)(lVar75 + 8);
                  lVar75 = (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                   (uVar35 & 0xff00) << 8 | uVar35 << 0x18) + lVar75;
                  uVar40 = (ulong)(ushort)(*(ushort *)pLVar112 << 8 | *(ushort *)pLVar112 >> 8);
                  uVar35 = *(uint *)(uVar40 + lVar75);
                  puVar45 = &_hb_NullPool;
                  if ((uint)uVar111 <
                      (uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18)) {
                    puVar45 = (undefined4 *)(lVar75 + uVar40 + (ulong)uVar111 * 4 + 4);
                  }
                }
                pphVar85[0x3b] = (hb_buffer_t *)puVar45;
                lVar75 = (long)pphVar85[2];
                lVar79 = *(long *)(lVar75 + 0x68);
                uVar35 = *(uint *)(*(long *)(*(long *)(lVar75 + 0x20) + 0x70) +
                                  (ulong)*(uint *)(*(long *)(lVar75 + 0x20) + 0x5c) * 0x14);
                uVar36 = *(uint *)(lVar75 + 0x60);
                uVar37 = *(uint *)(lVar79 + 4);
                pLVar112 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                            *)&_hb_Null_OT_Index;
                if (uVar37 != 0) {
                  pLVar112 = (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                              *)((ulong)(uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 |
                                         (uVar37 & 0xff00) << 8 | uVar37 << 0x18) + lVar79);
                }
                pphVar85[-1] = (hb_buffer_t *)0x3ef5ae;
                pLVar112 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                           ::get_value(pLVar112,uVar35,uVar36);
                puVar130 = (ushort *)&_hb_NullPool;
                if (pLVar112 !=
                    (Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                     *)0x0) {
                  uVar111 = *(ushort *)(pphVar85 + 0x3a) << 8 | *(ushort *)(pphVar85 + 0x3a) >> 8;
                  uVar35 = *(uint *)(lVar79 + 8);
                  lVar79 = (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                   (uVar35 & 0xff00) << 8 | uVar35 << 0x18) + lVar79;
                  uVar40 = (ulong)(ushort)(*(ushort *)pLVar112 << 8 | *(ushort *)pLVar112 >> 8);
                  uVar35 = *(uint *)(uVar40 + lVar79);
                  puVar130 = (ushort *)&_hb_NullPool;
                  if ((uint)uVar111 <
                      (uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18)) {
                    puVar130 = (ushort *)(lVar79 + uVar40 + (ulong)uVar111 * 4 + 4);
                  }
                }
                unaff_R15 = (pthread_mutex_t *)pphVar85[2];
                param_5 = *(uint **)((long)unaff_R15 + 0x10);
                puVar114 = (ushort *)pphVar85[0x3b];
                uVar111 = *puVar114;
                lVar75 = (long)pphVar85[9];
                *(int *)(lVar75 + 8 + (long)unaff_RBX * 0x14) =
                     (int)((ulong)((long)(short)(uVar111 << 8 | uVar111 >> 8) *
                                   *(long *)((long)param_5 + 0x58) + 0x8000) >> 0x10) -
                     (int)((ulong)((long)(short)(*puVar130 << 8 | *puVar130 >> 8) *
                                   *(long *)((long)param_5 + 0x58) + 0x8000) >> 0x10);
                uVar111 = puVar114[1];
                *(int *)(lVar75 + 0xc + (long)unaff_RBX * 0x14) =
                     (int)((ulong)((long)(short)(uVar111 << 8 | uVar111 >> 8) *
                                   *(long *)((long)param_5 + 0x60) + 0x8000) >> 0x10) -
                     (int)((ulong)((long)(short)(puVar130[1] << 8 | puVar130[1] >> 8) *
                                   *(long *)((long)param_5 + 0x60) + 0x8000) >> 0x10);
                in_XMM0 = extraout_XMM0_04;
LAB_003ef8b4:
                lVar75 = (long)pphVar85[9];
                *(undefined1 *)(lVar75 + 0x12 + (long)unaff_RBX * 0x14) = 1;
                *(short *)(lVar75 + 0x10 + (long)unaff_RBX * 0x14) =
                     (short)*(undefined4 *)(pphVar85 + 4) -
                     (short)*(undefined4 *)((long)&p_Var47[5].__next + 4);
                *(byte *)&p_Var47[0xc].__prev = *(byte *)&p_Var47[0xc].__prev | 8;
                goto LAB_003ef8e0;
              }
              if (iVar39 != 0) goto LAB_003ef8b4;
              puVar130 = (ushort *)((long)pphVar85[10] + (ulong)((uint)uVar111 * 2) * 2);
              if ((((ulong)*(uint *)((long)unaff_R15 + 0x40) <
                    (ulong)((long)puVar130 - *(long *)((long)unaff_R15 + 0x30))) ||
                  ((*(int *)((long)unaff_R15 + 0x38) - (int)puVar130 & 0xfffffffcU) == 0)) ||
                 (iVar39 = *(int *)((long)unaff_R15 + 0x44) + -4,
                 *(int *)((long)unaff_R15 + 0x44) = iVar39, iVar39 < 1)) goto LAB_003ef8fa;
              uVar111 = *puVar130;
              *(ushort *)(pphVar85 + 0x3b) = puVar130[1];
              *(undefined4 *)((long)pphVar85 + 0x6c) = 0;
              *(undefined4 *)(pphVar85 + 0xd) = 0;
              lVar75 = *(long *)((long)unaff_R15 + 0x10);
              uVar38 = *(undefined4 *)
                        ((long)(unaff_R15->__data).__list.__next[7].__prev +
                        (ulong)*(uint *)(pphVar85 + 4) * 0x14);
              *(undefined4 *)(pphVar85 + 0xe) = 0;
              *(undefined4 *)((long)pphVar85 + 0x74) = 0;
              lVar79 = *(long *)(*(long *)(lVar75 + 0x90) + 0x10);
              if (lVar79 == 0) {
                uVar44 = 0;
              }
              else {
                uVar44 = *(undefined8 *)(lVar79 + 0x70);
              }
              uVar48 = *(undefined8 *)(lVar75 + 0x98);
              pcVar74 = *(code **)(*(long *)(lVar75 + 0x90) + 0x90);
              *pphVar85 = (hb_buffer_t *)uVar44;
              pphVar85[0x3a] = (hb_buffer_t *)lVar75;
              param_5 = (uint *)((long)pphVar85 + 0x74);
              param_6 = (pthread_mutex_t *)(pphVar85 + 0xe);
              pphVar85[-1] = (hb_buffer_t *)0x3ef7a0;
              iVar39 = (*pcVar74)(lVar75,uVar48,uVar38,uVar111 << 8 | uVar111 >> 8);
              in_XMM1._8_8_ = extraout_XMM1_Qb_02;
              in_XMM1._0_8_ = extraout_XMM1_Qa_02;
              in_XMM0._8_8_ = extraout_XMM0_Qb_00;
              in_XMM0._0_8_ = extraout_XMM0_Qa_00;
              uVar111 = *(ushort *)(pphVar85 + 0x3b);
              if (iVar39 != 0) {
                pphVar85[-1] = (hb_buffer_t *)0x3ef7d1;
                hb_font_t::get_glyph_h_origin_with_fallback
                          ((hb_font_t *)pphVar85[0x3a],uVar38,(int *)(pphVar85 + 0x10),
                           (int *)(pphVar85 + 0x3e));
                *(int *)((long)pphVar85 + 0x74) =
                     *(int *)((long)pphVar85 + 0x74) - *(int *)(pphVar85 + 0x10);
                *(int *)(pphVar85 + 0xe) = *(int *)(pphVar85 + 0xe) - *(int *)(pphVar85 + 0x3e);
                this = *(hb_font_t **)((long)pphVar85[2] + 0x10);
                lVar75 = *(long *)((long)pphVar85[2] + 0x20);
                uVar38 = *(undefined4 *)
                          (*(long *)(lVar75 + 0x70) + (ulong)*(uint *)(lVar75 + 0x5c) * 0x14);
                *(undefined4 *)(pphVar85 + 0xd) = 0;
                *(undefined4 *)((long)pphVar85 + 0x6c) = 0;
                lVar75 = *(long *)(*(long *)(this + 0x90) + 0x10);
                if (lVar75 == 0) {
                  uVar44 = 0;
                }
                else {
                  uVar44 = *(undefined8 *)(lVar75 + 0x70);
                }
                uVar48 = *(undefined8 *)(this + 0x98);
                pcVar74 = *(code **)(*(long *)(this + 0x90) + 0x90);
                *pphVar85 = (hb_buffer_t *)uVar44;
                param_5 = (uint *)((long)pphVar85 + 0x6c);
                param_6 = (pthread_mutex_t *)(pphVar85 + 0xd);
                pphVar85[-1] = (hb_buffer_t *)0x3ef859;
                iVar39 = (*pcVar74)(this,uVar48,uVar38,uVar111 << 8 | uVar111 >> 8);
                in_XMM1._8_8_ = extraout_XMM1_Qb_03;
                in_XMM1._0_8_ = extraout_XMM1_Qa_03;
                in_XMM0._8_8_ = extraout_XMM0_Qb_01;
                in_XMM0._0_8_ = extraout_XMM0_Qa_01;
                if (iVar39 != 0) {
                  pphVar85[-1] = (hb_buffer_t *)&LAB_003ef87c;
                  auVar261 = hb_font_t::get_glyph_h_origin_with_fallback
                                       (this,uVar38,(int *)(pphVar85 + 0x10),
                                        (int *)(pphVar85 + 0x3e));
                  in_XMM1._0_8_ = auVar261._8_8_;
                  in_XMM0._0_8_ = auVar261._0_8_;
                  in_XMM1._8_8_ = extraout_XMM1_Qb_04;
                  in_XMM0._8_8_ = extraout_XMM0_Qb_02;
                  *(int *)(pphVar85 + 0xd) = *(int *)(pphVar85 + 0xd) - *(int *)(pphVar85 + 0x3e);
                  lVar75 = (long)pphVar85[9];
                  *(int *)(lVar75 + 8 + (long)unaff_RBX * 0x14) =
                       (*(int *)(pphVar85 + 0x10) - *(int *)((long)pphVar85 + 0x6c)) +
                       *(int *)((long)pphVar85 + 0x74);
                  *(int *)(lVar75 + 0xc + (long)unaff_RBX * 0x14) =
                       *(int *)(pphVar85 + 0xe) - *(int *)(pphVar85 + 0xd);
                  unaff_R15 = (pthread_mutex_t *)pphVar85[2];
                  goto LAB_003ef8b4;
                }
              }
              unaff_R15 = (pthread_mutex_t *)pphVar85[2];
              uVar36 = *(uint *)((long)&p_Var47[5].__next + 4);
              if (uVar36 == *(uint *)&p_Var47[6].__prev) goto LAB_003f0ec0;
            }
            if (*(char *)&p_Var47[5].__next == '\0') goto LAB_003f0ec0;
            uVar111 = (ushort)*(undefined4 *)(pphVar85 + 1);
            *(uint *)(pphVar85 + 1) =
                 CONCAT22((short)((uint)*(undefined4 *)(pphVar85 + 1) >> 0x10),
                          uVar111 << 8 | uVar111 >> 8);
          } while (((*(byte *)((long)puVar65 + (long)pphVar85[7] * 2 + (ulong)uVar98 + 2) & 0x40) !=
                    0) && (iVar39 = *(int *)&p_Var47[0xc].__next,
                          *(int *)&p_Var47[0xc].__next = iVar39 + -1, 0 < iVar39));
        } while (*(char *)((long)&p_Var47[5].__next + 2) == '\0');
        p_Var128 = p_Var47[7].__next;
        p_Var52 = p_Var47[7].__prev;
        uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
        if ((p_Var128 == p_Var52) && (uVar35 == uVar36)) {
          uVar35 = uVar36;
          goto LAB_003ef9ea;
        }
        uVar35 = uVar35 + 1;
        if ((uVar35 == 0) || (uVar35 < *(uint *)&p_Var47[6].__next)) {
          if (p_Var128 != p_Var52) goto LAB_003ef9c0;
        }
        else {
          pphVar85[-1] = (hb_buffer_t *)0x3efa59;
          uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar35);
          in_XMM0 = extraout_XMM0_05;
          if ((char)uVar44 == '\0') goto LAB_003ef9fa;
          p_Var52 = p_Var47[7].__prev;
          p_Var128 = p_Var47[7].__next;
          if (p_Var128 != p_Var52) goto LAB_003ef9c0;
        }
        uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
        if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar35 + 1) {
          p_Var128 = p_Var47[8].__prev;
          p_Var47[7].__next = p_Var128;
joined_r0x003ef194:
          if (uVar35 != 0) {
            pphVar85[-1] = (hb_buffer_t *)0x3ef9b3;
            memcpy(p_Var128,p_Var52,(ulong)uVar35 * 0x14);
            p_Var52 = p_Var47[7].__prev;
            p_Var128 = p_Var47[7].__next;
          }
        }
        else {
LAB_003ef9bd:
          p_Var128 = p_Var52;
        }
      } while( true );
    }
    goto LAB_003f0ec0;
  case 6:
    if ((*(byte *)(*(long *)((long)unaff_R15 + 8) + 0xa8) & 1) != 0) {
      unaff_R13 = (uint *)(ulong)(uVar35 << 0x18);
      if ((uVar35 << 0x18 & 0x10000000) == 0) {
        uVar40 = *(ulong *)((long)unaff_R15 + 0x80);
        if ((*(ulong *)((long)unaff_R15 + 0xb0) & uVar40) != 0) {
          if ((*(ulong *)((long)unaff_R15 + 0xb8) & *(ulong *)((long)unaff_R15 + 0x88)) != 0) {
            if (((((*(ulong *)((long)unaff_R15 + 0xc0) & *(ulong *)((long)unaff_R15 + 0x90)) != 0)
                 && ((unaff_R15[5].__align & uVar40) != 0)) &&
                ((*(ulong *)((long)unaff_R15 + 0xd0) & *(ulong *)((long)unaff_R15 + 0x88)) != 0)) &&
               ((*(ulong *)((long)unaff_R15 + 0x90) & *(ulong *)((long)unaff_R15 + 0xd8)) != 0))
            goto code_r0x003eee56;
          }
        }
      }
    }
    goto LAB_003f0ec0;
  case 7:
    return ppVar41;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
    uVar40 = (ulong)*(uint *)(uVar40 + 0x1d609c4);
    goto code_r0x003f25c2;
  case 0xb:
    ppVar41->__size[0] = (byte)ppVar41->__size[0] >> 7 | ppVar41->__size[0] << 1;
    goto code_r0x003f267c;
  case 0xd:
    goto code_r0x003f26d0;
  case 0xf:
    param_1->__size[0] = param_1->__size[0] | 0xf4;
    goto LAB_003f275d;
  case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
  case 0x13:
  case 0x15:
  case 0x17:
    goto code_r0x003f2dd3;
  case 0x12:
    ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
    *(__pthread_mutex_s **)((long)pphVar85 + -8) = &unaff_RBX->__data;
    uVar111 = (ushort)(param_1->__data).__lock;
    ppVar41 = (pthread_mutex_t *)0x0;
    switch(uVar111 << 8 | uVar111 >> 8) {
    case 0:
      if (uVar36 < (uint)param_3) {
        return (pthread_mutex_t *)
               ((long)&(param_1->__data).__lock + ((ulong)param_2 & 0xffffffff) * 2 + 2);
      }
      return (pthread_mutex_t *)0x0;
    default:
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_get_value_switchD_003f2ba5_caseD_1
      ;
    case 2:
      uVar111 = (ushort)(param_1->__data).__count;
      uVar71 = uVar111 << 8 | uVar111 >> 8;
      param_5 = (uint *)(ulong)uVar71;
      if (uVar111 == 0) {
        uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
        uVar111 = uVar111 << 8 | uVar111 >> 8;
        in_R10 = (ulong)uVar111;
        param_6 = (pthread_mutex_t *)&((pthread_mutex_t *)0x0)->__data;
        uVar35 = (uint)uVar71;
        if (uVar35 != 0) goto LAB_003f2c11;
        goto LAB_003f2e1f;
      }
      uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
      uVar111 = uVar111 << 8 | uVar111 >> 8;
      param_3 = (pthread_mutex_t *)(ulong)uVar111;
      in_R10 = (ulong)uVar111;
      uVar40 = (ulong)((uVar71 - 1) * (uint)uVar111);
      in_R11 = (hb_buffer_t *)0x0;
      if (*(short *)((long)&(param_1->__data).__nusers + uVar40) == -1) {
        in_R11 = (hb_buffer_t *)
                 (ulong)-(uint)(*(short *)((long)&(param_1->__data).__nusers + uVar40 + 2) == -1);
      }
      param_6 = (pthread_mutex_t *)&((pthread_mutex_t *)0x0)->__data;
      goto code_r0x003f2c08;
    case 4:
      uVar111 = (ushort)(param_1->__data).__count;
      ppVar41 = (pthread_mutex_t *)(ulong)uVar111;
      param_5 = (uint *)(ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
      break;
    case 6:
      uVar111 = (ushort)(param_1->__data).__count;
      uVar71 = uVar111 << 8 | uVar111 >> 8;
      uVar35 = (uint)uVar71;
      if (uVar111 != 0) {
        uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
        uVar111 = uVar111 << 8 | uVar111 >> 8;
        param_3 = (pthread_mutex_t *)(ulong)uVar111;
        in_R10 = (ulong)uVar111;
        iVar39 = -(uint)(*(short *)((long)&(param_1->__data).__nusers +
                                   (ulong)((uVar71 - 1) * (uint)uVar111)) == -1);
        param_6 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
        uVar35 = iVar39 + uVar35;
        pcVar55 = (char *)(ulong)uVar35;
        if (!(uVar35 != 0 && SCARRY4(iVar39,(uint)uVar71) == (int)uVar35 < 0)) goto LAB_003f2e36;
        goto LAB_003f2d14;
      }
      uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
      uVar111 = uVar111 << 8 | uVar111 >> 8;
      param_3 = (pthread_mutex_t *)(ulong)uVar111;
      in_R10 = (ulong)uVar111;
      param_6 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
      pcVar55 = (char *)(ulong)uVar35;
      if (uVar35 != 0) goto LAB_003f2d14;
      goto LAB_003f2e36;
    case 8:
      uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
      uVar35 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
      if (uVar36 < uVar35) {
        return (pthread_mutex_t *)0x0;
      }
      uVar36 = uVar36 - uVar35;
      uVar111 = (ushort)(param_1->__data).__count;
      if (uVar36 < (ushort)(uVar111 << 8 | uVar111 >> 8)) {
        return (pthread_mutex_t *)((long)&(param_1->__data).__count + (ulong)uVar36 * 2 + 2);
      }
      return (pthread_mutex_t *)0x0;
    }
  case 0x16:
    iVar39 = (int)param_5;
    if ((short)ppVar41 == 0) {
      uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
      uVar111 = uVar111 << 8 | uVar111 >> 8;
      param_3 = (pthread_mutex_t *)(ulong)uVar111;
      param_6 = (pthread_mutex_t *)(ulong)uVar111;
    }
    else {
      uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
      uVar111 = uVar111 << 8 | uVar111 >> 8;
      param_3 = (pthread_mutex_t *)(ulong)uVar111;
      param_6 = (pthread_mutex_t *)(ulong)uVar111;
      uVar40 = (ulong)((iVar39 + -1) * (uint)uVar111);
      if (*(short *)((long)&(param_1->__data).__nusers + uVar40) == -1) {
        iVar104 = -(uint)(*(short *)((long)&(param_1->__data).__nusers + uVar40 + 2) == -1);
        ppVar41 = (pthread_mutex_t *)0x0;
        uVar35 = iVar104 + iVar39;
        in_R10 = (ulong)uVar35;
        if (uVar35 == 0 || SCARRY4(iVar104,iVar39) != (int)uVar35 < 0) {
          return (pthread_mutex_t *)0x0;
        }
        goto LAB_003f2db7;
      }
    }
    in_R10 = (ulong)param_5 & 0xffffffff;
    ppVar41 = (pthread_mutex_t *)0x0;
    if (iVar39 < 1) {
      return (pthread_mutex_t *)0x0;
    }
    goto LAB_003f2db7;
  case 0x14:
                    /* WARNING (jumptable): Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
    UNK_005e0181 = bVar70 + 0x77;
    goto LAB_003f2c3f;
  case 0x18:
    param_1->__size[0] = param_1->__size[0] + -0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
    *(hb_buffer_t *)((long)unaff_RBP + 0x41) =
         (hb_buffer_t)((char)*(hb_buffer_t *)((long)unaff_RBP + 0x41) + (char)param_3);
    *(__pthread_mutex_s **)((long)pphVar85 + -8) = &param_1->__data;
    *(uint **)((long)pphVar85 + -0x10) = unaff_R14;
    *(uint **)((long)pphVar85 + -0x18) = unaff_R13;
    *(__pthread_mutex_s **)((long)pphVar85 + -0x20) = &unaff_R12->__data;
    puVar65 = (uint *)((long)pphVar85 + -0x28);
    pphVar84 = (hb_buffer_t **)((long)pphVar85 + -0x28);
    *(__pthread_mutex_s **)((long)pphVar85 + -0x28) = &unaff_RBX->__data;
    param_5 = (uint *)((long)&(param_1->__data).__lock + 2);
    if ((ulong)*(uint *)&(param_2->__data).__list.__prev <
        (ulong)((long)param_5 - *(long *)((long)param_2 + 8))) goto LAB_003f312d;
    *(__pthread_mutex_s **)((long)pphVar85 + -0x48) = &param_3->__data;
    uVar111 = (ushort)(param_1->__data).__lock;
    uVar111 = uVar111 << 8 | uVar111 >> 8;
    if (10 < uVar111)
    goto 
    AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
    ;
    param_6 = (pthread_mutex_t *)((long)param_2 + 8);
    in_R11 = (hb_buffer_t *)((long)param_2 + 0x18);
    in_R10 = 0;
    switch(uVar111) {
    case 0:
      ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)param_2 + 0x38);
      unaff_R15 = ppVar41;
      goto code_r0x003f3175;
    default:
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
      ;
    case 2:
      if ((((hb_buffer_t *)(ulong)*(uint *)in_R11 <
            (hb_buffer_t *)(param_1->__size + (0xc - param_6->__align))) ||
          (uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2),
          uVar111 = uVar111 << 8 | uVar111 >> 8, uVar111 < 6)) ||
         ((unaff_R13 = (uint *)((long)param_1 + 0xc),
          (ulong)*(uint *)in_R11 < (ulong)((long)unaff_R13 - param_6->__align) ||
          (uVar71 = (ushort)(param_1->__data).__count,
          uVar35 = (uint)(ushort)(uVar71 << 8 | uVar71 >> 8) * (uint)uVar111,
          (uint)((param_2->__data).__kind - (int)unaff_R13) < uVar35)))) goto LAB_003f312d;
      iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) - uVar35;
      *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39;
      in_R10 = 0;
      if (iVar39 < 1)
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
      ;
      param_5 = (uint *)0xffffffff;
      uVar111 = (ushort)(param_1->__data).__count;
      uVar71 = uVar111 << 8 | uVar111 >> 8;
      if ((uVar111 != 0) &&
         (uVar110 = *(ushort *)((long)&(param_1->__data).__lock + 2),
         uVar40 = (ulong)((uint)(ushort)(uVar110 << 8 | uVar110 >> 8) * (uVar71 - 1)),
         *(short *)((long)&(param_1->__data).__nusers + uVar40) == -1)) {
        in_R10 = (ulong)-(uint)(*(short *)((long)&(param_1->__data).__nusers + uVar40 + 2) == -1);
      }
      if ((int)in_R10 + (uint)uVar71 == 0)
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
      ;
      unaff_R14 = (uint *)(ulong)(((int)in_R10 + (uint)uVar71) - 1);
      unaff_R12 = (pthread_mutex_t *)0x0;
      unaff_R15 = (pthread_mutex_t *)&_hb_NullPool;
      unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + -0x48);
      goto LAB_003f3331;
    case 4:
      if (((((hb_buffer_t *)(ulong)*(uint *)in_R11 <
             (hb_buffer_t *)(param_1->__size + (0xc - param_6->__align))) ||
           (uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2),
           uVar111 = uVar111 << 8 | uVar111 >> 8, uVar111 < 6)) ||
          (phVar123 = (hb_buffer_t *)((long)param_1 + 0xc),
          (ulong)*(uint *)in_R11 < (ulong)((long)phVar123 - param_6->__align))) ||
         (uVar71 = (ushort)(param_1->__data).__count,
         uVar35 = (uint)(ushort)(uVar71 << 8 | uVar71 >> 8) * (uint)uVar111,
         (uint)((param_2->__data).__kind - (int)phVar123) < uVar35)) goto LAB_003f312d;
      iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) - uVar35;
      *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39;
      iVar104 = 0;
      if (iVar39 < 1) goto LAB_003f312d;
      uVar111 = (ushort)(param_1->__data).__count;
      uVar71 = uVar111 << 8 | uVar111 >> 8;
      if ((uVar111 != 0) &&
         (uVar110 = *(ushort *)((long)&(param_1->__data).__lock + 2),
         uVar40 = (ulong)((uint)(ushort)(uVar110 << 8 | uVar110 >> 8) * (uVar71 - 1)),
         *(short *)((long)&(param_1->__data).__nusers + uVar40) == -1)) {
        iVar104 = -(uint)(*(short *)((long)&(param_1->__data).__nusers + uVar40 + 2) == -1);
      }
      in_R10 = 1;
      uVar35 = iVar104 + (uint)uVar71;
      if (uVar35 == 0)
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
      ;
      uVar40 = 0;
      *(hb_buffer_t **)((long)pphVar85 + -0x38) = phVar123;
      *(uint *)((long)pphVar85 + -0x3c) = uVar35;
      break;
    case 6:
      if ((((hb_buffer_t *)(ulong)*(uint *)in_R11 <
            (hb_buffer_t *)(param_1->__size + (0xc - param_6->__align))) ||
          (uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2),
          uVar111 = uVar111 << 8 | uVar111 >> 8, uVar111 < 4)) ||
         ((unaff_R13 = (uint *)((long)param_1 + 0xc),
          (ulong)*(uint *)in_R11 < (ulong)((long)unaff_R13 - param_6->__align) ||
          (uVar71 = (ushort)(param_1->__data).__count,
          uVar35 = (uint)(ushort)(uVar71 << 8 | uVar71 >> 8) * (uint)uVar111,
          (uint)((param_2->__data).__kind - (int)unaff_R13) < uVar35)))) goto LAB_003f312d;
      iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) - uVar35;
      *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39;
      in_R10 = 0;
      if (iVar39 < 1)
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
      ;
      param_5 = (uint *)0xffffffff;
      uVar111 = (ushort)(param_1->__data).__count;
      uVar71 = uVar111 << 8 | uVar111 >> 8;
      if (uVar111 != 0) {
        uVar110 = *(ushort *)((long)&(param_1->__data).__lock + 2);
        in_R10 = (ulong)-(uint)(*(short *)((long)&(param_1->__data).__nusers +
                                          (ulong)((uint)(ushort)(uVar110 << 8 | uVar110 >> 8) *
                                                 (uVar71 - 1))) == -1);
      }
      if ((int)in_R10 + (uint)uVar71 == 0)
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
      ;
      unaff_R14 = (uint *)(ulong)(((int)in_R10 + (uint)uVar71) - 1);
      unaff_R12 = (pthread_mutex_t *)0x0;
      unaff_R15 = (pthread_mutex_t *)&_hb_NullPool;
      unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + -0x48);
      goto LAB_003f379d;
    case 8:
      if (((hb_buffer_t *)(ulong)*(uint *)in_R11 <
           (hb_buffer_t *)(param_1->__size + (6 - param_6->__align))) ||
         (puVar100 = (undefined1 *)((long)&(param_1->__data).__count + 2),
         (hb_buffer_t *)(ulong)*(uint *)in_R11 < (hb_buffer_t *)(puVar100 + -param_6->__align)))
      goto LAB_003f312d;
      uVar111 = (ushort)(param_1->__data).__count;
      uVar71 = uVar111 << 8 | uVar111 >> 8;
      unaff_R15 = (pthread_mutex_t *)(ulong)uVar71;
      unaff_R13 = *(uint **)((long)pphVar85 + -0x48);
      if (((uint)((param_2->__data).__kind - (int)puVar100) < (uint)uVar71 * 2) ||
         (iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) + (uint)uVar71 * -2,
         *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39, iVar39 < 1))
      goto LAB_003f312d;
      in_R10 = 1;
      if (uVar111 == 0)
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
      ;
      param_3 = (pthread_mutex_t *)param_6->__align;
      unaff_RBX = (pthread_mutex_t *)(ulong)*(uint *)in_R11;
      param_5 = (uint *)&(param_1->__data).__owner;
      unaff_R12 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
      unaff_R14 = (uint *)0x4;
      goto LAB_003f3910;
    case 10:
      goto 
      AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
      ;
    }
    goto LAB_003f34fa;
  case 0x1a:
  case 0x1c:
  case 0x1e:
  case 0x20:
  case 0x22:
    goto code_r0x003f3820;
  case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1d:
    goto code_r0x003f33ac;
  case 0x1f:
    goto code_r0x003f366d;
  case 0x21:
    return ppVar41;
  case 0x23:
    return ppVar41;
  case 0x24:
    LOCK();
    uVar38 = *(undefined4 *)((long)unaff_RBX + -0x74000009);
    *(uint *)((long)unaff_RBX + -0x74000009) = uVar36;
    param_2 = (pthread_mutex_t *)CONCAT44((int)((ulong)param_2 >> 0x20),uVar38);
    UNLOCK();
    uRamffffffffc9e31e42 = uRamffffffffc9e31e42 >> 0xf | uRamffffffffc9e31e42 << 0x11;
    goto code_r0x003f398e;
  case 0x25:
  case 0x27:
  case 0x29:
  case 0x2b:
  case 0x2d:
    goto code_r0x003f3d5a;
  case 0x26:
    pcVar55 = (char *)(uVar40 + 0x1108703 + (long)ppVar41 * 8);
    *pcVar55 = *pcVar55 + bVar70;
    ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
    *(uint *)((long)pphVar85 + -8) = 0x41f838;
    *(uint *)((long)pphVar85 + -4) = 0;
    bVar133 = subtag_matches(unaff_RBX->__size,unaff_RBP->__size,"-mo");
    if (bVar133) {
LAB_0041f93e:
      *(uint *)((long)pphVar85 + 0x14) = 0x5a48544d;
      *(uint *)((long)pphVar85 + 0x18) = 0x5a484820;
      uVar36 = 2;
LAB_0041f9e3:
      bVar133 = (char)uVar35 == '\0';
    }
    else {
      *(uint *)((long)pphVar85 + -8) = 0x41f852;
      *(uint *)((long)pphVar85 + -4) = 0;
      bVar133 = subtag_matches(unaff_RBX->__size,unaff_RBP->__size,"-tw");
      pcVar55 = *(char **)((long)pphVar85 + 0x20);
      if (bVar133) {
LAB_0041f9d2:
        *(uint *)((long)pphVar85 + 0x14) = 0x5a485420;
LAB_0041f9da:
        uVar36 = 1;
        goto LAB_0041f9e3;
      }
      *(uint *)((long)pphVar85 + -8) = 0x41ec8a;
      *(uint *)((long)pphVar85 + -4) = 0;
      iVar39 = strncmp(pcVar55,"px-",3);
      if (iVar39 == 0) {
        pcVar55 = *(char **)((long)pphVar85 + 8);
        *(uint *)((long)pphVar85 + -8) = 0x41f87b;
        *(uint *)((long)pphVar85 + -4) = 0;
        bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-hk");
        if (!bVar133) {
          *(uint *)((long)pphVar85 + -8) = 0x41f891;
          *(uint *)((long)pphVar85 + -4) = 0;
          bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-mo");
          if (bVar133) goto LAB_0041f93e;
          *(uint *)((long)pphVar85 + -8) = 0x41f8ab;
          *(uint *)((long)pphVar85 + -4) = 0;
          bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-tw");
          pcVar55 = *(char **)((long)pphVar85 + 0x20);
          if (bVar133) goto LAB_0041f9d2;
          goto LAB_0041ec92;
        }
LAB_0041f8d8:
        *(uint *)((long)pphVar85 + 0x14) = 0x5a484820;
        goto LAB_0041f9da;
      }
LAB_0041ec92:
      *(uint *)((long)pphVar85 + -8) = 0x41eca6;
      *(uint *)((long)pphVar85 + -4) = 0;
      iVar39 = strncmp(pcVar55,"sp-",3);
      if (iVar39 == 0) {
        pcVar55 = *(char **)((long)pphVar85 + 8);
        *(uint *)((long)pphVar85 + -8) = 0x41f8d4;
        *(uint *)((long)pphVar85 + -4) = 0;
        bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-hk");
        if (bVar133) goto LAB_0041f8d8;
        *(uint *)((long)pphVar85 + -8) = 0x41f93a;
        *(uint *)((long)pphVar85 + -4) = 0;
        bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-mo");
        if (bVar133) goto LAB_0041f93e;
        *(uint *)((long)pphVar85 + -8) = 0x41f99f;
        *(uint *)((long)pphVar85 + -4) = 0;
        bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-tw");
        pcVar55 = *(char **)((long)pphVar85 + 0x20);
        if (bVar133) goto LAB_0041f9d2;
      }
      *(uint *)((long)pphVar85 + -8) = 0x41ecc2;
      *(uint *)((long)pphVar85 + -4) = 0;
      iVar39 = strncmp(pcVar55,"zh-",3);
      if (iVar39 != 0) {
LAB_0041ecca:
        *(uint *)((long)pphVar85 + -8) = 0x41f0cc;
        *(uint *)((long)pphVar85 + -4) = 0;
        iVar39 = strncmp(pcVar55,"zo-",3);
        pcVar55 = *(char **)((long)pphVar85 + 8);
        cVar34 = (char)uVar35;
        if (iVar39 == 0) {
          *(uint *)((long)pphVar85 + -8) = 0x41f0eb;
          *(uint *)((long)pphVar85 + -4) = 0;
          bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-hk");
          if (bVar133) {
            *(uint *)((long)pphVar85 + 0x14) = 0x5a484820;
LAB_0041f31b:
            uVar36 = 1;
          }
          else {
            *(uint *)((long)pphVar85 + -8) = 0x41f2dc;
            *(uint *)((long)pphVar85 + -4) = 0;
            bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-mo");
            if (!bVar133) {
              *(uint *)((long)pphVar85 + -8) = 0x41f30c;
              *(uint *)((long)pphVar85 + -4) = 0;
              bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-tw");
              if (!bVar133) goto hb_ot_map_builder_t_hb_ot_map_builder_t_switchD_0041ebbb_caseD_62;
              *(uint *)((long)pphVar85 + 0x14) = 0x5a485420;
              goto LAB_0041f31b;
            }
            *(uint *)((long)pphVar85 + 0x14) = 0x5a48544d;
            *(uint *)((long)pphVar85 + 0x18) = 0x5a484820;
            uVar36 = 2;
          }
          uVar35 = *(uint *)pphVar85;
          goto joined_r0x0041f32f;
        }
hb_ot_map_builder_t_hb_ot_map_builder_t_switchD_0041ebbb_caseD_62:
        *(uint *)((long)pphVar85 + -8) = 0x41f344;
        *(uint *)((long)pphVar85 + -4) = 0;
        pcVar55 = strchr(pcVar55,0x2d);
        if ((5 < *(long *)((long)pphVar85 + 0x38)) && (pcVar55 != (char *)0x0)) {
          pbVar119 = (byte *)(pcVar55 + 1);
          *(uint *)((long)pphVar85 + -8) = 0x41f366;
          *(uint *)((long)pphVar85 + -4) = 0;
          pcVar56 = strchr((char *)pbVar119,0x2d);
          if (pcVar56 == (char *)0x0) {
            *(uint *)((long)pphVar85 + -8) = 0x41f547;
            *(uint *)((long)pphVar85 + -4) = 0;
            pcVar56 = (char *)strlen((char *)pbVar119);
            pbVar69 = *(byte **)((long)pphVar85 + 8);
          }
          else {
            pcVar56 = pcVar56 + ~(ulong)pcVar55;
            pbVar69 = *(byte **)((long)pphVar85 + 8);
          }
          if (pcVar56 == (char *)0x3) {
            if ((byte)((*pbVar119 & 0xdf) + 0xbf) < 0x1a) {
              pbVar69 = pbVar119;
            }
            *(byte **)((long)pphVar85 + 8) = pbVar69;
          }
        }
        pcVar56 = *(char **)((long)pphVar85 + 8);
        *(uint *)((long)pphVar85 + -8) = 0x41f3a6;
        *(uint *)((long)pphVar85 + -4) = 0;
        pcVar57 = strchr(pcVar56,0x2d);
        iVar39 = (int)unaff_RBP;
        if (pcVar57 != (char *)0x0) {
          iVar39 = (int)pcVar57;
        }
        uVar35 = iVar39 - (int)pcVar56;
        *(char *)((long)pphVar85 + 7) = cVar34;
        if (uVar35 == 3) {
          pcVar57 = " eaa IQS oaa ARA taa IQS aba";
          uVar37 = 0x4c9;
          uVar36 = 0x4c9;
joined_r0x0041f3f1:
          bVar133 = false;
        }
        else {
          if (uVar35 == 2) {
            pcVar57 = 
            "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ eaa IQS oaa ARA taa IQS aba"
            ;
            uVar37 = 0xcc;
            uVar36 = 0xcc;
            goto joined_r0x0041f3f1;
          }
          pcVar57 = (char *)0x0;
          bVar133 = true;
          uVar37 = 0;
          uVar36 = 0;
        }
        uVar60 = 0;
        if (pcVar56 == (char *)0x0) goto LAB_0041f46d;
        uVar60 = 0;
        uVar36 = uVar37;
        if ((uVar35 == 0) || (cVar34 = *pcVar56, cVar34 == '\0')) goto LAB_0041f46d;
        uVar40 = 4;
        if (uVar35 < 4) {
          uVar40 = (ulong)uVar35;
        }
        uVar132 = 0;
        goto LAB_0041f420;
      }
      *(byte *)((long)pphVar85 + 7) = (byte)uVar35;
      pcVar55 = *(char **)((long)pphVar85 + 8);
      *(uint *)((long)pphVar85 + -8) = 0x41f901;
      *(uint *)((long)pphVar85 + -4) = 0;
      bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-hk");
      if (bVar133) {
        *(uint *)((long)pphVar85 + 0x14) = 0x5a484820;
        uVar36 = 1;
        bVar133 = *(char *)((long)pphVar85 + 7) == '\0';
      }
      else {
        *(uint *)((long)pphVar85 + -8) = 0x41f96d;
        *(uint *)((long)pphVar85 + -4) = 0;
        bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-mo");
        if (!bVar133) {
          *(uint *)((long)pphVar85 + -8) = 0x41f9c0;
          *(uint *)((long)pphVar85 + -4) = 0;
          bVar133 = subtag_matches(pcVar55,unaff_RBP->__size,"-tw");
          uVar35 = (uint)*(byte *)((long)pphVar85 + 7);
          pcVar55 = *(char **)((long)pphVar85 + 0x20);
          if (bVar133) goto LAB_0041f9d2;
          goto LAB_0041ecca;
        }
        *(uint *)((long)pphVar85 + 0x14) = 0x5a48544d;
        *(uint *)((long)pphVar85 + 0x18) = 0x5a484820;
        uVar36 = 2;
        bVar133 = *(char *)((long)pphVar85 + 7) == '\0';
      }
    }
    uVar35 = *(uint *)pphVar85;
    if (!bVar133) goto LAB_0041f56e;
    goto LAB_0041f6da;
  case 0x28:
    goto code_r0x003f3b06;
  case 0x2a:
    goto code_r0x003f3c06;
  case 0x2c:
    ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
    goto LAB_003f3cf0;
  case 0x2e:
    param_1->__size[0] = (byte)param_1->__size[0] >> 7 | param_1->__size[0] << 1;
    auVar15._4_4_ = in_XMM9_Db;
    auVar15._0_4_ = in_XMM9_Da;
    auVar15._8_4_ = in_XMM9_Dc;
    auVar15._12_4_ = in_XMM9_Dd;
    vpaddsw_avx(auVar15,*(undefined1 (*) [16])((long)param_2 + -0x7d));
    if (-0x5e01f5 < (long)uVar40) goto code_r0x003f3d03;
    ppVar61 = (pthread_mutex_t *)CONCAT62(0x5e,CONCAT11(ppVar41 == (pthread_mutex_t *)0x0,0xf4));
    goto code_r0x003f3d03;
  case 0x2f:
    bVar133 = CARRY1(ppVar41->__size[0],bVar70);
    ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
    goto code_r0x003f3f52;
  case 0x30:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x31:
    goto code_r0x003f45a3;
  case 0x32:
  case 0x34:
    if (((hb_buffer_t *)(ulong)*(uint *)&(param_2->__data).__list.__prev <
         (hb_buffer_t *)(ppVar41->__size + (2 - *(long *)((long)param_2 + 8)))) ||
       (uVar111 = (ushort)(param_1->__data).__lock, uVar111 = uVar111 << 8 | uVar111 >> 8,
       uVar111 < 2)) goto LAB_003f4e62;
    unaff_RBX = *(pthread_mutex_t **)((long)param_2 + 8);
    uVar35 = *(uint *)&(param_2->__data).__list.__prev;
    ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
    if (ppVar61 < (pthread_mutex_t *)(param_1->__size + (8 - (long)unaff_RBX))) goto LAB_003f4e62;
    unaff_RBP = (pthread_mutex_t *)&(param_1->__data).__owner;
    uVar36 = (param_1->__data).__count;
    uVar60 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 | uVar36 << 0x18;
    in_R11 = (hb_buffer_t *)(ulong)uVar60;
    uVar37 = 0;
    unaff_R12 = param_2;
    if (uVar36 != 0) {
      *(__pthread_mutex_s **)((long)pphVar85 + 0x80) = &param_1->__data;
      *(uint *)((long)pphVar85 + 0x6c) = uVar36;
      *(int **)((long)pphVar85 + 0x78) = &(param_2->__data).__owner;
      *(uint *)((long)pphVar85 + 0x74) = uVar60 - 1;
      param_6 = (pthread_mutex_t *)((long)&(param_2->__data).__list.__prev + 4);
      *(hb_buffer_t **)((long)pphVar85 + 0x88) = in_R11;
      uVar36 = 1;
      if (1 < uVar60) {
        uVar36 = uVar60;
      }
      *(uint *)((long)pphVar85 + 0x70) = uVar36;
      param_1 = (pthread_mutex_t *)0x0;
      in_XMM7 = (undefined1  [16])0x0;
      *(__pthread_mutex_s **)((long)pphVar85 + 0x10) = &param_6->__data;
      goto LAB_003f3f0e;
    }
    goto LAB_003f4e86;
  case 0x33:
    goto LAB_003f4640;
  case 0x35:
    goto code_r0x003f4c23;
  case 0x36:
    goto code_r0x003f4f12;
  case 0x37:
  case 0x39:
  case 0x3b:
  case 0x3d:
  case 0x3f:
    goto code_r0x003f51ac;
  case 0x38:
    LOCK();
    (param_2->__data).__lock = (uint)param_3;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3a:
    goto code_r0x003f4f71;
  case 0x3c:
    *(hb_buffer_t *)(unaff_RBP->__size + 0xf) =
         (hb_buffer_t)
         ((char)*(hb_buffer_t *)(unaff_RBP->__size + 0xf) + (char)((ulong)param_3 >> 8));
    goto code_r0x003f5152;
  case 0x3e:
    goto code_r0x003f51c3;
  case 0x40:
    goto code_r0x003f5215;
  case 0x41:
    goto code_r0x003f7f71;
  default:
    ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
    (&UNK_005e017f)[uVar40] = (&UNK_005e017f)[uVar40] + -0xc;
    goto code_r0x003f7e92;
  case 0x48:
    goto code_r0x003f7f25;
  case 0x49:
    halt_baddata();
  case 0x4c:
    pcVar74 = (code *)swi(1);
    ppVar41 = (pthread_mutex_t *)(*pcVar74)();
    return ppVar41;
  case 0x5a:
    goto LAB_003f8038;
  case 0x5b:
    goto code_r0x003f7fe1;
  case 0x5f:
    ppVar41->__size[0] = ppVar41->__size[0] + '\x01';
    ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
    goto LAB_003f8000;
  case 0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7f:
    ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
    goto code_r0x003f8047;
  case 0x9b:
    *(hb_buffer_t *)((long)param_1 + 0x3a) =
         (hb_buffer_t)((char)*(hb_buffer_t *)((long)param_1 + 0x3a) + (char)((ulong)unaff_RBX >> 8))
    ;
    pphVar94 = pphVar85;
    goto code_r0x003f7fc6;
  case 0x9d:
    ppVar41 = (pthread_mutex_t *)CONCAT71((int7)((ulong)ppVar41 >> 8),bVar70 + 0x76);
    goto code_r0x003f7fe5;
  case 0x9e:
    goto code_r0x003f7dfd;
  case 0x9f:
    break;
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
    goto LAB_003f7d30;
  case 0xb0:
    piVar49 = (int *)((uVar40 - 0x7458cf98) + (long)ppVar41 * 8);
    *piVar49 = *piVar49 + 1;
    LOCK();
    uVar38 = *(undefined4 *)(uVar40 + 0x485e01f4);
    *(undefined4 *)(uVar40 + 0x485e01f4) = (int)ppVar41;
    uVar40 = CONCAT44((int)((ulong)ppVar41 >> 0x20),uVar38);
    UNLOCK();
    goto code_r0x003f7e42;
  case 0xb1:
    uVar40 = (ulong)ppVar41 & 0xffffffffffffff60;
    goto code_r0x003f7e42;
  case 0xb2:
  case 0xb4:
    param_1 = (pthread_mutex_t *)(ulong)((int)param_1 + 0x28);
    goto LAB_003fd093;
  case 0xb3:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
    *(uint *)(&UNK_005e0177 + uVar40) = *(uint *)(&UNK_005e0177 + uVar40) & 0x5e01f4;
    return ppVar41;
  case 0xb5:
    ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
    ppVar41->__size[0] = ppVar41->__size[0] + bVar70;
    *(hb_buffer_t *)((long)param_2 + -0x70) =
         (hb_buffer_t)((char)*(hb_buffer_t *)((long)param_2 + -0x70) + (char)((ulong)ppVar41 >> 8));
    goto LAB_003fd120;
  }
code_r0x003f7de1:
  ppVar41->__size[0] = ppVar41->__size[0] + (char)ppVar41;
  ppVar61->__align = lVar75;
  goto code_r0x003f7dc5;
code_r0x003f3f52:
  *(__pthread_mutex_s **)((long)pphVar85 + 0x90) = &param_1->__data;
  pphVar97 = pphVar85;
  if (bVar133) {
    ppVar81 = (pthread_mutex_t *)((long)ppVar41 - (long)ppVar61);
    uVar76 = (undefined7)((ulong)unaff_RBX >> 8);
    unaff_RBX = (pthread_mutex_t *)
                CONCAT71(uVar76,ppVar41 < ppVar61 || ppVar81 == (pthread_mutex_t *)0x0);
    if (ppVar61 < param_3) {
      unaff_RBX = (pthread_mutex_t *)CONCAT71(uVar76,1);
    }
    else if (ppVar41 >= ppVar61 && ppVar81 != (pthread_mutex_t *)0x0) {
      *(__pthread_mutex_s **)((long)unaff_R12 + 8) = &ppVar61->__data;
      uVar35 = (ppVar61->__data).__lock;
      ppVar73 = (pthread_mutex_t *)
                (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                       uVar35 << 0x18);
      ppVar41 = ppVar81;
      if (ppVar73 < ppVar81) {
        ppVar41 = ppVar73;
      }
      param_3 = (pthread_mutex_t *)(ppVar61->__size + (long)ppVar41->__size);
code_r0x003f3f89:
      *(__pthread_mutex_s **)((long)unaff_R12 + 0x10) = &param_3->__data;
      *(int *)&(unaff_R12->__data).__list.__prev = (int)ppVar41;
      param_2 = (pthread_mutex_t *)((ulong)ppVar41 & 0xffffffff);
      param_3 = ppVar61;
      pphVar97 = pphVar85;
      goto LAB_003f3f98;
    }
    pauVar63 = *(undefined1 (**) [16])((long)pphVar85 + 0x78);
    *pauVar63 = in_XMM7;
    *(undefined4 *)pauVar63[1] = 0;
    param_2 = (pthread_mutex_t *)0x0;
    param_3 = (pthread_mutex_t *)0x0;
  }
LAB_003f3f98:
  auVar261._8_8_ = in_XMM1._0_8_;
  auVar261._0_8_ = in_XMM0._0_8_;
  if (((ulong)param_2 & 0xffffffff) < (ulong)((long)unaff_R13 - (long)param_3->__size))
  goto LAB_003f4e44;
  uVar35 = (unaff_RBP->__data).__lock;
  uVar35 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18;
  if (uVar35 < 0xc) goto LAB_003f4e44;
  param_3 = *(pthread_mutex_t **)((long)unaff_R12 + 8);
  ppVar61 = (pthread_mutex_t *)((long)unaff_RBP - (long)param_3->__size);
  uVar36 = *(uint *)&(unaff_R12->__data).__list.__prev;
  ppVar41 = (pthread_mutex_t *)(ulong)uVar36;
  if (((ppVar41 < ppVar61) ||
      (uVar37 = (uint)unaff_RBP, (unaff_R12->__data).__kind - uVar37 < uVar35)) ||
     (iVar39 = (param_6->__data).__lock - uVar35, (param_6->__data).__lock = iVar39, iVar39 < 1))
  goto LAB_003f4e44;
  uVar35 = (unaff_RBP->__data).__count >> 0x18;
  if (6 < (byte)((unaff_RBP->__data).__count >> 0x18)) {
LAB_003f3ed0:
    param_2 = unaff_R12;
    uVar35 = (unaff_RBP->__data).__lock;
    unaff_RBP = (pthread_mutex_t *)
                (unaff_RBP->__size +
                (uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18
                ));
    unaff_RBX = *(pthread_mutex_t **)(*(long *)((long)param_2 + 0x30) + 0x10);
    *(__pthread_mutex_s **)((long)param_2 + 8) = &unaff_RBX->__data;
    uVar35 = *(uint *)(*(long *)((long)param_2 + 0x30) + 0x18);
    ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
    *(hb_buffer_t **)((long)param_2 + 0x10) =
         (hb_buffer_t *)(ppVar61->__size + (long)unaff_RBX->__size);
    *(uint *)&(param_2->__data).__list.__prev = uVar35;
    param_1 = (pthread_mutex_t *)(ulong)((int)*(undefined8 *)((long)pphVar97 + 0x90) + 1U);
    pphVar85 = pphVar97;
    if ((int)*(undefined8 *)((long)pphVar97 + 0x90) + 1U == *(uint *)((long)pphVar97 + 0x70)) {
      uVar111 = **(ushort **)((long)pphVar97 + 0x80) << 8 |
                **(ushort **)((long)pphVar97 + 0x80) >> 8;
      in_R11 = *(hb_buffer_t **)((long)pphVar97 + 0x88);
      uVar37 = *(uint *)((long)pphVar97 + 0x6c);
      unaff_R12 = param_2;
LAB_003f4e86:
      param_6 = (pthread_mutex_t *)(ulong)uVar37;
      param_5 = (uint *)CONCAT71((int7)((ulong)param_5 >> 8),1);
      if (uVar111 < 3) goto LAB_003f4f62;
      lVar75 = ((ulong)in_R11 & 0xffffffff) * 4;
      uVar35 = (uint)lVar75;
      if ((((int)((ulong)lVar75 >> 0x20) == 0) &&
          ((pthread_mutex_t *)((long)unaff_RBP - (long)unaff_RBX->__size) <= ppVar61)) &&
         (uVar35 <= (uint)((unaff_R12->__data).__kind - (int)unaff_RBP))) {
        uVar35 = *(int *)((long)&(unaff_R12->__data).__list.__prev + 4) - uVar35;
        param_3 = (pthread_mutex_t *)(ulong)uVar35;
        *(uint *)((long)&(unaff_R12->__data).__list.__prev + 4) = uVar35;
        param_2 = unaff_RBP;
        goto code_r0x003f4ec3;
      }
    }
    else {
LAB_003f3f0e:
      unaff_R13 = &(unaff_RBP->__data).__nusers;
      unaff_R12 = param_2;
      if ((ulong)((long)unaff_R13 - (long)unaff_RBX->__size) <= (ulong)uVar35)
      goto code_r0x003f3f23;
    }
    goto LAB_003f4e62;
  }
  param_1 = (pthread_mutex_t *)&DAT_005e02b0;
  uVar40 = (ulong)*(int *)(&DAT_005e02b0 + (ulong)uVar35 * 4);
  bVar133 = 0xffffffffffa1fd4f < uVar40;
  param_2 = (pthread_mutex_t *)(&DAT_005e02b0 + uVar40);
  *(__pthread_mutex_s **)((long)pphVar97 + 8) = &unaff_RBP->__data;
  pphVar90 = pphVar97;
  pphVar85 = pphVar97;
  pphVar93 = pphVar97;
  switch(uVar35) {
  case 0:
    if (&(ppVar61->__data).__spins <= ppVar41) {
      uVar35 = (unaff_RBP->__data).__nusers;
      lVar75 = (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18) * 6;
      uVar35 = (uint)lVar75;
      if ((((int)((ulong)lVar75 >> 0x20) == 0) &&
          (puVar100 = (undefined1 *)((long)&(unaff_RBP->__data).__list.__prev + 4),
          (ulong)((long)puVar100 - *(long *)((long)unaff_R12 + 8)) <=
          (ulong)*(uint *)&(unaff_R12->__data).__list.__prev)) &&
         (uVar35 <= (uint)((unaff_R12->__data).__kind - (int)puVar100))) {
LAB_003f3ec0:
        iVar39 = (param_6->__data).__lock - uVar35;
        (param_6->__data).__lock = iVar39;
joined_r0x003f4e19:
        if (0 < iVar39) goto LAB_003f3ed0;
      }
    }
    break;
  case 1:
    if ((((&(ppVar61->__data).__list.__next <= ppVar41) &&
         ((pthread_mutex_t *)((long)unaff_R13 + (0x10 - (long)param_3)) <= ppVar41)) &&
        (uVar35 = ((__pthread_mutex_s *)unaff_R13)->__lock,
        3 < (uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18)))
       && ((hb_buffer_t *)((long)unaff_R13 + (8 - *(long *)((long)unaff_R12 + 8))) <=
           (hb_buffer_t *)(ulong)*(uint *)&(unaff_R12->__data).__list.__prev)) {
      uVar35 = ((__pthread_mutex_s *)unaff_R13)->__count;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3f40bb;
      uVar40 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                         ((Lookup<OT::IntType<unsigned_short,2u>> *)
                          ((long)&((__pthread_mutex_s *)unaff_R13)->__lock +
                          (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8
                                 | uVar35 << 0x18)),(long)unaff_R12);
      param_6 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
      in_XMM7 = (undefined1  [16])0x0;
      in_XMM9_Da = -1;
      in_XMM9_Db = -1;
      in_XMM9_Dc = -1;
      in_XMM9_Dd = -1;
      in_XMM10_Da = -0x7fffffff;
      in_XMM10_Db = -0x7fffffff;
      in_XMM10_Dc = -0x7fffffff;
      in_XMM10_Dd = -0x7fffffff;
      if ((char)uVar40 != '\0') {
        uVar35 = ((__pthread_mutex_s *)unaff_R13)->__lock;
        uVar35 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18
        ;
        in_R10 = (ulong)uVar35;
        if (-1 < (int)uVar35) {
          uVar36 = ((__pthread_mutex_s *)unaff_R13)->__owner;
          uVar40 = (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                          uVar36 << 0x18);
          unaff_RBX = (pthread_mutex_t *)((long)&((__pthread_mutex_s *)unaff_R13)->__lock + uVar40);
          uVar36 = ((__pthread_mutex_s *)unaff_R13)->__nusers;
          uVar132 = (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                           uVar36 << 0x18);
          ppVar81 = (pthread_mutex_t *)((long)&((__pthread_mutex_s *)unaff_R13)->__lock + uVar132);
          *(uint *)((long)pphVar97 + 0x20) = uVar35 * 2;
          *(hb_buffer_t **)((long)pphVar97 + 0x58) = (hb_buffer_t *)((long)unaff_R13 + uVar132);
          *(hb_buffer_t **)((long)pphVar97 + 0x50) = (hb_buffer_t *)((long)unaff_R13 + uVar132 + 6);
          *(hb_buffer_t **)((long)pphVar97 + 0x60) = (hb_buffer_t *)((long)unaff_R13 + uVar132 + 8);
          *(long *)((long)pphVar97 + 0x48) = 2 - (long)((long)unaff_R13 + uVar132 + 8);
          *(hb_buffer_t **)((long)pphVar97 + 0x38) = (hb_buffer_t *)((long)unaff_R13 + uVar40);
          *(hb_buffer_t **)((long)pphVar97 + 0x40) = (hb_buffer_t *)((long)unaff_R13 + uVar40 + 8);
          *(hb_buffer_t **)((long)pphVar97 + 0x28) =
               (hb_buffer_t *)(unaff_RBP->__size + uVar40 + 0x14);
          *(hb_buffer_t **)((long)pphVar97 + 0x30) =
               (hb_buffer_t *)(unaff_RBP->__size + uVar132 + 0x24);
          in_R11 = (hb_buffer_t *)0x0;
          unaff_R14 = (uint *)0x0;
          unaff_R15 = (pthread_mutex_t *)0x0;
          *(__pthread_mutex_s **)((long)pphVar97 + 0x18) = &unaff_RBX->__data;
          in_XMM0 = extraout_XMM0_14;
          in_XMM8 = _DAT_005de020;
          in_XMM11 = _DAT_006524b0;
          do {
            param_5 = (uint *)((ulong)unaff_R15 & 0xffffffff);
            iVar39 = (int)in_R11;
            uVar36 = (uint)unaff_R14;
            uVar35 = (uint)unaff_R15;
            unaff_R15 = (pthread_mutex_t *)param_5;
            if (iVar39 <= (int)uVar36) {
              uVar60 = uVar36 + 1;
              uVar37 = (uint)((ulong)uVar60 * (ulong)*(uint *)((long)pphVar97 + 0x20));
              if ((((int)((ulong)uVar60 * (ulong)*(uint *)((long)pphVar97 + 0x20) >> 0x20) != 0) ||
                  ((ulong)*(uint *)&(unaff_R12->__data).__list.__prev <
                   (ulong)((long)unaff_RBX - *(long *)((long)unaff_R12 + 8)))) ||
                 ((uint)((unaff_R12->__data).__kind - (int)unaff_RBX) < uVar37)) goto LAB_003f4e44;
              iVar104 = (param_6->__data).__lock - uVar37;
              (param_6->__data).__lock = iVar104;
              if (((iVar104 < 1) ||
                  (iVar104 = ~uVar36 + iVar39 + iVar104, (param_6->__data).__lock = iVar104,
                  iVar104 < 1)) || ((int)((ulong)uVar60 * (in_R10 & 0xffffffff) >> 0x20) != 0))
              goto LAB_003f4e44;
              uVar37 = uVar60 * (int)in_R10;
              uVar105 = iVar39 * (int)in_R10;
              if (uVar105 < uVar37) {
                uVar132 = (ulong)uVar105;
                puVar130 = (ushort *)((long)&(unaff_RBX->__data).__lock + uVar132 * 2);
                uVar127 = uVar132 * 2 + 2 + *(long *)((long)pphVar97 + 0x38);
                uVar40 = *(long *)((long)pphVar97 + 0x38) + (ulong)uVar37 * 2;
                if (uVar40 < uVar127) {
                  uVar40 = uVar127;
                }
                uVar40 = (uVar40 - (*(long *)((long)pphVar97 + 0x40) + uVar132 * 2)) + 7;
                if (uVar40 < 0xe) {
                  unaff_RBP = *(pthread_mutex_t **)((long)pphVar97 + 8);
                }
                else {
                  uVar127 = (uVar40 >> 1) + 1;
                  uVar67 = uVar127 & 0xfffffffffffffff8;
                  auVar137._4_4_ = uVar35;
                  auVar137._0_4_ = uVar35;
                  auVar137._8_4_ = uVar35;
                  auVar137._12_4_ = uVar35;
                  uVar40 = 0;
                  auVar261 = auVar137;
                  do {
                    uVar118 = *(ulong *)(uVar132 * 2 + *(long *)((long)pphVar97 + 0x28) + -8 +
                                        uVar40 * 2);
                    auVar211._8_8_ = 0;
                    auVar211._0_8_ = uVar118;
                    uVar117 = *(ulong *)(uVar132 * 2 + *(long *)((long)pphVar97 + 0x28) + uVar40 * 2
                                        );
                    auVar176._8_8_ = 0;
                    auVar176._0_8_ = uVar117;
                    auVar208._0_2_ = (ushort)uVar118 >> 8;
                    auVar208._2_2_ = (ushort)(uVar118 >> 0x10) >> 8;
                    auVar208._4_2_ = (ushort)(uVar118 >> 0x20) >> 8;
                    auVar208._6_2_ = (ushort)(uVar118 >> 0x38);
                    auVar208._8_6_ = 0;
                    auVar166 = psllw(auVar211,8);
                    auVar208 = auVar166._0_14_ | auVar208;
                    auVar173._0_2_ = (ushort)uVar117 >> 8;
                    auVar173._2_2_ = (ushort)(uVar117 >> 0x10) >> 8;
                    auVar173._4_2_ = (ushort)(uVar117 >> 0x20) >> 8;
                    auVar173._6_2_ = (ushort)(uVar117 >> 0x38);
                    auVar173._8_6_ = 0;
                    auVar166 = psllw(auVar176,8);
                    auVar173 = auVar166._0_14_ | auVar173;
                    auVar214._0_12_ = auVar208._0_12_;
                    auVar214._12_2_ = auVar208._6_2_;
                    auVar214._14_2_ = in_XMM7._6_2_;
                    auVar213._12_4_ = auVar214._12_4_;
                    auVar213._0_10_ = auVar208._0_10_;
                    auVar213._10_2_ = in_XMM7._4_2_;
                    auVar212._10_6_ = auVar213._10_6_;
                    auVar212._0_8_ = auVar208._0_8_;
                    auVar212._8_2_ = auVar208._4_2_;
                    auVar16._4_8_ = auVar212._8_8_;
                    auVar16._2_2_ = in_XMM7._2_2_;
                    auVar16._0_2_ = auVar208._2_2_;
                    iVar104 = CONCAT22(in_XMM7._0_2_,auVar208._0_2_);
                    auVar179._0_12_ = auVar173._0_12_;
                    auVar179._12_2_ = auVar173._6_2_;
                    auVar179._14_2_ = in_XMM7._6_2_;
                    auVar178._12_4_ = auVar179._12_4_;
                    auVar178._0_10_ = auVar173._0_10_;
                    auVar178._10_2_ = in_XMM7._4_2_;
                    auVar177._10_6_ = auVar178._10_6_;
                    auVar177._0_8_ = auVar173._0_8_;
                    auVar177._8_2_ = auVar173._4_2_;
                    auVar17._4_8_ = auVar177._8_8_;
                    auVar17._2_2_ = in_XMM7._2_2_;
                    auVar17._0_2_ = auVar173._2_2_;
                    iVar39 = CONCAT22(in_XMM7._0_2_,auVar173._0_2_);
                    in_XMM4._0_4_ = iVar104 - in_XMM9_Da;
                    in_XMM4._4_4_ = auVar16._0_4_ - in_XMM9_Db;
                    in_XMM4._8_4_ = auVar212._8_4_ - in_XMM9_Dc;
                    in_XMM4._12_4_ = auVar213._12_4_ - in_XMM9_Dd;
                    in_XMM5._0_4_ = iVar39 - in_XMM9_Da;
                    in_XMM5._4_4_ = auVar17._0_4_ - in_XMM9_Db;
                    in_XMM5._8_4_ = auVar177._8_4_ - in_XMM9_Dc;
                    in_XMM5._12_4_ = auVar178._12_4_ - in_XMM9_Dd;
                    auVar166 = auVar137 ^ in_XMM11;
                    auVar136._0_4_ = -(uint)(iVar104 + in_XMM10_Da < auVar166._0_4_);
                    auVar136._4_4_ = -(uint)(auVar16._0_4_ + in_XMM10_Db < auVar166._4_4_);
                    auVar136._8_4_ = -(uint)(auVar212._8_4_ + in_XMM10_Dc < auVar166._8_4_);
                    auVar136._12_4_ = -(uint)(auVar213._12_4_ + in_XMM10_Dd < auVar166._12_4_);
                    in_XMM6 = auVar137 & auVar136;
                    auVar137 = ~auVar136 & in_XMM4 | in_XMM6;
                    auVar166 = auVar261 ^ in_XMM11;
                    auVar154._0_4_ = -(uint)(iVar39 + in_XMM10_Da < auVar166._0_4_);
                    auVar154._4_4_ = -(uint)(auVar17._0_4_ + in_XMM10_Db < auVar166._4_4_);
                    auVar154._8_4_ = -(uint)(auVar177._8_4_ + in_XMM10_Dc < auVar166._8_4_);
                    auVar154._12_4_ = -(uint)(auVar178._12_4_ + in_XMM10_Dd < auVar166._12_4_);
                    auVar261 = ~auVar154 & in_XMM5 | auVar261 & auVar154;
                    uVar40 = uVar40 + 8;
                  } while (uVar67 != uVar40);
                  auVar166 = auVar261 ^ in_XMM11;
                  auVar204 = auVar137 ^ in_XMM11;
                  auVar215._0_4_ = -(uint)(auVar166._0_4_ < auVar204._0_4_);
                  auVar215._4_4_ = -(uint)(auVar166._4_4_ < auVar204._4_4_);
                  auVar215._8_4_ = -(uint)(auVar166._8_4_ < auVar204._8_4_);
                  auVar215._12_4_ = -(uint)(auVar166._12_4_ < auVar204._12_4_);
                  auVar204 = ~auVar215 & auVar261 | auVar137 & auVar215;
                  auVar138._0_8_ = auVar204._8_8_;
                  auVar138._8_4_ = auVar204._8_4_;
                  auVar138._12_4_ = auVar204._12_4_;
                  auVar261 = auVar204 ^ in_XMM11;
                  auVar166 = auVar138 ^ in_XMM11;
                  auVar155._0_4_ = -(uint)(auVar166._0_4_ < auVar261._0_4_);
                  auVar155._4_4_ = -(uint)(auVar166._4_4_ < auVar261._4_4_);
                  auVar155._8_4_ = -(uint)(auVar166._8_4_ < auVar261._8_4_);
                  auVar155._12_4_ = -(uint)(auVar166._12_4_ < auVar261._12_4_);
                  auVar261 = ~auVar155 & auVar138 | auVar204 & auVar155;
                  uVar38 = auVar261._4_4_;
                  in_XMM0._4_4_ = uVar38;
                  in_XMM0._0_4_ = uVar38;
                  in_XMM0._8_4_ = uVar38;
                  in_XMM0._12_4_ = uVar38;
                  auVar166 = auVar261 ^ in_XMM11;
                  in_XMM3 = in_XMM0 ^ in_XMM11;
                  auVar180._0_4_ = -(uint)(in_XMM3._0_4_ < auVar166._0_4_);
                  auVar180._4_4_ = -(uint)(in_XMM3._4_4_ < auVar166._4_4_);
                  auVar180._8_4_ = -(uint)(in_XMM3._8_4_ < auVar166._8_4_);
                  auVar180._12_4_ = -(uint)(in_XMM3._12_4_ < auVar166._12_4_);
                  in_XMM1 = auVar261 & auVar180;
                  in_XMM2 = ~auVar180 & in_XMM0 | in_XMM1;
                  unaff_R15 = (pthread_mutex_t *)(ulong)in_XMM2._0_4_;
                  if (uVar127 == uVar67) {
                    in_R11 = (hb_buffer_t *)(ulong)uVar60;
                    unaff_RBP = *(pthread_mutex_t **)((long)pphVar97 + 8);
                    unaff_RBX = *(pthread_mutex_t **)((long)pphVar97 + 0x18);
                    goto LAB_003f43f5;
                  }
                  puVar130 = puVar130 + uVar67;
                  unaff_RBP = *(pthread_mutex_t **)((long)pphVar97 + 8);
                  unaff_RBX = *(pthread_mutex_t **)((long)pphVar97 + 0x18);
                }
                do {
                  uVar105 = (ushort)(*puVar130 << 8 | *puVar130 >> 8) + 1;
                  ppVar41 = (pthread_mutex_t *)(ulong)uVar105;
                  if (uVar105 <= (uint)unaff_R15) {
                    ppVar41 = unaff_R15;
                  }
                  puVar130 = puVar130 + 1;
                  unaff_R15 = ppVar41;
                } while (puVar130 <
                         (ushort *)((long)&(unaff_RBX->__data).__lock + (ulong)uVar37 * 2));
              }
              in_R11 = (hb_buffer_t *)(ulong)uVar60;
            }
LAB_003f43f5:
            uVar37 = (uint)((long)unaff_R15 * 6);
            if ((((int)((ulong)((long)unaff_R15 * 6) >> 0x20) != 0) ||
                ((ulong)*(uint *)&(unaff_R12->__data).__list.__prev <
                 (ulong)((long)ppVar81 - *(long *)((long)unaff_R12 + 8)))) ||
               ((uint)((unaff_R12->__data).__kind - (int)ppVar81) < uVar37)) goto LAB_003f4e44;
            iVar39 = (param_6->__data).__lock - uVar37;
            (param_6->__data).__lock = iVar39;
            if ((iVar39 < 1) ||
               (iVar39 = iVar39 + (uVar35 - (uint)unaff_R15), (param_6->__data).__lock = iVar39,
               iVar39 < 1)) goto LAB_003f4e44;
            if (uVar35 < (uint)unaff_R15) {
              param_6 = (pthread_mutex_t *)((long)unaff_R15 * 3);
              lVar75 = (long)param_5 * 6;
              uVar40 = *(long *)((long)pphVar97 + 0x58) + (long)unaff_R15 * 6;
              if ((ulong)(*(long *)((long)pphVar97 + 0x58) + (long)unaff_R15 * 6) <
                  (ulong)(*(long *)((long)pphVar97 + 0x50) + lVar75)) {
                uVar40 = *(long *)((long)pphVar97 + 0x50) + lVar75;
              }
              uVar127 = (ulong)(uVar40 + 2 != *(long *)((long)pphVar97 + 0x60) + lVar75);
              ppVar41 = (pthread_mutex_t *)((long)&(ppVar81->__data).__lock + lVar75);
              uVar40 = (((uVar40 + *(long *)((long)pphVar97 + 0x48)) - uVar127) + (long)param_5 * -6
                       ) / 6;
              uVar132 = uVar127 + uVar40 + 1;
              pphVar85 = pphVar97;
              unaff_R13 = (uint *)ppVar81;
              if (8 < uVar132) {
                uVar67 = (ulong)((uint)uVar132 & 7);
                if (uVar67 == 0) {
                  uVar67 = 8;
                }
                unaff_RBP = (pthread_mutex_t *)(uVar132 - uVar67);
                in_XMM0._4_4_ = uVar36;
                in_XMM0._0_4_ = uVar36;
                in_XMM0._8_4_ = uVar36;
                in_XMM0._12_4_ = uVar36;
                unaff_RBX = (pthread_mutex_t *)((uVar67 - (uVar127 + 1)) - uVar40);
                param_1 = (pthread_mutex_t *)(lVar75 + *(long *)((long)pphVar97 + 0x30));
                in_XMM1 = in_XMM0;
                do {
                  auVar181._8_8_ = 0;
                  auVar181._0_8_ = *(ulong *)((long)param_1 + -8);
                  in_XMM3._8_8_ = 0;
                  in_XMM3._0_8_ = *(ulong *)((long)param_1 + 0x10);
                  in_XMM5._0_4_ = (param_1->__data).__lock;
                  in_XMM5._4_4_ = (param_1->__data).__count;
                  in_XMM5._8_4_ = (param_1->__data).__owner;
                  in_XMM5._12_4_ = (param_1->__data).__nusers;
                  in_XMM6 = ~in_XMM8 & auVar181;
                  in_XMM4 = *(undefined1 (*) [16])((long)param_1 + -0x18) & in_XMM8;
                  pphVar31 = pphVar97;
code_r0x003f4521:
                  pphVar85 = pphVar31;
                  auVar261 = in_XMM4 | in_XMM6;
                  auVar182._4_4_ = auVar261._8_4_;
                  auVar182._0_4_ = auVar261._0_4_;
                  auVar182._8_4_ = auVar261._4_4_;
                  auVar182._12_4_ = auVar261._12_4_;
                  auVar261 = pshufhw(auVar182,auVar182,0xe6);
                  auVar183._0_4_ = auVar261._0_4_;
                  auVar183._8_4_ = auVar261._8_4_;
                  auVar183._12_4_ = auVar261._12_4_;
                  auVar183._4_4_ = auVar183._8_4_;
                  auVar261 = pshuflw(auVar183,auVar183,0x6c);
                  in_XMM5 = in_XMM5 & in_XMM8 | ~in_XMM8 & in_XMM3;
                  auVar216._4_4_ = in_XMM5._8_4_;
                  auVar216._0_4_ = in_XMM5._0_4_;
                  auVar216._8_4_ = in_XMM5._4_4_;
                  auVar216._12_4_ = in_XMM5._12_4_;
                  auVar166 = pshufhw(auVar216,auVar216,0xe6);
                  auVar217._0_4_ = auVar166._0_4_;
                  auVar217._8_4_ = auVar166._8_4_;
                  auVar217._12_4_ = auVar166._12_4_;
                  auVar217._4_4_ = auVar217._8_4_;
                  auVar166 = pshuflw(auVar217,auVar217,0x6c);
                  auVar174._0_2_ = auVar261._0_2_ >> 8;
                  auVar174._2_2_ = auVar261._2_2_ >> 8;
                  auVar174._4_2_ = auVar261._4_2_ >> 8;
                  auVar174._6_2_ = auVar261._6_2_ >> 8;
                  auVar174._8_2_ = auVar261._8_2_ >> 8;
                  auVar174._10_2_ = auVar261._10_2_ >> 8;
                  auVar174._12_2_ = auVar261._12_2_ >> 8;
                  auVar261 = psllw(auVar261,8);
                  auVar174 = auVar261._0_14_ | auVar174;
                  auVar207._0_2_ = auVar166._0_2_ >> 8;
                  auVar207._2_2_ = auVar166._2_2_ >> 8;
                  auVar207._4_2_ = auVar166._4_2_ >> 8;
                  auVar207._6_2_ = auVar166._6_2_ >> 8;
                  auVar207._8_2_ = auVar166._8_2_ >> 8;
                  auVar207._10_2_ = auVar166._10_2_ >> 8;
                  auVar261 = psllw(auVar166,8);
                  auVar207 = auVar261._0_12_ | auVar207;
                  auVar186._0_12_ = auVar174._0_12_;
                  auVar186._12_2_ = auVar174._6_2_;
                  auVar186._14_2_ = in_XMM7._6_2_;
                  auVar185._12_4_ = auVar186._12_4_;
                  auVar185._0_10_ = auVar174._0_10_;
                  auVar185._10_2_ = in_XMM7._4_2_;
                  auVar184._10_6_ = auVar185._10_6_;
                  auVar184._0_8_ = auVar174._0_8_;
                  auVar184._8_2_ = auVar174._4_2_;
                  in_XMM2._8_8_ = auVar184._8_8_;
                  in_XMM2._6_2_ = in_XMM7._2_2_;
                  in_XMM2._4_2_ = auVar174._2_2_;
                  in_XMM2._0_2_ = auVar174._0_2_;
                  in_XMM2._2_2_ = in_XMM7._0_2_;
                  unaff_R13 = (uint *)ppVar81;
code_r0x003f4587:
                  auVar220._12_2_ = auVar207._6_2_;
                  auVar220._0_12_ = auVar207;
                  auVar220._14_2_ = in_XMM7._6_2_;
                  auVar219._12_4_ = auVar220._12_4_;
                  auVar219._0_10_ = auVar207._0_10_;
                  auVar219._10_2_ = in_XMM7._4_2_;
                  auVar218._10_6_ = auVar219._10_6_;
                  auVar218._0_8_ = auVar207._0_8_;
                  auVar218._8_2_ = auVar207._4_2_;
                  in_XMM3._8_8_ = auVar218._8_8_;
                  in_XMM3._6_2_ = in_XMM7._2_2_;
                  in_XMM3._4_2_ = auVar207._2_2_;
                  in_XMM3._0_2_ = auVar207._0_2_;
                  in_XMM3._2_2_ = in_XMM7._0_2_;
                  auVar139._0_4_ = -(uint)(in_XMM2._0_4_ < in_XMM0._0_4_);
                  auVar139._4_4_ = -(uint)(in_XMM2._4_4_ < in_XMM0._4_4_);
                  auVar139._8_4_ = -(uint)(in_XMM2._8_4_ < in_XMM0._8_4_);
                  auVar139._12_4_ = -(uint)(in_XMM2._12_4_ < in_XMM0._12_4_);
                  in_XMM4 = in_XMM0 & auVar139;
                  in_XMM0 = ~auVar139 & in_XMM2 | in_XMM4;
                  in_XMM2 = in_XMM1;
code_r0x003f45a3:
                  auVar156._0_4_ = -(uint)(in_XMM3._0_4_ < in_XMM1._0_4_);
                  auVar156._4_4_ = -(uint)(in_XMM3._4_4_ < in_XMM1._4_4_);
                  auVar156._8_4_ = -(uint)(in_XMM3._8_4_ < in_XMM1._8_4_);
                  auVar156._12_4_ = -(uint)(in_XMM3._12_4_ < in_XMM1._12_4_);
                  in_XMM1 = ~auVar156 & in_XMM3 | in_XMM2 & auVar156;
                  param_1 = (pthread_mutex_t *)((long)param_1 + 0x30);
                  unaff_RBX = (pthread_mutex_t *)&(unaff_RBX->__data).__owner;
                  bVar134 = unaff_RBX == (pthread_mutex_t *)0x0;
                  pphVar88 = pphVar85;
code_r0x003f45bb:
                  pphVar97 = pphVar88;
                  ppVar81 = (pthread_mutex_t *)unaff_R13;
                } while (!bVar134);
                ppVar41 = (pthread_mutex_t *)((long)&(ppVar41->__data).__lock + (long)unaff_RBP * 6)
                ;
                auVar187._0_4_ = -(uint)(in_XMM1._0_4_ < in_XMM0._0_4_);
                auVar187._4_4_ = -(uint)(in_XMM1._4_4_ < in_XMM0._4_4_);
                auVar187._8_4_ = -(uint)(in_XMM1._8_4_ < in_XMM0._8_4_);
                auVar187._12_4_ = -(uint)(in_XMM1._12_4_ < in_XMM0._12_4_);
                auVar261 = ~auVar187 & in_XMM1 | in_XMM0 & auVar187;
                auVar140._0_8_ = auVar261._8_8_;
                auVar140._8_4_ = auVar261._8_4_;
                auVar140._12_4_ = auVar261._12_4_;
                auVar157._0_4_ = -(uint)(auVar261._8_4_ < auVar261._0_4_);
                auVar157._4_4_ = -(uint)(auVar261._12_4_ < auVar261._4_4_);
                auVar157._8_8_ = 0;
                auVar261 = ~auVar157 & auVar140 | auVar261 & auVar157;
                iVar39 = auVar261._4_4_;
                in_XMM0._4_4_ = iVar39;
                in_XMM0._0_4_ = iVar39;
                in_XMM0._8_4_ = iVar39;
                in_XMM0._12_4_ = iVar39;
                auVar188._0_4_ = -(uint)(iVar39 < auVar261._0_4_);
                auVar188._4_4_ = 0;
                auVar188._8_4_ = -(uint)(iVar39 < auVar261._8_4_);
                auVar188._12_4_ = -(uint)(iVar39 < auVar261._12_4_);
                in_XMM1 = auVar261 & auVar188;
                in_XMM2 = ~auVar188 & in_XMM0 | in_XMM1;
                unaff_R14 = (uint *)(ulong)in_XMM2._0_4_;
                unaff_RBX = *(pthread_mutex_t **)((long)pphVar88 + 0x18);
                pphVar85 = pphVar88;
              }
LAB_003f4620:
              param_3 = (pthread_mutex_t *)
                        ((long)&((__pthread_mutex_s *)unaff_R13)->__lock + (long)param_6 * 2);
              param_6 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
              unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + 8);
LAB_003f4640:
              do {
                uVar111 = (ushort)(ppVar41->__data).__lock;
                uVar111 = uVar111 << 8 | uVar111 >> 8;
                iVar39 = (int)unaff_R14;
                unaff_R14 = (uint *)((ulong)unaff_R14 & 0xffffffff);
                if (iVar39 < (int)(uint)uVar111) {
                  unaff_R14 = (uint *)(ulong)uVar111;
                }
                ppVar41 = (pthread_mutex_t *)(ppVar41->__size + 6);
                pphVar97 = pphVar85;
                ppVar81 = (pthread_mutex_t *)unaff_R13;
              } while (ppVar41 < param_3);
            }
          } while ((int)in_R11 <= (int)unaff_R14);
          goto LAB_003f3ed0;
        }
      }
    }
    break;
  case 2:
    if (((pthread_mutex_t *)(ppVar61->__size + 0x1c) <= ppVar41) &&
       (&(ppVar61->__data).__spins <= ppVar41)) {
      uVar35 = (unaff_RBP->__data).__kind;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3f4689;
      uVar40 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                         ((Lookup<OT::IntType<unsigned_short,2u>> *)
                          ((long)&(unaff_RBP->__data).__lock +
                          (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8
                                 | uVar35 << 0x18)),(long)unaff_R12);
      if (((char)uVar40 != '\0') &&
         ((hb_buffer_t *)(unaff_RBP->__size + (0x18 - *(long *)((long)unaff_R12 + 8))) <=
          (hb_buffer_t *)(ulong)*(uint *)&(unaff_R12->__data).__list.__prev)) {
        uVar35 = (unaff_RBP->__data).__spins;
        *(undefined8 *)((long)pphVar97 + -8) = 0x3f46bb;
        uVar40 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                           ((Lookup<OT::IntType<unsigned_short,2u>> *)
                            ((long)&(unaff_RBP->__data).__lock +
                            (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                    (uVar35 & 0xff00) << 8 | uVar35 << 0x18)),(long)unaff_R12);
        param_6 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
        in_XMM7 = (undefined1  [16])0x0;
        if (((char)uVar40 != '\0') &&
           ((ulong)((long)unaff_RBP - *(long *)((long)unaff_R12 + 8)) <=
            (ulong)*(uint *)&(unaff_R12->__data).__list.__prev)) {
          uVar35 = *(uint *)&(unaff_RBP->__data).__list.__prev;
          uVar35 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                   uVar35 << 0x18;
          in_XMM0 = extraout_XMM0_15;
          if (uVar35 <= (unaff_R12->__data).__kind - uVar37) goto LAB_003f3ec0;
        }
      }
    }
    break;
  case 3:
  case 5:
    goto LAB_003f3ed0;
  case 4:
    if ((((&(ppVar61->__data).__list.__next <= ppVar41) &&
         ((pthread_mutex_t *)((long)unaff_R13 + (0x10 - (long)param_3)) <= ppVar41)) &&
        (uVar35 = ((__pthread_mutex_s *)unaff_R13)->__lock,
        3 < (uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18)))
       && ((hb_buffer_t *)((long)unaff_R13 + (8 - *(long *)((long)unaff_R12 + 8))) <=
           (hb_buffer_t *)(ulong)*(uint *)&(unaff_R12->__data).__list.__prev)) {
      uVar35 = ((__pthread_mutex_s *)unaff_R13)->__count;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3f4755;
      uVar40 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                         ((Lookup<OT::IntType<unsigned_short,2u>> *)
                          ((long)&((__pthread_mutex_s *)unaff_R13)->__lock +
                          (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8
                                 | uVar35 << 0x18)),(long)unaff_R12);
      param_6 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
      in_XMM7 = (undefined1  [16])0x0;
      in_XMM9_Da = -1;
      in_XMM9_Db = -1;
      in_XMM9_Dc = -1;
      in_XMM9_Dd = -1;
      in_XMM10_Da = -0x7fffffff;
      in_XMM10_Db = -0x7fffffff;
      in_XMM10_Dc = -0x7fffffff;
      in_XMM10_Dd = -0x7fffffff;
      if ((char)uVar40 != '\0') {
        uVar35 = ((__pthread_mutex_s *)unaff_R13)->__lock;
        uVar35 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18
        ;
        in_R10 = (ulong)uVar35;
        if (-1 < (int)uVar35) {
          uVar36 = ((__pthread_mutex_s *)unaff_R13)->__owner;
          uVar40 = (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                          uVar36 << 0x18);
          puVar80 = (undefined *)((long)&((__pthread_mutex_s *)unaff_R13)->__lock + uVar40);
          uVar36 = ((__pthread_mutex_s *)unaff_R13)->__nusers;
          uVar132 = (ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                           uVar36 << 0x18);
          ppVar61 = (pthread_mutex_t *)((long)&((__pthread_mutex_s *)unaff_R13)->__lock + uVar132);
          *(uint *)((long)pphVar97 + 0x60) = uVar35 * 2;
          *(hb_buffer_t **)((long)pphVar97 + 0x50) = (hb_buffer_t *)((long)unaff_R13 + uVar132);
          *(hb_buffer_t **)((long)pphVar97 + 0x48) = (hb_buffer_t *)((long)unaff_R13 + uVar132 + 6);
          *(hb_buffer_t **)((long)pphVar97 + 0x58) = (hb_buffer_t *)((long)unaff_R13 + uVar132 + 8);
          *(long *)((long)pphVar97 + 0x18) = 2 - (long)((long)unaff_R13 + uVar132 + 8);
          *(hb_buffer_t **)((long)pphVar97 + 0x38) = (hb_buffer_t *)((long)unaff_R13 + uVar40);
          *(hb_buffer_t **)((long)pphVar97 + 0x40) = (hb_buffer_t *)((long)unaff_R13 + uVar40 + 8);
          *(hb_buffer_t **)((long)pphVar97 + 0x28) =
               (hb_buffer_t *)(unaff_RBP->__size + uVar40 + 0x14);
          *(hb_buffer_t **)((long)pphVar97 + 0x30) =
               (hb_buffer_t *)(unaff_RBP->__size + uVar132 + 0x24);
          in_R11 = (hb_buffer_t *)0x0;
          unaff_R14 = (uint *)0x0;
          unaff_R15 = (pthread_mutex_t *)0x0;
          *(undefined **)((long)pphVar97 + 0x20) = puVar80;
          in_XMM0 = extraout_XMM0_16;
          in_XMM8 = _DAT_005de020;
          in_XMM11 = _DAT_006524b0;
          do {
            param_5 = (uint *)((ulong)unaff_R15 & 0xffffffff);
            iVar39 = (int)in_R11;
            uVar36 = (uint)unaff_R14;
            uVar35 = (uint)unaff_R15;
            unaff_R15 = (pthread_mutex_t *)param_5;
            if (iVar39 <= (int)uVar36) {
              uVar60 = uVar36 + 1;
              uVar37 = (uint)((ulong)uVar60 * (ulong)*(uint *)((long)pphVar97 + 0x60));
              if ((((int)((ulong)uVar60 * (ulong)*(uint *)((long)pphVar97 + 0x60) >> 0x20) != 0) ||
                  ((ulong)*(uint *)&(unaff_R12->__data).__list.__prev <
                   (ulong)((long)puVar80 - *(long *)((long)unaff_R12 + 8)))) ||
                 ((uint)((unaff_R12->__data).__kind - (int)puVar80) < uVar37)) goto LAB_003f4e44;
              iVar104 = (param_6->__data).__lock - uVar37;
              (param_6->__data).__lock = iVar104;
              if (((iVar104 < 1) ||
                  (iVar104 = ~uVar36 + iVar39 + iVar104, (param_6->__data).__lock = iVar104,
                  iVar104 < 1)) || ((int)((ulong)uVar60 * (in_R10 & 0xffffffff) >> 0x20) != 0))
              goto LAB_003f4e44;
              uVar37 = uVar60 * (int)in_R10;
              uVar105 = iVar39 * (int)in_R10;
              if (uVar105 < uVar37) {
                uVar132 = (ulong)uVar105;
                puVar130 = (ushort *)(puVar80 + uVar132 * 2);
                uVar127 = uVar132 * 2 + 2 + *(long *)((long)pphVar97 + 0x38);
                uVar40 = *(long *)((long)pphVar97 + 0x38) + (ulong)uVar37 * 2;
                if (uVar40 < uVar127) {
                  uVar40 = uVar127;
                }
                uVar40 = (uVar40 - (*(long *)((long)pphVar97 + 0x40) + uVar132 * 2)) + 7;
                if (uVar40 < 0xe) {
                  unaff_RBP = *(pthread_mutex_t **)((long)pphVar97 + 8);
                }
                else {
                  uVar127 = (uVar40 >> 1) + 1;
                  uVar67 = uVar127 & 0xfffffffffffffff8;
                  auVar142._4_4_ = uVar35;
                  auVar142._0_4_ = uVar35;
                  auVar142._8_4_ = uVar35;
                  auVar142._12_4_ = uVar35;
                  uVar40 = 0;
                  auVar261 = auVar142;
                  do {
                    uVar118 = *(ulong *)(uVar132 * 2 + *(long *)((long)pphVar97 + 0x28) + -8 +
                                        uVar40 * 2);
                    auVar221._8_8_ = 0;
                    auVar221._0_8_ = uVar118;
                    uVar117 = *(ulong *)(uVar132 * 2 + *(long *)((long)pphVar97 + 0x28) + uVar40 * 2
                                        );
                    auVar189._8_8_ = 0;
                    auVar189._0_8_ = uVar117;
                    auVar209._0_2_ = (ushort)uVar118 >> 8;
                    auVar209._2_2_ = (ushort)(uVar118 >> 0x10) >> 8;
                    auVar209._4_2_ = (ushort)(uVar118 >> 0x20) >> 8;
                    auVar209._6_2_ = (ushort)(uVar118 >> 0x38);
                    auVar209._8_6_ = 0;
                    auVar166 = psllw(auVar221,8);
                    auVar209 = auVar166._0_14_ | auVar209;
                    auVar175._0_2_ = (ushort)uVar117 >> 8;
                    auVar175._2_2_ = (ushort)(uVar117 >> 0x10) >> 8;
                    auVar175._4_2_ = (ushort)(uVar117 >> 0x20) >> 8;
                    auVar175._6_2_ = (ushort)(uVar117 >> 0x38);
                    auVar175._8_6_ = 0;
                    auVar166 = psllw(auVar189,8);
                    auVar175 = auVar166._0_14_ | auVar175;
                    auVar224._0_12_ = auVar209._0_12_;
                    auVar224._12_2_ = auVar209._6_2_;
                    auVar224._14_2_ = in_XMM7._6_2_;
                    auVar223._12_4_ = auVar224._12_4_;
                    auVar223._0_10_ = auVar209._0_10_;
                    auVar223._10_2_ = in_XMM7._4_2_;
                    auVar222._10_6_ = auVar223._10_6_;
                    auVar222._0_8_ = auVar209._0_8_;
                    auVar222._8_2_ = auVar209._4_2_;
                    auVar18._4_8_ = auVar222._8_8_;
                    auVar18._2_2_ = in_XMM7._2_2_;
                    auVar18._0_2_ = auVar209._2_2_;
                    iVar104 = CONCAT22(in_XMM7._0_2_,auVar209._0_2_);
                    auVar192._0_12_ = auVar175._0_12_;
                    auVar192._12_2_ = auVar175._6_2_;
                    auVar192._14_2_ = in_XMM7._6_2_;
                    auVar191._12_4_ = auVar192._12_4_;
                    auVar191._0_10_ = auVar175._0_10_;
                    auVar191._10_2_ = in_XMM7._4_2_;
                    auVar190._10_6_ = auVar191._10_6_;
                    auVar190._0_8_ = auVar175._0_8_;
                    auVar190._8_2_ = auVar175._4_2_;
                    auVar19._4_8_ = auVar190._8_8_;
                    auVar19._2_2_ = in_XMM7._2_2_;
                    auVar19._0_2_ = auVar175._2_2_;
                    iVar39 = CONCAT22(in_XMM7._0_2_,auVar175._0_2_);
                    in_XMM4._0_4_ = iVar104 - in_XMM9_Da;
                    in_XMM4._4_4_ = auVar18._0_4_ - in_XMM9_Db;
                    in_XMM4._8_4_ = auVar222._8_4_ - in_XMM9_Dc;
                    in_XMM4._12_4_ = auVar223._12_4_ - in_XMM9_Dd;
                    in_XMM5._0_4_ = iVar39 - in_XMM9_Da;
                    in_XMM5._4_4_ = auVar19._0_4_ - in_XMM9_Db;
                    in_XMM5._8_4_ = auVar190._8_4_ - in_XMM9_Dc;
                    in_XMM5._12_4_ = auVar191._12_4_ - in_XMM9_Dd;
                    auVar166 = auVar142 ^ in_XMM11;
                    auVar141._0_4_ = -(uint)(iVar104 + in_XMM10_Da < auVar166._0_4_);
                    auVar141._4_4_ = -(uint)(auVar18._0_4_ + in_XMM10_Db < auVar166._4_4_);
                    auVar141._8_4_ = -(uint)(auVar222._8_4_ + in_XMM10_Dc < auVar166._8_4_);
                    auVar141._12_4_ = -(uint)(auVar223._12_4_ + in_XMM10_Dd < auVar166._12_4_);
                    in_XMM6 = auVar142 & auVar141;
                    auVar142 = ~auVar141 & in_XMM4 | in_XMM6;
                    auVar166 = auVar261 ^ in_XMM11;
                    auVar158._0_4_ = -(uint)(iVar39 + in_XMM10_Da < auVar166._0_4_);
                    auVar158._4_4_ = -(uint)(auVar19._0_4_ + in_XMM10_Db < auVar166._4_4_);
                    auVar158._8_4_ = -(uint)(auVar190._8_4_ + in_XMM10_Dc < auVar166._8_4_);
                    auVar158._12_4_ = -(uint)(auVar191._12_4_ + in_XMM10_Dd < auVar166._12_4_);
                    auVar261 = ~auVar158 & in_XMM5 | auVar261 & auVar158;
                    uVar40 = uVar40 + 8;
                  } while (uVar67 != uVar40);
                  auVar166 = auVar261 ^ in_XMM11;
                  auVar204 = auVar142 ^ in_XMM11;
                  auVar225._0_4_ = -(uint)(auVar166._0_4_ < auVar204._0_4_);
                  auVar225._4_4_ = -(uint)(auVar166._4_4_ < auVar204._4_4_);
                  auVar225._8_4_ = -(uint)(auVar166._8_4_ < auVar204._8_4_);
                  auVar225._12_4_ = -(uint)(auVar166._12_4_ < auVar204._12_4_);
                  auVar204 = ~auVar225 & auVar261 | auVar142 & auVar225;
                  auVar143._0_8_ = auVar204._8_8_;
                  auVar143._8_4_ = auVar204._8_4_;
                  auVar143._12_4_ = auVar204._12_4_;
                  auVar261 = auVar204 ^ in_XMM11;
                  auVar166 = auVar143 ^ in_XMM11;
                  auVar159._0_4_ = -(uint)(auVar166._0_4_ < auVar261._0_4_);
                  auVar159._4_4_ = -(uint)(auVar166._4_4_ < auVar261._4_4_);
                  auVar159._8_4_ = -(uint)(auVar166._8_4_ < auVar261._8_4_);
                  auVar159._12_4_ = -(uint)(auVar166._12_4_ < auVar261._12_4_);
                  auVar261 = ~auVar159 & auVar143 | auVar204 & auVar159;
                  uVar38 = auVar261._4_4_;
                  in_XMM0._4_4_ = uVar38;
                  in_XMM0._0_4_ = uVar38;
                  in_XMM0._8_4_ = uVar38;
                  in_XMM0._12_4_ = uVar38;
                  auVar166 = auVar261 ^ in_XMM11;
                  in_XMM3 = in_XMM0 ^ in_XMM11;
                  auVar193._0_4_ = -(uint)(in_XMM3._0_4_ < auVar166._0_4_);
                  auVar193._4_4_ = -(uint)(in_XMM3._4_4_ < auVar166._4_4_);
                  auVar193._8_4_ = -(uint)(in_XMM3._8_4_ < auVar166._8_4_);
                  auVar193._12_4_ = -(uint)(in_XMM3._12_4_ < auVar166._12_4_);
                  in_XMM1 = auVar261 & auVar193;
                  in_XMM2 = ~auVar193 & in_XMM0 | in_XMM1;
                  unaff_R15 = (pthread_mutex_t *)(ulong)in_XMM2._0_4_;
                  if (uVar127 == uVar67) {
                    in_R11 = (hb_buffer_t *)(ulong)uVar60;
                    unaff_RBP = *(pthread_mutex_t **)((long)pphVar97 + 8);
                    puVar80 = *(undefined **)((long)pphVar97 + 0x20);
                    goto LAB_003f4a85;
                  }
                  puVar130 = puVar130 + uVar67;
                  unaff_RBP = *(pthread_mutex_t **)((long)pphVar97 + 8);
                  puVar80 = *(undefined **)((long)pphVar97 + 0x20);
                }
                do {
                  uVar105 = (ushort)(*puVar130 << 8 | *puVar130 >> 8) + 1;
                  ppVar41 = (pthread_mutex_t *)(ulong)uVar105;
                  if (uVar105 <= (uint)unaff_R15) {
                    ppVar41 = unaff_R15;
                  }
                  puVar130 = puVar130 + 1;
                  unaff_R15 = ppVar41;
                } while (puVar130 < puVar80 + (ulong)uVar37 * 2);
              }
              in_R11 = (hb_buffer_t *)(ulong)uVar60;
            }
LAB_003f4a85:
            uVar37 = (uint)((long)unaff_R15 * 6);
            if ((((int)((ulong)((long)unaff_R15 * 6) >> 0x20) != 0) ||
                ((ulong)*(uint *)&(unaff_R12->__data).__list.__prev <
                 (ulong)((long)ppVar61 - *(long *)((long)unaff_R12 + 8)))) ||
               ((uint)((unaff_R12->__data).__kind - (int)ppVar61) < uVar37)) goto LAB_003f4e44;
            iVar39 = (param_6->__data).__lock - uVar37;
            (param_6->__data).__lock = iVar39;
            if ((iVar39 < 1) ||
               (iVar39 = iVar39 + (uVar35 - (uint)unaff_R15), (param_6->__data).__lock = iVar39,
               iVar39 < 1)) goto LAB_003f4e44;
            if (uVar35 < (uint)unaff_R15) {
              param_6 = (pthread_mutex_t *)((long)unaff_R15 * 3);
              lVar75 = (long)param_5 * 6;
              uVar40 = *(long *)((long)pphVar97 + 0x50) + (long)unaff_R15 * 6;
              if ((ulong)(*(long *)((long)pphVar97 + 0x50) + (long)unaff_R15 * 6) <
                  (ulong)(*(long *)((long)pphVar97 + 0x48) + lVar75)) {
                uVar40 = *(long *)((long)pphVar97 + 0x48) + lVar75;
              }
              uVar127 = (ulong)(uVar40 + 2 != *(long *)((long)pphVar97 + 0x58) + lVar75);
              ppVar41 = (pthread_mutex_t *)((long)&(ppVar61->__data).__lock + lVar75);
              uVar40 = (((uVar40 + *(long *)((long)pphVar97 + 0x18)) - uVar127) + (long)param_5 * -6
                       ) / 6;
              uVar132 = uVar127 + uVar40 + 1;
              if (8 < uVar132) {
                uVar67 = (ulong)((uint)uVar132 & 7);
                if (uVar67 == 0) {
                  uVar67 = 8;
                }
                unaff_RBX = (pthread_mutex_t *)(uVar132 - uVar67);
                in_XMM0._4_4_ = uVar36;
                in_XMM0._0_4_ = uVar36;
                in_XMM0._8_4_ = uVar36;
                in_XMM0._12_4_ = uVar36;
                unaff_RBP = (pthread_mutex_t *)((uVar67 - (uVar127 + 1)) - uVar40);
                param_1 = (pthread_mutex_t *)(lVar75 + *(long *)((long)pphVar97 + 0x30));
                in_XMM1 = in_XMM0;
                do {
                  in_XMM2._8_8_ = 0;
                  in_XMM2._0_8_ = *(ulong *)((long)param_1 + -8);
                  in_XMM3._8_8_ = 0;
                  in_XMM3._0_8_ = *(ulong *)((long)param_1 + 0x10);
                  in_XMM4 = *(undefined1 (*) [16])((long)param_1 + -0x18);
                  pphVar89 = pphVar97;
                  unaff_R13 = (uint *)ppVar61;
code_r0x003f4b9f:
                  auVar8._0_4_ = (param_1->__data).__lock;
                  auVar8._4_4_ = (param_1->__data).__count;
                  auVar8._8_4_ = (param_1->__data).__owner;
                  auVar8._12_4_ = (param_1->__data).__nusers;
                  in_XMM6 = ~in_XMM8 & in_XMM2;
                  auVar261 = in_XMM4 & in_XMM8 | in_XMM6;
                  auVar194._4_4_ = auVar261._8_4_;
                  auVar194._0_4_ = auVar261._0_4_;
                  auVar194._8_4_ = auVar261._4_4_;
                  auVar194._12_4_ = auVar261._12_4_;
                  auVar261 = pshufhw(auVar194,auVar194,0xe6);
                  auVar195._0_4_ = auVar261._0_4_;
                  auVar195._8_4_ = auVar261._8_4_;
                  auVar195._12_4_ = auVar261._12_4_;
                  auVar195._4_4_ = auVar195._8_4_;
                  auVar261 = pshuflw(auVar195,auVar195,0x6c);
                  in_XMM5 = auVar8 & in_XMM8 | ~in_XMM8 & in_XMM3;
                  auVar226._4_4_ = in_XMM5._8_4_;
                  auVar226._0_4_ = in_XMM5._0_4_;
                  auVar226._8_4_ = in_XMM5._4_4_;
                  auVar226._12_4_ = in_XMM5._12_4_;
                  auVar166 = pshufhw(auVar226,auVar226,0xe6);
                  auVar227._0_4_ = auVar166._0_4_;
                  auVar227._8_4_ = auVar166._8_4_;
                  auVar227._12_4_ = auVar166._12_4_;
                  auVar227._4_4_ = auVar227._8_4_;
                  in_XMM3 = pshuflw(auVar227,auVar227,0x6c);
                  auVar172._0_2_ = auVar261._0_2_ >> 8;
                  auVar172._2_2_ = auVar261._2_2_ >> 8;
                  auVar172._4_2_ = auVar261._4_2_ >> 8;
                  auVar172._6_2_ = auVar261._6_2_ >> 8;
                  auVar172._8_2_ = auVar261._8_2_ >> 8;
                  auVar172._10_2_ = auVar261._10_2_ >> 8;
                  auVar261 = psllw(auVar261,8);
                  auVar172 = auVar261._0_12_ | auVar172;
                  pphVar85 = pphVar89;
                  in_XMM4 = in_XMM0;
code_r0x003f4c01:
                  auVar210._0_2_ = in_XMM3._0_2_ >> 8;
                  auVar210._2_2_ = in_XMM3._2_2_ >> 8;
                  auVar210._4_2_ = in_XMM3._4_2_ >> 8;
                  auVar210._6_2_ = in_XMM3._6_2_ >> 8;
                  auVar210._8_2_ = in_XMM3._8_2_ >> 8;
                  auVar210._10_2_ = in_XMM3._10_2_ >> 8;
                  auVar210._12_2_ = in_XMM3._12_2_ >> 8;
                  auVar261 = psllw(in_XMM3,8);
                  auVar210 = auVar261._0_14_ | auVar210;
                  auVar198._12_2_ = auVar172._6_2_;
                  auVar198._0_12_ = auVar172;
                  auVar198._14_2_ = in_XMM7._6_2_;
                  auVar197._12_4_ = auVar198._12_4_;
                  auVar197._0_10_ = auVar172._0_10_;
                  auVar197._10_2_ = in_XMM7._4_2_;
                  auVar196._10_6_ = auVar197._10_6_;
                  auVar196._0_8_ = auVar172._0_8_;
                  auVar196._8_2_ = auVar172._4_2_;
                  auVar20._4_8_ = auVar196._8_8_;
                  auVar20._2_2_ = in_XMM7._2_2_;
                  auVar20._0_2_ = auVar172._2_2_;
                  in_XMM2._0_4_ = CONCAT22(in_XMM7._0_2_,auVar172._0_2_);
                  in_XMM2._4_12_ = auVar20;
                  auVar230._0_12_ = auVar210._0_12_;
                  auVar230._12_2_ = auVar210._6_2_;
                  auVar230._14_2_ = in_XMM7._6_2_;
                  auVar229._12_4_ = auVar230._12_4_;
                  auVar229._0_10_ = auVar210._0_10_;
                  auVar229._10_2_ = in_XMM7._4_2_;
                  auVar228._10_6_ = auVar229._10_6_;
                  auVar228._0_8_ = auVar210._0_8_;
                  auVar228._8_2_ = auVar210._4_2_;
                  in_XMM3._8_8_ = auVar228._8_8_;
                  in_XMM3._6_2_ = in_XMM7._2_2_;
                  in_XMM3._4_2_ = auVar210._2_2_;
                  in_XMM3._0_2_ = auVar210._0_2_;
                  in_XMM3._2_2_ = in_XMM7._0_2_;
                  in_XMM0._0_4_ = -(uint)(in_XMM2._0_4_ < in_XMM4._0_4_);
                  in_XMM0._4_4_ = -(uint)(auVar20._0_4_ < in_XMM4._4_4_);
                  in_XMM0._8_4_ = -(uint)(auVar196._8_4_ < in_XMM4._8_4_);
                  in_XMM0._12_4_ = -(uint)(auVar197._12_4_ < in_XMM4._12_4_);
                  pphVar97 = pphVar85;
code_r0x003f4c23:
                  in_XMM4 = in_XMM4 & in_XMM0;
                  in_XMM0 = ~in_XMM0 & in_XMM2 | in_XMM4;
                  auVar160._0_4_ = -(uint)(in_XMM3._0_4_ < in_XMM1._0_4_);
                  auVar160._4_4_ = -(uint)(in_XMM3._4_4_ < in_XMM1._4_4_);
                  auVar160._8_4_ = -(uint)(in_XMM3._8_4_ < in_XMM1._8_4_);
                  auVar160._12_4_ = -(uint)(in_XMM3._12_4_ < in_XMM1._12_4_);
                  in_XMM1 = ~auVar160 & in_XMM3 | in_XMM1 & auVar160;
                  param_1 = (pthread_mutex_t *)((long)param_1 + 0x30);
                  unaff_RBP = (pthread_mutex_t *)&(unaff_RBP->__data).__owner;
                  ppVar61 = (pthread_mutex_t *)unaff_R13;
                } while (unaff_RBP != (pthread_mutex_t *)0x0);
                ppVar41 = (pthread_mutex_t *)((long)&(ppVar41->__data).__lock + (long)unaff_RBX * 6)
                ;
                auVar199._0_4_ = -(uint)(in_XMM1._0_4_ < in_XMM0._0_4_);
                auVar199._4_4_ = -(uint)(in_XMM1._4_4_ < in_XMM0._4_4_);
                auVar199._8_4_ = -(uint)(in_XMM1._8_4_ < in_XMM0._8_4_);
                auVar199._12_4_ = -(uint)(in_XMM1._12_4_ < in_XMM0._12_4_);
                auVar261 = ~auVar199 & in_XMM1 | in_XMM0 & auVar199;
                auVar144._0_8_ = auVar261._8_8_;
                auVar144._8_4_ = auVar261._8_4_;
                auVar144._12_4_ = auVar261._12_4_;
                auVar161._0_4_ = -(uint)(auVar261._8_4_ < auVar261._0_4_);
                auVar161._4_4_ = -(uint)(auVar261._12_4_ < auVar261._4_4_);
                auVar161._8_8_ = 0;
                auVar261 = ~auVar161 & auVar144 | auVar261 & auVar161;
                iVar39 = auVar261._4_4_;
                in_XMM0._4_4_ = iVar39;
                in_XMM0._0_4_ = iVar39;
                in_XMM0._8_4_ = iVar39;
                in_XMM0._12_4_ = iVar39;
                auVar200._0_4_ = -(uint)(iVar39 < auVar261._0_4_);
                auVar200._4_4_ = 0;
                auVar200._8_4_ = -(uint)(iVar39 < auVar261._8_4_);
                auVar200._12_4_ = -(uint)(iVar39 < auVar261._12_4_);
                in_XMM1 = auVar261 & auVar200;
                in_XMM2 = ~auVar200 & in_XMM0 | in_XMM1;
                unaff_R14 = (uint *)(ulong)in_XMM2._0_4_;
                unaff_RBP = *(pthread_mutex_t **)((long)pphVar97 + 8);
              }
              lVar75 = (long)param_6 * 2;
              param_6 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
              puVar80 = *(undefined **)((long)pphVar97 + 0x20);
              do {
                uVar111 = (ushort)(ppVar41->__data).__lock;
                uVar111 = uVar111 << 8 | uVar111 >> 8;
                if ((int)unaff_R14 < (int)(uint)uVar111) {
                  unaff_R14 = (uint *)(ulong)uVar111;
                }
                ppVar41 = (pthread_mutex_t *)(ppVar41->__size + 6);
              } while (ppVar41 < (pthread_mutex_t *)((long)&(ppVar61->__data).__lock + lVar75));
            }
          } while ((int)in_R11 <= (int)unaff_R14);
          goto LAB_003f3ed0;
        }
      }
    }
    break;
  case 6:
    if ((pthread_mutex_t *)(ppVar61->__size + 0x24) <= ppVar41) {
      if (((byte)*(hb_buffer_t *)(unaff_RBP->__size + 0xf) & 1) == 0) {
        if ((hb_buffer_t *)(unaff_RBP->__size + (0x18 - *(long *)((long)unaff_R12 + 8))) <=
            (hb_buffer_t *)(ulong)*(uint *)&(unaff_R12->__data).__list.__prev) {
          uVar35 = (unaff_RBP->__data).__spins;
          *(undefined8 *)((long)pphVar97 + -8) = 0x3f4d1c;
          uVar40 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                             ((Lookup<OT::IntType<unsigned_short,2u>> *)
                              ((long)&(unaff_RBP->__data).__lock +
                              (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                      (uVar35 & 0xff00) << 8 | uVar35 << 0x18)),(long)unaff_R12);
          if (((char)uVar40 != '\0') &&
             ((hb_buffer_t *)(unaff_RBP->__size + (0x1c - *(long *)((long)unaff_R12 + 8))) <=
              (hb_buffer_t *)(ulong)*(uint *)&(unaff_R12->__data).__list.__prev)) {
            uVar35 = *(uint *)&(unaff_RBP->__data).__list.__prev;
            *(undefined8 *)((long)pphVar97 + -8) = 0x3f4d4e;
            uVar40 = Lookup<OT::IntType<unsigned_short,2u>>::sanitize
                               ((Lookup<OT::IntType<unsigned_short,2u>> *)
                                ((long)&(unaff_RBP->__data).__lock +
                                (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                        (uVar35 & 0xff00) << 8 | uVar35 << 0x18)),(long)unaff_R12);
            cVar34 = (char)uVar40;
            in_XMM0 = extraout_XMM0_17;
            goto LAB_003f4dac;
          }
        }
      }
      else if ((hb_buffer_t *)(unaff_RBP->__size + (0x18 - *(long *)((long)unaff_R12 + 8))) <=
               (hb_buffer_t *)(ulong)*(uint *)&(unaff_R12->__data).__list.__prev) {
        uVar35 = (unaff_RBP->__data).__spins;
        *(undefined8 *)((long)pphVar97 + -8) = 0x3f4d7a;
        uVar40 = Lookup<OT::IntType<unsigned_int,4u>>::sanitize
                           ((Lookup<OT::IntType<unsigned_int,4u>> *)
                            ((long)&(unaff_RBP->__data).__lock +
                            (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                    (uVar35 & 0xff00) << 8 | uVar35 << 0x18)),(long)unaff_R12);
        if (((char)uVar40 != '\0') &&
           ((hb_buffer_t *)(unaff_RBP->__size + (0x1c - *(long *)((long)unaff_R12 + 8))) <=
            (hb_buffer_t *)(ulong)*(uint *)&(unaff_R12->__data).__list.__prev)) {
          uVar35 = *(uint *)&(unaff_RBP->__data).__list.__prev;
          *(undefined1 **)((long)pphVar97 + -8) = &LAB_003f4dac;
          uVar40 = Lookup<OT::IntType<unsigned_int,4u>>::sanitize
                             ((Lookup<OT::IntType<unsigned_int,4u>> *)
                              ((long)&(unaff_RBP->__data).__lock +
                              (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                      (uVar35 & 0xff00) << 8 | uVar35 << 0x18)),(long)unaff_R12);
          cVar34 = (char)uVar40;
          in_XMM0 = extraout_XMM0_18;
LAB_003f4dac:
          param_6 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
          in_XMM7 = (undefined1  [16])0x0;
          if (cVar34 != '\0') {
            lVar75 = *(long *)((long)unaff_R12 + 8);
            uVar40 = (ulong)*(uint *)&(unaff_R12->__data).__list.__prev;
            if ((ulong)((long)unaff_RBP - lVar75) <= uVar40) {
              uVar35 = *(uint *)((long)&(unaff_RBP->__data).__list.__prev + 4);
              uVar35 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                       uVar35 << 0x18;
              uVar12 = *(int *)((long)&unaff_R12->__data + 0x10);
              if (uVar35 <= uVar12 - uVar37) {
                iVar39 = (param_6->__data).__lock - uVar35;
                (param_6->__data).__lock = iVar39;
                if (0 < iVar39) {
                  if ((unaff_RBP->__data).__owner == 0) goto LAB_003f3ed0;
                  if ((ulong)((long)unaff_RBP - lVar75) <= uVar40) {
                    uVar35 = *(uint *)&(unaff_RBP->__data).__list.__next;
                    uVar35 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                             uVar35 << 0x18;
                    if (uVar35 <= uVar12 - uVar37) {
                      iVar39 = iVar39 - uVar35;
                      (param_6->__data).__lock = iVar39;
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
    switch(uVar36) {
    case 0:
      lVar75 = (ulong)*(uint *)((long)&UINT_005e02e8 + uVar40) * 4;
      uVar36 = (uint)lVar75;
      if ((int)((ulong)lVar75 >> 0x20) == 0) {
        param_1 = (pthread_mutex_t *)&UNK_005e02b2;
        bVar133 = (ulong)((long)&UNK_005e02b2 - *(long *)(&UNK_005e02b8 + uVar40)) <
                  (ulong)*(uint *)(&UNK_005e02c8 + uVar40);
        bVar134 = (long)&UNK_005e02b2 - *(long *)(&UNK_005e02b8 + uVar40) ==
                  (ulong)*(uint *)(&UNK_005e02c8 + uVar40);
        goto code_r0x003f5005;
      }
      goto LAB_003f4fbb;
    default:
      goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
    case 2:
      ppVar41 = (pthread_mutex_t *)(&UNK_005e02bc + -*(long *)(&UNK_005e02b8 + uVar40));
      ppVar61 = (pthread_mutex_t *)(ulong)*(uint *)(&UNK_005e02c8 + uVar40);
      goto code_r0x003f502d;
    case 4:
      goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_4;
    case 6:
      if ((ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar40)) <=
          (ulong)*(uint *)(&UNK_005e02c8 + uVar40)) goto LAB_003f5250;
      goto LAB_003f4fbb;
    case 8:
      if (((ulong)((long)&UNK_005e02b6 - *(long *)(&UNK_005e02b8 + uVar40)) <=
           (ulong)*(uint *)(&UNK_005e02c8 + uVar40)) &&
         (unaff_RBP = (pthread_mutex_t *)&UNK_005e02b6,
         (ulong)((long)&UNK_005e02b6 - *(long *)(&UNK_005e02b8 + uVar40)) <=
         (ulong)*(uint *)(&UNK_005e02c8 + uVar40))) goto code_r0x003f52cc;
      goto LAB_003f4fbb;
    case 10:
      goto LAB_003f4fbb;
    }
  case 8:
  case 10:
  case 0xc:
  case 0xe:
  case 0x10:
    return ppVar41;
  case 9:
    bVar133 = (uint)ppVar61 < (uint)param_3;
    bVar134 = (uint)ppVar61 == (uint)param_3;
code_r0x003f5005:
    if ((!bVar133 && !bVar134) || ((uint)(*(int *)(&UNK_005e02c0 + uVar40) - (int)param_1) < uVar36)
       ) goto LAB_003f4fbb;
    iVar39 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                             switchdataD_005e02cc + uVar40) - uVar36;
    *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                    switchdataD_005e02cc + uVar40) = iVar39;
LAB_003f528f:
    in_R11 = (hb_buffer_t *)CONCAT71((int7)((ulong)in_R11 >> 8),0 < iVar39);
    goto AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1;
  case 0xb:
code_r0x003f502d:
    if (ppVar41 <= ppVar61) {
LAB_003f5250:
      if (((ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar40)) <=
           (ulong)*(uint *)(&UNK_005e02c8 + uVar40)) &&
         (iVar39 = -0x6388d73d, 0x9c7728c2 < *(int *)(&UNK_005e02c0 + uVar40) - 0x5e02bcU))
      goto LAB_003f5285;
    }
    goto LAB_003f4fbb;
  case 0xd:
    uVar35 = CONCAT31((int3)(uVar36 >> 8),((char)uVar36 + '{') - bVar133);
    goto code_r0x003f5205;
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
code_r0x003f52cc:
    iVar39 = 0x2c4f4;
    if (0x2c4f3 < (uint)(*(int *)(&UNK_005e02c0 + uVar40) - (int)unaff_RBP)) {
LAB_003f5285:
      iVar39 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                               switchdataD_005e02cc + uVar40) - iVar39;
      *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                      switchdataD_005e02cc + uVar40) = iVar39;
      goto LAB_003f528f;
    }
    goto LAB_003f4fbb;
  case 0x12:
    ppVar61->__size[0] = ppVar61->__size[0] + (char)((ulong)unaff_RBX >> 8);
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
    goto code_r0x003f7fe1;
  case 0x1a:
    goto LAB_003f807d;
  case 0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
    unaff_RBP = (pthread_mutex_t *)0xfe38;
    if (uVar36 == 0xfe38) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
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
    unaff_RBP = (pthread_mutex_t *)0xfe47;
    if (uVar36 == 0xfe47) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
    goto LAB_003f807d;
  case 0x50:
    unaff_RBP = (pthread_mutex_t *)0xfe16;
    if (uVar36 == 0xfe16) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
    goto LAB_003f807d;
  case 0x6c:
    pcVar55 = (char *)((ulong)ppVar41 & 0xffffffffffffffd0);
    cVar34 = (char)pcVar55;
    *pcVar55 = *pcVar55 + cVar34;
    *pcVar55 = *pcVar55 + cVar34;
    *pcVar55 = *pcVar55 + cVar34;
    pcVar55[-0x75] = pcVar55[-0x75] + (char)ppVar61;
    goto LAB_003f807d;
  case 0x6e:
    ppVar41->__size[0] = ppVar41->__size[0] + (char)uVar36;
    if (uVar37 == uVar36) goto _hb_ot_shape_switchD_003f8054_caseD_2015;
    goto LAB_003f807d;
  case 0x6f:
    goto code_r0x003f7e92;
  case 0x70:
    *(hb_buffer_t *)((long)ppVar41 + -0x75) =
         (hb_buffer_t)((char)*(hb_buffer_t *)((long)ppVar41 + -0x75) + (char)ppVar61 + bVar133);
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
    goto code_r0x003f7eed;
  case 0x82:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x83:
  case 0x85:
                    /* WARNING (jumptable): Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
    DAT_005e02b0 = 0x46;
code_r0x003fd15b:
    *(undefined1 (*) [16])((long)pphVar97 + 0xd4) = (undefined1  [16])0x0;
    *(undefined4 *)((long)pphVar97 + 0xd0) = 0x25cc;
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fd183;
    _hb_glyph_info_set_unicode_props((uint *)((long)pphVar97 + 0xd0),(long)unaff_R12);
    in_XMM1._8_8_ = extraout_XMM1_Qb_54;
    in_XMM1._0_8_ = extraout_XMM1_Qa_38;
    *(undefined2 *)((long)unaff_R12 + 0x5a) = 1;
    *(undefined4 *)((long)unaff_R12 + 100) = 0;
    lVar75 = *(long *)((long)unaff_R12 + 0x70);
    unaff_R12[3].__align = lVar75;
    *(undefined4 *)((long)unaff_R12 + 0x5c) = 0;
    unaff_R15 = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar97 + 0xd0);
    unaff_R14 = *(uint **)((long)pphVar97 + 0xdc);
    unaff_RBP = (pthread_mutex_t *)(ulong)*(uint *)(lVar75 + 4);
    unaff_RBX = (pthread_mutex_t *)(ulong)*(uint *)(lVar75 + 8);
    if (1 < *(uint *)((long)unaff_R12 + 0x68)) {
      *(__pthread_mutex_s **)&unaff_R12[3].__data =
           &(*(pthread_mutex_t **)((long)unaff_R12 + 0x80))->__data;
      param_2 = *(pthread_mutex_t **)((long)unaff_R12 + 0x80);
      goto LAB_003fd1d6;
    }
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fe626;
    uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)&unaff_R12->__data,1);
    if ((char)uVar44 != '\0') {
      param_2 = *(pthread_mutex_t **)&unaff_R12[3].__data;
      if ((param_2 == *(pthread_mutex_t **)((long)unaff_R12 + 0x70)) &&
         (uVar35 = *(uint *)(*(long *)((long)pphVar97 + 0x10) + 100),
         *(uint *)(*(long *)((long)pphVar97 + 0x10) + 0x5c) < uVar35 + 1)) {
        ppVar41 = *(pthread_mutex_t **)(*(long *)((long)pphVar97 + 0x10) + 0x80);
        *(__pthread_mutex_s **)(*(long *)((long)pphVar97 + 0x10) + 0x78) = &ppVar41->__data;
        if ((ulong)uVar35 == 0) {
          unaff_R12 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
          param_2 = ppVar41;
        }
        else {
          *(undefined8 *)((long)pphVar97 + -8) = 0x3fe670;
          memcpy(ppVar41,param_2,(ulong)uVar35 * 0x14);
          unaff_R12 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
          param_2 = *(pthread_mutex_t **)&unaff_R12[3].__data;
        }
      }
      else {
        unaff_R12 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
      }
      goto LAB_003fd1d6;
    }
    goto LAB_003fd1f6;
  default:
    if ((uVar36 & 0xd0ff0000) != 0) goto code_r0x003fd15b;
    goto LAB_003f7904;
  case 0x86:
    if ((long)param_2 < 0) goto LAB_003fd203;
LAB_003fd1d6:
    uVar40 = (ulong)*(uint *)((long)unaff_R12 + 100);
    (&(param_2->__data).__lock)[uVar40 * 5] = (int)unaff_R15;
    (&(param_2->__data).__count)[uVar40 * 5] = (uint)unaff_RBP;
    (&(param_2->__data).__owner)[uVar40 * 5] = (int)unaff_RBX;
    *(uint **)(param_2->__size + uVar40 * 0x14 + 0xc) = unaff_R14;
    *(int *)((long)unaff_R12 + 100) = *(int *)((long)unaff_R12 + 100) + 1;
LAB_003fd1f6:
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fd1fe;
    hb_buffer_t::sync((hb_buffer_t *)&unaff_R12->__data);
LAB_003f7904:
    if ((*(byte *)((long)unaff_R12 + 0xc0) & 1) == 0) goto LAB_003f790f;
    uVar35 = *(uint *)((long)unaff_R12 + 0x60);
    ppVar41 = (pthread_mutex_t *)(ulong)uVar35;
    if (*(int *)((long)&(unaff_R12->__data).__list.__prev + 4) == 0) {
      if (uVar35 == 0) goto LAB_003f790f;
      lVar75 = 0x24;
      unaff_RBX = (pthread_mutex_t *)0x0;
      goto LAB_003fa240;
    }
    if (uVar35 == 0) goto LAB_003f790f;
    lVar75 = 0x24;
    ppVar61 = (pthread_mutex_t *)0x0;
    goto LAB_003f79a0;
  }
LAB_003f4e44:
  lVar75 = *(long *)(*(long *)((long)unaff_R12 + 0x30) + 0x10);
  *(int *)((long)&unaff_R12->__data + 8) = (int)lVar75;
  *(int *)((long)&unaff_R12->__data + 0xc) = (int)((ulong)lVar75 >> 0x20);
  uVar35 = *(uint *)(*(long *)((long)unaff_R12 + 0x30) + 0x18);
  *(ulong *)((long)unaff_R12 + 0x10) = lVar75 + (ulong)uVar35;
  *(uint *)(unaff_R12->__size + 0x18) = uVar35;
  goto LAB_003f4e62;
  while( true ) {
    ppVar61 = (pthread_mutex_t *)((long)&(ppVar61->__data).__lock + 1);
    pbVar119 = (byte *)(*(long *)((long)unaff_R12 + 0x70) + lVar75);
    lVar75 = lVar75 + 0x14;
    if ((*pbVar119 & 0x80) == 0) break;
LAB_003f79a0:
    if ((pthread_mutex_t *)(ulong)(uVar35 - 1) == ppVar61) {
      ppVar61 = ppVar41;
      break;
    }
  }
  ppVar81 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
  do {
    uVar36 = (uint)ppVar61;
    ppVar73 = (pthread_mutex_t *)((ulong)ppVar61 & 0xffffffff);
    ppVar61 = (pthread_mutex_t *)((ulong)ppVar61 & 0xffffffff);
    if ((uint)ppVar41 < uVar36) {
      ppVar61 = ppVar41;
    }
    uVar37 = (uint)ppVar61;
    uVar60 = (uint)ppVar81;
    if (1 < uVar37 - uVar60) {
      *(byte *)((long)unaff_R12 + 0xc0) = *(byte *)((long)unaff_R12 + 0xc0) | 0x20;
      lVar75 = *(long *)((long)unaff_R12 + 0x70);
      param_5 = (uint *)0xffffffff;
      if (uVar37 != uVar60) {
        if (*(int *)((long)&(unaff_R12->__data).__list.__prev + 4) == 2) {
          if (uVar60 < uVar37) {
            uVar40 = (long)ppVar61 - (long)ppVar81->__size;
            param_5 = (uint *)0xffffffff;
            if (8 < uVar40) {
              uVar132 = (ulong)((uint)uVar40 & 7);
              if (uVar132 == 0) {
                uVar132 = 8;
              }
              phVar123 = (hb_buffer_t *)(ppVar81->__size + (uVar132 - (long)ppVar61));
              puVar45 = (undefined4 *)(lVar75 + (long)ppVar81 * 0x14 + 0x94);
              auVar166._8_4_ = 0xffffffff;
              auVar166._0_8_ = 0xffffffffffffffff;
              auVar166._12_4_ = 0xffffffff;
              auVar204._8_4_ = 0xffffffff;
              auVar204._0_8_ = 0xffffffffffffffff;
              auVar204._12_4_ = 0xffffffff;
              do {
                in_XMM4._12_4_ = puVar45[-0x14];
                in_XMM4._8_4_ = puVar45[-0x19];
                in_XMM4._4_4_ = puVar45[-0x1e];
                in_XMM4._0_4_ = puVar45[-0x23];
                in_XMM5._12_4_ = *puVar45;
                in_XMM5._8_4_ = puVar45[-5];
                in_XMM5._4_4_ = puVar45[-10];
                in_XMM5._0_4_ = puVar45[-0xf];
                auVar235 = in_XMM4 ^ _DAT_006524b0;
                auVar261 = auVar166 ^ _DAT_006524b0;
                auVar236._0_4_ = -(uint)(auVar261._0_4_ < auVar235._0_4_);
                auVar236._4_4_ = -(uint)(auVar261._4_4_ < auVar235._4_4_);
                auVar236._8_4_ = -(uint)(auVar261._8_4_ < auVar235._8_4_);
                auVar236._12_4_ = -(uint)(auVar261._12_4_ < auVar235._12_4_);
                auVar166 = ~auVar236 & in_XMM4 | auVar166 & auVar236;
                auVar235 = in_XMM5 ^ _DAT_006524b0;
                auVar261 = auVar204 ^ _DAT_006524b0;
                auVar237._0_4_ = -(uint)(auVar261._0_4_ < auVar235._0_4_);
                auVar237._4_4_ = -(uint)(auVar261._4_4_ < auVar235._4_4_);
                auVar237._8_4_ = -(uint)(auVar261._8_4_ < auVar235._8_4_);
                auVar237._12_4_ = -(uint)(auVar261._12_4_ < auVar235._12_4_);
                auVar204 = ~auVar237 & in_XMM5 | auVar204 & auVar237;
                puVar45 = puVar45 + 0x28;
                phVar123 = phVar123 + 8;
              } while (phVar123 != (hb_buffer_t *)0x0);
              ppVar81 = (pthread_mutex_t *)((long)&ppVar81->__data + (uVar40 - uVar132));
              auVar261 = auVar166 ^ _DAT_006524b0;
              auVar235 = auVar204 ^ _DAT_006524b0;
              auVar238._0_4_ = -(uint)(auVar261._0_4_ < auVar235._0_4_);
              auVar238._4_4_ = -(uint)(auVar261._4_4_ < auVar235._4_4_);
              auVar238._8_4_ = -(uint)(auVar261._8_4_ < auVar235._8_4_);
              auVar238._12_4_ = -(uint)(auVar261._12_4_ < auVar235._12_4_);
              auVar204 = ~auVar238 & auVar204 | auVar166 & auVar238;
              auVar235._0_8_ = auVar204._8_8_;
              auVar235._8_4_ = auVar204._8_4_;
              auVar235._12_4_ = auVar204._12_4_;
              auVar261 = auVar204 ^ _DAT_006524b0;
              auVar166 = auVar235 ^ _DAT_006524b0;
              auVar202._0_4_ = -(uint)(auVar261._0_4_ < auVar166._0_4_);
              auVar202._4_4_ = -(uint)(auVar261._4_4_ < auVar166._4_4_);
              auVar202._8_4_ = -(uint)(auVar261._8_4_ < auVar166._8_4_);
              auVar202._12_4_ = -(uint)(auVar261._12_4_ < auVar166._12_4_);
              auVar166 = ~auVar202 & auVar235 | auVar204 & auVar202;
              uVar38 = auVar166._4_4_;
              auVar149._4_4_ = uVar38;
              auVar149._0_4_ = uVar38;
              auVar149._8_4_ = uVar38;
              auVar149._12_4_ = uVar38;
              auVar261 = auVar166 ^ _DAT_006524b0;
              auVar204 = auVar149 ^ _DAT_006524b0;
              auVar239._0_4_ = -(uint)(auVar261._0_4_ < auVar204._0_4_);
              auVar239._4_4_ = -(uint)(auVar261._4_4_ < auVar204._4_4_);
              auVar239._8_4_ = -(uint)(auVar261._8_4_ < auVar204._8_4_);
              auVar239._12_4_ = -(uint)(auVar261._12_4_ < auVar204._12_4_);
              in_XMM2 = auVar166 & auVar239;
              in_XMM3 = ~auVar239 & auVar149 | in_XMM2;
              param_5 = (uint *)(ulong)in_XMM3._0_4_;
              in_XMM6 = _DAT_006524b0;
            }
            lVar79 = (long)ppVar61 - (long)ppVar81;
            puVar65 = (uint *)(lVar75 + (long)ppVar81 * 0x14 + 8);
            do {
              if (*puVar65 < (uint)param_5) {
                param_5 = (uint *)(ulong)*puVar65;
              }
              puVar65 = puVar65 + 5;
              lVar79 = lVar79 + -1;
            } while (lVar79 != 0);
          }
        }
        else {
          uVar105 = *(uint *)(lVar75 + 8 + (long)ppVar81 * 0x14);
          uVar77 = *(uint *)(lVar75 + 8 + (ulong)(uVar37 - 1) * 0x14);
          param_5 = (uint *)(ulong)uVar105;
          if (uVar77 < uVar105) {
            param_5 = (uint *)(ulong)uVar77;
          }
        }
      }
      param_6 = (pthread_mutex_t *)0x3;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fb4db;
      hb_buffer_t::_infos_set_glyph_flags
                ((hb_buffer_t *)&unaff_R12->__data,lVar75,uVar60,uVar37,(uint)param_5,3);
      in_XMM1._8_8_ = extraout_XMM1_Qb_47;
      in_XMM1._0_8_ = extraout_XMM1_Qa_31;
      ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)unaff_R12 + 0x60);
    }
    ppVar81 = (pthread_mutex_t *)(ulong)(uVar36 + 1);
    if (uVar36 + 1 < (uint)ppVar41) {
      ppVar81 = ppVar41;
    }
    ppVar61 = ppVar73;
    do {
      if ((int)ppVar81 + -1 == (int)ppVar61) {
        ppVar61 = ppVar81;
        break;
      }
      uVar37 = (int)ppVar61 + 1;
      ppVar61 = (pthread_mutex_t *)(ulong)uVar37;
    } while ((*(byte *)(*(long *)((long)unaff_R12 + 0x70) + 0x10 + (ulong)uVar37 * 0x14) & 0x80) !=
             0);
    ppVar81 = ppVar73;
  } while (uVar36 < uVar35);
  goto LAB_003f790f;
  while( true ) {
    unaff_RBX = (pthread_mutex_t *)((long)&(unaff_RBX->__data).__lock + 1);
    pbVar119 = (byte *)(*(long *)((long)unaff_R12 + 0x70) + lVar75);
    lVar75 = lVar75 + 0x14;
    if ((*pbVar119 & 0x80) == 0) break;
LAB_003fa240:
    if ((pthread_mutex_t *)(ulong)(uVar35 - 1) == unaff_RBX) {
      unaff_RBX = ppVar41;
      break;
    }
  }
  param_2 = (pthread_mutex_t *)0x0;
  param_1 = unaff_R12;
  unaff_R15 = ppVar41;
  do {
    unaff_R12 = param_1;
    if (1 < (uint)((int)unaff_RBX - (int)param_2)) {
      param_3 = (pthread_mutex_t *)((ulong)unaff_RBX & 0xffffffff);
code_r0x003fd0fd:
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fd102;
      hb_buffer_t::merge_clusters_impl((hb_buffer_t *)&param_1->__data,(uint)param_2,(uint)param_3);
      in_XMM1._8_8_ = extraout_XMM1_Qb_53;
      in_XMM1._0_8_ = extraout_XMM1_Qa_37;
      ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)unaff_R12 + 0x60);
    }
    uVar35 = (int)unaff_RBX + 1;
    ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
    if (uVar35 < (uint)ppVar41) {
      ppVar61 = (pthread_mutex_t *)((ulong)ppVar41 & 0xffffffff);
    }
    param_2 = (pthread_mutex_t *)(ulong)((int)ppVar61 - 1);
    param_3 = (pthread_mutex_t *)((ulong)unaff_RBX & 0xffffffff);
LAB_003fd120:
    do {
      uVar35 = (uint)ppVar61;
      if ((int)param_2 == (int)param_3) break;
      uVar35 = (int)param_3 + 1;
      param_3 = (pthread_mutex_t *)(ulong)uVar35;
    } while ((*(byte *)(*(long *)((long)unaff_R12 + 0x70) + 0x10 + (ulong)uVar35 * 0x14) & 0x80) !=
             0);
    uVar36 = (uint)unaff_RBX;
    param_2 = (pthread_mutex_t *)((ulong)unaff_RBX & 0xffffffff);
    unaff_RBX = (pthread_mutex_t *)(ulong)uVar35;
    param_1 = unaff_R12;
  } while (uVar36 < (uint)unaff_R15);
LAB_003f790f:
  uVar35 = *(uint *)((long)unaff_R12 + 0x38);
  iVar39 = *(int *)((long)unaff_R12 + 0x3c);
  *(undefined8 *)((long)pphVar97 + -8) = 0x3f791e;
  uVar44 = hb_script_get_horizontal_direction(iVar39);
  uVar36 = (uint)uVar44;
  if (uVar36 == 5) {
    unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
    if (uVar35 == 4) {
      uVar40 = (ulong)*(uint *)((long)unaff_R12 + 0x60);
      if (uVar40 == 0) {
        bVar70 = 0;
        param_5 = (uint *)0x0;
        bVar133 = false;
      }
      else {
        puVar130 = (ushort *)(*(long *)((long)unaff_R12 + 0x70) + 0x10);
        bVar133 = true;
        param_5 = (uint *)0x0;
        param_6 = (pthread_mutex_t *)0x3e0;
        bVar70 = 0;
        uVar132 = 1;
        do {
          if ((*puVar130 & 0x1f) == 0xd) {
            param_5 = (uint *)0x1;
          }
          else {
            if ((0x3e0U >> (*puVar130 & 0x1f) & 1) != 0) break;
            if (*(int *)(puVar130 + -8) - 0x1f1e6U < 0x1a) {
              bVar70 = 1;
            }
          }
          bVar133 = uVar132 < uVar40;
          puVar130 = puVar130 + 10;
          bVar134 = uVar132 != uVar40;
          uVar132 = uVar132 + 1;
        } while (bVar134);
      }
      uVar36 = (byte)(~bVar133 & (bVar70 | (byte)param_5)) ^ 5;
    }
  }
  else {
    unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
  }
  *(long *)((long)pphVar97 + 0x38) = (long)unaff_R12 + 0x60;
  uVar37 = uVar35 & 0xfffffffe;
  ppVar61 = (pthread_mutex_t *)(ulong)uVar37;
  pphVar85 = pphVar97;
  in_XMM0 = extraout_XMM0_19;
  if (uVar37 == 4) {
    if ((uVar35 != uVar36) && (uVar36 != 0)) goto LAB_003f79fd;
  }
  else if ((uVar35 != 6) && (uVar37 == 6)) {
LAB_003f79fd:
    uVar35 = *(uint *)((long)&(unaff_R12->__data).__list.__prev + 4);
    ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
    uVar36 = *(uint *)((long)unaff_R12 + 0x60);
    uVar40 = (ulong)uVar36;
    if (uVar36 == 1) {
      uVar37 = 0;
      uVar36 = 1;
      uVar132 = 1;
LAB_003f7bc7:
      uVar60 = (uint)uVar132;
      if ((uVar35 == 1) && (1 < uVar60 - uVar37)) {
        *(undefined8 *)((long)pphVar97 + -8) = 0x3f7be1;
        auVar261 = hb_buffer_t::merge_clusters_impl((hb_buffer_t *)&unaff_R12->__data,uVar37,uVar60)
        ;
        in_XMM1._0_8_ = auVar261._8_8_;
        in_XMM0._0_8_ = auVar261._0_8_;
        in_XMM1._8_8_ = extraout_XMM1_Qb_18;
        in_XMM0._8_8_ = extraout_XMM0_Qb_12;
        uVar36 = *(uint *)((long)unaff_R12 + 0x60);
      }
      uVar35 = uVar37;
      if (uVar36 < uVar37) {
        uVar35 = uVar36;
      }
      ppVar41 = (pthread_mutex_t *)(ulong)uVar35;
      if (uVar60 <= uVar36) {
        uVar36 = uVar60;
      }
      ppVar61 = ppVar41;
      if ((uVar35 + 2 <= uVar36) && (uVar35 < uVar36 - 1)) {
        uVar40 = (ulong)(uVar36 - 1);
        ppVar61 = (pthread_mutex_t *)(*(long *)((long)unaff_R12 + 0x70) + (long)ppVar41 * 0x14);
        puVar109 = (undefined8 *)(*(long *)((long)unaff_R12 + 0x70) + uVar40 * 0x14);
        do {
          uVar40 = uVar40 - 1;
          *(undefined4 *)((long)pphVar97 + 0xe0) = *(undefined4 *)(puVar109 + 2);
          uVar44 = puVar109[1];
          *(undefined8 *)((long)pphVar97 + 0xd0) = *puVar109;
          *(undefined8 *)((long)pphVar97 + 0xd8) = uVar44;
          *(undefined4 *)(puVar109 + 2) =
               *(undefined4 *)*(undefined1 (*) [16])((long)ppVar61 + 0x10);
          uVar44 = *(undefined8 *)(*(undefined1 (*) [16])ppVar61 + 8);
          *puVar109 = *(undefined8 *)*(undefined1 (*) [16])ppVar61;
          puVar109[1] = uVar44;
          *(undefined4 *)*(undefined1 (*) [16])((long)ppVar61 + 0x10) =
               *(undefined4 *)((long)pphVar97 + 0xe0);
          in_XMM0 = *(undefined1 (*) [16])((long)pphVar97 + 0xd0);
          *(undefined1 (*) [16])ppVar61 = in_XMM0;
          ppVar41 = (pthread_mutex_t *)(ppVar41->__size + 1);
          ppVar61 = (pthread_mutex_t *)(*(undefined1 (*) [16])((long)ppVar61 + 0x10) + 4);
          puVar109 = (undefined8 *)((long)puVar109 + -0x14);
        } while (ppVar41 < (pthread_mutex_t *)(uVar40 & 0xffffffff));
      }
      if (*(char *)((long)unaff_R12 + 0x5b) != '\0') {
        uVar35 = *(uint *)((long)unaff_R12 + 0x60);
        if (uVar35 < uVar37) {
          uVar37 = uVar35;
        }
        if (uVar35 < uVar60) {
          uVar60 = uVar35;
        }
        if ((uVar37 + 2 <= uVar60) && (uVar37 < uVar60 - 1)) {
          param_2 = *(pthread_mutex_t **)((long)unaff_R12 + 0x80);
          param_1 = (pthread_mutex_t *)(ulong)(uVar60 - 1);
          ppVar41 = (pthread_mutex_t *)(ulong)uVar37;
          ppVar61 = (pthread_mutex_t *)((long)ppVar41 * 5);
code_r0x003f7cac:
          ppVar61 = (pthread_mutex_t *)(&(param_2->__data).__lock + (long)&ppVar61->__data);
          piVar49 = &(param_2->__data).__lock + (long)param_1 * 5;
          do {
            param_1 = (pthread_mutex_t *)((long)param_1 + -1);
            *(int *)((long)pphVar97 + 0xe0) = piVar49[4];
            uVar44 = *(undefined8 *)(piVar49 + 2);
            *(undefined8 *)((long)pphVar97 + 0xd0) = *(undefined8 *)piVar49;
            *(undefined8 *)((long)pphVar97 + 0xd8) = uVar44;
            piVar49[4] = *(int *)((long)ppVar61 + 0x10);
            uVar44 = *(undefined8 *)((long)ppVar61 + 8);
            *(long *)piVar49 = *ppVar61;
            *(undefined8 *)(piVar49 + 2) = uVar44;
            *(int *)((long)ppVar61 + 0x10) = *(int *)((long)pphVar97 + 0xe0);
            in_XMM0 = *(undefined1 (*) [16])((long)pphVar97 + 0xd0);
            *(undefined1 (*) [16])ppVar61 = in_XMM0;
            ppVar41 = (pthread_mutex_t *)(ppVar41->__size + 1);
            ppVar61 = (pthread_mutex_t *)((long)ppVar61 + 0x14);
            piVar49 = piVar49 + -5;
          } while (ppVar41 < (pthread_mutex_t *)((ulong)param_1 & 0xffffffff));
        }
      }
      ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)unaff_R12 + 0x60);
      pphVar85 = pphVar97;
code_r0x003f7d14:
      uVar35 = (uint)ppVar41;
      pphVar97 = pphVar85;
      if (1 < uVar35) {
        ppVar61 = *(pthread_mutex_t **)((long)unaff_R12 + 0x70);
        param_3 = (pthread_mutex_t *)((ulong)(uVar35 - 1) - 1);
        param_1 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
        param_2 = (pthread_mutex_t *)(&(ppVar61->__data).__lock + (ulong)(uVar35 - 1) * 5);
LAB_003f7d30:
        do {
          uVar35 = (uint)ppVar41;
          *(int *)((long)pphVar97 + 0xe0) = (param_2->__data).__kind;
          uVar44 = *(undefined8 *)&(param_2->__data).__owner;
          *(long *)((long)pphVar97 + 0xd0) = param_2->__align;
          *(undefined8 *)((long)pphVar97 + 0xd8) = uVar44;
          (param_2->__data).__kind = (ppVar61->__data).__kind;
          iVar39 = *(int *)((long)&ppVar61->__data + 8);
          uVar36 = *(uint *)((long)&ppVar61->__data + 0xc);
          param_2->__align = ppVar61->__align;
          *(int *)((long)&param_2->__data + 8) = iVar39;
          *(uint *)((long)&param_2->__data + 0xc) = uVar36;
          (ppVar61->__data).__kind = *(int *)((long)pphVar97 + 0xe0);
          in_XMM0 = *(undefined1 (*) [16])((long)pphVar97 + 0xd0);
          *(undefined1 (*) [16])&ppVar61->__align = in_XMM0;
          param_1 = (pthread_mutex_t *)(param_1->__size + 1);
          ppVar81 = (pthread_mutex_t *)((ulong)param_3 & 0xffffffff);
          ppVar61 = (pthread_mutex_t *)&(ppVar61->__data).__spins;
          param_3 = (pthread_mutex_t *)((long)param_3 + -1);
          param_2 = (pthread_mutex_t *)((long)param_2 + -0x14);
        } while (param_1 < ppVar81);
      }
      if (*(hb_buffer_t *)((long)unaff_R12 + 0x5b) != (hb_buffer_t)0x0) {
        uVar36 = *(uint *)((long)unaff_R12 + 0x60);
        ppVar61 = (pthread_mutex_t *)(ulong)uVar36;
        if (uVar36 < uVar35) {
          uVar35 = uVar36;
        }
        if (1 < uVar35) {
          ppVar61 = *(pthread_mutex_t **)((long)unaff_R12 + 0x80);
          param_3 = (pthread_mutex_t *)((ulong)(uVar35 - 1) - 1);
          ppVar41 = (pthread_mutex_t *)(&(ppVar61->__data).__lock + (ulong)(uVar35 - 1) * 5);
          pphVar32 = pphVar97;
code_r0x003f7dad:
          pphVar85 = pphVar32;
          param_2 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
          goto LAB_003f7db0;
        }
      }
    }
    else if (uVar36 != 0) {
      uVar127 = 0;
      uVar132 = 1;
      do {
        uVar37 = (uint)uVar127;
        uVar36 = (uint)uVar40;
        lVar75 = *(long *)((long)unaff_R12 + 0x70);
        if ((*(byte *)(lVar75 + 0x10 + uVar132 * 0x14) & 0x80) == 0) {
          uVar60 = (uint)uVar132;
          if (1 < uVar60 - uVar37 && uVar35 == 1) {
            *(undefined8 *)((long)pphVar97 + -8) = 0x3f7a71;
            auVar261 = hb_buffer_t::merge_clusters_impl
                                 ((hb_buffer_t *)&unaff_R12->__data,uVar37,uVar60);
            in_XMM1._0_8_ = auVar261._8_8_;
            in_XMM0._0_8_ = auVar261._0_8_;
            in_XMM1._8_8_ = extraout_XMM1_Qb_17;
            in_XMM0._8_8_ = extraout_XMM0_Qb_11;
            lVar75 = *(long *)((long)unaff_R12 + 0x70);
            uVar36 = *(uint *)((long)unaff_R12 + 0x60);
          }
          uVar105 = uVar37;
          if (uVar36 < uVar37) {
            uVar105 = uVar36;
          }
          if (uVar132 <= uVar36) {
            uVar36 = uVar60;
          }
          if ((uVar105 + 2 <= uVar36) && (uVar105 < uVar36 - 1)) {
            uVar40 = (ulong)(uVar36 - 1);
            uVar127 = (ulong)uVar105;
            pauVar63 = (undefined1 (*) [16])(lVar75 + uVar127 * 0x14);
            puVar109 = (undefined8 *)(lVar75 + uVar40 * 0x14);
            do {
              uVar40 = uVar40 - 1;
              *(undefined4 *)((long)pphVar97 + 0xe0) = *(undefined4 *)(puVar109 + 2);
              uVar44 = puVar109[1];
              *(undefined8 *)((long)pphVar97 + 0xd0) = *puVar109;
              *(undefined8 *)((long)pphVar97 + 0xd8) = uVar44;
              *(undefined4 *)(puVar109 + 2) = *(undefined4 *)pauVar63[1];
              uVar44 = *(undefined8 *)(*pauVar63 + 8);
              *puVar109 = *(undefined8 *)*pauVar63;
              puVar109[1] = uVar44;
              *(undefined4 *)pauVar63[1] = *(undefined4 *)((long)pphVar97 + 0xe0);
              in_XMM0 = *(undefined1 (*) [16])((long)pphVar97 + 0xd0);
              *pauVar63 = in_XMM0;
              uVar127 = uVar127 + 1;
              pauVar63 = (undefined1 (*) [16])(pauVar63[1] + 4);
              puVar109 = (undefined8 *)((long)puVar109 + -0x14);
            } while (uVar127 < (uVar40 & 0xffffffff));
          }
          if (*(char *)((long)unaff_R12 + 0x5b) != '\0') {
            uVar36 = *(uint *)((long)unaff_R12 + 0x60);
            if (uVar36 < uVar37) {
              uVar37 = uVar36;
            }
            if (uVar36 < uVar132) {
              uVar60 = uVar36;
            }
            if ((uVar37 + 2 <= uVar60) && (uVar37 < uVar60 - 1)) {
              uVar40 = (ulong)(uVar60 - 1);
              uVar127 = (ulong)uVar37;
              pauVar63 = (undefined1 (*) [16])(*(long *)((long)unaff_R12 + 0x80) + uVar127 * 0x14);
              puVar109 = (undefined8 *)(*(long *)((long)unaff_R12 + 0x80) + uVar40 * 0x14);
              do {
                uVar40 = uVar40 - 1;
                *(undefined4 *)((long)pphVar97 + 0xe0) = *(undefined4 *)(puVar109 + 2);
                uVar44 = puVar109[1];
                *(undefined8 *)((long)pphVar97 + 0xd0) = *puVar109;
                *(undefined8 *)((long)pphVar97 + 0xd8) = uVar44;
                *(undefined4 *)(puVar109 + 2) = *(undefined4 *)pauVar63[1];
                uVar44 = *(undefined8 *)(*pauVar63 + 8);
                *puVar109 = *(undefined8 *)*pauVar63;
                puVar109[1] = uVar44;
                *(undefined4 *)pauVar63[1] = *(undefined4 *)((long)pphVar97 + 0xe0);
                in_XMM0 = *(undefined1 (*) [16])((long)pphVar97 + 0xd0);
                *pauVar63 = in_XMM0;
                uVar127 = uVar127 + 1;
                pauVar63 = (undefined1 (*) [16])(pauVar63[1] + 4);
                puVar109 = (undefined8 *)((long)puVar109 + -0x14);
              } while (uVar127 < (uVar40 & 0xffffffff));
            }
          }
          uVar127 = uVar132 & 0xffffffff;
        }
        uVar37 = (uint)uVar127;
        uVar132 = uVar132 + 1;
        uVar36 = **(uint **)((long)pphVar97 + 0x38);
        uVar40 = (ulong)uVar36;
      } while (uVar132 < uVar40);
      goto LAB_003f7bc7;
    }
LAB_003f7dff:
    *(hb_buffer_t *)((long)unaff_R12 + 0x38) =
         (hb_buffer_t)((byte)*(hb_buffer_t *)((long)unaff_R12 + 0x38) ^ 1);
    pphVar85 = pphVar97;
  }
  *(hb_buffer_t **)((long)pphVar85 + 0x60) = (hb_buffer_t *)((long)unaff_R15 + 0x60);
  ppVar41 = *(pthread_mutex_t **)((long)unaff_R15 + 0x80);
code_r0x003f7e15:
  uVar44 = in_XMM0._0_8_;
  if ((ppVar41->__data).__list.__next != (__pthread_internal_list *)0x0) {
code_r0x003f7e1c:
    *(undefined8 *)((long)pphVar85 + -8) = 0x3f7e32;
    bVar133 = hb_buffer_t::message
                        (uVar44,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                         in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)&unaff_R12->__data
                         ,*(undefined8 *)((long)pphVar85 + 8),"start preprocess-text",ppVar61,
                         param_5,param_6,*(undefined1 *)pphVar85);
    in_XMM0 = extraout_XMM0_20;
    if (bVar133) {
      uVar40 = *(ulong *)((long)unaff_R15 + 0x80);
code_r0x003f7e42:
      uVar44 = *(undefined8 *)((long)pphVar85 + 8);
      pcVar74 = *(code **)(uVar40 + 0x20);
      *(undefined8 *)((long)pphVar85 + -8) = 0x3f7e50;
      auVar261 = (*pcVar74)();
      in_XMM1._0_8_ = auVar261._8_8_;
      in_XMM1._8_8_ = extraout_XMM1_Qb_19;
      *(undefined8 *)((long)pphVar85 + -8) = 0x3f7e64;
      hb_buffer_t::message
                (auVar261._0_8_,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)&unaff_R12->__data,uVar44,
                 "end preprocess-text",ppVar61,param_5,param_6,*(undefined1 *)pphVar85);
      in_XMM0 = extraout_XMM0_21;
    }
  }
  *(ulong *)((long)pphVar85 + 0x18) = (ulong)*(uint *)((long)unaff_R12 + 0x60);
  unaff_R15 = *(pthread_mutex_t **)((long)unaff_R12 + 0x70);
  if ((*(uint *)((long)pphVar85 + 0x84) & 0xfffffffd) == 5) {
code_r0x003f7e86:
    if (*(long *)((long)pphVar85 + 0x18) != 0) {
code_r0x003f7e92:
      unaff_RBX = *(pthread_mutex_t **)(*(long *)((long)pphVar85 + 0x10) + 0x10);
      unaff_R13 = (uint *)(ulong)*(uint *)(*(long *)((long)pphVar85 + 0x30) + 0xfc);
      unaff_R12 = (pthread_mutex_t *)(*(long *)((long)pphVar85 + 0x18) * 0x14);
      unaff_R14 = (uint *)&((pthread_mutex_t *)0x0)->__data;
LAB_003f7eeb:
      do {
        while( true ) {
          uVar38 = *(undefined4 *)((long)&(unaff_R15->__data).__lock + (long)unaff_R14);
          uVar44 = *(undefined8 *)((long)unaff_RBX + 0x70);
          pcVar74 = *(code **)((long)unaff_RBX + 0x30);
          *(undefined8 *)((long)pphVar85 + -8) = 0x3f7ef9;
          uVar36 = (*pcVar74)(unaff_RBX,uVar38,uVar44);
          in_XMM1._8_8_ = extraout_XMM1_Qb_21;
          in_XMM1._0_8_ = extraout_XMM1_Qa_12;
          in_XMM0._8_8_ = extraout_XMM0_Qb_14;
          in_XMM0._0_8_ = extraout_XMM0_Qa_09;
          if (uVar36 != *(uint *)((long)&(unaff_R15->__data).__lock + (long)unaff_R14)) break;
LAB_003f7edd:
          phVar123 = (hb_buffer_t *)((long)&(unaff_R15->__data).__count + (long)unaff_R14);
          *(uint *)phVar123 = *(uint *)phVar123 | (uint)unaff_R13;
          unaff_R14 = (uint *)&((__pthread_mutex_s *)unaff_R14)->__spins;
          if (unaff_R12 == (pthread_mutex_t *)unaff_R14) goto LAB_003f7f34;
        }
code_r0x003f7eff:
        unaff_RBP = (pthread_mutex_t *)(ulong)uVar36;
        *(undefined4 *)((long)pphVar85 + 0xd0) = 0;
        ppVar41 = *(pthread_mutex_t **)(*(long *)((long)pphVar85 + 8) + 0x90);
        if (*(long *)((long)ppVar41 + 0x10) == 0) {
          param_5 = (uint *)0x0;
        }
        else {
          param_5 = *(uint **)(*(long *)((long)ppVar41 + 0x10) + 0x10);
code_r0x003f7f25:
        }
        uVar44 = *(undefined8 *)(*(long *)((long)pphVar85 + 8) + 0x98);
        ppVar61 = (pthread_mutex_t *)((long)pphVar85 + 0xd0);
        pcVar74 = *(code **)((long)ppVar41 + 0x30);
        *(undefined8 *)((long)pphVar85 + -8) = 0x3f7ed9;
        iVar39 = (*pcVar74)(*(long *)((long)pphVar85 + 8),uVar44,(ulong)unaff_RBP & 0xffffffff);
        in_XMM1._8_8_ = extraout_XMM1_Qb_20;
        in_XMM1._0_8_ = extraout_XMM1_Qa_11;
        in_XMM0._8_8_ = extraout_XMM0_Qb_13;
        in_XMM0._0_8_ = extraout_XMM0_Qa_08;
        if (iVar39 == 0) goto LAB_003f7edd;
        *(int *)((long)&(unaff_R15->__data).__lock + (long)unaff_R14) = (int)unaff_RBP;
        unaff_R14 = (uint *)&((__pthread_mutex_s *)unaff_R14)->__spins;
      } while (unaff_R12 != (pthread_mutex_t *)unaff_R14);
    }
  }
LAB_003f7f34:
  pphVar97 = pphVar85;
  if (((*(uint *)((long)pphVar85 + 0x84) & 0xfffffffe) == 6) &&
     ((*(byte *)(*(long *)((long)pphVar85 + 0x30) + 0x108) & 8) == 0)) {
code_r0x003f7f59:
    bVar133 = *(int *)((long)pphVar85 + 0x18) == 0;
    pphVar91 = pphVar85;
code_r0x003f7f5e:
    pphVar97 = pphVar91;
    pphVar92 = pphVar91;
    if (!bVar133) {
code_r0x003f7f64:
      unaff_R12 = (pthread_mutex_t *)(*(long *)((long)pphVar92 + 0x18) * 0x14);
      pphVar85 = pphVar92;
code_r0x003f7f71:
      unaff_RBX = (pthread_mutex_t *)0x0;
code_r0x003f7f73:
      unaff_R13 = &_hb_ot_shape::switchD_003f8054::switchdataD_005e046c;
      unaff_R14 = &_hb_ot_shape::switchD_003f8027::switchdataD_005e02f8;
      goto LAB_003f7fb5;
    }
  }
LAB_003f817b:
  phVar99 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
  phVar99[0xb8] = (hb_buffer_t)((byte)phVar99[0xb8] | 0xf);
  phVar123 = phVar99 + 0x70;
  uVar35 = *(uint *)(phVar99 + 0x60);
  *(hb_buffer_t **)((long)pphVar97 + 0x28) = phVar123;
  if (uVar35 != 0) {
    lVar75 = *(long *)(*(long *)((long)pphVar97 + 0x30) + 0x80);
    uVar36 = *(uint *)(lVar75 + 0x54);
    if (uVar36 == 4) {
      uVar36 = 2;
    }
    *(uint *)((long)pphVar97 + 0x40) = uVar36;
    *(undefined8 *)((long)pphVar97 + 0xd0) = *(undefined8 *)((long)pphVar97 + 0x60);
    *(hb_buffer_t **)((long)pphVar97 + 0xd8) = phVar99;
    *(undefined8 *)((long)pphVar97 + 0xe0) = *(undefined8 *)((long)pphVar97 + 8);
    *(undefined8 *)((long)pphVar97 + 0xe8) = *(undefined8 *)(phVar99 + 0x10);
    pcVar74 = hb_ot_shape_normalize_context_t::decompose_unicode;
    if (*(code **)(lVar75 + 0x30) != (code *)0x0) {
      pcVar74 = *(code **)(lVar75 + 0x30);
    }
    pcVar64 = hb_ot_shape_normalize_context_t::compose_unicode;
    if (*(code **)(lVar75 + 0x38) != (code *)0x0) {
      pcVar64 = *(code **)(lVar75 + 0x38);
    }
    *(code **)((long)pphVar97 + 0xf0) = pcVar74;
    *(code **)((long)pphVar97 + 0xf8) = pcVar64;
    *(uint *)((long)pphVar97 + 0x18) = uVar36 & 0xfffffffd;
    *(undefined2 *)(phVar99 + 0x5a) = 1;
    *(undefined4 *)(phVar99 + 100) = 0;
    *(undefined8 *)(phVar99 + 0x78) = *(undefined8 *)(phVar99 + 0x70);
    *(undefined4 *)(phVar99 + 0x5c) = 0;
    uVar40 = 0;
    uVar44 = 0;
LAB_003f8250:
    *(undefined8 *)((long)pphVar97 + 0x20) = uVar44;
    uVar36 = (uint)uVar40;
    uVar37 = uVar36 + 1;
    if (uVar36 + 1 < uVar35) {
      uVar37 = uVar35;
    }
    uVar60 = uVar36 - 1;
    do {
      uVar105 = uVar60 + 2;
      uVar77 = uVar37;
      if (uVar35 <= uVar105) break;
      uVar105 = *(uint *)(*(long *)phVar123 + 0x10 + (ulong)uVar105 * 0x14);
      uVar60 = uVar60 + 1;
      uVar77 = uVar60;
    } while ((0x1c00U >> (uVar105 & 0x1f) & 1) == 0);
    if (*(int *)((long)pphVar97 + 0x18) == 1) {
      ppVar61 = (pthread_mutex_t *)(ulong)uVar105;
      iVar39 = 1;
joined_r0x003f853f:
      while ((uVar36 < uVar77 && (phVar99[0x58] != (hb_buffer_t)0x0))) {
        *(undefined8 *)((long)pphVar97 + -8) = 0x3f82c2;
        decompose_current_character((long)((long)pphVar97 + 0xd0),(uint)(iVar39 != 1));
        in_XMM1._8_8_ = extraout_XMM1_Qb_23;
        in_XMM1._0_8_ = extraout_XMM1_Qa_14;
        uVar36 = *(uint *)(phVar99 + 0x5c);
        uVar40 = (ulong)uVar36;
      }
      if (((uint)uVar40 == uVar35) || (*(char *)(*(long *)((long)pphVar97 + 0x10) + 0x58) == '\0'))
      goto LAB_003f8c32;
      uVar36 = (uint)uVar40 + 1;
      if (uVar36 < uVar35) {
        uVar36 = uVar35;
      }
      uVar37 = uVar36 - 1;
      uVar60 = *(uint *)((long)pphVar97 + 0x40);
      do {
        uVar105 = (uint)uVar40;
        uVar77 = uVar105 + 1;
        uVar40 = (ulong)uVar77;
        if (uVar35 <= uVar77) {
          uVar40 = (ulong)uVar36;
          phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0xd8);
          uVar132 = (ulong)*(uint *)(phVar123 + 0x5c);
          if (uVar36 <= *(uint *)(phVar123 + 0x5c)) goto LAB_003f8410;
          goto LAB_003f8391;
        }
        uVar98 = *(uint *)(**(long **)((long)pphVar97 + 0x28) + 0x10 + (ulong)uVar77 * 0x14);
        ppVar61 = (pthread_mutex_t *)(ulong)uVar98;
      } while ((0x1c00U >> (uVar98 & 0x1f) & 1) != 0);
      phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0xd8);
      uVar132 = (ulong)*(uint *)(phVar123 + 0x5c);
      uVar37 = uVar105;
      if (*(uint *)(phVar123 + 0x5c) < uVar77) {
LAB_003f8391:
        if (phVar123[0x58] != (hb_buffer_t)0x0) {
          param_5 = *(uint **)(phVar123 + 0x70);
          ppVar61 = (pthread_mutex_t *)(&((__pthread_mutex_s *)param_5)->__lock + uVar132 * 5);
          uVar36 = (uint)uVar40;
          do {
            if ((((ppVar61->__data).__lock & 0xfffffff0U) == 0xfe00) ||
               (0xffffff0f < (ppVar61->__data).__lock - 0xe01f0U)) {
              lVar75 = *(long *)((long)pphVar97 + 0xe0);
              if (uVar37 <= (uint)uVar132) goto LAB_003f8afe;
              *(long *)((long)pphVar97 + 0x20) = lVar75;
              goto LAB_003f8560;
            }
            uVar105 = (int)uVar40 - 1;
            uVar40 = (ulong)uVar105;
            ppVar61 = (pthread_mutex_t *)&(ppVar61->__data).__spins;
          } while ((uint)uVar132 != uVar105);
          do {
            *(undefined8 *)((long)pphVar97 + -8) = 0x3f83f6;
            uVar132 = decompose_current_character((long)((long)pphVar97 + 0xd0),(uint)(uVar60 == 0))
            ;
            in_XMM1._8_8_ = extraout_XMM1_Qb_24;
            in_XMM1._0_8_ = extraout_XMM1_Qa_15;
            if (uVar36 <= *(uint *)(phVar123 + 0x5c)) break;
          } while (phVar123[0x58] != (hb_buffer_t)0x0);
        }
      }
      goto LAB_003f8410;
    }
    lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
    if (lVar75 == 0) {
      uVar44 = 0;
    }
    else {
      uVar44 = *(undefined8 *)(lVar75 + 0x18);
    }
    ppVar61 = (pthread_mutex_t *)(*(long *)phVar123 + uVar40 * 0x14);
    phVar123 = (hb_buffer_t *)(*(long *)phVar123 + uVar40 * 0x14 + 0xc);
    uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
    pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x38);
    param_5 = (uint *)0x14;
    *(undefined8 *)((long)pphVar97 + -8) = uVar44;
    *(undefined8 *)((long)pphVar97 + -0x10) = 0x14;
    *(undefined8 *)((long)pphVar97 + -0x18) = 0x3f846b;
    uVar36 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,uVar77 - uVar36);
    in_XMM1._8_8_ = extraout_XMM1_Qb_25;
    in_XMM1._0_8_ = extraout_XMM1_Qa_16;
    phVar99 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
    if (phVar99[0x5a] == (hb_buffer_t)0x0) {
LAB_003f852d:
      uVar36 = *(int *)(phVar99 + 0x5c) + uVar36;
      uVar40 = (ulong)uVar36;
      *(uint *)(phVar99 + 0x5c) = uVar36;
      iVar39 = *(int *)((long)pphVar97 + 0x18);
      goto joined_r0x003f853f;
    }
    pvVar115 = *(void **)(phVar99 + 0x78);
    pvVar53 = *(void **)(phVar99 + 0x70);
    iVar39 = *(int *)(phVar99 + 100);
    if ((pvVar115 == pvVar53) && (iVar39 == *(int *)(phVar99 + 0x5c))) {
LAB_003f8526:
      *(uint *)(phVar99 + 100) = iVar39 + uVar36;
      goto LAB_003f852d;
    }
    uVar37 = iVar39 + uVar36;
    if ((uVar37 == 0) ||
       (ppVar61 = *(pthread_mutex_t **)((long)pphVar97 + 0x10),
       uVar37 < *(uint *)((long)ppVar61 + 0x68))) {
      if (pvVar115 == pvVar53) {
LAB_003f84b5:
        lVar75 = *(long *)((long)pphVar97 + 0x10);
        uVar37 = *(uint *)(lVar75 + 100);
        if (*(int *)(lVar75 + 0x5c) + uVar36 < uVar37 + uVar36) {
          pvVar115 = *(void **)(lVar75 + 0x80);
          *(void **)(lVar75 + 0x78) = pvVar115;
          if ((ulong)uVar37 != 0) {
            *(undefined8 *)((long)pphVar97 + -8) = 0x3f84e8;
            memcpy(pvVar115,pvVar53,(ulong)uVar37 * 0x14);
            pvVar53 = *(void **)(lVar75 + 0x70);
            pvVar115 = *(void **)(lVar75 + 0x78);
          }
        }
        else {
          pvVar115 = pvVar53;
        }
      }
LAB_003f84f5:
      phVar99 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
      uVar37 = *(uint *)(phVar99 + 0x5c);
      uVar60 = *(uint *)(phVar99 + 100);
      ppVar61 = (pthread_mutex_t *)((ulong)uVar60 * 5);
      *(undefined8 *)((long)pphVar97 + -8) = 0x3f8522;
      memmove((void *)((long)pvVar115 + (ulong)uVar60 * 0x14),
              (void *)((long)pvVar53 + (ulong)uVar37 * 0x14),(ulong)uVar36 * 0x14);
      iVar39 = *(int *)(phVar99 + 100);
      goto LAB_003f8526;
    }
    *(undefined8 *)((long)pphVar97 + -8) = 0x3f8bef;
    uVar44 = hb_buffer_t::enlarge(*(hb_buffer_t **)((long)pphVar97 + 0x10),uVar37);
    if ((char)uVar44 != '\0') {
      pvVar53 = *(void **)(*(long *)((long)pphVar97 + 0x10) + 0x70);
      pvVar115 = *(void **)(*(long *)((long)pphVar97 + 0x10) + 0x78);
      if (pvVar115 == pvVar53) goto LAB_003f84b5;
      goto LAB_003f84f5;
    }
LAB_003f8c32:
    phVar99 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
    *(undefined8 *)((long)pphVar97 + -8) = 0x3f8c3f;
    hb_buffer_t::sync(phVar99);
    uVar44 = extraout_XMM0_22._0_8_;
    uVar60 = *(uint *)((long)pphVar97 + 0x40);
    if ((*(byte *)((long)pphVar97 + 0x20) & 1) != 0) goto LAB_003f8c6e;
    bVar133 = false;
    phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
    hVar9 = phVar99[0xc0];
    in_XMM0 = extraout_XMM0_22;
    goto joined_r0x003f8f2a;
  }
LAB_003f9369:
  if ((((byte)phVar99[0xc0] & 1) != 0) &&
     ((*(byte *)(*(long *)((long)pphVar97 + 0x30) + 0x108) & 4) != 0)) {
    if ((*(uint *)(phVar99 + 0x38) & 0xfffffffd) == 4) {
      lVar75 = *(long *)((long)pphVar97 + 0x30);
      uVar37 = *(uint *)(lVar75 + 0xf4) | *(uint *)(lVar75 + 0xf0);
      uVar36 = *(uint *)(lVar75 + 0xf0) | *(uint *)(lVar75 + 0xf8);
      uVar35 = **(uint **)((long)pphVar97 + 0x38);
    }
    else {
      lVar75 = *(long *)((long)pphVar97 + 0x30);
      uVar37 = *(uint *)(lVar75 + 0xf8) | *(uint *)(lVar75 + 0xf0);
      uVar36 = *(uint *)(lVar75 + 0xf0) | *(uint *)(lVar75 + 0xf4);
      uVar35 = **(uint **)((long)pphVar97 + 0x38);
    }
    uVar40 = (ulong)uVar35;
    if (uVar40 != 0) {
      lVar79 = *(long *)phVar123;
      lVar75 = lVar79 + 0x10;
      *(long *)((long)pphVar97 + 0x48) = lVar79 + 4;
      *(long *)((long)pphVar97 + 0x230) = lVar79 + 0x40;
      uVar60 = 0;
      *(uint *)((long)pphVar97 + 0x78) = uVar36;
      *(uint *)((long)pphVar97 + 0x88) = uVar37;
      *(long *)((long)pphVar97 + 0x50) = lVar75;
      do {
        uVar132 = (ulong)uVar60;
        lVar68 = uVar132 * 5;
        if (*(int *)(lVar79 + uVar132 * 0x14) == 0x2044) {
          uVar105 = uVar60 + 1;
          uVar67 = (ulong)uVar105;
          uVar127 = uVar132 - 1;
          do {
            if (uVar127 == 0xffffffffffffffff) {
              uVar77 = 0;
              goto joined_r0x003fad75;
            }
            uVar118 = uVar127 & 0xffffffff;
            uVar127 = uVar127 - 1;
          } while ((*(ushort *)(lVar79 + 0x10 + uVar118 * 0x14) & 0x1f) == 0xd);
          uVar77 = (int)uVar127 + 2;
joined_r0x003fad75:
          if (uVar105 < uVar35) {
            *(ulong *)((long)pphVar97 + 0x18) = uVar67 * 5;
            puVar130 = (ushort *)(lVar75 + uVar67 * 0x14);
            uVar127 = uVar67;
            do {
              ppVar61 = (pthread_mutex_t *)(ulong)(*puVar130 & 0x1f);
              if ((short)(*puVar130 & 0x1f) != 0xd) goto LAB_003fadac;
              uVar127 = uVar127 + 1;
              puVar130 = puVar130 + 10;
            } while (uVar40 != uVar127);
            uVar127 = uVar40;
LAB_003fadac:
            uVar98 = (uint)uVar127;
            bVar133 = uVar98 == uVar105;
            if ((uVar77 == uVar60) || (uVar98 == uVar105)) {
              phVar99 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
              if (uVar77 == uVar60) goto LAB_003fafc2;
LAB_003fafcd:
              if (bVar133) goto LAB_003fafd5;
            }
            else {
              ppVar61 = (pthread_mutex_t *)(ulong)**(uint **)((long)pphVar97 + 0x38);
              if (uVar98 <= **(uint **)((long)pphVar97 + 0x38)) {
                ppVar61 = (pthread_mutex_t *)(uVar127 & 0xffffffff);
              }
              uVar103 = (uint)ppVar61;
              *(ulong *)((long)pphVar97 + 0x20) = uVar67;
              if (1 < uVar103 - uVar77) {
                *(long *)((long)pphVar97 + 0x58) = lVar68;
                lVar75 = *(long *)((long)pphVar97 + 0x10);
                *(byte *)(lVar75 + 0xc0) = *(byte *)(lVar75 + 0xc0) | 0x20;
                lVar68 = *(long *)(lVar75 + 0x70);
                *(ulong *)((long)pphVar97 + 0x40) = uVar67;
                uVar36 = 0xffffffff;
                if (uVar103 != uVar77) {
                  if (*(int *)(lVar75 + 0x1c) == 2) {
                    if (uVar77 < uVar103) {
                      uVar127 = (ulong)uVar77;
                      uVar67 = (long)ppVar61 - uVar127;
                      uVar36 = 0xffffffff;
                      if (8 < uVar67) {
                        uVar118 = (ulong)((uint)uVar67 & 7);
                        if (uVar118 == 0) {
                          uVar118 = 8;
                        }
                        lVar75 = (uVar118 + uVar127) - (long)ppVar61->__size;
                        puVar45 = (undefined4 *)(lVar68 + uVar127 * 0x14 + 0x94);
                        auVar146._8_4_ = 0xffffffff;
                        auVar146._0_8_ = 0xffffffffffffffff;
                        auVar146._12_4_ = 0xffffffff;
                        auVar163._8_4_ = 0xffffffff;
                        auVar163._0_8_ = 0xffffffffffffffff;
                        auVar163._12_4_ = 0xffffffff;
                        do {
                          in_XMM4._12_4_ = puVar45[-0x14];
                          in_XMM4._8_4_ = puVar45[-0x19];
                          in_XMM4._4_4_ = puVar45[-0x1e];
                          in_XMM4._0_4_ = puVar45[-0x23];
                          in_XMM5._12_4_ = *puVar45;
                          in_XMM5._8_4_ = puVar45[-5];
                          in_XMM5._4_4_ = puVar45[-10];
                          in_XMM5._0_4_ = puVar45[-0xf];
                          auVar166 = in_XMM4 ^ _DAT_006524b0;
                          auVar261 = auVar146 ^ _DAT_006524b0;
                          auVar231._0_4_ = -(uint)(auVar261._0_4_ < auVar166._0_4_);
                          auVar231._4_4_ = -(uint)(auVar261._4_4_ < auVar166._4_4_);
                          auVar231._8_4_ = -(uint)(auVar261._8_4_ < auVar166._8_4_);
                          auVar231._12_4_ = -(uint)(auVar261._12_4_ < auVar166._12_4_);
                          auVar146 = ~auVar231 & in_XMM4 | auVar146 & auVar231;
                          auVar166 = in_XMM5 ^ _DAT_006524b0;
                          auVar261 = auVar163 ^ _DAT_006524b0;
                          auVar232._0_4_ = -(uint)(auVar261._0_4_ < auVar166._0_4_);
                          auVar232._4_4_ = -(uint)(auVar261._4_4_ < auVar166._4_4_);
                          auVar232._8_4_ = -(uint)(auVar261._8_4_ < auVar166._8_4_);
                          auVar232._12_4_ = -(uint)(auVar261._12_4_ < auVar166._12_4_);
                          auVar163 = ~auVar232 & in_XMM5 | auVar163 & auVar232;
                          puVar45 = puVar45 + 0x28;
                          lVar75 = lVar75 + 8;
                        } while (lVar75 != 0);
                        uVar127 = uVar127 + (uVar67 - uVar118);
                        auVar261 = auVar146 ^ _DAT_006524b0;
                        auVar166 = auVar163 ^ _DAT_006524b0;
                        auVar233._0_4_ = -(uint)(auVar261._0_4_ < auVar166._0_4_);
                        auVar233._4_4_ = -(uint)(auVar261._4_4_ < auVar166._4_4_);
                        auVar233._8_4_ = -(uint)(auVar261._8_4_ < auVar166._8_4_);
                        auVar233._12_4_ = -(uint)(auVar261._12_4_ < auVar166._12_4_);
                        auVar204 = ~auVar233 & auVar163 | auVar146 & auVar233;
                        auVar147._0_8_ = auVar204._8_8_;
                        auVar147._8_4_ = auVar204._8_4_;
                        auVar147._12_4_ = auVar204._12_4_;
                        auVar261 = auVar204 ^ _DAT_006524b0;
                        auVar166 = auVar147 ^ _DAT_006524b0;
                        auVar201._0_4_ = -(uint)(auVar261._0_4_ < auVar166._0_4_);
                        auVar201._4_4_ = -(uint)(auVar261._4_4_ < auVar166._4_4_);
                        auVar201._8_4_ = -(uint)(auVar261._8_4_ < auVar166._8_4_);
                        auVar201._12_4_ = -(uint)(auVar261._12_4_ < auVar166._12_4_);
                        auVar166 = ~auVar201 & auVar147 | auVar204 & auVar201;
                        uVar38 = auVar166._4_4_;
                        auVar148._4_4_ = uVar38;
                        auVar148._0_4_ = uVar38;
                        auVar148._8_4_ = uVar38;
                        auVar148._12_4_ = uVar38;
                        auVar261 = auVar166 ^ _DAT_006524b0;
                        auVar204 = auVar148 ^ _DAT_006524b0;
                        auVar234._0_4_ = -(uint)(auVar261._0_4_ < auVar204._0_4_);
                        auVar234._4_4_ = -(uint)(auVar261._4_4_ < auVar204._4_4_);
                        auVar234._8_4_ = -(uint)(auVar261._8_4_ < auVar204._8_4_);
                        auVar234._12_4_ = -(uint)(auVar261._12_4_ < auVar204._12_4_);
                        in_XMM2 = auVar166 & auVar234;
                        in_XMM3 = ~auVar234 & auVar148 | in_XMM2;
                        uVar36 = in_XMM3._0_4_;
                        in_XMM6 = _DAT_006524b0;
                      }
                      lVar75 = (long)ppVar61 - uVar127;
                      puVar65 = (uint *)(lVar68 + uVar127 * 0x14 + 8);
                      do {
                        if (*puVar65 < uVar36) {
                          uVar36 = *puVar65;
                        }
                        puVar65 = puVar65 + 5;
                        lVar75 = lVar75 + -1;
                      } while (lVar75 != 0);
                    }
                  }
                  else {
                    uVar36 = *(uint *)(lVar68 + 8 + (ulong)uVar77 * 0x14);
                    uVar37 = *(uint *)(lVar68 + 8 + (ulong)(uVar103 - 1) * 0x14);
                    if (uVar37 < uVar36) {
                      uVar36 = uVar37;
                    }
                  }
                }
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fb09a;
                auVar261 = hb_buffer_t::_infos_set_glyph_flags
                                     (*(hb_buffer_t **)((long)pphVar97 + 0x10),lVar68,uVar77,uVar103
                                      ,uVar36,3);
                in_XMM1._0_8_ = auVar261._8_8_;
                in_XMM0._0_8_ = auVar261._0_8_;
                in_XMM1._8_8_ = extraout_XMM1_Qb_46;
                in_XMM0._8_8_ = extraout_XMM0_Qb_18;
                phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
                uVar36 = *(uint *)((long)pphVar97 + 0x78);
                uVar37 = *(uint *)((long)pphVar97 + 0x88);
                lVar75 = *(long *)((long)pphVar97 + 0x50);
                uVar105 = (uint)*(undefined8 *)((long)pphVar97 + 0x40);
                lVar68 = *(long *)((long)pphVar97 + 0x58);
                uVar67 = *(ulong *)((long)pphVar97 + 0x20);
              }
              if (uVar77 < uVar60) {
                uVar127 = (ulong)uVar77;
                ppVar61 = (pthread_mutex_t *)(~uVar127 + uVar132);
                if ((uVar60 - uVar77 & 3) != 0) {
                  *(long *)((long)pphVar97 + 0x58) = lVar68;
                  puVar65 = (uint *)(*(long *)((long)pphVar97 + 0x48) + uVar127 * 0x14);
                  lVar75 = 0;
                  do {
                    *puVar65 = *puVar65 | uVar37;
                    lVar75 = lVar75 + -1;
                    puVar65 = puVar65 + 5;
                  } while (-lVar75 != ((ulong)(uVar60 - uVar77) & 3));
                  uVar127 = uVar127 - lVar75;
                  lVar68 = *(long *)((long)pphVar97 + 0x58);
                  lVar75 = *(long *)((long)pphVar97 + 0x50);
                }
                uVar67 = *(ulong *)((long)pphVar97 + 0x20);
                if ((pthread_mutex_t *)0x2 < ppVar61) {
                  lVar126 = uVar132 - uVar127;
                  ppVar61 = *(pthread_mutex_t **)((long)pphVar97 + 0x230);
                  piVar49 = &(ppVar61->__data).__lock + uVar127 * 5;
                  do {
                    piVar49[-0xf] = piVar49[-0xf] | uVar37;
                    piVar49[-10] = piVar49[-10] | uVar37;
                    piVar49[-5] = piVar49[-5] | uVar37;
                    *piVar49 = *piVar49 | uVar37;
                    piVar49 = piVar49 + 0x14;
                    lVar126 = lVar126 + -4;
                  } while (lVar126 != 0);
                }
              }
              puVar65 = (uint *)(lVar79 + 4 + lVar68 * 4);
              *puVar65 = *puVar65 | *(uint *)(*(long *)((long)pphVar97 + 0x30) + 0xf0);
              if (uVar105 < uVar98) {
                uVar105 = ~uVar60 + uVar98 & 3;
                if (uVar105 != 0) {
                  ppVar61 = (pthread_mutex_t *)
                            (*(long *)((long)pphVar97 + 0x48) + *(long *)((long)pphVar97 + 0x18) * 4
                            );
                  lVar68 = 0;
                  do {
                    *(uint *)ppVar61 = *(uint *)ppVar61 | uVar36;
                    lVar68 = lVar68 + -1;
                    ppVar61 = (pthread_mutex_t *)((long)ppVar61 + 0x14);
                  } while (-uVar105 != (int)lVar68);
                  uVar67 = uVar67 - lVar68;
                }
                if (2 < (uVar98 - uVar60) - 2) {
                  iVar39 = uVar98 - (int)uVar67;
                  ppVar61 = (pthread_mutex_t *)(*(long *)((long)pphVar97 + 0x230) + uVar67 * 0x14);
                  do {
                    *(uint *)((long)ppVar61 + -0x3c) = *(uint *)((long)ppVar61 + -0x3c) | uVar36;
                    ppVar61[-1].__data.__lock = ppVar61[-1].__data.__lock | uVar36;
                    *(uint *)((long)ppVar61 + -0x14) = *(uint *)((long)ppVar61 + -0x14) | uVar36;
                    (ppVar61->__data).__lock = (ppVar61->__data).__lock | uVar36;
                    ppVar61 = ppVar61 + 2;
                    iVar39 = iVar39 + -4;
                  } while (iVar39 != 0);
                }
              }
              uVar60 = uVar98 - 1;
              phVar99 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
            }
          }
          else {
            bVar133 = true;
            if (uVar77 == uVar60) {
LAB_003fafc2:
              if (((byte)phVar99[0x18] & 0x40) == 0) goto LAB_003fafcd;
              *(long *)((long)pphVar97 + 0x58) = lVar68;
              uVar77 = *(uint *)(phVar99 + 0x60);
              if (uVar105 <= *(uint *)(phVar99 + 0x60)) {
                uVar77 = uVar105;
              }
              phVar99[0xc0] = (hb_buffer_t)((byte)phVar99[0xc0] | 0x20);
              if (uVar60 < uVar77) {
                *(ulong *)((long)pphVar97 + 0x40) = uVar67;
                lVar75 = *(long *)phVar123;
                ppVar61 = (pthread_mutex_t *)(ulong)uVar77;
                uVar127 = uVar132;
                if ((uVar77 - uVar60 & 3) != 0) {
                  pbVar119 = (byte *)(lVar75 + *(long *)((long)pphVar97 + 0x58) * 4 + 4);
                  lVar68 = 0;
                  do {
                    *pbVar119 = *pbVar119 | 2;
                    lVar68 = lVar68 + -1;
                    pbVar119 = pbVar119 + 0x14;
                  } while (-lVar68 != ((ulong)(uVar77 - uVar60) & 3));
                  uVar127 = uVar132 - lVar68;
                }
                if ((hb_buffer_t *)0x2 < (hb_buffer_t *)(ppVar61->__size + ~uVar132)) {
                  lVar68 = (long)ppVar61 - uVar127;
                  pbVar119 = (byte *)(lVar75 + uVar127 * 0x14 + 0x40);
                  do {
                    pbVar119[-0x3c] = pbVar119[-0x3c] | 2;
                    pbVar119[-0x28] = pbVar119[-0x28] | 2;
                    pbVar119[-0x14] = pbVar119[-0x14] | 2;
                    *pbVar119 = *pbVar119 | 2;
                    pbVar119 = pbVar119 + 0x50;
                    lVar68 = lVar68 + -4;
                    ppVar61 = (pthread_mutex_t *)0x0;
                  } while (lVar68 != 0);
                }
                lVar75 = *(long *)((long)pphVar97 + 0x50);
                uVar105 = (uint)*(undefined8 *)((long)pphVar97 + 0x40);
              }
              lVar68 = *(long *)((long)pphVar97 + 0x58);
              if (!bVar133) goto LAB_003fad00;
            }
LAB_003fafd5:
            if (((byte)phVar99[0x18] & 0x40) != 0) {
              if (*(uint *)(phVar99 + 0x60) < uVar105) {
                uVar105 = *(uint *)(phVar99 + 0x60);
              }
              phVar99[0xc0] = (hb_buffer_t)((byte)phVar99[0xc0] | 0x20);
              if (uVar60 < uVar105) {
                ppVar61 = *(pthread_mutex_t **)phVar123;
                uVar127 = ~uVar132;
                if ((uVar105 - uVar60 & 3) != 0) {
                  phVar107 = (hb_buffer_t *)(ppVar61->__size + lVar68 * 4 + 4);
                  lVar68 = 0;
                  do {
                    *phVar107 = (hb_buffer_t)((byte)*phVar107 | 2);
                    lVar68 = lVar68 + -1;
                    phVar107 = phVar107 + 0x14;
                  } while (-lVar68 != ((ulong)(uVar105 - uVar60) & 3));
                  uVar132 = uVar132 - lVar68;
                }
                if (2 < uVar127 + uVar105) {
                  lVar68 = uVar105 - uVar132;
                  ppVar61 = (pthread_mutex_t *)(ppVar61->__size + uVar132 * 0x14 + 0x40);
                  do {
                    *(hb_buffer_t *)((long)ppVar61 + -0x3c) =
                         (hb_buffer_t)((byte)*(hb_buffer_t *)((long)ppVar61 + -0x3c) | 2);
                    ppVar61[-1].__size[0] = ppVar61[-1].__size[0] | 2;
                    *(hb_buffer_t *)((long)ppVar61 + -0x14) =
                         (hb_buffer_t)((byte)*(hb_buffer_t *)((long)ppVar61 + -0x14) | 2);
                    ppVar61->__size[0] = ppVar61->__size[0] | 2;
                    ppVar61 = ppVar61 + 2;
                    lVar68 = lVar68 + -4;
                  } while (lVar68 != 0);
                }
              }
            }
          }
        }
LAB_003fad00:
        uVar60 = uVar60 + 1;
      } while (uVar60 < uVar35);
    }
  }
  lVar75 = *(long *)((long)pphVar97 + 0x30);
  pcVar74 = *(code **)(*(long *)(lVar75 + 0x80) + 0x40);
  lVar79 = *(long *)((long)pphVar97 + 8);
  if (pcVar74 != (code *)0x0) {
    *(undefined8 *)((long)pphVar97 + -8) = 0x3f93ac;
    auVar261 = (*pcVar74)(*(undefined8 *)((long)pphVar97 + 0x60),phVar99,lVar79);
    in_XMM1._0_8_ = auVar261._8_8_;
    in_XMM0._0_8_ = auVar261._0_8_;
    in_XMM1._8_8_ = extraout_XMM1_Qb_36;
    in_XMM0._8_8_ = extraout_XMM0_Qb_17;
  }
  lVar68 = *(long *)((long)pphVar97 + 0x70);
  if (*(int *)((long)pphVar97 + 0x68) != 0) {
    uVar35 = *(uint *)((long)pphVar97 + 0x68);
    uVar40 = 0;
    do {
      lVar126 = uVar40 * 0x10;
      uVar36 = *(uint *)(lVar68 + 8 + lVar126);
      if (((uVar36 != 0) || (*(int *)(lVar68 + 0xc + lVar126) != -1)) &&
         (0 < *(int *)(lVar75 + 0x9c))) {
        ppVar61 = *(pthread_mutex_t **)(lVar75 + 0xa0);
        iVar104 = *(int *)(lVar75 + 0x9c) + -1;
        iVar39 = 0;
        do {
          while( true ) {
            uVar37 = (uint)(iVar104 + iVar39) >> 1;
            uVar132 = (ulong)uVar37;
            if (*(uint *)(lVar68 + lVar126) < (uint)(&(ppVar61->__data).__lock)[uVar132 * 9]) break;
            if (*(uint *)(lVar68 + lVar126) <= (uint)(&(ppVar61->__data).__lock)[uVar132 * 9]) {
              uVar37 = *(uint *)((long)&(ppVar61->__data).__list + uVar132 * 0x24);
              if (uVar37 != 0) {
                iVar39 = *(int *)(lVar68 + 4 + lVar126);
                hVar9 = *(hb_buffer_t *)(ppVar61->__size + uVar132 * 0x24 + 0x14);
                ppVar61 = (pthread_mutex_t *)CONCAT71((int7)((ulong)ppVar61 >> 8),hVar9);
                uVar60 = **(uint **)((long)pphVar97 + 0x38);
                if ((ulong)uVar60 != 0) {
                  uVar105 = *(uint *)(lVar68 + 0xc + lVar126);
                  ppVar61 = (pthread_mutex_t *)(ulong)uVar105;
                  lVar126 = **(long **)((long)pphVar97 + 0x28);
                  lVar101 = 0;
                  do {
                    uVar77 = *(uint *)(lVar126 + 8 + lVar101);
                    if ((uVar36 <= uVar77) && (uVar77 < uVar105)) {
                      *(uint *)(lVar126 + 4 + lVar101) =
                           *(uint *)(lVar126 + 4 + lVar101) & ~uVar37 |
                           iVar39 << ((byte)hVar9 & 0x1f) & uVar37;
                    }
                    lVar101 = lVar101 + 0x14;
                  } while ((ulong)uVar60 * 0x14 != lVar101);
                }
              }
              goto LAB_003f93d0;
            }
            iVar39 = uVar37 + 1;
            if (iVar104 < iVar39) goto LAB_003f93d0;
          }
          iVar104 = uVar37 - 1;
        } while (iVar39 <= iVar104);
      }
LAB_003f93d0:
      uVar40 = uVar40 + 1;
    } while (uVar40 != uVar35);
  }
  if ((*(byte *)(lVar75 + 0x108) & 0x80) == 0) {
LAB_003f94d3:
    uVar35 = **(uint **)((long)pphVar97 + 0x38);
    pGVar122 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)pphVar97 + 0x28);
    if ((ulong)uVar35 != 0) {
      lVar75 = *(long *)pGVar122;
      if ((ulong)uVar35 - 1 < 3) {
        uVar40 = 0;
      }
      else {
        puVar45 = (undefined4 *)(lVar75 + 0x48);
        uVar40 = 0;
        do {
          puVar45[-0x12] = puVar45[-0xf];
          puVar45[-0xd] = puVar45[-10];
          puVar45[-8] = puVar45[-5];
          puVar45[-3] = *puVar45;
          uVar40 = uVar40 + 4;
          puVar45 = puVar45 + 0x14;
        } while ((uVar35 & 0xfffffffc) != uVar40);
      }
      ppVar61 = (pthread_mutex_t *)0x0;
      if ((ulong)(uVar35 & 3) != 0) {
        lVar75 = lVar75 + uVar40 * 0x14;
        ppVar61 = (pthread_mutex_t *)((ulong)(uVar35 & 3) * 0x14);
        lVar68 = 0;
        do {
          *(undefined4 *)(lVar68 + lVar75) = *(undefined4 *)(lVar68 + 0xc + lVar75);
          lVar68 = lVar68 + 0x14;
        } while (ppVar61 != (pthread_mutex_t *)lVar68);
      }
    }
  }
  else {
    uVar40 = (ulong)**(uint **)((long)pphVar97 + 0x38);
    pGVar122 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)pphVar97 + 0x28);
    ppVar61 = (pthread_mutex_t *)0x0;
    if (uVar40 != 0) {
      lVar75 = *(long *)pGVar122;
      ppVar61 = (pthread_mutex_t *)(uVar40 * 4);
      lVar68 = 0;
      do {
        uVar111 = *(ushort *)(lVar75 + 0x10 + lVar68);
        if ((uVar111 & 0x1f) == 0xc) {
          uVar71 = uVar111 >> 8;
          if (0xc7ff < uVar111) goto _hb_ot_shape_switchD_003fd3df_caseD_0;
          uVar35 = *(uint *)(lVar75 + lVar68);
          if ((uVar35 & 0xffffff00) == 0xe00) {
            if (uVar111 < 0x100) {
              uVar110 = 0;
              switch(uVar35) {
              case 0xe31:
              case 0xe34:
              case 0xe35:
              case 0xe36:
              case 0xe37:
              case 0xe47:
              case 0xe4c:
              case 0xe4d:
              case 0xe4e:
                uVar110 = 0xe8;
                break;
              case 0xeb1:
              case 0xeb4:
              case 0xeb5:
              case 0xeb6:
              case 0xeb7:
              case 0xebb:
              case 0xecc:
              case 0xecd:
                uVar110 = 0xe6;
                break;
              case 0xebc:
                uVar110 = 0xdc;
              }
            }
            else {
              uVar110 = 0xde;
              if (uVar35 != 0xe3a) goto LAB_003fd3c5;
            }
_hb_ot_shape_switchD_003fd3df_caseD_1:
            uVar71 = uVar110;
          }
          else {
LAB_003fd3c5:
            uVar71 = 0xdc;
            uVar110 = uVar111 >> 8;
            switch((uVar111 >> 8) + 0x7f & 0xff) {
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
              uVar71 = 0xe6;
              break;
            case 0x82:
              uVar71 = 0xde;
              break;
            case 0x89:
            case 0xea:
              uVar71 = 0xe8;
              break;
            case 0x8a:
            case 0x8d:
              uVar71 = 0xe4;
              break;
            case 0x8c:
              uVar71 = 0xd6;
            }
          }
_hb_ot_shape_switchD_003fd3df_caseD_0:
          ppVar61 = (pthread_mutex_t *)((ulong)uVar111 & 0xff);
          *(ushort *)(lVar75 + 0x10 + lVar68) = uVar71 << 8 | (ushort)ppVar61;
        }
        lVar68 = lVar68 + 0x14;
      } while (uVar40 * 0x14 != lVar68);
      goto LAB_003f94d3;
    }
  }
  *(undefined4 *)(phVar99 + 0x30) = 2;
  phVar99[0xb8] = (hb_buffer_t)((byte)phVar99[0xb8] & 0xf0 | 7);
  lVar75 = *(long *)(lVar79 + 0x20);
  paVar50 = *(accelerator_t **)(lVar75 + 0x128);
  while (paVar50 == (accelerator_t *)0x0) {
    lVar79 = *(long *)(lVar75 + 0x68);
    if (lVar79 == 0) {
LAB_003fdb8d:
      paVar50 = (accelerator_t *)&_hb_NullPool;
      pGVar122 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)pphVar97 + 0x28);
      break;
    }
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fdb30;
    paVar50 = calloc(1,0x218);
    if (paVar50 == (accelerator_t *)0x0) {
      LOCK();
      bVar133 = *(long *)(lVar75 + 0x128) == 0;
      if (bVar133) {
        *(long *)(lVar75 + 0x128) = (long)&_hb_NullPool;
      }
      UNLOCK();
      in_XMM0 = extraout_XMM0_29;
      if (bVar133) goto LAB_003fdb8d;
    }
    else {
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fdb43;
      auVar261 = OT::GDEF::accelerator_t::accelerator_t
                           (paVar50,lVar79,extraout_RDX_07,ppVar61,pGVar122);
      in_XMM1._0_8_ = auVar261._8_8_;
      in_XMM0._0_8_ = auVar261._0_8_;
      in_XMM1._8_8_ = extraout_XMM1_Qb_57;
      in_XMM0._8_8_ = extraout_XMM0_Qb_23;
      LOCK();
      bVar133 = *(long *)(lVar75 + 0x128) == 0;
      if (bVar133) {
        *(long *)(lVar75 + 0x128) = (long)paVar50;
      }
      UNLOCK();
      pGVar122 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)pphVar97 + 0x28);
      if (bVar133) break;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fdb61;
      OT::GDEF::accelerator_t::~accelerator_t(paVar50);
      in_XMM1._8_8_ = extraout_XMM1_Qb_58;
      in_XMM1._0_8_ = extraout_XMM1_Qa_40;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fdb69;
      free(paVar50);
      in_XMM0 = extraout_XMM0_30;
    }
    pGVar122 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)pphVar97 + 0x28);
    paVar50 = *(accelerator_t **)(lVar75 + 0x128);
  }
  uVar35 = **(uint **)((long)pphVar97 + 0x38);
  if ((ulong)uVar35 != 0) {
    lVar75 = *(long *)pGVar122;
    lVar79 = 0;
    do {
      uVar36 = *(uint *)(lVar75 + lVar79);
      sVar10 = *(short *)(paVar50 + (ulong)(uVar36 & 0xff) * 2 + 0x18);
      if ((sVar10 == -1) || ((uint)(int)sVar10 >> 3 != uVar36 >> 8)) {
        puVar45 = *(undefined4 **)paVar50;
        pGVar113 = (GDEF *)&_hb_NullPool;
        if (puVar45 == (undefined4 *)0x0) {
          puVar45 = &_hb_NullPool;
        }
        if (3 < (uint)puVar45[6]) {
          pGVar113 = *(GDEF **)(puVar45 + 4);
        }
        *(undefined8 *)((long)pphVar97 + -8) = 0x3f963d;
        uVar37 = OT::GDEF::get_glyph_props(pGVar113,uVar36);
        in_XMM0 = extraout_XMM0_26;
        if (*(long *)paVar50 == 0) {
          pGVar122 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)pphVar97 + 0x28);
        }
        else {
          pGVar122 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)((long)pphVar97 + 0x28);
          if ((uVar36 < 0x200000) && (uVar37 < 8)) {
            *(ushort *)(paVar50 + (ulong)(uVar36 & 0xff) * 2 + 0x18) =
                 (ushort)uVar37 | (ushort)(uVar36 >> 5) & 0xfff8;
          }
        }
      }
      else {
        uVar37 = (int)sVar10 & 7;
      }
      *(short *)(lVar75 + 0xc + lVar79) = (short)uVar37;
      *(undefined1 *)(lVar75 + 0xe + lVar79) = 0;
      lVar79 = lVar79 + 0x14;
    } while ((ulong)uVar35 * 0x14 != lVar79);
  }
  auVar262._8_8_ = in_XMM1._0_8_;
  auVar262._0_8_ = in_XMM0._0_8_;
  lVar75 = *(long *)((long)pphVar97 + 0x30);
  uVar111 = *(ushort *)(lVar75 + 0x108);
  if ((uVar111 & 0x40) == 0) {
    phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
    lVar79 = *(long *)((long)pphVar97 + 8);
  }
  else {
    uVar35 = **(uint **)((long)pphVar97 + 0x38);
    phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
    lVar79 = *(long *)((long)pphVar97 + 8);
    if ((ulong)uVar35 != 0) {
      lVar68 = *(long *)pGVar122;
      lVar126 = 0;
      do {
        uVar111 = *(ushort *)(lVar68 + 0x10 + lVar126);
        if (((uVar111 & 0x1f) != 0xc) ||
           ((uVar102 = 8, (uVar111 & 0x20) != 0 && ((*(byte *)(lVar68 + 0xc + lVar126) & 0x10) == 0)
            ))) {
          uVar102 = 2;
        }
        *(undefined2 *)(lVar68 + 0xc + lVar126) = uVar102;
        lVar126 = lVar126 + 0x14;
      } while ((ulong)uVar35 * 0x14 != lVar126);
      uVar111 = *(ushort *)(lVar75 + 0x108);
    }
  }
  if ((uVar111 & 0x2000) == 0) {
    lVar68 = *(long *)(lVar79 + 0x20);
    lVar126 = *(long *)(lVar68 + 0x130);
    *(long *)((long)pphVar97 + 0x20) = lVar126;
    while (lVar126 == 0) {
      uVar48 = in_XMM1._0_8_;
      uVar44 = in_XMM0._0_8_;
      lVar75 = *(long *)(lVar68 + 0x68);
      if (lVar75 == 0) {
        *(uint **)((long)pphVar97 + 0x20) = &_hb_NullPool;
LAB_003fe723:
        auVar262._8_8_ = uVar48;
        auVar262._0_8_ = uVar44;
        lVar75 = *(long *)((long)pphVar97 + 0x30);
        break;
      }
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fdc80;
      paVar51 = calloc(1,0x18);
      uVar48 = in_XMM1._0_8_;
      uVar44 = extraout_XMM0_31._0_8_;
      if (paVar51 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
        LOCK();
        bVar133 = *(long *)(lVar68 + 0x130) == 0;
        if (bVar133) {
          *(long *)(lVar68 + 0x130) = (long)&_hb_NullPool;
        }
        UNLOCK();
        in_XMM0 = extraout_XMM0_31;
        if (bVar133) {
          *(uint **)((long)pphVar97 + 0x20) = &_hb_NullPool;
          phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
          lVar79 = *(long *)((long)pphVar97 + 8);
          goto LAB_003fe723;
        }
      }
      else {
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fdc93;
        auVar262 = OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(paVar51,lVar75);
        *(accelerator_t<OT::Layout::GSUB> **)((long)pphVar97 + 0x20) = paVar51;
        LOCK();
        bVar133 = *(long *)(lVar68 + 0x130) == 0;
        if (bVar133) {
          *(long *)(lVar68 + 0x130) = (long)paVar51;
        }
        UNLOCK();
        lVar75 = *(long *)((long)pphVar97 + 0x30);
        if (bVar133) break;
        paVar51 = *(accelerator_t<OT::Layout::GSUB> **)((long)pphVar97 + 0x20);
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fdcbb;
        OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(paVar51);
        in_XMM1._8_8_ = extraout_XMM1_Qb_59;
        in_XMM1._0_8_ = extraout_XMM1_Qa_41;
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fdcc3;
        free(paVar51);
        in_XMM0 = extraout_XMM0_32;
      }
      auVar262._8_8_ = in_XMM1._0_8_;
      auVar262._0_8_ = in_XMM0._0_8_;
      lVar126 = *(long *)(lVar68 + 0x130);
      *(long *)((long)pphVar97 + 0x20) = lVar126;
      phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
      lVar79 = *(long *)((long)pphVar97 + 8);
      lVar75 = *(long *)((long)pphVar97 + 0x30);
    }
    if (*(long *)(phVar123 + 0xd0) == 0) {
LAB_003f976d:
      puVar109 = *(undefined8 **)((long)pphVar97 + 0x20);
      pGVar122 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)*puVar109;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3f978d;
      auVar257 = OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                           ((hb_ot_apply_context_t *)((long)pphVar97 + 0xd0),0,lVar79,
                            (undefined4 *)phVar123,pGVar122);
      *(code **)((long)pphVar97 + 0x1b8) =
           OT::Layout::GSUB_impl::SubstLookup::dispatch_recurse_func<OT::hb_ot_apply_context_t>;
      uVar40 = (ulong)*(uint *)(lVar75 + 0xcc);
      if (*(uint *)(lVar75 + 0xcc) != 0) {
        uVar132 = 0;
        uVar127 = 0;
        do {
          if (uVar132 < uVar40) {
            puVar65 = (uint *)(uVar132 * 0x10 + *(long *)(lVar75 + 0xd0));
            uVar35 = *puVar65;
          }
          else {
            puVar65 = &_hb_NullPool;
            uVar35 = _hb_NullPool;
          }
          if ((uint)uVar127 < uVar35) {
            *(ulong *)((long)pphVar97 + 0x50) = uVar132;
            uVar127 = uVar127 & 0xffffffff;
            *(uint **)((long)pphVar97 + 0x58) = puVar65;
            do {
              if (uVar127 < *(uint *)(lVar75 + 0xac)) {
                puVar130 = (ushort *)(uVar127 * 0xc + *(long *)(lVar75 + 0xb0));
              }
              else {
                puVar130 = (ushort *)&_hb_NullPool;
              }
              uVar111 = *puVar130;
              *(ulong *)((long)pphVar97 + 0x18) = (ulong)uVar111;
              if ((uint)uVar111 < *(uint *)(puVar109 + 1)) {
                while( true ) {
                  uVar44 = auVar257._8_8_;
                  __ptr = *(ulong **)(puVar109[2] + *(long *)((long)pphVar97 + 0x18) * 8);
                  if (__ptr != (ulong *)0x0) break;
                  puVar45 = (undefined4 *)*puVar109;
                  if (puVar45 == (undefined4 *)0x0) {
                    puVar45 = &_hb_NullPool;
                  }
                  psVar66 = (short *)&_hb_NullPool;
                  if (3 < (uint)puVar45[6]) {
                    psVar66 = *(short **)(puVar45 + 4);
                  }
                  puVar114 = (ushort *)&_hb_NullPool;
                  if (*psVar66 == 0x100) {
                    uVar111 = psVar66[4];
                    puVar46 = (ushort *)&_hb_NullPool;
                    if (uVar111 != 0) {
                      puVar46 = (ushort *)
                                ((long)psVar66 + (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
                    }
                    puVar114 = (ushort *)&_hb_NullPool;
                    if (*(ushort *)((long)pphVar97 + 0x18) < (ushort)(*puVar46 << 8 | *puVar46 >> 8)
                       ) {
                      uVar111 = puVar46[*(long *)((long)pphVar97 + 0x18) + 1];
                      puVar114 = (ushort *)&_hb_NullPool;
                      if (uVar111 != 0) {
                        puVar114 = (ushort *)
                                   ((long)puVar46 + (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
                      }
                    }
                  }
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3f98fe;
                  __ptr = OT::hb_ot_layout_lookup_accelerator_t::
                          create<OT::Layout::GSUB_impl::SubstLookup>(puVar114);
                  auVar257._8_8_ = uVar44;
                  auVar257._0_8_ = extraout_XMM0_Qa_12;
                  if (__ptr == (ulong *)0x0) goto LAB_003f9820;
                  LOCK();
                  bVar133 = *(long *)(puVar109[2] + *(long *)((long)pphVar97 + 0x18) * 8) == 0;
                  if (bVar133) {
                    *(long *)(puVar109[2] + *(long *)((long)pphVar97 + 0x18) * 8) = (long)__ptr;
                  }
                  UNLOCK();
                  if (bVar133) break;
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3f9925;
                  free(__ptr);
                  auVar257._8_8_ = uVar44;
                  auVar257._0_8_ = extraout_XMM0_Qa_13;
                }
                uVar44 = auVar257._8_8_;
                if (*(long *)(*(long *)((long)pphVar97 + 0x10) + 0xd0) != 0) {
                  uVar35 = *(uint *)(puVar130 + 4);
                  *(ulong *)((long)pphVar97 + -8) = (ulong)(uVar35 & 0xff);
                  *(ulong *)((long)pphVar97 + -0x10) = (ulong)(uVar35 >> 8 & 0xff);
                  puVar109 = *(undefined8 **)((long)pphVar97 + 0x20);
                  *(undefined8 *)((long)pphVar97 + -0x18) = 0x3f997c;
                  bVar133 = hb_buffer_t::message
                                      (auVar257._0_8_,uVar44,in_XMM2._0_8_,in_XMM3._0_8_,
                                       in_XMM4._0_8_,in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                                       *(hb_buffer_t **)((long)pphVar97 + 0x10),
                                       *(undefined8 *)((long)pphVar97 + 8),
                                       "start lookup %u feature \'%c%c%c%c\'",
                                       *(undefined8 *)((long)pphVar97 + 0x18),
                                       (ulong)(uVar35 >> 0x18),(ulong)(uVar35 >> 0x10 & 0xff),
                                       *(undefined1 *)((long)pphVar97 + -0x10));
                  auVar257._8_8_ = uVar44;
                  auVar257._0_8_ = extraout_XMM0_Qa_14;
                  if (!bVar133) goto LAB_003f9820;
                }
                uVar44 = auVar257._8_8_;
                if ((((*__ptr & *(ulong *)((long)pphVar97 + 0x1e0)) == 0) ||
                    ((__ptr[1] & *(ulong *)((long)pphVar97 + 0x1e8)) == 0)) ||
                   ((*(ulong *)((long)pphVar97 + 0x1f0) & __ptr[2]) == 0)) {
                  if (*(long *)(*(long *)((long)pphVar97 + 0x10) + 0xd0) != 0) {
                    uVar35 = *(uint *)(puVar130 + 4);
                    *(ulong *)((long)pphVar97 + -8) = (ulong)(uVar35 & 0xff);
                    *(ulong *)((long)pphVar97 + -0x10) = (ulong)(uVar35 >> 8 & 0xff);
                    puVar109 = *(undefined8 **)((long)pphVar97 + 0x20);
                    *(undefined8 *)((long)pphVar97 + -0x18) = 0x3f9d10;
                    hb_buffer_t::message
                              (auVar257._0_8_,uVar44,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                               in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                               *(hb_buffer_t **)((long)pphVar97 + 0x10),
                               *(undefined8 *)((long)pphVar97 + 8),
                               "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches",
                               *(undefined8 *)((long)pphVar97 + 0x18),(ulong)(uVar35 >> 0x18),
                               (ulong)(uVar35 >> 0x10 & 0xff),
                               *(undefined1 *)((long)pphVar97 + -0x10));
                    auVar257._8_8_ = uVar44;
                    auVar257._0_8_ = extraout_XMM0_Qa_15;
                    goto LAB_003f9d14;
                  }
                }
                else {
                  *(int *)((long)pphVar97 + 0x200) = (int)*(undefined8 *)((long)pphVar97 + 0x18);
                  *(undefined4 *)((long)pphVar97 + 0x1fc) = *(undefined4 *)(puVar130 + 2);
                  *(undefined8 *)((long)pphVar97 + 0x218) = 0xffffffff;
                  *(byte *)((long)pphVar97 + 0x20e) = (byte)puVar130[1] >> 1 & 1;
                  *(byte *)((long)pphVar97 + 0x20d) = (byte)puVar130[1] & 1;
                  *(byte *)((long)pphVar97 + 0x210) = (byte)puVar130[1] >> 2 & 1;
                  *(byte *)((long)pphVar97 + 0x20f) = (byte)puVar130[1] >> 3 & 1;
                  puVar45 = (undefined4 *)*puVar109;
                  if (puVar45 == (undefined4 *)0x0) {
                    puVar45 = &_hb_NullPool;
                  }
                  psVar66 = (short *)&_hb_NullPool;
                  if (3 < (uint)puVar45[6]) {
                    psVar66 = *(short **)(puVar45 + 4);
                  }
                  psVar121 = (short *)&_hb_NullPool;
                  if (*psVar66 == 0x100) {
                    uVar111 = psVar66[4];
                    puVar114 = (ushort *)&_hb_NullPool;
                    if (uVar111 != 0) {
                      puVar114 = (ushort *)
                                 ((long)psVar66 + (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
                    }
                    psVar121 = (short *)&_hb_NullPool;
                    if (*(ushort *)((long)pphVar97 + 0x18) <
                        (ushort)(*puVar114 << 8 | *puVar114 >> 8)) {
                      uVar111 = puVar114[*(long *)((long)pphVar97 + 0x18) + 1];
                      psVar121 = (short *)&_hb_NullPool;
                      if (uVar111 != 0) {
                        psVar121 = (short *)((long)puVar114 +
                                            (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
                      }
                    }
                  }
                  phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x170);
                  iVar39 = *(int *)(phVar123 + 0x60);
                  if ((iVar39 == 0) || (*(int *)((long)pphVar97 + 0x1fc) == 0)) {
LAB_003f9d14:
                    lVar75 = *(long *)(*(long *)((long)pphVar97 + 0x10) + 0xd0);
                  }
                  else {
                    uVar71 = psVar121[2] << 8 | (ushort)psVar121[2] >> 8;
                    uVar111 = (ushort)psVar121[1] >> 8;
                    uVar110 = psVar121[1] << 8 | uVar111;
                    uVar35 = (uint)uVar110;
                    if ((uVar111 & 0x10) != 0) {
                      uVar35 = CONCAT22(psVar121[(ulong)uVar71 + 3] << 8 |
                                        (ushort)psVar121[(ulong)uVar71 + 3] >> 8,uVar110);
                    }
                    phVar3 = (hb_ot_apply_context_t *)((long)pphVar97 + 0xd0);
                    *(uint *)((long)pphVar97 + 0x204) = uVar35;
                    *(hb_ot_apply_context_t **)((long)pphVar97 + 0xe0) = phVar3;
                    *(int *)((long)pphVar97 + 0x110) = iVar39;
                    *(undefined1 (*) [16])((long)pphVar97 + 0xf8) = (undefined1  [16])0x0;
                    *(undefined8 *)((long)pphVar97 + 0x108) = 0;
                    *(uint *)((long)pphVar97 + 0xe8) = uVar35;
                    uVar33 = *(undefined1 *)((long)pphVar97 + 0x20f);
                    if (*(int *)((long)pphVar97 + 0x158) != 0) {
                      uVar33 = 0;
                    }
                    bVar133 = *(int *)((long)pphVar97 + 0x158) == 1;
                    *(bool *)((long)pphVar97 + 0xf0) = bVar133;
                    *(undefined1 *)((long)pphVar97 + 0xf1) = *(undefined1 *)((long)pphVar97 + 0x20e)
                    ;
                    *(bool *)((long)pphVar97 + 0xf2) = bVar133;
                    *(int *)((long)pphVar97 + 0xec) = *(int *)((long)pphVar97 + 0x1fc);
                    *(undefined1 *)((long)pphVar97 + 0xf3) = uVar33;
                    *(undefined1 *)((long)pphVar97 + 0xf4) = 0;
                    *(hb_ot_apply_context_t **)((long)pphVar97 + 0x120) = phVar3;
                    *(int *)((long)pphVar97 + 0x150) = iVar39;
                    *(undefined1 (*) [16])((long)pphVar97 + 0x138) = (undefined1  [16])0x0;
                    *(undefined8 *)((long)pphVar97 + 0x148) = 0;
                    *(uint *)((long)pphVar97 + 0x128) = uVar35;
                    *(bool *)((long)pphVar97 + 0x132) = bVar133;
                    *(bool *)((long)pphVar97 + 0x130) =
                         *(char *)((long)pphVar97 + 0x20d) != '\0' || bVar133;
                    *(undefined1 *)((long)pphVar97 + 0x131) = 1;
                    *(undefined4 *)((long)pphVar97 + 300) = 0xffffffff;
                    *(undefined1 *)((long)pphVar97 + 0x133) = uVar33;
                    *(undefined1 *)((long)pphVar97 + 0x134) = 0;
                    sVar10 = *psVar121;
                    if (sVar10 == 0x700) {
                      puVar114 = (ushort *)&_hb_NullPool;
                      if (psVar121[2] != 0) {
                        puVar114 = (ushort *)(psVar121 + 3);
                      }
                      uVar111 = *puVar114;
                      psVar66 = (short *)&_hb_NullPool;
                      puVar109 = *(undefined8 **)((long)pphVar97 + 0x20);
                      if (uVar111 != 0) {
                        psVar66 = (short *)((long)psVar121 +
                                           (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
                      }
                      if (*psVar66 == 0x100) {
                        sVar10 = psVar66[1];
                        goto joined_r0x003f9e77;
                      }
                    }
                    else {
                      puVar109 = *(undefined8 **)((long)pphVar97 + 0x20);
joined_r0x003f9e77:
                      if (sVar10 == 0x800) {
                        *(int *)(phVar123 + 0x5c) = *(int *)(phVar123 + 0x60) + -1;
                        *(undefined8 *)((long)pphVar97 + -8) = 0x3f9e92;
                        auVar257 = apply_backward(phVar3,__ptr,(uint)uVar71);
                        goto LAB_003f9d14;
                      }
                    }
                    *(undefined2 *)(phVar123 + 0x5a) = 1;
                    *(undefined4 *)(phVar123 + 100) = 0;
                    *(undefined8 *)(phVar123 + 0x78) = *(undefined8 *)(phVar123 + 0x70);
                    *(undefined4 *)(phVar123 + 0x5c) = 0;
                    *(undefined8 *)((long)pphVar97 + -8) = 0x3f9c1e;
                    auVar257 = apply_forward(phVar3,__ptr,(uint)uVar71);
                    uVar44 = auVar257._8_8_;
                    if (phVar123[0x58] != (hb_buffer_t)0x0) {
                      if (phVar123[0x5a] != (hb_buffer_t)0x0) {
                        iVar39 = *(int *)(phVar123 + 0x5c);
                        uVar35 = *(int *)(phVar123 + 0x60) - iVar39;
                        pvVar115 = *(void **)(phVar123 + 0x78);
                        pvVar53 = *(void **)(phVar123 + 0x70);
                        if ((pvVar115 != pvVar53) || (*(int *)(phVar123 + 100) != iVar39)) {
                          uVar36 = *(int *)(phVar123 + 100) + uVar35;
                          if ((uVar36 == 0) || (uVar36 < *(uint *)(phVar123 + 0x68))) {
                            if (pvVar115 == pvVar53) {
LAB_003f9c76:
                              uVar36 = *(uint *)(phVar123 + 100);
                              if (*(int *)(phVar123 + 0x5c) + uVar35 < uVar36 + uVar35) {
                                pvVar115 = *(void **)(phVar123 + 0x80);
                                *(void **)(phVar123 + 0x78) = pvVar115;
                                if ((ulong)uVar36 != 0) {
                                  *(undefined8 *)((long)pphVar97 + -8) = 0x3f9cb0;
                                  memcpy(pvVar115,pvVar53,(ulong)uVar36 * 0x14);
                                  pvVar53 = *(void **)(phVar123 + 0x70);
                                  pvVar115 = *(void **)(phVar123 + 0x78);
                                }
                              }
                              else {
                                pvVar115 = pvVar53;
                              }
                            }
                          }
                          else {
                            *(undefined8 *)((long)pphVar97 + -8) = 0x3f9ea1;
                            uVar48 = hb_buffer_t::enlarge(phVar123,uVar36);
                            auVar257._8_8_ = uVar44;
                            auVar257._0_8_ = extraout_XMM0_Qa_18;
                            if ((char)uVar48 == '\0') goto LAB_003f9d8a;
                            pvVar53 = *(void **)(phVar123 + 0x70);
                            pvVar115 = *(void **)(phVar123 + 0x78);
                            if (pvVar115 == pvVar53) goto LAB_003f9c76;
                          }
                          uVar36 = *(uint *)(phVar123 + 0x5c);
                          uVar37 = *(uint *)(phVar123 + 100);
                          *(undefined8 *)((long)pphVar97 + -8) = 0x3f9d58;
                          memmove((void *)((long)pvVar115 + (ulong)uVar37 * 0x14),
                                  (void *)((long)pvVar53 + (ulong)uVar36 * 0x14),
                                  (ulong)uVar35 * 0x14);
                          auVar257._8_8_ = uVar44;
                          auVar257._0_8_ = extraout_XMM0_Qa_16;
                          iVar39 = *(int *)(phVar123 + 100);
                        }
                        *(uint *)(phVar123 + 100) = iVar39 + uVar35;
                      }
                      if (*(long *)(phVar123 + 0x78) != *(long *)(phVar123 + 0x70)) {
                        *(long *)(phVar123 + 0x80) = *(long *)(phVar123 + 0x70);
                        *(long *)(phVar123 + 0x70) = *(long *)(phVar123 + 0x78);
                      }
                      *(undefined4 *)(phVar123 + 0x60) = *(undefined4 *)(phVar123 + 100);
                    }
LAB_003f9d8a:
                    phVar123[0x5a] = (hb_buffer_t)0x0;
                    *(undefined4 *)(phVar123 + 100) = 0;
                    *(undefined8 *)(phVar123 + 0x78) = *(undefined8 *)(phVar123 + 0x70);
                    *(undefined4 *)(phVar123 + 0x5c) = 0;
                    puVar109 = *(undefined8 **)((long)pphVar97 + 0x20);
                    lVar75 = *(long *)(*(long *)((long)pphVar97 + 0x10) + 0xd0);
                  }
                  if (lVar75 != 0) {
                    uVar44 = auVar257._8_8_;
                    uVar35 = *(uint *)(puVar130 + 4);
                    *(ulong *)((long)pphVar97 + -8) = (ulong)(uVar35 & 0xff);
                    *(ulong *)((long)pphVar97 + -0x10) = (ulong)(uVar35 >> 8 & 0xff);
                    puVar109 = *(undefined8 **)((long)pphVar97 + 0x20);
                    *(undefined8 *)((long)pphVar97 + -0x18) = 0x3f9e01;
                    hb_buffer_t::message
                              (auVar257._0_8_,uVar44,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                               in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                               *(hb_buffer_t **)((long)pphVar97 + 0x10),
                               *(undefined8 *)((long)pphVar97 + 8),
                               "end lookup %u feature \'%c%c%c%c\'",
                               *(undefined8 *)((long)pphVar97 + 0x18),(ulong)(uVar35 >> 0x18),
                               (ulong)(uVar35 >> 0x10 & 0xff),
                               *(undefined1 *)((long)pphVar97 + -0x10));
                    auVar257._8_8_ = uVar44;
                    auVar257._0_8_ = extraout_XMM0_Qa_17;
                  }
                }
              }
LAB_003f9820:
              uVar127 = uVar127 + 1;
              puVar65 = *(uint **)((long)pphVar97 + 0x58);
              lVar75 = *(long *)((long)pphVar97 + 0x30);
            } while (uVar127 < *puVar65);
            lVar79 = *(long *)((long)pphVar97 + 8);
            uVar132 = *(ulong *)((long)pphVar97 + 0x50);
          }
          pcVar74 = *(code **)(puVar65 + 2);
          if (pcVar74 != (code *)0x0) {
            *(undefined8 *)((long)pphVar97 + -8) = 0x3f9ef6;
            cVar34 = (*pcVar74)(*(undefined8 *)((long)pphVar97 + 0x60),lVar79,
                                *(undefined8 *)((long)pphVar97 + 0x10));
            auVar22._8_8_ = extraout_XMM1_Qa_26;
            auVar22._0_8_ = extraout_XMM0_Qa_19;
            auVar257._8_8_ = extraout_XMM1_Qa_26;
            auVar257._0_8_ = extraout_XMM0_Qa_19;
            if (cVar34 != '\0') {
              uVar35 = **(uint **)((long)pphVar97 + 0x38);
              if (uVar35 == 0) {
                uVar40 = 0;
                uVar118 = 0;
                uVar67 = 0;
              }
              else {
                puVar65 = (uint *)**(undefined8 **)((long)pphVar97 + 0x28);
                uVar36 = uVar35 - 1;
                puVar72 = puVar65;
                if (uVar36 < 3) {
                  uVar40 = 0;
                }
                else {
                  uVar37 = uVar35 & 0xfffffffc;
                  uVar40 = 0;
                  do {
                    uVar40 = uVar40 | 1L << ((ulong)(*puVar72 >> 4) & 0x3f) |
                             1L << ((ulong)(puVar72[5] >> 4) & 0x3f) |
                             1L << ((ulong)(puVar72[10] >> 4) & 0x3f) |
                             1L << ((ulong)(puVar72[0xf] >> 4) & 0x3f);
                    puVar72 = puVar72 + 0x14;
                    uVar37 = uVar37 - 4;
                  } while (uVar37 != 0);
                }
                if ((uVar35 & 3) != 0) {
                  lVar68 = 0;
                  do {
                    uVar40 = uVar40 | 1L << ((ulong)(*(uint *)((long)puVar72 + lVar68) >> 4) & 0x3f)
                    ;
                    lVar68 = lVar68 + 0x14;
                  } while ((uVar35 & 3) * 0x14 != (int)lVar68);
                }
                puVar72 = puVar65;
                if (uVar36 < 3) {
                  uVar118 = 0;
                }
                else {
                  uVar37 = uVar35 & 0xfffffffc;
                  uVar118 = 0;
                  do {
                    uVar118 = uVar118 | 1L << ((ulong)(byte)*puVar72 & 0x3f) |
                              1L << ((ulong)(byte)puVar72[5] & 0x3f) |
                              1L << ((ulong)(byte)puVar72[10] & 0x3f) |
                              1L << ((ulong)(byte)puVar72[0xf] & 0x3f);
                    puVar72 = puVar72 + 0x14;
                    uVar37 = uVar37 - 4;
                  } while (uVar37 != 0);
                }
                if ((uVar35 & 3) != 0) {
                  lVar68 = 0;
                  do {
                    uVar118 = uVar118 | 1L << ((ulong)*(byte *)((long)puVar72 + lVar68) & 0x3f);
                    lVar68 = lVar68 + 0x14;
                  } while ((uVar35 & 3) * 0x14 != (int)lVar68);
                }
                if (uVar36 < 3) {
                  uVar67 = 0;
                }
                else {
                  uVar36 = uVar35 & 0xfffffffc;
                  uVar67 = 0;
                  do {
                    uVar67 = uVar67 | 1L << ((ulong)(*puVar65 >> 9) & 0x3f) |
                             1L << ((ulong)(puVar65[5] >> 9) & 0x3f) |
                             1L << ((ulong)(puVar65[10] >> 9) & 0x3f) |
                             1L << ((ulong)(puVar65[0xf] >> 9) & 0x3f);
                    puVar65 = puVar65 + 0x14;
                    uVar36 = uVar36 - 4;
                  } while (uVar36 != 0);
                }
                if ((uVar35 & 3) != 0) {
                  lVar68 = 0;
                  do {
                    uVar67 = uVar67 | 1L << ((ulong)(*(uint *)((long)puVar65 + lVar68) >> 9) & 0x3f)
                    ;
                    lVar68 = lVar68 + 0x14;
                  } while ((uVar35 & 3) * 0x14 != (int)lVar68);
                }
                puVar109 = *(undefined8 **)((long)pphVar97 + 0x20);
              }
              *(ulong *)((long)pphVar97 + 0x1e0) = uVar40;
              *(ulong *)((long)pphVar97 + 0x1e8) = uVar118;
              *(ulong *)((long)pphVar97 + 0x1f0) = uVar67;
              auVar257 = auVar22;
            }
          }
          uVar132 = uVar132 + 1;
          uVar40 = (ulong)*(uint *)(lVar75 + 0xcc);
        } while (uVar132 < uVar40);
      }
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fa0c0;
      free(*(void **)((long)pphVar97 + 0x1d8));
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fa0cd;
      auVar261 = hb_sanitize_context_t::~hb_sanitize_context_t
                           ((hb_sanitize_context_t *)((long)pphVar97 + 0x178));
      phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
      if (*(long *)(phVar123 + 0xd0) != 0) {
        uVar35 = *(uint *)(lVar75 + 0x88);
        *(ulong *)((long)pphVar97 + -0x10) = (ulong)(uVar35 & 0xff);
        *(undefined8 *)((long)pphVar97 + -0x18) = 0x3fa112;
        hb_buffer_t::message
                  (auVar261._0_8_,auVar261._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                   in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,phVar123,lVar79,
                   "end table GSUB script tag \'%c%c%c%c\'",(ulong)(uVar35 >> 0x18),
                   (ulong)(uVar35 >> 0x10 & 0xff),(ulong)(uVar35 >> 8 & 0xff),
                   *(undefined1 *)((long)pphVar97 + -0x10));
      }
    }
    else {
      uVar35 = *(uint *)(lVar75 + 0x88);
      *(ulong *)((long)pphVar97 + -0x10) = (ulong)(uVar35 & 0xff);
      *(undefined8 *)((long)pphVar97 + -0x18) = 0x3f9761;
      bVar133 = hb_buffer_t::message
                          (auVar262._0_8_,auVar262._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,phVar123,lVar79,
                           "start table GSUB script tag \'%c%c%c%c\'",(ulong)(uVar35 >> 0x18),
                           (ulong)(uVar35 >> 0x10 & 0xff),(ulong)(uVar35 >> 8 & 0xff),
                           *(undefined1 *)((long)pphVar97 + -0x10));
      if (bVar133) goto LAB_003f976d;
    }
    uVar35 = *(uint *)(lVar75 + 0x108);
  }
  else {
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fdbb4;
    hb_aat_layout_substitute
              (*(undefined8 *)((long)pphVar97 + 0x60),lVar79,phVar123,
               *(undefined8 *)((long)pphVar97 + 0x70),*(undefined4 *)((long)pphVar97 + 0x68));
    uVar35 = *(uint *)(lVar75 + 0x108);
  }
  if ((~uVar35 & 0x2200) == 0) {
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fa12d;
    hb_aat_layout_remove_deleted_glyphs(phVar123);
  }
  *(undefined2 *)(phVar123 + 0x5a) = 0x100;
  *(undefined4 *)(phVar123 + 100) = 0;
  uVar44 = *(undefined8 *)(phVar123 + 0x70);
  *(undefined8 *)((long)pphVar97 + 0x18) = uVar44;
  *(undefined8 *)(phVar123 + 0x78) = uVar44;
  uVar35 = *(uint *)(phVar123 + 0x60);
  if (uVar35 * 0x14 != 0) {
    pvVar53 = *(void **)(phVar123 + 0x80);
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fa16a;
    memset(pvVar53,0,(ulong)(uVar35 * 0x14));
    uVar35 = *(uint *)(phVar123 + 0x60);
    *(undefined8 *)((long)pphVar97 + 0x18) = *(undefined8 *)(phVar123 + 0x70);
  }
  lVar75 = *(long *)(phVar123 + 0x80);
  if ((*(uint *)(phVar123 + 0x38) & 0xfffffffe) == 4) {
    lVar79 = *(long *)(*(long *)((long)pphVar97 + 8) + 0x90);
    uVar44 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
    lVar68 = *(long *)(lVar79 + 0x10);
    pcVar74 = *(code **)(lVar79 + 0x58);
    if (lVar68 == 0) {
      uVar48 = 0;
    }
    else {
      uVar48 = *(undefined8 *)(lVar68 + 0x38);
    }
    puVar80 = *(undefined **)((long)pphVar97 + 8);
    *(undefined8 *)((long)pphVar97 + -8) = uVar48;
    *(undefined8 *)((long)pphVar97 + -0x10) = 0x14;
    *(undefined8 *)((long)pphVar97 + -0x18) = 0x3fa281;
    auVar261 = (*pcVar74)(puVar80,uVar44,uVar35,*(undefined8 *)((long)pphVar97 + 0x18),0x14,lVar75);
    auVar162._0_8_ = auVar261._8_8_;
    uVar44 = auVar261._0_8_;
    auVar162._8_8_ = extraout_XMM1_Qb_37;
    while (*(undefined **)(*(long *)(puVar80 + 0x90) + 0x68) ==
           PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
      puVar80 = *(undefined **)(puVar80 + 0x18);
      if ((puVar80 == (undefined *)0x0) || (puVar80 == &_hb_Null_hb_font_t)) goto LAB_003fa3a9;
    }
    if (uVar35 != 0) {
      lVar79 = 0;
      do {
        uVar38 = *(undefined4 *)(*(long *)((long)pphVar97 + 0x18) + lVar79);
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fa308;
        auVar261 = hb_font_t::get_glyph_h_origin_with_fallback
                             (*(hb_font_t **)((long)pphVar97 + 8),uVar38,
                              (int *)((long)pphVar97 + 0xd0),(int *)((long)pphVar97 + 0x240));
        auVar162._0_8_ = auVar261._8_8_;
        uVar44 = auVar261._0_8_;
        auVar162._8_8_ = extraout_XMM1_Qb_38;
        piVar49 = (int *)(lVar75 + 8 + lVar79);
        *piVar49 = *piVar49 - *(int *)((long)pphVar97 + 0xd0);
        piVar49 = (int *)(lVar75 + 0xc + lVar79);
        *piVar49 = *piVar49 - *(int *)((long)pphVar97 + 0x240);
        lVar79 = lVar79 + 0x14;
      } while ((ulong)uVar35 * 0x14 != lVar79);
    }
  }
  else {
    lVar79 = *(long *)(*(long *)((long)pphVar97 + 8) + 0x90);
    uVar44 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
    lVar68 = *(long *)(lVar79 + 0x10);
    pcVar74 = *(code **)(lVar79 + 0x60);
    if (lVar68 == 0) {
      uVar48 = 0;
    }
    else {
      uVar48 = *(undefined8 *)(lVar68 + 0x40);
    }
    *(undefined8 *)((long)pphVar97 + -8) = uVar48;
    *(undefined8 *)((long)pphVar97 + -0x10) = 0x14;
    *(undefined8 *)((long)pphVar97 + -0x18) = 0x3fa345;
    auVar261 = (*pcVar74)(*(undefined8 *)((long)pphVar97 + 8),uVar44,uVar35,
                          *(undefined8 *)((long)pphVar97 + 0x18),0x14,lVar75 + 4);
    auVar162._0_8_ = auVar261._8_8_;
    uVar44 = auVar261._0_8_;
    auVar162._8_8_ = extraout_XMM1_Qb_39;
    if (uVar35 != 0) {
      lVar79 = 0;
      do {
        uVar38 = *(undefined4 *)(*(long *)((long)pphVar97 + 0x18) + lVar79);
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fa388;
        auVar261 = hb_font_t::get_glyph_v_origin_with_fallback
                             (*(hb_font_t **)((long)pphVar97 + 8),uVar38,
                              (int *)((long)pphVar97 + 0xd0),(int *)((long)pphVar97 + 0x240));
        auVar162._0_8_ = auVar261._8_8_;
        uVar44 = auVar261._0_8_;
        auVar162._8_8_ = extraout_XMM1_Qb_40;
        piVar49 = (int *)(lVar75 + 8 + lVar79);
        *piVar49 = *piVar49 - *(int *)((long)pphVar97 + 0xd0);
        piVar49 = (int *)(lVar75 + 0xc + lVar79);
        *piVar49 = *piVar49 - *(int *)((long)pphVar97 + 0x240);
        lVar79 = lVar79 + 0x14;
      } while ((ulong)uVar35 * 0x14 != lVar79);
    }
  }
LAB_003fa3a9:
  plVar108 = (long *)(*(long *)((long)pphVar97 + 0x10) + 0x80);
  bVar70 = *(byte *)(*(long *)((long)pphVar97 + 0x10) + 0xc0);
  param_5 = *(uint **)((long)pphVar97 + 0x28);
  *(long **)((long)pphVar97 + 0x48) = plVar108;
  if ((bVar70 & 4) == 0) {
LAB_003fa3c8:
    ppVar61 = (pthread_mutex_t *)(ulong)**(uint **)((long)pphVar97 + 0x38);
    lVar75 = *(long *)param_5;
    param_6 = (pthread_mutex_t *)*plVar108;
    ppVar41 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
    unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
    hVar9 = *(hb_buffer_t *)((long)unaff_R15 + 0x109);
    unaff_R13 = *(uint **)((long)pphVar97 + 8);
  }
  else {
    ppVar41 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
    lVar75 = *(long *)((long)ppVar41 + 0x70);
    param_6 = *(pthread_mutex_t **)((long)ppVar41 + 0x80);
    uVar35 = *(uint *)((long)ppVar41 + 0x60);
    if ((ulong)uVar35 != 0) {
      uVar36 = *(uint *)((long)ppVar41 + 0x38) & 0xfffffffe;
      lVar79 = 0;
      *(long *)((long)pphVar97 + 0x50) = lVar75;
      *(__pthread_mutex_s **)((long)pphVar97 + 0x40) = &param_6->__data;
      do {
        if (((*(ushort *)(lVar75 + 0x10 + lVar79) & 0x1f) != 0x1d) ||
           ((*(byte *)(lVar75 + 0xc + lVar79) & 0x20) != 0))
        goto _hb_ot_shape_switchD_003fa4fb_caseD_7;
        if ((*(int *)(*(long *)((long)pphVar97 + 0x10) + 0x24) != 0) &&
           (*(int *)(lVar75 + lVar79) == *(int *)(*(long *)((long)pphVar97 + 0x10) + 0x24))) {
          if (uVar36 == 4) {
            iVar39 = *(int *)(*(long *)((long)pphVar97 + 8) + 0x28);
            iVar104 = iVar39 + 3;
            if (-1 < iVar39) {
              iVar104 = iVar39;
            }
            *(int *)((long)&(param_6->__data).__lock + lVar79) = iVar104 >> 2;
          }
          else {
            iVar39 = *(int *)(*(long *)((long)pphVar97 + 8) + 0x2c);
            iVar104 = iVar39 + 3;
            if (-1 < iVar39) {
              iVar104 = iVar39;
            }
            *(int *)((long)&(param_6->__data).__count + lVar79) = -(iVar104 >> 2);
          }
        }
        uVar111 = *(ushort *)(lVar75 + 0x10 + lVar79);
        uVar37 = (uint)(uVar111 >> 8);
        if ((uVar111 & 0x1f) != 0x1d) {
          uVar37 = 0;
        }
        switch((char)uVar37) {
        case '\x01':
        case '\x02':
        case '\x03':
        case '\x04':
        case '\x05':
        case '\x06':
        case '\x10':
          if (uVar36 == 4) {
            *(int *)((long)&(param_6->__data).__lock + lVar79) =
                 (int)((uVar37 >> 1) + *(int *)(*(long *)((long)pphVar97 + 8) + 0x28)) / (int)uVar37
            ;
          }
          else {
            *(int *)((long)&(param_6->__data).__count + lVar79) =
                 -((int)((uVar37 >> 1) + *(int *)(*(long *)((long)pphVar97 + 8) + 0x2c)) /
                  (int)uVar37);
          }
          break;
        case '\x11':
          if (uVar36 == 4) {
            lVar68 = (long)*(int *)(*(long *)((long)pphVar97 + 8) + 0x28) << 2;
            *(uint *)((long)&(param_6->__data).__lock + lVar79) =
                 ((*(int *)(*(long *)((long)pphVar97 + 8) + 0x28) >> 0x1f & 0x3fffffffU) >> 0x1d) +
                 (int)(lVar68 / 0x12) + (int)(lVar68 >> 0x3f);
          }
          else {
            *(int *)((long)&(param_6->__data).__count + lVar79) =
                 (int)(((long)*(int *)(*(long *)((long)pphVar97 + 8) + 0x2c) * -4) / 0x12);
          }
          break;
        case '\x13':
          *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
          lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
          if (lVar75 == 0) {
            uVar44 = 0;
          }
          else {
            uVar44 = *(undefined8 *)(lVar75 + 0x10);
          }
          uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
          pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30);
          *(undefined8 *)((long)pphVar97 + -8) = 0x3fa67e;
          iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x30,
                              (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
          if (iVar39 == 0) {
            *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
            lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
            if (lVar75 == 0) {
              uVar44 = 0;
            }
            else {
              uVar44 = *(undefined8 *)(lVar75 + 0x10);
            }
            uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
            pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30);
            *(undefined8 *)((long)pphVar97 + -8) = 0x3fa737;
            iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x31,
                                (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
            if (iVar39 == 0) {
              *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
              lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
              if (lVar75 == 0) {
                uVar44 = 0;
              }
              else {
                uVar44 = *(undefined8 *)(lVar75 + 0x10);
              }
              uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
              pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30);
              *(undefined8 *)((long)pphVar97 + -8) = 0x3fa784;
              iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x32,
                                  (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
              if (iVar39 == 0) {
                *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
                lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
                if (lVar75 == 0) {
                  uVar44 = 0;
                }
                else {
                  uVar44 = *(undefined8 *)(lVar75 + 0x10);
                }
                uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
                pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30);
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fa7d1;
                iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x33,
                                    (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
                if (iVar39 == 0) {
                  *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
                  lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
                  if (lVar75 == 0) {
                    uVar44 = 0;
                  }
                  else {
                    uVar44 = *(undefined8 *)(lVar75 + 0x10);
                  }
                  uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
                  pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30);
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fa81e;
                  iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x34,
                                      (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
                  if (iVar39 == 0) {
                    *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
                    lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
                    if (lVar75 == 0) {
                      uVar44 = 0;
                    }
                    else {
                      uVar44 = *(undefined8 *)(lVar75 + 0x10);
                    }
                    uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
                    pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30);
                    *(undefined8 *)((long)pphVar97 + -8) = 0x3fa86b;
                    iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x35,
                                        (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
                    if (iVar39 == 0) {
                      *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
                      lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
                      if (lVar75 == 0) {
                        uVar44 = 0;
                      }
                      else {
                        uVar44 = *(undefined8 *)(lVar75 + 0x10);
                      }
                      uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
                      pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30);
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fa8b8;
                      iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x36,
                                          (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
                      if (iVar39 == 0) {
                        *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
                        lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
                        if (lVar75 == 0) {
                          uVar44 = 0;
                        }
                        else {
                          uVar44 = *(undefined8 *)(lVar75 + 0x10);
                        }
                        uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
                        pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30)
                        ;
                        *(undefined8 *)((long)pphVar97 + -8) = 0x3fa905;
                        iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x37,
                                            (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
                        if (iVar39 == 0) {
                          *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
                          lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10)
                          ;
                          if (lVar75 == 0) {
                            uVar44 = 0;
                          }
                          else {
                            uVar44 = *(undefined8 *)(lVar75 + 0x10);
                          }
                          uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
                          pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) +
                                              0x30);
                          *(undefined8 *)((long)pphVar97 + -8) = 0x3fa952;
                          iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x38,
                                              (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
                          if (iVar39 == 0) {
                            *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
                            lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) +
                                              0x10);
                            if (lVar75 == 0) {
                              uVar44 = 0;
                            }
                            else {
                              uVar44 = *(undefined8 *)(lVar75 + 0x10);
                            }
                            uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
                            pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) +
                                                0x30);
                            *(undefined8 *)((long)pphVar97 + -8) = 0x3fa99b;
                            iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x39,
                                                (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
                            auVar162._8_8_ = extraout_XMM1_Qb_42;
                            auVar162._0_8_ = extraout_XMM1_Qa_28;
                            param_5 = *(uint **)((long)pphVar97 + 0x28);
                            plVar108 = *(long **)((long)pphVar97 + 0x48);
                            lVar75 = *(long *)((long)pphVar97 + 0x50);
                            param_6 = *(pthread_mutex_t **)((long)pphVar97 + 0x40);
                            uVar44 = extraout_XMM0_Qa_21;
                            if (iVar39 == 0) break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar38 = *(undefined4 *)((long)pphVar97 + 0xd0);
          lVar75 = *(long *)(*(long *)((long)pphVar97 + 8) + 0x90);
          if (uVar36 != 4) goto LAB_003fa9fb;
          lVar68 = *(long *)(lVar75 + 0x10);
          if (lVar68 == 0) goto LAB_003fa711;
LAB_003fa9dd:
          uVar44 = *(undefined8 *)(lVar68 + 0x28);
LAB_003fa9e1:
          uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
          pcVar74 = *(code **)(lVar75 + 0x48);
          *(undefined8 *)((long)pphVar97 + -8) = 0x3fa9f0;
          uVar38 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,uVar38,uVar44);
          auVar162._8_8_ = extraout_XMM1_Qb_43;
          auVar162._0_8_ = extraout_XMM1_Qa_29;
          param_6 = *(pthread_mutex_t **)((long)pphVar97 + 0x40);
          *(undefined4 *)((long)&(param_6->__data).__lock + lVar79) = uVar38;
          uVar44 = extraout_XMM0_Qa_22;
          goto LAB_003faa25;
        case '\x14':
          *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
          lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
          if (lVar75 == 0) {
            uVar44 = 0;
          }
          else {
            uVar44 = *(undefined8 *)(lVar75 + 0x10);
          }
          uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
          pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30);
          *(undefined8 *)((long)pphVar97 + -8) = 0x3fa631;
          iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x2e,
                              (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
          if (iVar39 == 0) {
            *(undefined4 *)((long)pphVar97 + 0xd0) = 0;
            lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
            if (lVar75 == 0) {
              uVar44 = 0;
            }
            else {
              uVar44 = *(undefined8 *)(lVar75 + 0x10);
            }
            uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
            pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30);
            *(undefined8 *)((long)pphVar97 + -8) = 0x3fa6cb;
            iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,0x2c,
                                (undefined1 *)((long)pphVar97 + 0xd0),uVar44);
            auVar162._8_8_ = extraout_XMM1_Qb_41;
            auVar162._0_8_ = extraout_XMM1_Qa_27;
            param_5 = *(uint **)((long)pphVar97 + 0x28);
            plVar108 = *(long **)((long)pphVar97 + 0x48);
            lVar75 = *(long *)((long)pphVar97 + 0x50);
            param_6 = *(pthread_mutex_t **)((long)pphVar97 + 0x40);
            uVar44 = extraout_XMM0_Qa_20;
            if (iVar39 == 0) break;
          }
          uVar38 = *(undefined4 *)((long)pphVar97 + 0xd0);
          lVar75 = *(long *)(*(long *)((long)pphVar97 + 8) + 0x90);
          if (uVar36 == 4) {
            lVar68 = *(long *)(lVar75 + 0x10);
            if (lVar68 != 0) goto LAB_003fa9dd;
LAB_003fa711:
            uVar44 = 0;
            goto LAB_003fa9e1;
          }
LAB_003fa9fb:
          if (*(long *)(lVar75 + 0x10) == 0) {
            uVar44 = 0;
          }
          else {
            uVar44 = *(undefined8 *)(*(long *)(lVar75 + 0x10) + 0x30);
          }
          uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
          pcVar74 = *(code **)(lVar75 + 0x50);
          *(undefined8 *)((long)pphVar97 + -8) = 0x3faa1b;
          uVar38 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,uVar38,uVar44);
          auVar162._8_8_ = extraout_XMM1_Qb_44;
          auVar162._0_8_ = extraout_XMM1_Qa_30;
          param_6 = *(pthread_mutex_t **)((long)pphVar97 + 0x40);
          *(undefined4 *)((long)&(param_6->__data).__count + lVar79) = uVar38;
          uVar44 = extraout_XMM0_Qa_23;
LAB_003faa25:
          param_5 = *(uint **)((long)pphVar97 + 0x28);
          plVar108 = *(long **)((long)pphVar97 + 0x48);
          lVar75 = *(long *)((long)pphVar97 + 0x50);
          break;
        case '\x15':
          if (uVar36 == 4) {
            *(int *)((long)&(param_6->__data).__lock + lVar79) =
                 *(int *)((long)&(param_6->__data).__lock + lVar79) / 2;
          }
          else {
            *(int *)((long)&(param_6->__data).__count + lVar79) =
                 *(int *)((long)&(param_6->__data).__count + lVar79) / 2;
          }
        }
_hb_ot_shape_switchD_003fa4fb_caseD_7:
        lVar79 = lVar79 + 0x14;
      } while ((ulong)uVar35 * 0x14 != lVar79);
      goto LAB_003fa3c8;
    }
    ppVar61 = (pthread_mutex_t *)0x0;
    unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
    hVar9 = *(hb_buffer_t *)((long)unaff_R15 + 0x109);
    unaff_R13 = *(uint **)((long)pphVar97 + 8);
  }
  if (((byte)hVar9 & 1) == 0) {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    *(undefined4 *)((long)pphVar97 + 0x70) = 0;
  }
  else {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
    uVar35 = *(uint *)((long)ppVar41 + 0x38) & 0xfffffffd;
    *(uint *)((long)pphVar97 + 0x70) = CONCAT31((int3)(uVar35 >> 8),uVar35 == 4);
  }
  *(long *)((long)pphVar97 + 0x50) = lVar75;
  *(__pthread_mutex_s **)((long)pphVar97 + 0x40) = &param_6->__data;
  uVar35 = (uint)ppVar61;
  *(uint *)((long)pphVar97 + 0x78) = uVar35;
  ppVar81 = (pthread_mutex_t *)unaff_R13;
LAB_003faa90:
  if (*(undefined **)(*(long *)((long)ppVar81 + 0x90) + 0x68) ==
      PTR_hb_font_get_glyph_h_origin_default_00718ad8) goto code_r0x003faa9d;
  if (uVar35 == 0) goto LAB_003fabaf;
  lVar79 = 0;
  do {
    uVar38 = *(undefined4 *)(lVar75 + lVar79);
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fab01;
    auVar261 = hb_font_t::get_glyph_h_origin_with_fallback
                         ((hb_font_t *)unaff_R13,uVar38,(int *)((long)pphVar97 + 0xd0),
                          (int *)((long)pphVar97 + 0x240));
    auVar162._0_8_ = auVar261._8_8_;
    uVar44 = auVar261._0_8_;
    auVar162._8_8_ = extraout_XMM1_Qb_45;
    lVar68 = *(long *)((long)pphVar97 + 0x40);
    lVar75 = *(long *)((long)pphVar97 + 0x50);
    piVar49 = (int *)(lVar68 + 8 + lVar79);
    *piVar49 = *piVar49 + *(int *)((long)pphVar97 + 0xd0);
    piVar49 = (int *)(lVar68 + 0xc + lVar79);
    *piVar49 = *piVar49 + *(int *)((long)pphVar97 + 0x240);
    lVar79 = lVar79 + 0x14;
  } while ((long)ppVar61 * 0x14 != lVar79);
  uVar35 = **(uint **)((long)pphVar97 + 0x38);
  unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
  param_5 = *(uint **)((long)pphVar97 + 0x28);
  plVar108 = *(long **)((long)pphVar97 + 0x48);
  ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
joined_r0x003faaaf:
  ppVar81 = ppVar61;
  if (uVar35 != 0) {
    if ((uint)ppVar81 == 1) {
      ppVar61 = (pthread_mutex_t *)0x0;
    }
    else {
      lVar75 = 0;
      ppVar61 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
      do {
        *(undefined1 *)(*plVar108 + 0x12 + lVar75) = 0;
        *(undefined2 *)(*plVar108 + 0x10 + lVar75) = 0;
        *(undefined1 *)(*plVar108 + 0x26 + lVar75) = 0;
        *(undefined2 *)(*plVar108 + 0x24 + lVar75) = 0;
        ppVar61 = (pthread_mutex_t *)(ppVar61->__size + 2);
        lVar75 = lVar75 + 0x28;
      } while ((pthread_mutex_t *)(ulong)((uint)ppVar81 & 0xfffffffe) != ppVar61);
    }
    uVar40 = (ulong)ppVar81 & 1;
    ppVar81 = ppVar61;
    if (uVar40 != 0) {
      ppVar81 = (pthread_mutex_t *)((long)ppVar61 * 0x14);
      ppVar81->__size[*plVar108 + 0x12] = 0;
      *(undefined2 *)((long)&(ppVar81->__data).__kind + *plVar108) = 0;
    }
  }
LAB_003fabaf:
  if ((((byte)*(hb_buffer_t *)((long)unaff_R15 + 0x108) & 0x20) != 0) &&
     (*(int *)(*(long *)((long)unaff_R15 + 0x80) + 0x58) == 1)) {
    uVar40 = (ulong)**(uint **)((long)pphVar97 + 0x38);
    ppVar81 = (pthread_mutex_t *)0x0;
    if (uVar40 != 0) {
      lVar75 = *(long *)param_5;
      if (*(char *)((long)pphVar97 + 0x70) == '\0') {
        ppVar81 = (pthread_mutex_t *)(uVar40 * 0x14);
        lVar79 = 0;
        do {
          if ((*(byte *)(lVar79 + lVar75 + 0xc) & 8) != 0) {
            *(undefined8 *)(lVar79 + *plVar108) = 0;
          }
          lVar79 = lVar79 + 0x14;
        } while (ppVar81 != (pthread_mutex_t *)lVar79);
      }
      else {
        ppVar81 = (pthread_mutex_t *)(uVar40 * 0x14);
        lVar79 = 0;
        do {
          if ((*(byte *)(lVar79 + lVar75 + 0xc) & 8) != 0) {
            lVar68 = *plVar108;
            piVar49 = (int *)(lVar79 + 8 + lVar68);
            *piVar49 = *piVar49 - *(int *)(lVar79 + lVar68);
            piVar49 = (int *)(lVar79 + 0xc + lVar68);
            *piVar49 = *piVar49 - *(int *)(lVar79 + 4 + lVar68);
            *(undefined4 *)(lVar79 + lVar68) = 0;
            *(undefined4 *)(lVar79 + 4 + lVar68) = 0;
          }
          lVar79 = lVar79 + 0x14;
        } while (ppVar81 != (pthread_mutex_t *)lVar79);
      }
    }
  }
  if ((*(ushort *)((long)unaff_R15 + 0x108) & 0x200) == 0) {
    unaff_R14 = (uint *)ppVar41;
    if ((*(ushort *)((long)unaff_R15 + 0x108) & 0x1000) != 0) {
      p_Var47 = (((__pthread_mutex_s *)unaff_R13)->__list).__next;
      p_Var52 = p_Var47[0x15].__next;
      while (p_Var52 == (__pthread_internal_list *)0x0) {
        p_Var128 = p_Var47[6].__next;
        if (p_Var128 == (__pthread_internal_list *)0x0) {
          p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
          break;
        }
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fdd68;
        p_Var52 = calloc(1,0x18);
        if (p_Var52 == (__pthread_internal_list *)0x0) {
          LOCK();
          bVar133 = p_Var47[0x15].__next == (__pthread_internal_list *)0x0;
          if (bVar133) {
            p_Var47[0x15].__next = (__pthread_internal_list *)&_hb_NullPool;
          }
          UNLOCK();
          if (!bVar133) goto LAB_003fdd9f;
          p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
          ppVar41 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
          unaff_R13 = *(uint **)((long)pphVar97 + 8);
          break;
        }
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fdd7b;
        KerxTable<AAT::kerx>::accelerator_t::accelerator_t((accelerator_t *)p_Var52,p_Var128);
        LOCK();
        bVar133 = p_Var47[0x15].__next == (__pthread_internal_list *)0x0;
        if (bVar133) {
          p_Var47[0x15].__next = p_Var52;
        }
        UNLOCK();
        if (bVar133) break;
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fdd97;
        KerxTable<AAT::kerx>::accelerator_t::~accelerator_t((accelerator_t *)p_Var52);
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fdd9f;
        free(p_Var52);
LAB_003fdd9f:
        ppVar41 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
        unaff_R13 = *(uint **)((long)pphVar97 + 8);
        p_Var52 = p_Var47[0x15].__next;
      }
      param_5 = (uint *)p_Var52->__prev;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fb58b;
      ppVar81 = ppVar41;
      auVar261 = hb_aat_apply_context_t::hb_aat_apply_context_t
                           ((hb_aat_apply_context_t *)((long)pphVar97 + 0xd0),
                            *(undefined8 *)((long)pphVar97 + 0x60),(long)unaff_R13,
                            (undefined4 *)ppVar41,(GDEFVersion1_2<OT::Layout::SmallTypes> *)param_5)
      ;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fb59f;
      bVar133 = hb_buffer_t::message
                          (auVar261._0_8_,auVar261._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)&ppVar41->__data
                           ,unaff_R13,"start table kerx",ppVar81,param_5,param_6,
                           *(undefined1 *)pphVar97);
      unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
      if (bVar133) {
        p_Var47 = (((__pthread_mutex_s *)unaff_R13)->__list).__next;
        p_Var128 = p_Var47[0x16].__prev;
        if (p_Var128 == (__pthread_internal_list *)0x0) {
          while( true ) {
            p_Var116 = p_Var47[6].__next;
            p_Var128 = (__pthread_internal_list *)&_hb_NullPool;
            if (p_Var116 == (__pthread_internal_list *)0x0) break;
            *(undefined4 *)((long)pphVar97 + 0x90) = 0;
            *(undefined4 *)((long)pphVar97 + 0xbc) = 0;
            *(undefined8 *)((long)pphVar97 + 0xc0) = 0;
            *(undefined1 (*) [16])((long)pphVar97 + 0xa8) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])((long)pphVar97 + 0x98) = (undefined1  [16])0x0;
            *(undefined1 *)((long)pphVar97 + 0xb8) = 0;
            *(undefined4 *)((long)pphVar97 + 200) = 0x10000;
            *(undefined2 *)((long)pphVar97 + 0xcc) = 0;
            uVar35 = *(uint *)&p_Var116[1].__next;
            if (uVar35 == 0xffffffff) {
              while (p_Var128 = p_Var116[7].__next, p_Var128 == (__pthread_internal_list *)0x0) {
                p_Var128 = p_Var116[6].__next;
                if (p_Var128 == (__pthread_internal_list *)0x0) {
                  p_Var128 = (__pthread_internal_list *)&_hb_NullPool;
                  break;
                }
                *(undefined4 *)((long)pphVar97 + 0x240) = 0;
                *(undefined1 (*) [16])((long)pphVar97 + 600) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])((long)pphVar97 + 0x248) = (undefined1  [16])0x0;
                *(undefined1 *)((long)pphVar97 + 0x268) = 0;
                *(undefined1 *)((long)pphVar97 + 0x27d) = 0;
                *(undefined1 (*) [16])((long)pphVar97 + 0x26c) = (undefined1  [16])0x0;
                *(undefined1 *)((long)pphVar97 + 0x27c) = 1;
                p_Var54 = p_Var128[2].__prev;
                piVar49 = (int *)&_hb_NullPool;
                if (p_Var54 != (__pthread_internal_list *)0x0) {
                  p_Var14 = p_Var128[2].__next;
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fe50c;
                  piVar49 = (int *)(*(code *)p_Var54)(p_Var128,0x6d617870,p_Var14);
                  if (piVar49 == (int *)0x0) {
                    piVar49 = (int *)&_hb_NullPool;
                  }
                }
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fe525;
                p_Var128 = (__pthread_internal_list *)
                           hb_sanitize_context_t::sanitize_blob<OT::maxp>
                                     ((hb_sanitize_context_t *)((long)pphVar97 + 0x240),piVar49);
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fe535;
                hb_sanitize_context_t::~hb_sanitize_context_t
                          ((hb_sanitize_context_t *)((long)pphVar97 + 0x240));
                if (p_Var128 == (__pthread_internal_list *)0x0) {
                  p_Var128 = (__pthread_internal_list *)&_hb_NullPool;
                  LOCK();
                  bVar133 = p_Var116[7].__next == (__pthread_internal_list *)0x0;
                  if (bVar133) {
                    p_Var116[7].__next = (__pthread_internal_list *)&_hb_NullPool;
                  }
                  UNLOCK();
                }
                else {
                  LOCK();
                  bVar133 = p_Var116[7].__next == (__pthread_internal_list *)0x0;
                  if (bVar133) {
                    p_Var116[7].__next = p_Var128;
                  }
                  UNLOCK();
                }
                if (bVar133) break;
                if (((p_Var128 != (__pthread_internal_list *)0x0) &&
                    (p_Var128 != (__pthread_internal_list *)&_hb_NullPool)) &&
                   (*(int *)&p_Var128->__prev != 0)) {
                  LOCK();
                  *(int *)&p_Var128->__prev = *(int *)&p_Var128->__prev + -1;
                  UNLOCK();
                  if (*(int *)&p_Var128->__prev == 0) {
                    *(undefined4 *)&p_Var128->__prev = 0xffff2153;
                    ppVar41 = (pthread_mutex_t *)p_Var128->__next;
                    if (ppVar41 != (pthread_mutex_t *)0x0) {
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe593;
                      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                  *)&ppVar41[1].__data,ppVar41);
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe59b;
                      free(ppVar41);
                      p_Var128->__next = (__pthread_internal_list *)0x0;
                    }
                    p_Var54 = p_Var128[2].__next;
                    if (p_Var54 != (__pthread_internal_list *)0x0) {
                      p_Var14 = p_Var128[2].__prev;
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe5b6;
                      (*(code *)p_Var54)(p_Var14);
                    }
                    *(undefined8 *)((long)pphVar97 + -8) = 0x3fe4a2;
                    free(p_Var128);
                  }
                }
              }
              p_Var54 = (__pthread_internal_list *)&_hb_NullPool;
              if (5 < *(uint *)&p_Var128[1].__next) {
                p_Var54 = p_Var128[1].__prev;
              }
              uVar111 = *(ushort *)((long)&p_Var54->__prev + 4);
              uVar71 = uVar111 << 8 | uVar111 >> 8;
              if (uVar111 == 0) {
                uVar71 = 0;
              }
              uVar35 = (uint)uVar71;
              *(uint *)&p_Var116[1].__next = uVar35;
            }
            *(uint *)((long)pphVar97 + 200) = uVar35;
            *(undefined1 *)((long)pphVar97 + 0xcc) = 1;
            p_Var128 = p_Var116[2].__prev;
            puVar65 = &_hb_NullPool;
            if (p_Var128 == (__pthread_internal_list *)0x0) {
LAB_003fde9b:
              uVar35 = *puVar65;
            }
            else {
              p_Var54 = p_Var116[2].__next;
              *(undefined8 *)((long)pphVar97 + -8) = 0x3fde8f;
              puVar65 = (uint *)(*(code *)p_Var128)(p_Var116,0x616e6b72,p_Var54);
              if (puVar65 != (uint *)0x0) goto LAB_003fde9b;
              puVar65 = &_hb_NullPool;
              uVar35 = _hb_NullPool;
            }
            if (uVar35 != 0) {
              LOCK();
              *puVar65 = *puVar65 + 1;
              UNLOCK();
            }
            *(uint **)((long)pphVar97 + 0xc0) = puVar65;
            uVar33 = 0;
            *(uint **)((long)pphVar97 + 0x18) = puVar65;
            while( true ) {
              *(undefined1 *)((long)pphVar97 + 0xb8) = uVar33;
              psVar66 = *(short **)(puVar65 + 4);
              *(short **)((long)pphVar97 + 0x98) = psVar66;
              uVar35 = puVar65[6];
              ppVar81 = (pthread_mutex_t *)(ulong)uVar35;
              uVar36 = (uint)((long)ppVar81 * 0x40);
              if (uVar36 < 0x4001) {
                uVar36 = 0x4000;
              }
              if (0x3ffffffe < uVar36) {
                uVar36 = 0x3fffffff;
              }
              *(char **)((long)pphVar97 + 0xa0) = ppVar81->__size + (long)psVar66;
              *(uint *)((long)pphVar97 + 0xa8) = uVar35;
              uVar37 = 0x3fffffff;
              if ((int)((ulong)((long)ppVar81 * 0x40) >> 0x20) == 0) {
                uVar37 = uVar36;
              }
              *(uint *)((long)pphVar97 + 0xac) = uVar37;
              *(undefined4 *)((long)pphVar97 + 0xbc) = 0;
              *(undefined4 *)((long)pphVar97 + 0x90) = 0;
              *(undefined4 *)((long)pphVar97 + 0xb4) = 0;
              if (psVar66 == (short *)0x0) {
                if (*puVar65 != 0) {
                  LOCK();
                  *puVar65 = *puVar65 - 1;
                  UNLOCK();
                  if (*puVar65 == 0) {
                    *puVar65 = 0xffff2153;
                    ppVar41 = *(pthread_mutex_t **)(puVar65 + 2);
                    if (ppVar41 != (pthread_mutex_t *)0x0) {
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe432;
                      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                  *)&ppVar41[1].__data,ppVar41);
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe43a;
                      free(ppVar41);
                      puVar65[2] = 0;
                      puVar65[3] = 0;
                    }
                    pcVar74 = *(code **)(puVar65 + 10);
                    if (pcVar74 != (code *)0x0) {
                      uVar44 = *(undefined8 *)(puVar65 + 8);
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe451;
                      (*pcVar74)(uVar44);
                    }
                    *(undefined8 *)((long)pphVar97 + -8) = 0x3fe459;
                    free(puVar65);
                  }
                }
                *(undefined8 *)((long)pphVar97 + 0xc0) = 0;
                *(undefined1 (*) [16])((long)pphVar97 + 0x98) = (undefined1  [16])0x0;
                *(undefined4 *)((long)pphVar97 + 0xa8) = 0;
                p_Var128 = *(__pthread_internal_list **)((long)pphVar97 + 0x18);
                goto LAB_003fe360;
              }
              if ((uVar35 < 0xc) || (*psVar66 != 0)) goto LAB_003fe0cc;
              uVar36 = *(uint *)(psVar66 + 4);
              uVar36 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                       uVar36 << 0x18;
              if ((uVar35 < uVar36) ||
                 (*(uint *)((long)pphVar97 + 0xac) = uVar37 - uVar36, (int)(uVar37 - uVar36) < 1))
              goto LAB_003fe0cc;
              uVar35 = *(uint *)(psVar66 + 2);
              bVar133 = true;
              if (uVar35 == 0) goto LAB_003fe0cf;
              *(undefined8 *)((long)pphVar97 + -8) = 0x3fdfd1;
              uVar40 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                       ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                   *)((ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 |
                                              (uVar35 & 0xff00) << 8 | uVar35 << 0x18) +
                                     (long)psVar66),(long)((long)pphVar97 + 0x90),
                                  (ulong)uVar36 + (long)psVar66);
              uVar35 = *(uint *)((long)pphVar97 + 0xbc);
              ppVar81 = (pthread_mutex_t *)(ulong)uVar35;
              if ((char)uVar40 != '\0') break;
              if (uVar35 < 0x20) {
                ppVar81 = (pthread_mutex_t *)(ulong)(uVar35 + 1);
                *(uint *)((long)pphVar97 + 0xbc) = uVar35 + 1;
                if (*(char *)((long)pphVar97 + 0xb8) != '\0') {
                  psVar66[2] = 0;
                  psVar66[3] = 0;
                  goto LAB_003fe190;
                }
              }
              else if (*(char *)((long)pphVar97 + 0xb8) != '\0') goto LAB_003fe0cc;
              lVar75 = *(long *)((long)pphVar97 + 0x18);
              uVar40 = (ulong)*(uint *)(lVar75 + 0x18);
              if (*(int *)(lVar75 + 4) == 0) {
LAB_003fe0b8:
                *(undefined8 *)((long)pphVar97 + 0x98) = 0;
                *(ulong *)((long)pphVar97 + 0xa0) = uVar40;
                goto LAB_003fe0cc;
              }
              if (uVar40 == 0) {
                *(undefined4 *)(lVar75 + 0x1c) = 2;
LAB_003fdec3:
                lVar75 = *(long *)(lVar75 + 0x10);
                *(long *)((long)pphVar97 + 0x98) = lVar75;
                *(ulong *)((long)pphVar97 + 0xa0) = uVar40 + lVar75;
                if (lVar75 == 0) goto LAB_003fe0cc;
              }
              else {
                if (*(int *)(lVar75 + 0x1c) == 2) goto LAB_003fdec3;
                if (*(int *)(lVar75 + 0x1c) == 3) {
                  *(undefined4 *)(lVar75 + 0x1c) = 1;
                }
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fe04c;
                pvVar53 = malloc(uVar40);
                if (pvVar53 == (void *)0x0) goto LAB_003fe0b8;
                pvVar115 = *(void **)(lVar75 + 0x10);
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fe063;
                memcpy(pvVar53,pvVar115,uVar40);
                pcVar74 = *(code **)(lVar75 + 0x28);
                if (pcVar74 != (code *)0x0) {
                  uVar44 = *(undefined8 *)(lVar75 + 0x20);
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fe072;
                  (*pcVar74)(uVar44);
                  lVar75 = *(long *)((long)pphVar97 + 0x18);
                  uVar40 = (ulong)*(uint *)(lVar75 + 0x18);
                }
                *(undefined4 *)(lVar75 + 0x1c) = 2;
                *(void **)(lVar75 + 0x10) = pvVar53;
                *(void **)(lVar75 + 0x20) = pvVar53;
                *(code **)(lVar75 + 0x28) = free;
                *(void **)((long)pphVar97 + 0x98) = pvVar53;
                *(ulong *)((long)pphVar97 + 0xa0) = (long)pvVar53 + uVar40;
              }
              uVar33 = 1;
              puVar65 = *(uint **)((long)pphVar97 + 0xc0);
            }
            if (uVar35 == 0) goto LAB_003fe0cf;
LAB_003fe190:
            *(undefined4 *)((long)pphVar97 + 0xbc) = 0;
            ppVar41 = (pthread_mutex_t *)((long)psVar66 - *(long *)((long)pphVar97 + 0x98));
            ppVar81 = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar97 + 0xa8);
            if (((&(ppVar41->__data).__nusers <= ppVar81) && (*psVar66 == 0)) &&
               (ppVar41 <= ppVar81)) {
              uVar35 = *(uint *)(psVar66 + 4);
              uVar35 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                       uVar35 << 0x18;
              if (((uVar35 <= (uint)(*(int *)((long)pphVar97 + 0xa0) - (int)psVar66)) &&
                  (iVar39 = *(int *)((long)pphVar97 + 0xac),
                  *(uint *)((long)pphVar97 + 0xac) = iVar39 - uVar35, 0 < (int)(iVar39 - uVar35)))
                 && ((pthread_mutex_t *)((long)psVar66 + (8 - *(long *)((long)pphVar97 + 0x98))) <=
                     ppVar81)) {
                uVar36 = *(uint *)(psVar66 + 2);
                if (uVar36 == 0) goto LAB_003fe0cf;
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fe234;
                uVar40 = Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                         ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                     *)((ulong)(uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 |
                                                (uVar36 & 0xff00) << 8 | uVar36 << 0x18) +
                                       (long)psVar66),(long)((long)pphVar97 + 0x90),
                                    (ulong)uVar35 + (long)psVar66);
                uVar35 = *(uint *)((long)pphVar97 + 0xbc);
                if ((char)uVar40 == '\0') {
                  if ((uVar35 < 0x20) &&
                     (*(uint *)((long)pphVar97 + 0xbc) = uVar35 + 1,
                     *(char *)((long)pphVar97 + 0xb8) != '\0')) {
                    psVar66[2] = 0;
                    psVar66[3] = 0;
                  }
                }
                else if (uVar35 == 0) {
                  ppVar81 = (pthread_mutex_t *)0x0;
                  goto LAB_003fe0cf;
                }
                piVar49 = *(int **)((long)pphVar97 + 0xc0);
                if ((piVar49 != (int *)0x0) && (*piVar49 != 0)) {
                  LOCK();
                  *piVar49 = *piVar49 + -1;
                  UNLOCK();
                  if (*piVar49 == 0) {
                    *piVar49 = -0xdead;
                    ppVar41 = *(pthread_mutex_t **)(piVar49 + 2);
                    if (ppVar41 != (pthread_mutex_t *)0x0) {
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe2a7;
                      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                  *)&ppVar41[1].__data,ppVar41);
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe2af;
                      free(ppVar41);
                      piVar49[2] = 0;
                      piVar49[3] = 0;
                    }
                    pcVar74 = *(code **)(piVar49 + 10);
                    if (pcVar74 != (code *)0x0) {
                      uVar44 = *(undefined8 *)(piVar49 + 8);
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe2c6;
                      (*pcVar74)(uVar44);
                    }
                    *(undefined8 *)((long)pphVar97 + -8) = 0x3fe2ce;
                    free(piVar49);
                  }
                }
                *(undefined8 *)((long)pphVar97 + 0xc0) = 0;
                *(undefined1 (*) [16])((long)pphVar97 + 0x98) = (undefined1  [16])0x0;
                *(undefined4 *)((long)pphVar97 + 0xa8) = 0;
                goto LAB_003fe2f1;
              }
            }
LAB_003fe0cc:
            bVar133 = false;
LAB_003fe0cf:
            piVar49 = *(int **)((long)pphVar97 + 0xc0);
            if ((piVar49 != (int *)0x0) && (*piVar49 != 0)) {
              LOCK();
              *piVar49 = *piVar49 + -1;
              UNLOCK();
              if (*piVar49 == 0) {
                *piVar49 = -0xdead;
                ppVar41 = *(pthread_mutex_t **)(piVar49 + 2);
                if (ppVar41 != (pthread_mutex_t *)0x0) {
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fe10d;
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar41[1].__data,ppVar41);
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fe115;
                  free(ppVar41);
                  piVar49[2] = 0;
                  piVar49[3] = 0;
                }
                pcVar74 = *(code **)(piVar49 + 10);
                if (pcVar74 != (code *)0x0) {
                  uVar44 = *(undefined8 *)(piVar49 + 8);
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fe12c;
                  (*pcVar74)(uVar44);
                }
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fe134;
                free(piVar49);
              }
            }
            *(undefined8 *)((long)pphVar97 + 0xc0) = 0;
            *(undefined1 (*) [16])((long)pphVar97 + 0x98) = (undefined1  [16])0x0;
            *(undefined4 *)((long)pphVar97 + 0xa8) = 0;
            if (bVar133) {
              if (*(int *)(*(long *)((long)pphVar97 + 0x18) + 4) == 0) {
                p_Var128 = *(__pthread_internal_list **)((long)pphVar97 + 0x18);
              }
              else {
                p_Var128 = *(__pthread_internal_list **)((long)pphVar97 + 0x18);
                *(undefined4 *)((long)&p_Var128->__prev + 4) = 0;
              }
            }
            else {
LAB_003fe2f1:
              ppVar81 = *(pthread_mutex_t **)((long)pphVar97 + 0x18);
              p_Var128 = (__pthread_internal_list *)&_hb_NullPool;
              if ((ppVar81->__data).__lock != 0) {
                LOCK();
                (ppVar81->__data).__lock = (ppVar81->__data).__lock + -1;
                UNLOCK();
                p_Var128 = (__pthread_internal_list *)&_hb_NullPool;
                if ((ppVar81->__data).__lock == 0) {
                  (ppVar81->__data).__lock = -0xdead;
                  ppVar41 = *(pthread_mutex_t **)((long)ppVar81 + 8);
                  if (ppVar41 != (pthread_mutex_t *)0x0) {
                    *(undefined8 *)((long)pphVar97 + -8) = 0x3fe325;
                    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                *)&ppVar41[1].__data,ppVar41);
                    *(undefined8 *)((long)pphVar97 + -8) = 0x3fe32d;
                    free(ppVar41);
                    *(undefined8 *)(*(long *)((long)pphVar97 + 0x18) + 8) = 0;
                  }
                  pcVar74 = *(code **)(*(long *)((long)pphVar97 + 0x18) + 0x28);
                  if (pcVar74 != (code *)0x0) {
                    ppVar81 = *(pthread_mutex_t **)((long)pphVar97 + 0x18);
                    p_Var128 = (ppVar81->__data).__list.__next;
                    *(undefined8 *)((long)pphVar97 + -8) = 0x3fe353;
                    (*pcVar74)(p_Var128);
                  }
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fe35d;
                  free(*(void **)((long)pphVar97 + 0x18));
                  p_Var128 = (__pthread_internal_list *)&_hb_NullPool;
                }
              }
            }
LAB_003fe360:
            *(undefined8 *)((long)pphVar97 + -8) = 0x3fe36d;
            hb_sanitize_context_t::~hb_sanitize_context_t
                      ((hb_sanitize_context_t *)((long)pphVar97 + 0x90));
            LOCK();
            bVar133 = p_Var47[0x16].__prev == (__pthread_internal_list *)0x0;
            if (bVar133) {
              p_Var47[0x16].__prev = p_Var128;
            }
            UNLOCK();
            if (bVar133) break;
            if (((p_Var128 != (__pthread_internal_list *)0x0) &&
                (p_Var128 != (__pthread_internal_list *)&_hb_NullPool)) &&
               (*(int *)&p_Var128->__prev != 0)) {
              LOCK();
              *(int *)&p_Var128->__prev = *(int *)&p_Var128->__prev + -1;
              UNLOCK();
              if (*(int *)&p_Var128->__prev == 0) {
                *(undefined4 *)&p_Var128->__prev = 0xffff2153;
                ppVar41 = (pthread_mutex_t *)p_Var128->__next;
                if (ppVar41 != (pthread_mutex_t *)0x0) {
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fe3ba;
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar41[1].__data,ppVar41);
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fe3c2;
                  free(ppVar41);
                  p_Var128->__next = (__pthread_internal_list *)0x0;
                }
                p_Var116 = p_Var128[2].__next;
                if (p_Var116 != (__pthread_internal_list *)0x0) {
                  p_Var54 = p_Var128[2].__prev;
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fe3d9;
                  (*(code *)p_Var116)(p_Var54);
                }
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fe3e1;
                free(p_Var128);
              }
            }
            p_Var128 = p_Var47[0x16].__prev;
            ppVar41 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
            unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
            if (p_Var128 != (__pthread_internal_list *)0x0) goto LAB_003fb5c0;
          }
          ppVar41 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
          unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
        }
LAB_003fb5c0:
        p_Var116 = (__pthread_internal_list *)&_hb_NullPool;
        p_Var47 = (__pthread_internal_list *)&_hb_NullPool;
        unaff_R13 = *(uint **)((long)pphVar97 + 8);
        if (0xb < *(uint *)&p_Var128[1].__next) {
          p_Var47 = p_Var128[1].__prev;
        }
        *(__pthread_internal_list **)((long)pphVar97 + 0x138) = p_Var47;
        p_Var47 = p_Var52->__prev;
        if (p_Var47 == (__pthread_internal_list *)0x0) {
          p_Var47 = (__pthread_internal_list *)&_hb_NullPool;
        }
        if (7 < *(uint *)&p_Var47[1].__next) {
          p_Var116 = p_Var47[1].__prev;
        }
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fb60a;
        auVar261 = KerxTable<AAT::kerx>::apply
                             (p_Var116,(undefined1 *)((long)pphVar97 + 0xd0),&p_Var52->__next);
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fb61e;
        hb_buffer_t::message
                  (auVar261._0_8_,auVar261._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                   in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)&ppVar41->__data,
                   unaff_R13,"end table kerx",ppVar81,param_5,param_6,*(undefined1 *)pphVar97);
      }
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fb62b;
      auVar261 = hb_aat_apply_context_t::~hb_aat_apply_context_t
                           ((hb_aat_apply_context_t *)((long)pphVar97 + 0xd0));
      auVar162._0_8_ = auVar261._8_8_;
      uVar44 = auVar261._0_8_;
      auVar162._8_8_ = extraout_XMM1_Qb_48;
      unaff_R14 = (uint *)ppVar41;
    }
  }
  else {
    p_Var47 = (((__pthread_mutex_s *)unaff_R13)->__list).__next;
    p_Var52 = p_Var47[0x13].__next;
    while (p_Var52 == (__pthread_internal_list *)0x0) {
      p_Var128 = p_Var47[6].__next;
      if (p_Var128 == (__pthread_internal_list *)0x0) {
        p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
        break;
      }
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe78a;
      p_Var52 = calloc(1,0x18);
      if (p_Var52 == (__pthread_internal_list *)0x0) {
        LOCK();
        bVar133 = p_Var47[0x13].__next == (__pthread_internal_list *)0x0;
        if (bVar133) {
          p_Var47[0x13].__next = (__pthread_internal_list *)&_hb_NullPool;
        }
        UNLOCK();
        uVar44 = extraout_XMM0_Qa_40;
        if (!bVar133) goto LAB_003fe73d;
        p_Var52 = (__pthread_internal_list *)&_hb_NullPool;
        ppVar41 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
        unaff_R13 = *(uint **)((long)pphVar97 + 8);
        break;
      }
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe79d;
      auVar261 = OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t
                           ((accelerator_t<OT::Layout::GPOS> *)p_Var52,(long)p_Var128);
      auVar162._0_8_ = auVar261._8_8_;
      uVar44 = auVar261._0_8_;
      auVar162._8_8_ = extraout_XMM1_Qb_61;
      LOCK();
      bVar133 = p_Var47[0x13].__next == (__pthread_internal_list *)0x0;
      if (bVar133) {
        p_Var47[0x13].__next = p_Var52;
      }
      UNLOCK();
      if (bVar133) break;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe735;
      OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::~accelerator_t
                ((accelerator_t<OT::Layout::GPOS> *)p_Var52);
      auVar162._8_8_ = extraout_XMM1_Qb_60;
      auVar162._0_8_ = extraout_XMM1_Qa_42;
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fe73d;
      free(p_Var52);
      uVar44 = extraout_XMM0_Qa_39;
LAB_003fe73d:
      ppVar41 = *(pthread_mutex_t **)((long)pphVar97 + 0x10);
      unaff_R13 = *(uint **)((long)pphVar97 + 8);
      p_Var52 = p_Var47[0x13].__next;
    }
    lVar75 = *(long *)((long)ppVar41 + 0xd0);
    unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
    *(__pthread_internal_list **)((long)pphVar97 + 0x20) = p_Var52;
    if (lVar75 != 0) {
      uVar35 = *(uint *)((long)unaff_R15 + 0x8c);
      ppVar81 = (pthread_mutex_t *)(ulong)(uVar35 >> 0x18);
      param_5 = (uint *)(ulong)(uVar35 >> 0x10 & 0xff);
      param_6 = (pthread_mutex_t *)(ulong)(uVar35 >> 8 & 0xff);
      p_Var52 = *(__pthread_internal_list **)((long)pphVar97 + 0x20);
      *(ulong *)((long)pphVar97 + -0x10) = (ulong)(uVar35 & 0xff);
      *(undefined8 *)((long)pphVar97 + -0x18) = 0x3fb692;
      bVar133 = hb_buffer_t::message
                          (uVar44,auVar162._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)&ppVar41->__data
                           ,unaff_R13,"start table GPOS script tag \'%c%c%c%c\'",ppVar81,param_5,
                           param_6,*(undefined1 *)((long)pphVar97 + -0x10));
      unaff_R14 = (uint *)ppVar41;
      uVar44 = extraout_XMM0_Qa_24;
      if (!bVar133) goto LAB_003fbe61;
    }
    param_5 = (uint *)p_Var52->__prev;
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fb6ba;
    auVar258 = OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                         ((hb_ot_apply_context_t *)((long)pphVar97 + 0xd0),1,(long)unaff_R13,
                          (undefined4 *)ppVar41,(GDEFVersion1_2<OT::Layout::SmallTypes> *)param_5);
    *(code **)((long)pphVar97 + 0x1b8) =
         OT::Layout::GPOS_impl::PosLookup::dispatch_recurse_func<OT::hb_ot_apply_context_t>;
    uVar40 = (ulong)*(uint *)((long)unaff_R15 + 0xdc);
    if (*(uint *)((long)unaff_R15 + 0xdc) != 0) {
      uVar132 = 0;
      uVar127 = 0;
      do {
        if (uVar132 < uVar40) {
          ppVar41 = (pthread_mutex_t *)(uVar132 * 0x10 + *(long *)((long)unaff_R15 + 0xe0));
          *(__pthread_mutex_s **)((long)pphVar97 + 0x58) = &ppVar41->__data;
          uVar35 = (ppVar41->__data).__lock;
        }
        else {
          ppVar41 = (pthread_mutex_t *)&_hb_NullPool;
          *(uint **)((long)pphVar97 + 0x58) = &_hb_NullPool;
          uVar35 = _hb_NullPool;
        }
        if ((uint)uVar127 < uVar35) {
          *(ulong *)((long)pphVar97 + 0x68) = uVar132;
          uVar127 = uVar127 & 0xffffffff;
          do {
            uVar44 = auVar258._8_8_;
            uVar35 = *(uint *)((long)unaff_R15 + 0xbc);
            *(ulong *)((long)pphVar97 + 0x18) = uVar127;
            if (uVar127 < uVar35) {
              puVar130 = (ushort *)(uVar127 * 0xc + *(long *)((long)unaff_R15 + 0xc0));
              uVar111 = *puVar130;
              if ((uint)*puVar130 < *(uint *)&p_Var52->__next) goto LAB_003fb79e;
            }
            else {
              puVar130 = (ushort *)&_hb_NullPool;
              uVar111 = (ushort)_hb_NullPool;
              if ((_hb_NullPool & 0xffff) < *(uint *)&p_Var52->__next) {
LAB_003fb79e:
                ppVar61 = (pthread_mutex_t *)(ulong)uVar111;
                p_Var47 = (&(p_Var52[1].__prev)->__prev)[(long)&ppVar61->__data];
                while (p_Var47 == (__pthread_internal_list *)0x0) {
                  p_Var47 = p_Var52->__prev;
                  ppVar41 = (pthread_mutex_t *)&_hb_NullPool;
                  if (p_Var47 == (__pthread_internal_list *)0x0) {
                    p_Var47 = (__pthread_internal_list *)&_hb_NullPool;
                  }
                  if (3 < *(uint *)&p_Var47[1].__next) {
                    ppVar41 = (pthread_mutex_t *)p_Var47[1].__prev;
                  }
                  puVar114 = (ushort *)&_hb_NullPool;
                  if ((short)(ppVar41->__data).__lock == 0x100) {
                    uVar71 = (ushort)(ppVar41->__data).__owner;
                    puVar46 = (ushort *)&_hb_NullPool;
                    if (uVar71 != 0) {
                      puVar46 = (ushort *)
                                ((long)&(ppVar41->__data).__lock +
                                (ulong)(ushort)(uVar71 << 8 | uVar71 >> 8));
                    }
                    uVar71 = *puVar46 << 8 | *puVar46 >> 8;
                    ppVar41 = (pthread_mutex_t *)(ulong)uVar71;
                    puVar114 = (ushort *)&_hb_NullPool;
                    if (uVar111 < uVar71) {
                      uVar71 = puVar46[(long)((long)&(ppVar61->__data).__lock + 1)];
                      ppVar41 = (pthread_mutex_t *)(ulong)uVar71;
                      puVar114 = (ushort *)&_hb_NullPool;
                      if (uVar71 != 0) {
                        ppVar41 = (pthread_mutex_t *)(ulong)(ushort)(uVar71 << 8 | uVar71 >> 8);
                        puVar114 = (ushort *)((long)puVar46 + (long)ppVar41->__size);
                      }
                    }
                  }
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fb832;
                  p_Var47 = (__pthread_internal_list *)
                            OT::hb_ot_layout_lookup_accelerator_t::
                            create<OT::Layout::GPOS_impl::PosLookup>(puVar114);
                  auVar258._8_8_ = uVar44;
                  auVar258._0_8_ = extraout_XMM0_Qa_25;
                  if (p_Var47 == (__pthread_internal_list *)0x0) goto LAB_003fb750;
                  ppVar41 = (pthread_mutex_t *)p_Var52[1].__prev;
                  LOCK();
                  bVar133 = *(long *)(&(ppVar41->__data).__lock + (long)ppVar61 * 2) == 0;
                  if (bVar133) {
                    *(__pthread_internal_list **)(&(ppVar41->__data).__lock + (long)ppVar61 * 2) =
                         p_Var47;
                  }
                  UNLOCK();
                  if (bVar133) break;
                  *(undefined8 *)((long)pphVar97 + -8) = 0x3fb855;
                  free(p_Var47);
                  auVar258._8_8_ = uVar44;
                  auVar258._0_8_ = extraout_XMM0_Qa_26;
                  p_Var47 = (&(p_Var52[1].__prev)->__prev)[(long)&ppVar61->__data];
                }
                uVar44 = auVar258._8_8_;
                if (*(long *)(*(long *)((long)pphVar97 + 0x10) + 0xd0) != 0) {
                  uVar35 = *(uint *)(puVar130 + 4);
                  param_6 = (pthread_mutex_t *)(ulong)(uVar35 >> 0x10 & 0xff);
                  param_5 = (uint *)(ulong)(uVar35 >> 0x18);
                  *(ulong *)((long)pphVar97 + -8) = (ulong)(uVar35 & 0xff);
                  *(ulong *)((long)pphVar97 + -0x10) = (ulong)(uVar35 >> 8 & 0xff);
                  p_Var52 = *(__pthread_internal_list **)((long)pphVar97 + 0x20);
                  *(undefined8 *)((long)pphVar97 + -0x18) = 0x3fb8ba;
                  ppVar41 = ppVar61;
                  bVar133 = hb_buffer_t::message
                                      (auVar258._0_8_,uVar44,in_XMM2._0_8_,in_XMM3._0_8_,
                                       in_XMM4._0_8_,in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                                       *(hb_buffer_t **)((long)pphVar97 + 0x10),
                                       *(undefined8 *)((long)pphVar97 + 8),
                                       "start lookup %u feature \'%c%c%c%c\'",ppVar61,param_5,
                                       param_6,*(undefined1 *)((long)pphVar97 + -0x10));
                  auVar258._8_8_ = uVar44;
                  auVar258._0_8_ = extraout_XMM0_Qa_27;
                  if (!bVar133) goto LAB_003fb750;
                }
                uVar44 = auVar258._8_8_;
                if (((((ulong)p_Var47->__prev & *(ulong *)((long)pphVar97 + 0x1e0)) == 0) ||
                    (((ulong)p_Var47->__next & *(ulong *)((long)pphVar97 + 0x1e8)) == 0)) ||
                   ((*(ulong *)((long)pphVar97 + 0x1f0) & (ulong)p_Var47[1].__prev) == 0)) {
                  if (*(long *)(*(long *)((long)pphVar97 + 0x10) + 0xd0) == 0) goto LAB_003fb750;
                  uVar35 = *(uint *)(puVar130 + 4);
                  param_6 = (pthread_mutex_t *)(ulong)(uVar35 >> 0x10 & 0xff);
                  param_5 = (uint *)(ulong)(uVar35 >> 0x18);
                  *(ulong *)((long)pphVar97 + -8) = (ulong)(uVar35 & 0xff);
                  *(ulong *)((long)pphVar97 + -0x10) = (ulong)(uVar35 >> 8 & 0xff);
                  p_Var52 = *(__pthread_internal_list **)((long)pphVar97 + 0x20);
                  *(undefined8 *)((long)pphVar97 + -0x18) = 0x3fbb7e;
                  ppVar41 = ppVar61;
                  hb_buffer_t::message
                            (auVar258._0_8_,uVar44,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                             in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                             *(hb_buffer_t **)((long)pphVar97 + 0x10),
                             *(undefined8 *)((long)pphVar97 + 8),
                             "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches",
                             ppVar61,param_5,param_6,*(undefined1 *)((long)pphVar97 + -0x10));
                  auVar258._8_8_ = uVar44;
                  auVar258._0_8_ = extraout_XMM0_Qa_28;
                }
                else {
                  *(uint *)((long)pphVar97 + 0x200) = (uint)uVar111;
                  *(undefined4 *)((long)pphVar97 + 0x1fc) = *(undefined4 *)(puVar130 + 2);
                  *(undefined8 *)((long)pphVar97 + 0x218) = 0xffffffff;
                  *(byte *)((long)pphVar97 + 0x20e) = (byte)puVar130[1] >> 1 & 1;
                  *(byte *)((long)pphVar97 + 0x20d) = (byte)puVar130[1] & 1;
                  *(byte *)((long)pphVar97 + 0x210) = (byte)puVar130[1] >> 2 & 1;
                  *(byte *)((long)pphVar97 + 0x20f) = (byte)puVar130[1] >> 3 & 1;
                  p_Var128 = p_Var52->__prev;
                  p_Var116 = (__pthread_internal_list *)&_hb_NullPool;
                  if (p_Var128 == (__pthread_internal_list *)0x0) {
                    p_Var128 = (__pthread_internal_list *)&_hb_NullPool;
                  }
                  if (3 < *(uint *)&p_Var128[1].__next) {
                    p_Var116 = p_Var128[1].__prev;
                  }
                  ppVar81 = (pthread_mutex_t *)&_hb_NullPool;
                  ppVar41 = (pthread_mutex_t *)(ulong)*(ushort *)&p_Var116->__prev;
                  if (*(ushort *)&p_Var116->__prev == 0x100) {
                    uVar71 = *(ushort *)&p_Var116->__next;
                    ppVar41 = (pthread_mutex_t *)&_hb_NullPool;
                    if (uVar71 != 0) {
                      ppVar41 = (pthread_mutex_t *)
                                ((long)&p_Var116->__prev +
                                (ulong)(ushort)(uVar71 << 8 | uVar71 >> 8));
                    }
                    uVar71 = (ushort)(ppVar41->__data).__lock;
                    ppVar81 = (pthread_mutex_t *)&_hb_NullPool;
                    if (uVar111 < (ushort)(uVar71 << 8 | uVar71 >> 8)) {
                      uVar111 = *(ushort *)((long)&(ppVar41->__data).__lock + (long)ppVar61 * 2 + 2)
                      ;
                      ppVar81 = (pthread_mutex_t *)&_hb_NullPool;
                      if (uVar111 != 0) {
                        ppVar81 = (pthread_mutex_t *)
                                  ((long)&(ppVar41->__data).__lock +
                                  (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
                        ppVar41 = ppVar81;
                      }
                    }
                  }
                  param_5 = *(uint **)((long)pphVar97 + 0x170);
                  iVar39 = *(int *)&((__pthread_internal_list *)((long)param_5 + 0x60))->__prev;
                  if (iVar39 != 0) {
                    uVar35 = *(uint *)((long)pphVar97 + 0x1fc);
                    param_6 = (pthread_mutex_t *)(ulong)uVar35;
                    if (uVar35 != 0) {
                      uVar111 = (ushort)(ppVar81->__data).__count;
                      uVar110 = uVar111 << 8 | uVar111 >> 8;
                      uVar111 = *(ushort *)((long)&(ppVar81->__data).__lock + 2);
                      uVar71 = uVar111 >> 8;
                      uVar111 = uVar111 << 8 | uVar71;
                      uVar36 = (uint)uVar111;
                      if ((uVar71 & 0x10) != 0) {
                        uVar71 = *(ushort *)
                                  ((long)&(ppVar81->__data).__count + (ulong)uVar110 * 2 + 2);
                        uVar36 = CONCAT22(uVar71 << 8 | uVar71 >> 8,uVar111);
                      }
                      *(uint *)((long)pphVar97 + 0x204) = uVar36;
                      phVar3 = (hb_ot_apply_context_t *)((long)pphVar97 + 0xd0);
                      *(hb_ot_apply_context_t **)((long)pphVar97 + 0xe0) = phVar3;
                      *(int *)((long)pphVar97 + 0x110) = iVar39;
                      *(undefined1 (*) [16])((long)pphVar97 + 0xf8) = (undefined1  [16])0x0;
                      *(undefined8 *)((long)pphVar97 + 0x108) = 0;
                      *(uint *)((long)pphVar97 + 0xe8) = uVar36;
                      uVar33 = *(undefined1 *)((long)pphVar97 + 0x20f);
                      if (*(int *)((long)pphVar97 + 0x158) != 0) {
                        uVar33 = 0;
                      }
                      bVar133 = *(int *)((long)pphVar97 + 0x158) == 1;
                      *(bool *)((long)pphVar97 + 0xf0) = bVar133;
                      *(undefined1 *)((long)pphVar97 + 0xf1) =
                           *(undefined1 *)((long)pphVar97 + 0x20e);
                      *(bool *)((long)pphVar97 + 0xf2) = bVar133;
                      *(uint *)((long)pphVar97 + 0xec) = uVar35;
                      *(undefined1 *)((long)pphVar97 + 0xf3) = uVar33;
                      *(undefined1 *)((long)pphVar97 + 0xf4) = 0;
                      *(hb_ot_apply_context_t **)((long)pphVar97 + 0x120) = phVar3;
                      *(int *)((long)pphVar97 + 0x150) = iVar39;
                      *(undefined1 (*) [16])((long)pphVar97 + 0x138) = (undefined1  [16])0x0;
                      *(undefined8 *)((long)pphVar97 + 0x148) = 0;
                      *(uint *)((long)pphVar97 + 0x128) = uVar36;
                      *(bool *)((long)pphVar97 + 0x132) = bVar133;
                      ppVar41 = (pthread_mutex_t *)
                                CONCAT71((int7)((ulong)((long)pphVar97 + 0xf8) >> 8),
                                         *(char *)((long)pphVar97 + 0x20d) != '\0' || bVar133);
                      *(bool *)((long)pphVar97 + 0x130) =
                           *(char *)((long)pphVar97 + 0x20d) != '\0' || bVar133;
                      *(undefined1 *)((long)pphVar97 + 0x131) = 1;
                      *(undefined4 *)((long)pphVar97 + 300) = 0xffffffff;
                      *(undefined1 *)((long)pphVar97 + 0x133) = uVar33;
                      *(undefined1 *)((long)pphVar97 + 0x134) = 0;
                      *(undefined4 *)((long)param_5 + 0x5c) = 0;
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3fbb21;
                      auVar258 = apply_forward(phVar3,(ulong *)p_Var47,(uint)uVar110);
                    }
                  }
                }
                uVar44 = auVar258._8_8_;
                if (*(long *)(*(long *)((long)pphVar97 + 0x10) + 0xd0) != 0) {
                  uVar35 = *(uint *)(puVar130 + 4);
                  param_6 = (pthread_mutex_t *)(ulong)(uVar35 >> 0x10 & 0xff);
                  param_5 = (uint *)(ulong)(uVar35 >> 0x18);
                  *(ulong *)((long)pphVar97 + -8) = (ulong)(uVar35 & 0xff);
                  *(ulong *)((long)pphVar97 + -0x10) = (ulong)(uVar35 >> 8 & 0xff);
                  p_Var52 = *(__pthread_internal_list **)((long)pphVar97 + 0x20);
                  *(undefined8 *)((long)pphVar97 + -0x18) = 0x3fbbd0;
                  hb_buffer_t::message
                            (auVar258._0_8_,uVar44,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                             in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,
                             *(hb_buffer_t **)((long)pphVar97 + 0x10),
                             *(undefined8 *)((long)pphVar97 + 8),
                             "end lookup %u feature \'%c%c%c%c\'",ppVar61,param_5,param_6,
                             *(undefined1 *)((long)pphVar97 + -0x10));
                  auVar258._8_8_ = uVar44;
                  auVar258._0_8_ = extraout_XMM0_Qa_29;
                  ppVar41 = ppVar61;
                }
              }
            }
LAB_003fb750:
            uVar127 = *(long *)((long)pphVar97 + 0x18) + 1;
            unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
          } while (uVar127 < **(uint **)((long)pphVar97 + 0x58));
          uVar132 = *(ulong *)((long)pphVar97 + 0x68);
        }
        pcVar74 = *(code **)(*(long *)((long)pphVar97 + 0x58) + 8);
        if (pcVar74 != (code *)0x0) {
          *(undefined8 *)((long)pphVar97 + -8) = 0x3fbc38;
          cVar34 = (*pcVar74)(*(undefined8 *)((long)pphVar97 + 0x60),
                              *(undefined8 *)((long)pphVar97 + 8),
                              *(undefined8 *)((long)pphVar97 + 0x10));
          auVar23._8_8_ = extraout_XMM1_Qa_32;
          auVar23._0_8_ = extraout_XMM0_Qa_30;
          auVar258._8_8_ = extraout_XMM1_Qa_32;
          auVar258._0_8_ = extraout_XMM0_Qa_30;
          if (cVar34 != '\0') {
            uVar35 = **(uint **)((long)pphVar97 + 0x38);
            param_6 = (pthread_mutex_t *)(ulong)uVar35;
            if (uVar35 == 0) {
              uVar40 = 0;
              uVar118 = 0;
              uVar67 = 0;
            }
            else {
              ppVar61 = (pthread_mutex_t *)**(undefined8 **)((long)pphVar97 + 0x28);
              uVar36 = uVar35 - 1;
              param_5 = (uint *)(ulong)uVar36;
              ppVar41 = ppVar61;
              if (uVar36 < 3) {
                uVar40 = 0;
              }
              else {
                uVar37 = uVar35 & 0xfffffffc;
                uVar40 = 0;
                do {
                  uVar40 = uVar40 | 1L << ((ulong)((uint)(ppVar41->__data).__lock >> 4) & 0x3f) |
                           1L << ((ulong)((uint)(ppVar41->__data).__spins >> 4) & 0x3f) |
                           1L << ((ulong)((uint)ppVar41[1].__data.__lock >> 4) & 0x3f) |
                           1L << ((ulong)(*(uint *)((long)ppVar41 + 0x3c) >> 4) & 0x3f);
                  ppVar41 = ppVar41 + 2;
                  uVar37 = uVar37 - 4;
                } while (uVar37 != 0);
              }
              if ((uVar35 & 3) != 0) {
                lVar75 = 0;
                do {
                  uVar40 = uVar40 | 1L << ((ulong)(*(uint *)((long)&(ppVar41->__data).__lock +
                                                            lVar75) >> 4) & 0x3f);
                  lVar75 = lVar75 + 0x14;
                } while ((uVar35 & 3) * 0x14 != (int)lVar75);
              }
              ppVar41 = ppVar61;
              if (uVar36 < 3) {
                uVar118 = 0;
              }
              else {
                uVar37 = uVar35 & 0xfffffffc;
                uVar118 = 0;
                do {
                  uVar118 = uVar118 | 1L << ((ulong)(byte)ppVar41->__size[0] & 0x3f) |
                            1L << ((ulong)(byte)ppVar41->__size[0x14] & 0x3f) |
                            1L << ((ulong)(byte)ppVar41[1].__size[0] & 0x3f) |
                            1L << ((ulong)*(byte *)((long)ppVar41 + 0x3c) & 0x3f);
                  ppVar41 = ppVar41 + 2;
                  uVar37 = uVar37 - 4;
                } while (uVar37 != 0);
              }
              if ((uVar35 & 3) != 0) {
                lVar75 = 0;
                do {
                  uVar118 = uVar118 | 1L << ((ulong)(byte)ppVar41->__size[lVar75] & 0x3f);
                  lVar75 = lVar75 + 0x14;
                } while ((uVar35 & 3) * 0x14 != (int)lVar75);
              }
              if (uVar36 < 3) {
                uVar67 = 0;
              }
              else {
                ppVar41 = (pthread_mutex_t *)(ulong)(uVar35 & 0xfffffffc);
                uVar67 = 0;
                do {
                  uVar67 = uVar67 | 1L << ((ulong)((uint)(ppVar61->__data).__lock >> 9) & 0x3f) |
                           1L << ((ulong)((uint)(ppVar61->__data).__spins >> 9) & 0x3f) |
                           1L << ((ulong)((uint)ppVar61[1].__data.__lock >> 9) & 0x3f) |
                           1L << ((ulong)(*(uint *)((long)ppVar61 + 0x3c) >> 9) & 0x3f);
                  ppVar61 = ppVar61 + 2;
                  uVar36 = (int)ppVar41 - 4;
                  ppVar41 = (pthread_mutex_t *)(ulong)uVar36;
                } while (uVar36 != 0);
              }
              if ((uVar35 & 3) != 0) {
                param_6 = (pthread_mutex_t *)((ulong)(uVar35 & 3) * 4);
                ppVar41 = (pthread_mutex_t *)((ulong)(uVar35 & 3) * 0x14);
                lVar75 = 0;
                do {
                  uVar67 = uVar67 | 1L << ((ulong)(*(uint *)((long)&(ppVar61->__data).__lock +
                                                            lVar75) >> 9) & 0x3f);
                  lVar75 = lVar75 + 0x14;
                } while ((int)ppVar41 != (int)lVar75);
              }
              p_Var52 = *(__pthread_internal_list **)((long)pphVar97 + 0x20);
            }
            *(ulong *)((long)pphVar97 + 0x1e0) = uVar40;
            *(ulong *)((long)pphVar97 + 0x1e8) = uVar118;
            *(ulong *)((long)pphVar97 + 0x1f0) = uVar67;
            auVar258 = auVar23;
          }
        }
        uVar132 = uVar132 + 1;
        uVar40 = (ulong)*(uint *)((long)unaff_R15 + 0xdc);
      } while (uVar132 < uVar40);
    }
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fbe07;
    free(*(void **)((long)pphVar97 + 0x1d8));
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fbe14;
    auVar261 = hb_sanitize_context_t::~hb_sanitize_context_t
                         ((hb_sanitize_context_t *)((long)pphVar97 + 0x178));
    auVar162._0_8_ = auVar261._8_8_;
    uVar44 = auVar261._0_8_;
    auVar162._8_8_ = extraout_XMM1_Qb_49;
    unaff_R14 = *(uint **)((long)pphVar97 + 0x10);
    unaff_R13 = *(uint **)((long)pphVar97 + 8);
    ppVar81 = ppVar41;
    if (*(long *)((long)unaff_R14 + 0xd0) != 0) {
      uVar35 = *(uint *)((long)unaff_R15 + 0x8c);
      ppVar81 = (pthread_mutex_t *)(ulong)(uVar35 >> 0x18);
      param_5 = (uint *)(ulong)(uVar35 >> 0x10 & 0xff);
      param_6 = (pthread_mutex_t *)(ulong)(uVar35 >> 8 & 0xff);
      *(ulong *)((long)pphVar97 + -0x10) = (ulong)(uVar35 & 0xff);
      *(undefined8 *)((long)pphVar97 + -0x18) = 0x3fbe5d;
      hb_buffer_t::message
                (uVar44,auVar162._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                 in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)unaff_R14,unaff_R13,
                 "end table GPOS script tag \'%c%c%c%c\'",ppVar81,param_5,param_6,
                 *(undefined1 *)((long)pphVar97 + -0x10));
      uVar44 = extraout_XMM0_Qa_31;
    }
  }
LAB_003fbe61:
  if ((*(ushort *)((long)unaff_R15 + 0x108) & 0x400) == 0) {
    if ((*(ushort *)((long)unaff_R15 + 0x108) & 0x800) != 0) {
      ppVar61 = (pthread_mutex_t *)unaff_R13;
      if ((*(uint *)((long)unaff_R14 + 0x38) & 0xfffffffe) == 4) {
        do {
          if (*(undefined **)(*(long *)((long)ppVar61 + 0x90) + 0x78) !=
              PTR_hb_font_get_glyph_h_kerning_default_00718ae8) goto LAB_003fc117;
          ppVar61 = (pthread_mutex_t *)(ppVar61->__data).__list.__prev;
        } while ((ppVar61 != (pthread_mutex_t *)0x0) &&
                (ppVar61 != (pthread_mutex_t *)&_hb_Null_hb_font_t));
      }
      else {
        do {
          if (*(undefined **)(*(long *)((long)ppVar61 + 0x90) + 0x80) !=
              PTR_hb_font_get_glyph_v_kerning_default_00718af0) goto LAB_003fc117;
          ppVar61 = (pthread_mutex_t *)(ppVar61->__data).__list.__prev;
        } while ((ppVar61 != (pthread_mutex_t *)0x0) &&
                (ppVar61 != (pthread_mutex_t *)&_hb_Null_hb_font_t));
      }
    }
  }
  else {
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fbed1;
    hb_ot_layout_kern(uVar44,auVar162._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                      in_XMM6._0_8_,in_XMM7._0_8_,*(undefined8 *)((long)pphVar97 + 0x60),
                      (long)unaff_R13,(hb_buffer_t *)unaff_R14,(undefined4 *)ppVar81,param_5,
                      (ulong)param_6);
  }
LAB_003fbed1:
  uVar111 = *(ushort *)((long)unaff_R15 + 0x108);
  if ((uVar111 & 0x4000) != 0) {
    p_Var47 = (((__pthread_mutex_s *)unaff_R13)->__list).__next;
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fbef2;
    puVar45 = hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
              ::get((hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
                     *)&p_Var47[0x16].__next);
    pTVar131 = (TrackData *)&_hb_NullPool;
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fbf17;
    hb_aat_apply_context_t::hb_aat_apply_context_t
              ((hb_aat_apply_context_t *)((long)pphVar97 + 0xd0),
               *(undefined8 *)((long)pphVar97 + 0x60),(long)unaff_R13,unaff_R14,
               (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
    lVar75 = *(long *)((long)pphVar97 + 0xe0);
    fVar135 = *(float *)(lVar75 + 0x70);
    if (0.0 < fVar135) {
      uVar35 = *(uint *)(*(long *)((long)pphVar97 + 0xd8) + 0xa4);
      lVar79 = *(long *)((long)pphVar97 + 0xf0);
      if ((*(uint *)(lVar79 + 0x38) & 0xfffffffe) == 4) {
        uVar111 = *(ushort *)((long)puVar45 + 6);
        if (uVar111 == 0) {
          pTVar131 = (TrackData *)&_hb_NullPool;
        }
        else {
          pTVar131 = (TrackData *)((long)puVar45 + (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
        }
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fbf7c;
        iVar39 = TrackData::get_tracking(fVar135,pTVar131,(long)puVar45);
        fVar135 = *(float *)(lVar75 + 0x4c);
        *(float *)((long)pphVar97 + 0x18) = fVar135;
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fbfac;
        fVar135 = floorf((float)(iVar39 / 2) * fVar135 + 0.5);
        *(float *)((long)pphVar97 + 0x20) = fVar135;
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fbfd0;
        fVar135 = floorf((float)iVar39 * *(float *)((long)pphVar97 + 0x18) + 0.5);
        uVar36 = *(uint *)(lVar79 + 0x60);
        if (uVar36 != 0) {
          fVar7 = *(float *)((long)pphVar97 + 0x20);
          param_6 = (pthread_mutex_t *)(ulong)(uint)(int)fVar135;
          lVar75 = 0x24;
          uVar40 = 0;
          do {
            lVar68 = *(long *)(lVar79 + 0x70);
            if (uVar36 - 1 == uVar40) {
              uVar40 = (ulong)uVar36;
              break;
            }
            uVar40 = uVar40 + 1;
            pbVar119 = (byte *)(lVar68 + lVar75);
            lVar75 = lVar75 + 0x14;
          } while ((*pbVar119 & 0x80) != 0);
          uVar132 = 0;
          do {
            if ((*(uint *)(lVar68 + 4 + uVar132 * 0x14) & uVar35) != 0) {
              lVar75 = *(long *)(lVar79 + 0x80);
              piVar49 = (int *)(lVar75 + uVar132 * 0x14);
              *piVar49 = *piVar49 + (int)fVar135;
              piVar49 = (int *)(lVar75 + 8 + uVar132 * 0x14);
              *piVar49 = *piVar49 + (int)fVar7;
            }
            uVar37 = (uint)uVar40;
            uVar60 = uVar37 + 1;
            if (uVar37 + 1 < uVar36) {
              uVar60 = uVar36;
            }
            uVar105 = uVar37;
            do {
              uVar105 = uVar105 + 1;
              uVar77 = uVar60;
              if (uVar36 <= uVar105) break;
              uVar77 = uVar105;
            } while ((*(byte *)(lVar68 + 0x10 + (ulong)uVar105 * 0x14) & 0x80) != 0);
            uVar132 = uVar40 & 0xffffffff;
            uVar40 = (ulong)uVar77;
          } while (uVar37 < uVar36);
        }
      }
      else {
        uVar111 = *(ushort *)(puVar45 + 2);
        if (uVar111 != 0) {
          pTVar131 = (TrackData *)((long)puVar45 + (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
        }
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fc042;
        iVar39 = TrackData::get_tracking(fVar135,pTVar131,(long)puVar45);
        fVar135 = *(float *)(lVar75 + 0x50);
        *(float *)((long)pphVar97 + 0x18) = fVar135;
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fc072;
        fVar135 = floorf((float)(iVar39 / 2) * fVar135 + 0.5);
        *(float *)((long)pphVar97 + 0x20) = fVar135;
        *(undefined8 *)((long)pphVar97 + -8) = 0x3fc096;
        fVar135 = floorf((float)iVar39 * *(float *)((long)pphVar97 + 0x18) + 0.5);
        uVar36 = *(uint *)(lVar79 + 0x60);
        if (uVar36 != 0) {
          fVar7 = *(float *)((long)pphVar97 + 0x20);
          param_6 = (pthread_mutex_t *)(ulong)(uint)(int)fVar135;
          lVar75 = 0x24;
          uVar40 = 0;
          do {
            lVar68 = *(long *)(lVar79 + 0x70);
            if (uVar36 - 1 == uVar40) {
              uVar40 = (ulong)uVar36;
              break;
            }
            uVar40 = uVar40 + 1;
            pbVar119 = (byte *)(lVar68 + lVar75);
            lVar75 = lVar75 + 0x14;
          } while ((*pbVar119 & 0x80) != 0);
          uVar37 = 0;
          do {
            uVar132 = (ulong)uVar37;
            uVar37 = (uint)uVar40;
            if ((*(uint *)(lVar68 + 4 + uVar132 * 0x14) & uVar35) != 0) {
              lVar75 = *(long *)(lVar79 + 0x80);
              piVar49 = (int *)(lVar75 + 4 + uVar132 * 0x14);
              *piVar49 = *piVar49 + (int)fVar135;
              piVar49 = (int *)(lVar75 + 0xc + uVar132 * 0x14);
              *piVar49 = *piVar49 + (int)fVar7;
            }
            uVar60 = uVar37 + 1;
            if (uVar37 + 1 < uVar36) {
              uVar60 = uVar36;
            }
            uVar40 = uVar40 & 0xffffffff;
            do {
              uVar105 = (int)uVar40 + 1;
              uVar40 = (ulong)uVar105;
              if (uVar36 <= uVar105) {
                uVar40 = (ulong)uVar60;
                break;
              }
            } while ((*(byte *)(lVar68 + 0x10 + (ulong)uVar105 * 0x14) & 0x80) != 0);
          } while (uVar37 < uVar36);
        }
      }
    }
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fcac4;
    hb_aat_apply_context_t::~hb_aat_apply_context_t
              ((hb_aat_apply_context_t *)((long)pphVar97 + 0xd0));
    unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
    uVar111 = *(ushort *)((long)unaff_R15 + 0x108);
    unaff_R14 = *(uint **)((long)pphVar97 + 0x10);
  }
  param_5 = *(uint **)((long)pphVar97 + 0x28);
  unaff_RBX = *(pthread_mutex_t **)((long)pphVar97 + 0x48);
  if ((((uVar111 & 0x20) != 0) && (*(int *)(*(long *)((long)unaff_R15 + 0x80) + 0x58) == 2)) &&
     (uVar40 = (ulong)**(uint **)((long)pphVar97 + 0x38), uVar40 != 0)) {
    lVar75 = *(long *)param_5;
    if (*(char *)((long)pphVar97 + 0x70) == '\0') {
      lVar79 = 0;
      do {
        if ((*(byte *)(lVar75 + 0xc + lVar79) & 8) != 0) {
          *(undefined8 *)(unaff_RBX->__align + lVar79) = 0;
        }
        lVar79 = lVar79 + 0x14;
      } while (uVar40 * 0x14 != lVar79);
    }
    else {
      lVar79 = 0;
      do {
        if ((*(byte *)(lVar75 + 0xc + lVar79) & 8) != 0) {
          lVar68 = *(long *)&unaff_RBX->__data;
          piVar49 = (int *)(lVar68 + 8 + lVar79);
          *piVar49 = *piVar49 - *(int *)(lVar68 + lVar79);
          piVar49 = (int *)(lVar68 + 0xc + lVar79);
          *piVar49 = *piVar49 - *(int *)(lVar68 + 4 + lVar79);
          *(undefined4 *)(lVar68 + lVar79) = 0;
          *(undefined4 *)(lVar68 + 4 + lVar79) = 0;
        }
        lVar79 = lVar79 + 0x14;
      } while (uVar40 * 0x14 != lVar79);
    }
  }
  if (((((byte)*(hb_buffer_t *)((long)unaff_R14 + 0xc0) & 2) != 0) &&
      (((byte)*(hb_buffer_t *)((long)unaff_R14 + 0x18) & 0xc) == 0)) &&
     (uVar35 = **(uint **)((long)pphVar97 + 0x38), (ulong)uVar35 != 0)) {
    lVar75 = *(long *)param_5;
    lVar79 = unaff_RBX->__align;
    lVar68 = 0;
    do {
      if (((*(byte *)(lVar75 + 0x10 + lVar68) & 0x20) != 0) &&
         ((*(byte *)(lVar75 + 0xc + lVar68) & 0x10) == 0)) {
        *(undefined1 (*) [16])(lVar79 + lVar68) = (undefined1  [16])0x0;
      }
      lVar68 = lVar68 + 0x14;
    } while ((ulong)uVar35 * 0x14 != lVar68);
  }
  if (((byte)*(hb_buffer_t *)((long)unaff_R15 + 0x109) & 0x20) == 0) {
LAB_003fcbd2:
    uVar35 = **(uint **)((long)pphVar97 + 0x38);
    pphVar95 = pphVar97;
    unaff_R13 = unaff_R14;
  }
  else {
    uVar35 = **(uint **)((long)pphVar97 + 0x38);
    unaff_R12 = (pthread_mutex_t *)(ulong)uVar35;
    pphVar95 = pphVar97;
    unaff_R13 = unaff_R14;
    if (unaff_R12 != (pthread_mutex_t *)0x0) {
      ppVar61 = *(pthread_mutex_t **)param_5;
      ppVar41 = *(pthread_mutex_t **)&unaff_RBX->__data;
      pphVar85 = pphVar97;
      if (uVar35 == 1) {
        param_3 = (pthread_mutex_t *)0x0;
LAB_003fcbbb:
        if ((((ulong)unaff_R12 & 1) != 0) &&
           ((&(ppVar61->__data).__lock)[(long)param_3 * 5] == 0xffff)) {
          *(undefined1 (*) [16])(&(ppVar41->__data).__lock + (long)param_3 * 5) =
               (undefined1  [16])0x0;
        }
        goto LAB_003fcbd2;
      }
LAB_003fd072:
      param_2 = (pthread_mutex_t *)(ulong)((uint)unaff_R12 & 0xfffffffe);
      param_1 = (pthread_mutex_t *)0x0;
      in_XMM0 = (undefined1  [16])0x0;
      param_3 = (pthread_mutex_t *)((pthread_mutex_t *)0x0)->__size;
      pphVar97 = pphVar85;
LAB_003fd080:
      do {
        if (*(int *)((long)&(ppVar61->__data).__lock + (long)&param_1->__data) == 0xffff) {
          *(undefined1 (*) [16])((long)&(ppVar41->__data).__lock + (long)param_1->__size) = in_XMM0;
          if (*(int *)((long)&(ppVar61->__data).__spins + (long)&param_1->__data) != 0xffff)
          goto LAB_003fd093;
LAB_003fd0b4:
          *(undefined1 (*) [16])((long)&(ppVar41->__data).__spins + (long)&param_1->__data) =
               in_XMM0;
          param_3 = (pthread_mutex_t *)(param_3->__size + 2);
          param_1 = param_1 + 1;
          if (param_2 == param_3) goto LAB_003fcbbb;
          goto LAB_003fd080;
        }
        if (*(int *)((long)&(ppVar61->__data).__spins + (long)&param_1->__data) == 0xffff)
        goto LAB_003fd0b4;
LAB_003fd093:
        param_3 = (pthread_mutex_t *)(param_3->__size + 2);
        param_1 = param_1 + 1;
        if (param_2 == param_3) goto LAB_003fcbbb;
      } while( true );
    }
  }
  if (*(char *)((long)unaff_R13 + 0x5b) == '\0') {
    if (*(int *)((long)unaff_R13 + 0xe8) == 0) {
      *(undefined2 *)((long)unaff_R13 + 0x5a) = 0x100;
      *(undefined4 *)((long)unaff_R13 + 100) = 0;
      ((pthread_mutex_t *)((long)unaff_R13 + 0x78))->__align = *(long *)((long)unaff_R13 + 0x70);
      if (uVar35 * 0x14 != 0) {
        pvVar53 = (void *)unaff_RBX->__align;
        *(undefined8 *)((long)pphVar95 + -8) = 0x3fcc21;
        memset(pvVar53,0,(ulong)(uVar35 * 0x14));
        unaff_RBX = *(pthread_mutex_t **)((long)pphVar95 + 0x48);
      }
      goto LAB_003fcc26;
    }
    lVar75 = 0;
    bVar70 = *(byte *)((long)unaff_R13 + 0xc0);
  }
  else {
LAB_003fcc26:
    lVar75._0_4_ = (unaff_RBX->__data).__lock;
    lVar75._4_4_ = (unaff_RBX->__data).__count;
    bVar70 = *(byte *)((long)unaff_R13 + 0xc0);
  }
  if (((bVar70 & 8) != 0) && (uVar35 != 0)) {
    uVar36 = *(uint *)((long)unaff_R13 + 0x38);
    uVar37 = 0;
    do {
      param_5 = (uint *)0x40;
      *(undefined8 *)((long)pphVar95 + -8) = 0x3fcc65;
      OT::Layout::propagate_attachment_offsets(lVar75,(ulong)uVar35,uVar37,uVar36,0x40);
      uVar37 = uVar37 + 1;
    } while (uVar35 != uVar37);
  }
  unaff_R12 = *(pthread_mutex_t **)((long)pphVar95 + 8);
  fVar135 = *(float *)((long)unaff_R12 + 0x44);
  auVar153 = ZEXT416((uint)fVar135);
  auVar165 = (undefined1  [16])0x0;
  uVar40 = (ulong)*(uint *)((long)pphVar95 + 0x78);
  if (((fVar135 != 0.0) || (NAN(fVar135))) && (uVar35 != 0)) {
    lVar79 = 0;
    do {
      while( true ) {
        auVar165 = ZEXT816(0x3f000000);
        iVar39 = *(int *)(lVar75 + 0xc + lVar79);
        if (iVar39 != 0) break;
        lVar79 = lVar79 + 0x14;
        unaff_R12 = *(pthread_mutex_t **)((long)pphVar95 + 8);
        if ((ulong)uVar35 * 0x14 == lVar79) goto LAB_003fcc95;
      }
      fVar135 = *(float *)(*(long *)((long)pphVar95 + 8) + 0x48);
      *(undefined8 *)((long)pphVar95 + -8) = 0x3fdc20;
      auVar153._0_4_ = floorf((float)iVar39 * fVar135 + auVar165._0_4_);
      auVar153._4_12_ = extraout_var;
      uVar40 = (ulong)*(uint *)((long)pphVar95 + 0x78);
      auVar165 = ZEXT816(0x3f000000);
      *(int *)(lVar75 + 8 + lVar79) = (int)((float)*(int *)(lVar75 + 8 + lVar79) + auVar153._0_4_);
      lVar79 = lVar79 + 0x14;
      unaff_R12 = *(pthread_mutex_t **)((long)pphVar95 + 8);
    } while ((ulong)uVar35 * 0x14 != lVar79);
  }
LAB_003fcc95:
  ppVar61 = unaff_R12;
  while (*(undefined **)(*(long *)((long)ppVar61 + 0x90) + 0x68) ==
         PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
    ppVar61 = (pthread_mutex_t *)(ppVar61->__data).__list.__prev;
    if ((ppVar61 == (pthread_mutex_t *)0x0) || (ppVar61 == (pthread_mutex_t *)&_hb_Null_hb_font_t))
    goto LAB_003fcd2a;
  }
  if ((int)uVar40 != 0) {
    lVar75 = 0;
    do {
      uVar38 = *(undefined4 *)(*(long *)((long)pphVar95 + 0x50) + lVar75);
      *(undefined8 *)((long)pphVar95 + -8) = 0x3fcd06;
      auVar261 = hb_font_t::get_glyph_h_origin_with_fallback
                           ((hb_font_t *)&unaff_R12->__data,uVar38,(int *)((long)pphVar95 + 0xd0),
                            (int *)((long)pphVar95 + 0x240));
      auVar165._0_8_ = auVar261._8_8_;
      auVar153._0_8_ = auVar261._0_8_;
      auVar165._8_8_ = extraout_XMM1_Qb_50;
      auVar153._8_8_ = extraout_XMM0_Qb_19;
      ppVar61 = *(pthread_mutex_t **)((long)pphVar95 + 0x40);
      piVar49 = (int *)((long)&(ppVar61->__data).__owner + lVar75);
      *piVar49 = *piVar49 - *(int *)((long)pphVar95 + 0xd0);
      piVar49 = (int *)((long)&(ppVar61->__data).__nusers + lVar75);
      *piVar49 = *piVar49 - *(int *)((long)pphVar95 + 0x240);
      lVar75 = lVar75 + 0x14;
    } while (uVar40 * 0x14 != lVar75);
  }
LAB_003fcd2a:
  if ((*(byte *)(*(long *)((long)pphVar95 + 0x30) + 0x108) & 0x80) != 0) {
    uVar35 = 0;
    *(undefined8 *)((long)pphVar95 + -8) = 0x3fcd53;
    bVar133 = hb_buffer_t::message
                        (auVar153._0_8_,auVar165._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                         in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)unaff_R13,
                         unaff_R12,"start fallback mark",ppVar61,param_5,param_6,
                         *(undefined1 *)pphVar95);
    auVar153 = extraout_XMM0_27;
    if (bVar133) {
      uVar36 = **(uint **)((long)pphVar95 + 0x38);
      param_5 = (uint *)(ulong)uVar36;
      bVar70 = *(byte *)((long)pphVar95 + 0x70);
      uVar40 = (ulong)bVar70;
      if ((pthread_mutex_t *)0x1 < param_5) {
        puVar65 = (uint *)(**(long **)((long)pphVar95 + 0x28) + 0x24);
        uVar35 = 0;
        ppVar41 = (pthread_mutex_t *)((pthread_mutex_t *)0x1)->__size;
        do {
          if ((0x1c00U >> (*puVar65 & 0x1f) & 1) == 0) {
            *(undefined8 *)((long)pphVar95 + -8) = 0x3fcdb5;
            position_cluster(*(uint **)((long)pphVar95 + 0x60),*(long *)((long)pphVar95 + 8),
                             *(hb_buffer_t **)((long)pphVar95 + 0x10),uVar35,(uint)ppVar41,
                             (uint)bVar70);
            uVar35 = (uint)ppVar41;
          }
          ppVar41 = (pthread_mutex_t *)(ppVar41->__size + 1);
          puVar65 = puVar65 + 5;
        } while ((pthread_mutex_t *)param_5 != ppVar41);
      }
      unaff_R12 = *(pthread_mutex_t **)((long)pphVar95 + 8);
      unaff_R13 = *(uint **)((long)pphVar95 + 0x10);
      ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
      *(undefined8 *)((long)pphVar95 + -8) = 0x3fcde8;
      auVar261 = position_cluster(*(uint **)((long)pphVar95 + 0x60),(long)unaff_R12,
                                  (hb_buffer_t *)unaff_R13,uVar35,uVar36,(uint)bVar70);
      auVar165._0_8_ = auVar261._8_8_;
      auVar165._8_8_ = extraout_XMM1_Qb_51;
      *(undefined8 *)((long)pphVar95 + -8) = 0x3fcdfc;
      hb_buffer_t::message
                (auVar261._0_8_,auVar165._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)unaff_R13,unaff_R12,
                 "end fallback mark",ppVar61,param_5,uVar40,*(undefined1 *)pphVar95);
      auVar153 = extraout_XMM0_28;
    }
  }
  unaff_R15 = *(pthread_mutex_t **)((long)pphVar95 + 0x30);
  plVar108 = *(long **)((long)pphVar95 + 0x28);
  plVar124 = *(long **)((long)pphVar95 + 0x48);
  if ((*(uint *)((long)unaff_R13 + 0x38) & 0xfffffffd) == 5) {
    uVar35 = **(uint **)((long)pphVar95 + 0x38);
    if (1 < uVar35) {
      ppVar61 = (pthread_mutex_t *)*plVar108;
      uVar40 = (ulong)(uVar35 - 1);
      puVar109 = (undefined8 *)((long)ppVar61 + uVar40 * 0x14);
      uVar132 = 0;
      do {
        uVar40 = uVar40 - 1;
        *(undefined4 *)((long)pphVar95 + 0xe0) = *(undefined4 *)(puVar109 + 2);
        uVar44 = puVar109[1];
        *(undefined8 *)((long)pphVar95 + 0xd0) = *puVar109;
        *(undefined8 *)((long)pphVar95 + 0xd8) = uVar44;
        *(undefined4 *)(puVar109 + 2) = *(undefined4 *)*(undefined1 (*) [16])((long)ppVar61 + 0x10);
        uVar44 = *(undefined8 *)(*(undefined1 (*) [16])ppVar61 + 8);
        *puVar109 = *(undefined8 *)*(undefined1 (*) [16])ppVar61;
        puVar109[1] = uVar44;
        *(undefined4 *)*(undefined1 (*) [16])((long)ppVar61 + 0x10) =
             *(undefined4 *)((long)pphVar95 + 0xe0);
        auVar153 = *(undefined1 (*) [16])((long)pphVar95 + 0xd0);
        *(undefined1 (*) [16])ppVar61 = auVar153;
        uVar132 = uVar132 + 1;
        ppVar61 = (pthread_mutex_t *)(*(undefined1 (*) [16])((long)ppVar61 + 0x10) + 4);
        puVar109 = (undefined8 *)((long)puVar109 + -0x14);
      } while (uVar132 < (uVar40 & 0xffffffff));
    }
    if (*(char *)((long)unaff_R13 + 0x5b) != '\0') {
      uVar36 = **(uint **)((long)pphVar95 + 0x38);
      ppVar61 = (pthread_mutex_t *)(ulong)uVar36;
      if (uVar36 < uVar35) {
        uVar35 = uVar36;
      }
      if (1 < uVar35) {
        ppVar61 = (pthread_mutex_t *)*plVar124;
        uVar40 = (ulong)(uVar35 - 1);
        puVar109 = (undefined8 *)((long)ppVar61 + uVar40 * 0x14);
        uVar132 = 0;
        do {
          uVar40 = uVar40 - 1;
          *(undefined4 *)((long)pphVar95 + 0xe0) = *(undefined4 *)(puVar109 + 2);
          uVar44 = puVar109[1];
          *(undefined8 *)((long)pphVar95 + 0xd0) = *puVar109;
          *(undefined8 *)((long)pphVar95 + 0xd8) = uVar44;
          *(undefined4 *)(puVar109 + 2) =
               *(undefined4 *)*(undefined1 (*) [16])((long)ppVar61 + 0x10);
          uVar44 = *(undefined8 *)(*(undefined1 (*) [16])ppVar61 + 8);
          *puVar109 = *(undefined8 *)*(undefined1 (*) [16])ppVar61;
          puVar109[1] = uVar44;
          *(undefined4 *)*(undefined1 (*) [16])((long)ppVar61 + 0x10) =
               *(undefined4 *)((long)pphVar95 + 0xe0);
          auVar153 = *(undefined1 (*) [16])((long)pphVar95 + 0xd0);
          *(undefined1 (*) [16])ppVar61 = auVar153;
          uVar132 = uVar132 + 1;
          ppVar61 = (pthread_mutex_t *)(*(undefined1 (*) [16])((long)ppVar61 + 0x10) + 4);
          puVar109 = (undefined8 *)((long)puVar109 + -0x14);
        } while (uVar132 < (uVar40 & 0xffffffff));
      }
    }
  }
  *(byte *)((long)unaff_R13 + 0xb8) = *(byte *)((long)unaff_R13 + 0xb8) & 0xf8;
  if ((*(ushort *)((long)unaff_R15 + 0x108) & 0x2200) == 0x2000) {
    *(undefined8 *)((long)pphVar95 + -8) = 0x3fcf31;
    auVar261 = hb_aat_layout_remove_deleted_glyphs((hb_buffer_t *)unaff_R13);
    auVar165._0_8_ = auVar261._8_8_;
    auVar153._0_8_ = auVar261._0_8_;
    auVar165._8_8_ = extraout_XMM1_Qb_52;
    auVar153._8_8_ = extraout_XMM0_Qb_20;
    plVar124 = *(long **)((long)pphVar95 + 0x48);
    plVar108 = *(long **)((long)pphVar95 + 0x28);
  }
  uVar44 = auVar165._0_8_;
  uVar35 = *(uint *)((long)unaff_R13 + 0xc0);
  if (((uVar35 & 0x80) != 0) && (*(int *)((long)unaff_R13 + 0x2c) != -1)) {
    ppVar61 = *(pthread_mutex_t **)((long)pphVar95 + 0x38);
    uVar36 = (ppVar61->__data).__lock;
    if ((ulong)uVar36 != 0) {
      lVar75 = *plVar108;
      ppVar61 = (pthread_mutex_t *)*plVar124;
      lVar79 = 0;
      auVar153 = ZEXT816(0);
      do {
        if ((*(ushort *)(lVar75 + 0x10 + lVar79) & 0x41f) == 0x401) {
          *(undefined4 *)(lVar75 + lVar79) = *(undefined4 *)((long)unaff_R13 + 0x2c);
          *(undefined1 (*) [16])((long)&(ppVar61->__data).__lock + lVar79) = auVar153;
          *(ushort *)(lVar75 + 0x10 + lVar79) = *(ushort *)(lVar75 + 0x10 + lVar79) & 0xe0 | 0xc;
        }
        lVar79 = lVar79 + 0x14;
      } while ((ulong)uVar36 * 0x14 != lVar79);
      uVar35 = *(uint *)((long)unaff_R13 + 0xc0);
    }
  }
  uVar48 = auVar153._0_8_;
  if (((uVar35 & 2) != 0) &&
     (p_Var47 = (((__pthread_mutex_s *)unaff_R13)->__list).__prev, ((ulong)p_Var47 & 4) == 0)) {
    uVar36 = *(uint *)((long)unaff_R13 + 0x60);
    unaff_RBP = (pthread_mutex_t *)(ulong)uVar36;
    unaff_RBX = *(pthread_mutex_t **)((long)unaff_R13 + 0x70);
    uVar35 = *(uint *)((long)&(((__pthread_mutex_s *)unaff_R13)->__list).__next + 4);
    ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
    *(uint *)((long)pphVar95 + 0xd0) = uVar35;
    if (((ulong)p_Var47 & 8) != 0) goto LAB_003fd4be;
    if (uVar35 == 0) {
      *(undefined4 *)((long)pphVar95 + 0xd0) = 0;
      param_2 = *(pthread_mutex_t **)((long)unaff_R12 + 0x98);
      ppVar61 = *(pthread_mutex_t **)(*(long *)((long)unaff_R12 + 0x90) + 0x10);
      ppVar41 = *(pthread_mutex_t **)(*(long *)((long)unaff_R12 + 0x90) + 0x30);
      bVar133 = ppVar61 == (pthread_mutex_t *)0x0;
      goto code_r0x003fd010;
    }
    goto LAB_003fd469;
  }
  goto LAB_003fd5ea;
code_r0x003f7dec:
  while( true ) {
    ppVar81 = (pthread_mutex_t *)((ulong)param_3 & 0xffffffff);
    ppVar61 = (pthread_mutex_t *)((long)ppVar61 + 0x14);
    param_3 = (pthread_mutex_t *)((long)param_3 + -1);
    ppVar41 = (pthread_mutex_t *)((long)ppVar41 + -0x14);
    bVar133 = param_2 < ppVar81;
    pphVar85 = pphVar97;
code_r0x003f7dfd:
    pphVar97 = pphVar85;
    if (!bVar133) break;
LAB_003f7db0:
    *(int *)((long)pphVar85 + 0xe0) = (ppVar41->__data).__kind;
    uVar44 = *(undefined8 *)&(ppVar41->__data).__owner;
    *(long *)((long)pphVar85 + 0xd0) = ppVar41->__align;
    *(undefined8 *)((long)pphVar85 + 0xd8) = uVar44;
code_r0x003f7dc5:
    (ppVar41->__data).__kind = (ppVar61->__data).__kind;
    lVar75 = ppVar61->__align;
    iVar39 = *(int *)((long)&ppVar61->__data + 8);
    uVar35 = *(uint *)((long)&ppVar61->__data + 0xc);
    (ppVar41->__data).__lock = (int)lVar75;
    (ppVar41->__data).__count = (int)((ulong)lVar75 >> 0x20);
    *(int *)((long)&ppVar41->__data + 8) = iVar39;
    *(uint *)((long)&ppVar41->__data + 0xc) = uVar35;
    (ppVar61->__data).__kind = *(int *)((long)pphVar85 + 0xe0);
    in_XMM0 = *(undefined1 (*) [16])((long)pphVar85 + 0xd0);
    *(undefined1 (*) [16])ppVar61->__size = in_XMM0;
    param_2 = (pthread_mutex_t *)(param_2->__size + 1);
    pphVar97 = pphVar85;
  }
  goto LAB_003f7dff;
code_r0x003f7fe1:
  iRam8d48c96348c373ca = (int)ppVar41;
  ppVar41 = (pthread_mutex_t *)(ulong)(iRam8d48c96348c373ca + 0x21095d + (uint)bVar133);
code_r0x003f7fe5:
  ppVar61 = (pthread_mutex_t *)(long)(int)ppVar61;
  unaff_RBP = (pthread_mutex_t *)(ulong)*(uint *)(&DAT_0060894c + (long)ppVar61 * 4);
  pphVar93 = pphVar85;
  if (*(uint *)(&DAT_0060894c + (long)ppVar61 * 4) == (uint)ppVar41)
  goto _hb_ot_shape_switchD_003f8054_caseD_2015;
LAB_003f807d:
  do {
    *(undefined4 *)((long)pphVar93 + 0xd0) = 0;
    lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar93 + 8) + 0x90) + 0x10);
    if (lVar75 == 0) {
      param_5 = (uint *)0x0;
    }
    else {
      param_5 = *(uint **)(lVar75 + 0x10);
    }
    uVar44 = *(undefined8 *)(*(long *)((long)pphVar93 + 8) + 0x98);
    ppVar61 = (pthread_mutex_t *)((long)pphVar93 + 0xd0);
    pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar93 + 8) + 0x90) + 0x30);
    *(undefined8 *)((long)pphVar93 + -8) = 0x3f7fa0;
    iVar39 = (*pcVar74)(*(long *)((long)pphVar93 + 8),uVar44,(ulong)unaff_RBP & 0xffffffff);
    in_XMM1._8_8_ = extraout_XMM1_Qb_22;
    in_XMM1._0_8_ = extraout_XMM1_Qa_13;
    in_XMM0._8_8_ = extraout_XMM0_Qb_15;
    in_XMM0._0_8_ = extraout_XMM0_Qa_10;
    bVar134 = iVar39 == 0;
code_r0x003f7fa2:
    pphVar85 = pphVar93;
    if (!bVar134) {
      *(int *)((long)&(unaff_R15->__data).__lock + (long)&unaff_RBX->__data) = (int)unaff_RBP;
    }
_hb_ot_shape_switchD_003f8054_caseD_2015:
    do {
      while( true ) {
        unaff_RBX = (pthread_mutex_t *)&(unaff_RBX->__data).__spins;
        pphVar97 = pphVar85;
        if (unaff_R12 == unaff_RBX) goto LAB_003f817b;
LAB_003f7fb5:
        ppVar41 = (pthread_mutex_t *)
                  (ulong)*(uint *)((long)&(unaff_R15->__data).__lock + (long)&unaff_RBX->__data);
code_r0x003f7fb9:
        ppVar61 = (pthread_mutex_t *)((ulong)ppVar41 >> 8 & 0xffffff);
        pphVar94 = pphVar85;
        if (0xfd < (uint)ppVar61) break;
code_r0x003f7fc6:
        pphVar85 = pphVar94;
        if ((int)ppVar61 == 0x20) {
LAB_003f8038:
          uVar35 = (int)ppVar41 - 0x2013;
          ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
          if (uVar35 < 0x14) {
code_r0x003f8047:
                    /* WARNING: Could not recover jumptable at 0x003f8054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            ppVar41 = (pthread_mutex_t *)
                      (*(code *)((long)&((__pthread_mutex_s *)unaff_R13)->__lock +
                                (long)(&((__pthread_mutex_s *)unaff_R13)->__lock)
                                      [(long)&ppVar61->__data]))();
            return ppVar41;
          }
        }
        else {
code_r0x003f7fcb:
          if ((int)ppVar61 == 0x30) {
            uVar35 = (int)ppVar41 - 0x3001;
            ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
            if ((uVar35 < 0x17) && ((0x79ff83U >> (uVar35 & 0x1f) & 1) != 0)) goto code_r0x003f7fe5;
          }
        }
      }
LAB_003f8000:
      if ((int)ppVar61 != 0xfe) {
code_r0x003f8008:
        if ((int)ppVar61 == 0xff) {
          uVar35 = (int)ppVar41 - 0xff01;
          ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
          if (uVar35 < 0x5d) goto code_r0x003f801b;
        }
        goto _hb_ot_shape_switchD_003f8054_caseD_2015;
      }
      unaff_RBP = (pthread_mutex_t *)0xfe34;
      pphVar93 = pphVar85;
    } while ((int)ppVar41 != 0xfe4f);
  } while( true );
LAB_003f8560:
  uVar105 = (&((__pthread_mutex_s *)param_5)->__lock)[(ulong)((int)uVar132 + 1) * 5];
  iVar39 = (&((__pthread_mutex_s *)param_5)->__lock)[uVar132 * 5];
  (&((__pthread_mutex_s *)param_5)->__nusers)[uVar132 * 5] = 0;
  ppVar61 = (pthread_mutex_t *)(&((__pthread_mutex_s *)param_5)->__nusers + uVar132 * 5);
  lVar79 = *(long *)(lVar75 + 0x90);
  if (((uVar105 & 0xfffffff0) == 0xfe00) || (0xffffff0f < uVar105 - 0xe01f0)) {
    if (*(long *)(lVar79 + 0x10) == 0) {
      uVar44 = 0;
    }
    else {
      uVar44 = *(undefined8 *)(*(long *)(lVar79 + 0x10) + 0x20);
    }
    uVar48 = *(undefined8 *)(lVar75 + 0x98);
    pcVar74 = *(code **)(lVar79 + 0x40);
    *(undefined8 *)((long)pphVar97 + -8) = 0x3f86ac;
    iVar39 = (*pcVar74)(lVar75,uVar48,iVar39,uVar105,ppVar61,uVar44);
    in_XMM1._8_8_ = extraout_XMM1_Qb_27;
    in_XMM1._0_8_ = extraout_XMM1_Qa_18;
    if (iVar39 != 0) {
      ppVar41 = (pthread_mutex_t *)((ulong)*(uint *)(phVar123 + 0x5c) * 5);
      *(undefined4 *)((long)pphVar97 + 0x240) =
           *(undefined4 *)(*(long *)(phVar123 + 0x70) + (ulong)*(uint *)(phVar123 + 0x5c) * 0x14);
      *(undefined8 *)((long)pphVar97 + -8) = 0x3f86da;
      hb_buffer_t::replace_glyphs<unsigned_int>(phVar123,2,(undefined4 *)((long)pphVar97 + 0x240));
      goto LAB_003f8920;
    }
    lVar75 = *(long *)(phVar123 + 0x70);
    uVar40 = (ulong)*(uint *)(phVar123 + 0x5c);
    uVar38 = *(undefined4 *)(lVar75 + uVar40 * 0x14);
    *(undefined4 *)(lVar75 + 0xc + uVar40 * 0x14) = 0;
    uVar44 = *(undefined8 *)(*(long *)((long)pphVar97 + 0x20) + 0x98);
    pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 0x20) + 0x90) + 0x30);
    *(undefined8 *)((long)pphVar97 + -8) = 0x3f8757;
    (*pcVar74)(*(long *)((long)pphVar97 + 0x20),uVar44,uVar38,lVar75 + uVar40 * 0x14 + 0xc);
    if (phVar123[0x5a] == (hb_buffer_t)0x0) {
LAB_003f87eb:
      uVar60 = *(int *)(phVar123 + 0x5c) + 1;
      *(uint *)(phVar123 + 0x5c) = uVar60;
    }
    else {
      pvVar115 = *(void **)(phVar123 + 0x78);
      pvVar53 = *(void **)(phVar123 + 0x70);
      iVar39 = *(int *)(phVar123 + 100);
      if ((pvVar115 == pvVar53) && (iVar39 == *(int *)(phVar123 + 0x5c))) {
LAB_003f87e5:
        *(int *)(phVar123 + 100) = iVar39 + 1;
        goto LAB_003f87eb;
      }
      uVar60 = iVar39 + 1;
      if ((uVar60 == 0) || (uVar60 < *(uint *)(phVar123 + 0x68))) {
        if (pvVar115 == pvVar53) {
LAB_003f8788:
          uVar60 = *(uint *)(phVar123 + 100);
          if (*(int *)(phVar123 + 0x5c) + 1U < uVar60 + 1) {
            pvVar115 = *(void **)(phVar123 + 0x80);
            *(void **)(phVar123 + 0x78) = pvVar115;
            if ((ulong)uVar60 != 0) {
              *(undefined8 *)((long)pphVar97 + -8) = 0x3f87b5;
              memcpy(pvVar115,pvVar53,(ulong)uVar60 * 0x14);
              pvVar53 = *(void **)(phVar123 + 0x70);
              pvVar115 = *(void **)(phVar123 + 0x78);
            }
          }
          else {
            pvVar115 = pvVar53;
          }
        }
LAB_003f87c2:
        uVar60 = *(uint *)(phVar123 + 0x5c);
        uVar105 = *(uint *)(phVar123 + 100);
        *(undefined4 *)((long)pvVar115 + (ulong)uVar105 * 0x14 + 0x10) =
             *(undefined4 *)((long)pvVar53 + (ulong)uVar60 * 0x14 + 0x10);
        puVar109 = (undefined8 *)((long)pvVar53 + (ulong)uVar60 * 0x14);
        uVar44 = puVar109[1];
        puVar2 = (undefined8 *)((long)pvVar115 + (ulong)uVar105 * 0x14);
        *puVar2 = *puVar109;
        puVar2[1] = uVar44;
        iVar39 = *(int *)(phVar123 + 100);
        goto LAB_003f87e5;
      }
      *(undefined8 *)((long)pphVar97 + -8) = 0x3f8aaf;
      uVar44 = hb_buffer_t::enlarge(phVar123,uVar60);
      if ((char)uVar44 != '\0') {
        pvVar53 = *(void **)(phVar123 + 0x70);
        pvVar115 = *(void **)(phVar123 + 0x78);
        if (pvVar115 == pvVar53) goto LAB_003f8788;
        goto LAB_003f87c2;
      }
      uVar60 = *(uint *)(phVar123 + 0x5c);
    }
    phVar123[0xc0] = (hb_buffer_t)((byte)phVar123[0xc0] | 0x80);
    *(ushort *)(*(long *)(phVar123 + 0x70) + 0x10 + (ulong)uVar60 * 0x14) =
         *(ushort *)(*(long *)(phVar123 + 0x70) + 0x10 + (ulong)uVar60 * 0x14) & 0xe0 | 0x401;
    if (*(int *)(phVar123 + 0x2c) != -1) {
      puVar130 = (ushort *)
                 (*(long *)(phVar123 + 0x70) + 0x10 + (ulong)*(uint *)(phVar123 + 0x5c) * 0x14);
      *puVar130 = *puVar130 & 0xffdf;
    }
    lVar75 = *(long *)(phVar123 + 0x70);
    uVar40 = (ulong)*(uint *)(phVar123 + 0x5c);
    uVar38 = *(undefined4 *)(lVar75 + uVar40 * 0x14);
    *(undefined4 *)(lVar75 + 0xc + uVar40 * 0x14) = 0;
    lVar79 = *(long *)(*(long *)((long)pphVar97 + 0x20) + 0x90);
    uVar44 = *(undefined8 *)(*(long *)((long)pphVar97 + 0x20) + 0x98);
    lVar68 = *(long *)(lVar79 + 0x10);
    pcVar74 = *(code **)(lVar79 + 0x30);
    if (lVar68 == 0) {
      ppVar61 = (pthread_mutex_t *)0x0;
    }
    else {
      ppVar61 = *(pthread_mutex_t **)(lVar68 + 0x10);
    }
    ppVar41 = (pthread_mutex_t *)(lVar75 + uVar40 * 0x14 + 0xc);
    *(undefined8 *)((long)pphVar97 + -8) = 0x3f8883;
    (*pcVar74)(*(undefined8 *)((long)pphVar97 + 0x20),uVar44,uVar38);
    in_XMM1._8_8_ = extraout_XMM1_Qb_28;
    in_XMM1._0_8_ = extraout_XMM1_Qa_19;
    if (phVar123[0x5a] != (hb_buffer_t)0x0) {
      pvVar115 = *(void **)(phVar123 + 0x78);
      pvVar53 = *(void **)(phVar123 + 0x70);
      iVar39 = *(int *)(phVar123 + 100);
      if ((pvVar115 != pvVar53) || (iVar39 != *(int *)(phVar123 + 0x5c))) {
        uVar60 = iVar39 + 1;
        if ((uVar60 == 0) || (uVar60 < *(uint *)(phVar123 + 0x68))) {
          if (pvVar115 == pvVar53) {
LAB_003f88b4:
            uVar60 = *(uint *)(phVar123 + 100);
            if (*(int *)(phVar123 + 0x5c) + 1U < uVar60 + 1) {
              pvVar115 = *(void **)(phVar123 + 0x80);
              *(void **)(phVar123 + 0x78) = pvVar115;
              if ((ulong)uVar60 != 0) {
                *(undefined8 *)((long)pphVar97 + -8) = 0x3f88e1;
                memcpy(pvVar115,pvVar53,(ulong)uVar60 * 0x14);
                pvVar53 = *(void **)(phVar123 + 0x70);
                pvVar115 = *(void **)(phVar123 + 0x78);
              }
            }
            else {
              pvVar115 = pvVar53;
            }
          }
        }
        else {
          *(undefined8 *)((long)pphVar97 + -8) = 0x3f8ad3;
          uVar44 = hb_buffer_t::enlarge(phVar123,uVar60);
          uVar60 = *(uint *)((long)pphVar97 + 0x40);
          if ((char)uVar44 == '\0') goto LAB_003f8920;
          pvVar53 = *(void **)(phVar123 + 0x70);
          pvVar115 = *(void **)(phVar123 + 0x78);
          if (pvVar115 == pvVar53) goto LAB_003f88b4;
        }
        uVar60 = *(uint *)(phVar123 + 0x5c);
        uVar40 = (ulong)*(uint *)(phVar123 + 100);
        ppVar41 = (pthread_mutex_t *)(uVar40 * 5);
        *(undefined4 *)((long)pvVar115 + uVar40 * 0x14 + 0x10) =
             *(undefined4 *)((long)pvVar53 + (ulong)uVar60 * 0x14 + 0x10);
        puVar109 = (undefined8 *)((long)pvVar53 + (ulong)uVar60 * 0x14);
        uVar44 = puVar109[1];
        puVar2 = (undefined8 *)((long)pvVar115 + uVar40 * 0x14);
        *puVar2 = *puVar109;
        puVar2[1] = uVar44;
        iVar39 = *(int *)(phVar123 + 100);
      }
      *(int *)(phVar123 + 100) = iVar39 + 1;
    }
    *(int *)(phVar123 + 0x5c) = *(int *)(phVar123 + 0x5c) + 1;
    uVar60 = *(uint *)((long)pphVar97 + 0x40);
LAB_003f8920:
    uVar105 = *(uint *)(phVar123 + 0x5c);
    lVar75 = *(long *)((long)pphVar97 + 0x20);
    param_5 = (uint *)ppVar61;
joined_r0x003f892a:
    ppVar61 = ppVar41;
    uVar132 = (ulong)uVar105;
    if (uVar105 < uVar36) {
      do {
        if (phVar123[0x58] == (hb_buffer_t)0x0) break;
        lVar79 = *(long *)(phVar123 + 0x70);
        uVar105 = *(uint *)(lVar79 + uVar132 * 0x14);
        if (((uVar105 & 0xfffffff0) != 0xfe00) &&
           (uVar105 = uVar105 - 0xe01f0, ppVar61 = (pthread_mutex_t *)(ulong)uVar105,
           uVar105 < 0xffffff10)) break;
        *(undefined4 *)(lVar79 + 0xc + uVar132 * 0x14) = 0;
        lVar68 = *(long *)(*(long *)(lVar75 + 0x90) + 0x10);
        if (lVar68 == 0) {
          param_5 = (uint *)0x0;
        }
        else {
          param_5 = *(uint **)(lVar68 + 0x10);
        }
        ppVar61 = (pthread_mutex_t *)(lVar79 + uVar132 * 0x14 + 0xc);
        pcVar74 = *(code **)(*(long *)(lVar75 + 0x90) + 0x30);
        *(undefined8 *)((long)pphVar97 + -8) = 0x3f89e0;
        (*pcVar74)();
        in_XMM1._8_8_ = extraout_XMM1_Qb_29;
        in_XMM1._0_8_ = extraout_XMM1_Qa_20;
        if (phVar123[0x5a] != (hb_buffer_t)0x0) {
          pvVar115 = *(void **)(phVar123 + 0x78);
          pvVar53 = *(void **)(phVar123 + 0x70);
          iVar39 = *(int *)(phVar123 + 100);
          if ((pvVar115 != pvVar53) || (iVar39 != *(int *)(phVar123 + 0x5c))) {
            uVar105 = iVar39 + 1;
            if ((uVar105 == 0) || (uVar105 < *(uint *)(phVar123 + 0x68))) {
              if (pvVar115 == pvVar53) goto LAB_003f8a15;
            }
            else {
              *(undefined8 *)((long)pphVar97 + -8) = 0x3f8a62;
              uVar44 = hb_buffer_t::enlarge(phVar123,uVar105);
              if ((char)uVar44 == '\0') goto LAB_003f8a7e;
              pvVar53 = *(void **)(phVar123 + 0x70);
              pvVar115 = *(void **)(phVar123 + 0x78);
              uVar60 = *(uint *)((long)pphVar97 + 0x40);
              if (pvVar115 == pvVar53) {
LAB_003f8a15:
                uVar105 = *(uint *)(phVar123 + 100);
                if (*(int *)(phVar123 + 0x5c) + 1U < uVar105 + 1) {
                  pvVar115 = *(void **)(phVar123 + 0x80);
                  *(void **)(phVar123 + 0x78) = pvVar115;
                  if ((ulong)uVar105 != 0) {
                    *(undefined8 *)((long)pphVar97 + -8) = 0x3f8a46;
                    memcpy(pvVar115,pvVar53,(ulong)uVar105 * 0x14);
                    pvVar53 = *(void **)(phVar123 + 0x70);
                    pvVar115 = *(void **)(phVar123 + 0x78);
                  }
                  uVar60 = *(uint *)((long)pphVar97 + 0x40);
                }
                else {
                  pvVar115 = pvVar53;
                }
              }
            }
            uVar105 = *(uint *)(phVar123 + 0x5c);
            uVar40 = (ulong)*(uint *)(phVar123 + 100);
            ppVar61 = (pthread_mutex_t *)(uVar40 * 5);
            *(undefined4 *)((long)pvVar115 + uVar40 * 0x14 + 0x10) =
                 *(undefined4 *)((long)pvVar53 + (ulong)uVar105 * 0x14 + 0x10);
            puVar109 = (undefined8 *)((long)pvVar53 + (ulong)uVar105 * 0x14);
            uVar44 = puVar109[1];
            puVar2 = (undefined8 *)((long)pvVar115 + uVar40 * 0x14);
            *puVar2 = *puVar109;
            puVar2[1] = uVar44;
            iVar39 = *(int *)(phVar123 + 100);
          }
          *(int *)(phVar123 + 100) = iVar39 + 1;
        }
        uVar105 = *(int *)(phVar123 + 0x5c) + 1;
        uVar132 = (ulong)uVar105;
        *(uint *)(phVar123 + 0x5c) = uVar105;
        lVar75 = *(long *)((long)pphVar97 + 0x20);
        if (uVar36 <= uVar105) break;
      } while( true );
    }
    goto LAB_003f8671;
  }
  if (*(long *)(lVar79 + 0x10) == 0) {
    param_5 = (uint *)0x0;
  }
  else {
    param_5 = *(uint **)(*(long *)(lVar79 + 0x10) + 0x10);
  }
  pcVar74 = *(code **)(lVar79 + 0x30);
  *(undefined8 *)((long)pphVar97 + -8) = 0x3f85cf;
  (*pcVar74)();
  in_XMM1._8_8_ = extraout_XMM1_Qb_26;
  in_XMM1._0_8_ = extraout_XMM1_Qa_17;
  if (phVar123[0x5a] == (hb_buffer_t)0x0) {
LAB_003f8663:
    uVar105 = *(int *)(phVar123 + 0x5c) + 1;
    *(uint *)(phVar123 + 0x5c) = uVar105;
  }
  else {
    pvVar115 = *(void **)(phVar123 + 0x78);
    pvVar53 = *(void **)(phVar123 + 0x70);
    iVar39 = *(int *)(phVar123 + 100);
    if ((pvVar115 == pvVar53) && (iVar39 == *(int *)(phVar123 + 0x5c))) {
LAB_003f865d:
      *(int *)(phVar123 + 100) = iVar39 + 1;
      goto LAB_003f8663;
    }
    uVar105 = iVar39 + 1;
    if ((uVar105 == 0) || (uVar105 < *(uint *)(phVar123 + 0x68))) {
      if (pvVar115 == pvVar53) {
LAB_003f8600:
        uVar105 = *(uint *)(phVar123 + 100);
        if (*(int *)(phVar123 + 0x5c) + 1U < uVar105 + 1) {
          pvVar115 = *(void **)(phVar123 + 0x80);
          *(void **)(phVar123 + 0x78) = pvVar115;
          if ((ulong)uVar105 != 0) {
            *(undefined8 *)((long)pphVar97 + -8) = 0x3f862d;
            memcpy(pvVar115,pvVar53,(ulong)uVar105 * 0x14);
            pvVar53 = *(void **)(phVar123 + 0x70);
            pvVar115 = *(void **)(phVar123 + 0x78);
          }
        }
        else {
          pvVar115 = pvVar53;
        }
      }
LAB_003f863a:
      uVar105 = *(uint *)(phVar123 + 0x5c);
      uVar40 = (ulong)*(uint *)(phVar123 + 100);
      ppVar61 = (pthread_mutex_t *)(uVar40 * 5);
      *(undefined4 *)((long)pvVar115 + uVar40 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar53 + (ulong)uVar105 * 0x14 + 0x10);
      puVar109 = (undefined8 *)((long)pvVar53 + (ulong)uVar105 * 0x14);
      uVar44 = puVar109[1];
      puVar2 = (undefined8 *)((long)pvVar115 + uVar40 * 0x14);
      *puVar2 = *puVar109;
      puVar2[1] = uVar44;
      iVar39 = *(int *)(phVar123 + 100);
      goto LAB_003f865d;
    }
    *(undefined8 *)((long)pphVar97 + -8) = 0x3f871a;
    uVar44 = hb_buffer_t::enlarge(phVar123,uVar105);
    if ((char)uVar44 != '\0') {
      pvVar53 = *(void **)(phVar123 + 0x70);
      pvVar115 = *(void **)(phVar123 + 0x78);
      uVar60 = *(uint *)((long)pphVar97 + 0x40);
      if (pvVar115 == pvVar53) goto LAB_003f8600;
      goto LAB_003f863a;
    }
    uVar105 = *(uint *)(phVar123 + 0x5c);
    uVar60 = *(uint *)((long)pphVar97 + 0x40);
  }
  uVar132 = (ulong)uVar105;
  lVar75 = *(long *)((long)pphVar97 + 0x20);
LAB_003f8671:
  if ((uVar37 <= (uint)uVar132) || (phVar123[0x58] == (hb_buffer_t)0x0)) goto LAB_003f8afe;
  param_5 = *(uint **)(phVar123 + 0x70);
  goto LAB_003f8560;
LAB_003f8a7e:
  uVar105 = *(uint *)(phVar123 + 0x5c);
  uVar60 = *(uint *)((long)pphVar97 + 0x40);
  lVar75 = *(long *)((long)pphVar97 + 0x20);
  ppVar41 = ppVar61;
  goto joined_r0x003f892a;
LAB_003f8afe:
  if (uVar36 <= (uint)uVar132) goto LAB_003f8410;
  lVar79 = *(long *)(phVar123 + 0x70);
  uVar38 = *(undefined4 *)(lVar79 + uVar132 * 0x14);
  *(undefined4 *)(lVar79 + 0xc + uVar132 * 0x14) = 0;
  lVar68 = *(long *)(*(long *)(lVar75 + 0x90) + 0x10);
  if (lVar68 == 0) {
    param_5 = (uint *)0x0;
  }
  else {
    param_5 = *(uint **)(lVar68 + 0x10);
  }
  ppVar61 = (pthread_mutex_t *)(lVar79 + uVar132 * 0x14 + 0xc);
  uVar44 = *(undefined8 *)(lVar75 + 0x98);
  pcVar74 = *(code **)(*(long *)(lVar75 + 0x90) + 0x30);
  *(undefined8 *)((long)pphVar97 + -8) = 0x3f8b46;
  uVar132 = (*pcVar74)(lVar75,uVar44,uVar38);
  in_XMM1._8_8_ = extraout_XMM1_Qb_30;
  in_XMM1._0_8_ = extraout_XMM1_Qa_21;
  if (phVar123[0x5a] != (hb_buffer_t)0x0) {
    pvVar115 = *(void **)(phVar123 + 0x78);
    pvVar53 = *(void **)(phVar123 + 0x70);
    iVar39 = *(int *)(phVar123 + 100);
    if ((pvVar115 != pvVar53) || (iVar39 != *(int *)(phVar123 + 0x5c))) {
      uVar36 = iVar39 + 1;
      if ((uVar36 == 0) || (uVar36 < *(uint *)(phVar123 + 0x68))) {
        if (pvVar115 == pvVar53) {
LAB_003f8b77:
          uVar36 = *(uint *)(phVar123 + 100);
          if (*(int *)(phVar123 + 0x5c) + 1U < uVar36 + 1) {
            pvVar115 = *(void **)(phVar123 + 0x80);
            *(void **)(phVar123 + 0x78) = pvVar115;
            if ((ulong)uVar36 != 0) {
              *(undefined8 *)((long)pphVar97 + -8) = 0x3f8ba4;
              memcpy(pvVar115,pvVar53,(ulong)uVar36 * 0x14);
              pvVar53 = *(void **)(phVar123 + 0x70);
              pvVar115 = *(void **)(phVar123 + 0x78);
            }
          }
          else {
            pvVar115 = pvVar53;
          }
        }
      }
      else {
        *(undefined8 *)((long)pphVar97 + -8) = 0x3f8c18;
        uVar132 = hb_buffer_t::enlarge(phVar123,uVar36);
        if ((char)uVar132 == '\0') goto LAB_003f8410;
        pvVar53 = *(void **)(phVar123 + 0x70);
        pvVar115 = *(void **)(phVar123 + 0x78);
        if (pvVar115 == pvVar53) goto LAB_003f8b77;
      }
      uVar36 = *(uint *)(phVar123 + 0x5c);
      uVar40 = (ulong)*(uint *)(phVar123 + 100);
      ppVar61 = (pthread_mutex_t *)(uVar40 * 5);
      *(undefined4 *)((long)pvVar115 + uVar40 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar53 + (ulong)uVar36 * 0x14 + 0x10);
      puVar109 = (undefined8 *)((long)pvVar53 + (ulong)uVar36 * 0x14);
      uVar44 = puVar109[1];
      puVar2 = (undefined8 *)((long)pvVar115 + uVar40 * 0x14);
      *puVar2 = *puVar109;
      puVar2[1] = uVar44;
      iVar39 = *(int *)(phVar123 + 100);
    }
    uVar132 = (ulong)(iVar39 + 1U);
    *(uint *)(phVar123 + 100) = iVar39 + 1U;
  }
  *(int *)(phVar123 + 0x5c) = *(int *)(phVar123 + 0x5c) + 1;
LAB_003f8410:
  phVar99 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
  uVar40 = (ulong)*(uint *)(phVar99 + 0x5c);
  phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
  if ((uVar35 <= *(uint *)(phVar99 + 0x5c)) ||
     (uVar44 = CONCAT71((int7)(uVar132 >> 8),1), phVar99[0x58] == (hb_buffer_t)0x0))
  goto LAB_003f8c66;
  goto LAB_003f8250;
LAB_003f8c66:
  *(undefined8 *)((long)pphVar97 + -8) = 0x3f8c6e;
  hb_buffer_t::sync(phVar99);
  uVar44 = extraout_XMM0_Qa_11;
LAB_003f8c6e:
  uVar48 = *(undefined8 *)((long)pphVar97 + 8);
  *(undefined8 *)((long)pphVar97 + -8) = 0x3f8c87;
  bVar133 = hb_buffer_t::message
                      (uVar44,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                       in_XMM6._0_8_,in_XMM7._0_8_,phVar99,uVar48,"start reorder",ppVar61,param_5,
                       phVar123,*(undefined1 *)pphVar97);
  uVar44 = extraout_XMM0_23._0_8_;
  if (bVar133) {
    uVar35 = **(uint **)((long)pphVar97 + 0x38);
    plVar108 = *(long **)((long)pphVar97 + 0x28);
    if (uVar35 != 0) {
      lVar75 = *plVar108;
      ppVar41 = (pthread_mutex_t *)0x0;
      *(uint *)((long)pphVar97 + 0x48) = uVar35;
      *(long *)((long)pphVar97 + 0x78) = lVar75;
      auVar145 = extraout_XMM0_23;
      do {
        while( true ) {
          uVar44 = auVar145._0_8_;
          iVar39 = (int)ppVar41;
          uVar36 = *(uint *)(lVar75 + 0x10 + (long)ppVar41 * 0x14);
          if (((0x1c00U >> (uVar36 & 0x1f) & 1) != 0) && (0xff < (uVar36 & 0xffff))) break;
          ppVar81 = ppVar41;
LAB_003f8cc3:
          uVar48 = *(undefined8 *)((long)pphVar97 + 8);
          uVar36 = (int)ppVar81 + 1;
          ppVar41 = (pthread_mutex_t *)(ulong)uVar36;
          if (uVar35 <= uVar36) goto LAB_003f8ee7;
        }
        uVar37 = iVar39 + 1;
        uVar36 = uVar37;
        if (uVar37 < uVar35) {
          uVar36 = uVar35;
        }
        ppVar81 = ppVar41;
        do {
          uVar60 = (int)ppVar81 + 1;
          ppVar81 = (pthread_mutex_t *)(ulong)uVar60;
          if (uVar35 <= uVar60) {
            ppVar81 = (pthread_mutex_t *)(ulong)uVar36;
            uVar105 = uVar36 - iVar39;
            uVar60 = uVar36;
            goto joined_r0x003f8d3a;
          }
          uVar105 = *(uint *)(lVar75 + 0x10 + (ulong)uVar60 * 0x14);
        } while (((0x1c00U >> (uVar105 & 0x1f) & 1) != 0) && (0xff < (uVar105 & 0xffff)));
        uVar105 = uVar60 - iVar39;
joined_r0x003f8d3a:
        ppVar61 = (pthread_mutex_t *)(ulong)uVar105;
        if (0x20 < uVar105) goto LAB_003f8cc3;
        ppVar81 = ppVar41;
        if (uVar37 < uVar60) {
          ppVar73 = (pthread_mutex_t *)(ulong)uVar37;
          uVar35 = iVar39 + 2;
          *(int *)((long)pphVar97 + 0x18) = iVar39;
          *(__pthread_mutex_s **)((long)pphVar97 + 0x50) = &ppVar41->__data;
          do {
            iVar39 = *(int *)((long)pphVar97 + 0x18);
            *(uint *)((long)pphVar97 + 0x18) = (uint)ppVar73;
            ppVar106 = ppVar73;
            if ((uint)ppVar81 < (uint)ppVar73) {
              ppVar106 = ppVar81;
            }
            param_5 = (uint *)((ulong)ppVar106 & 0xffffffff);
            ppVar106 = ppVar73;
            uVar36 = uVar35;
            do {
              ppVar28 = (pthread_mutex_t *)param_5;
              if (ppVar106 <= ppVar41) goto joined_r0x003f8e68;
              ppVar106 = (pthread_mutex_t *)((long)ppVar106 + -1);
              uVar111 = *(ushort *)(*plVar108 + 0x10 + ((ulong)ppVar106 & 0xffffffff) * 0x14);
              uVar71 = uVar111 >> 8;
              if ((0x1c00U >> (uVar111 & 0x1f) & 1) == 0) {
                uVar71 = 0;
              }
              uVar111 = *(ushort *)(*plVar108 + 0x10 + (long)ppVar73 * 0x14);
              ppVar61 = (pthread_mutex_t *)(ulong)uVar111;
              uVar110 = uVar111 >> 8;
              if ((0x1c00U >> (uVar111 & 0x1f) & 1) == 0) {
                uVar110 = 0;
              }
              uVar36 = uVar36 - 1;
            } while (uVar110 < uVar71);
            ppVar28 = (pthread_mutex_t *)(ulong)uVar36;
joined_r0x003f8e68:
            if (ppVar73 != ppVar28) {
              *(uint *)((long)pphVar97 + 0x20) = uVar35;
              uVar35 = (uint)ppVar28;
              if (1 < (iVar39 + 2U) - uVar35) {
                *(undefined8 *)((long)pphVar97 + -8) = 0x3f8e8f;
                hb_buffer_t::merge_clusters_impl
                          (*(hb_buffer_t **)((long)pphVar97 + 0x10),uVar35,iVar39 + 2U);
                in_XMM1._8_8_ = extraout_XMM1_Qb_31;
                in_XMM1._0_8_ = extraout_XMM1_Qa_22;
                plVar108 = *(long **)((long)pphVar97 + 0x28);
              }
              lVar75 = *plVar108;
              *(undefined4 *)((long)pphVar97 + 0x250) =
                   *(undefined4 *)(lVar75 + 0x10 + (long)ppVar73 * 0x14);
              puVar109 = (undefined8 *)(lVar75 + (long)ppVar73 * 0x14);
              uVar44 = puVar109[1];
              *(undefined8 *)((long)pphVar97 + 0x240) = *puVar109;
              *(undefined8 *)((long)pphVar97 + 0x248) = uVar44;
              *(long *)((long)pphVar97 + 0x58) = (long)ppVar28 * 0x14;
              *(undefined8 *)((long)pphVar97 + -8) = 0x3f8daf;
              memmove((void *)(lVar75 + (ulong)(uVar35 + 1) * 0x14),
                      (void *)(lVar75 + (long)ppVar28 * 0x14),
                      (ulong)(*(int *)((long)pphVar97 + 0x18) - uVar35) * 0x14);
              plVar108 = *(long **)((long)pphVar97 + 0x28);
              lVar75 = *plVar108;
              auVar145 = *(undefined1 (*) [16])((long)pphVar97 + 0x240);
              lVar79 = *(long *)((long)pphVar97 + 0x58);
              *(undefined1 (*) [16])(lVar75 + lVar79) = auVar145;
              ppVar61 = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar97 + 0x250);
              *(uint *)(lVar75 + 0x10 + lVar79) = *(uint *)((long)pphVar97 + 0x250);
              ppVar81 = *(pthread_mutex_t **)((long)pphVar97 + 0x50);
              uVar35 = *(uint *)((long)pphVar97 + 0x20);
            }
            ppVar73 = (pthread_mutex_t *)((long)&(ppVar73->__data).__lock + 1);
            uVar35 = uVar35 + 1;
          } while ((uint)ppVar73 < uVar60);
        }
        pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 0x30) + 0x80) + 0x48);
        uVar48 = *(undefined8 *)((long)pphVar97 + 8);
        if (pcVar74 != (code *)0x0) {
          ppVar61 = (pthread_mutex_t *)(ulong)uVar60;
          *(undefined8 *)((long)pphVar97 + -8) = 0x3f8ecb;
          auVar261 = (*pcVar74)(*(undefined8 *)((long)pphVar97 + 0x60),
                                *(undefined8 *)((long)pphVar97 + 0x10),(ulong)ppVar81 & 0xffffffff);
          in_XMM1._0_8_ = auVar261._8_8_;
          auVar145._0_8_ = auVar261._0_8_;
          in_XMM1._8_8_ = extraout_XMM1_Qb_32;
          auVar145._8_8_ = extraout_XMM0_Qb_16;
          plVar108 = *(long **)((long)pphVar97 + 0x28);
        }
        uVar44 = auVar145._0_8_;
        uVar35 = *(uint *)((long)pphVar97 + 0x48);
        lVar75 = *(long *)((long)pphVar97 + 0x78);
        ppVar41 = (pthread_mutex_t *)(ulong)(uVar60 + 1);
      } while (uVar60 + 1 < uVar35);
    }
LAB_003f8ee7:
    phVar99 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
    *(undefined8 *)((long)pphVar97 + -8) = 0x3f8f00;
    hb_buffer_t::message
              (uVar44,in_XMM1._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
               in_XMM6._0_8_,in_XMM7._0_8_,phVar99,uVar48,"end reorder",ppVar61,param_5,plVar108,
               *(undefined1 *)pphVar97);
    phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
    uVar60 = *(uint *)((long)pphVar97 + 0x40);
    hVar9 = phVar99[0xc0];
    in_XMM0 = extraout_XMM0_24;
  }
  else {
    phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
    hVar9 = phVar99[0xc0];
    in_XMM0 = extraout_XMM0_23;
  }
  bVar133 = true;
joined_r0x003f8f2a:
  if (((byte)hVar9 & 0x10) != 0) {
    uVar35 = **(uint **)((long)pphVar97 + 0x38);
    ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
    if (2 < uVar35) {
      lVar75 = *(long *)phVar123;
      ppVar61 = (pthread_mutex_t *)((ulong)(uVar35 - 1) * 0x14 + -0x14);
      lVar79 = 0;
      do {
        if (*(int *)(lVar79 + 0x14 + lVar75) == 0x34f) {
          uVar111 = *(ushort *)(lVar79 + 0x38 + lVar75);
          if (((0x1c00U >> (uVar111 & 0x1f) & 1) != 0) && (0xff < uVar111)) {
            uVar71 = *(ushort *)(lVar79 + 0x10 + lVar75);
            uVar110 = uVar71 >> 8;
            if ((0x1c00U >> (uVar71 & 0x1f) & 1) == 0) {
              uVar110 = 0;
            }
            if (uVar111 >> 8 < uVar110) goto LAB_003f8f65;
          }
          pbVar119 = (byte *)(lVar79 + lVar75 + 0x24);
          *pbVar119 = *pbVar119 & 0xbf;
        }
LAB_003f8f65:
        lVar79 = lVar79 + 0x14;
      } while (ppVar61 != (pthread_mutex_t *)lVar79);
    }
  }
  if (((bVar133) && (phVar99[0x58] != (hb_buffer_t)0x0)) && ((uVar60 & 0xfffffffe) == 2)) {
    *(undefined2 *)(phVar99 + 0x5a) = 1;
    lVar75 = *(long *)(phVar99 + 0x70);
    *(long *)(phVar99 + 0x78) = lVar75;
    uVar35 = *(uint *)(phVar99 + 0x60);
    *(undefined4 *)(phVar99 + 100) = 1;
    *(undefined4 *)(phVar99 + 0x5c) = 1;
    if (1 < uVar35) {
      ppVar61 = (pthread_mutex_t *)0x1;
      uVar36 = 0;
      do {
        uVar111 = *(ushort *)(lVar75 + 0x10 + (long)ppVar61 * 0x14);
        if ((0x1c00U >> (uVar111 & 0x1f) & 1) == 0) {
LAB_003f91e0:
          lVar75 = *(long *)((long)pphVar97 + 0x10);
          if (*(char *)(lVar75 + 0x5a) == '\0') {
            iVar39 = *(int *)(lVar75 + 100);
          }
          else {
            pvVar115 = *(void **)(lVar75 + 0x78);
            pvVar53 = *(void **)(lVar75 + 0x70);
            iVar39 = *(int *)(lVar75 + 100);
            if ((pvVar115 != pvVar53) || (iVar39 != *(int *)(lVar75 + 0x5c))) {
              uVar37 = iVar39 + 1;
              if ((uVar37 == 0) ||
                 (ppVar61 = *(pthread_mutex_t **)((long)pphVar97 + 0x10),
                 uVar37 < *(uint *)((long)ppVar61 + 0x68))) {
                if (pvVar115 == pvVar53) goto LAB_003f9223;
              }
              else {
                phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
                *(undefined8 *)((long)pphVar97 + -8) = 0x3f930f;
                uVar44 = hb_buffer_t::enlarge(phVar123,uVar37);
                if ((char)uVar44 == '\0') break;
                pvVar53 = *(void **)(phVar123 + 0x70);
                pvVar115 = *(void **)(phVar123 + 0x78);
                phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
                if (pvVar115 == pvVar53) {
LAB_003f9223:
                  lVar75 = *(long *)((long)pphVar97 + 0x10);
                  uVar37 = *(uint *)(lVar75 + 100);
                  if (*(int *)(lVar75 + 0x5c) + 1U < uVar37 + 1) {
                    pvVar115 = *(void **)(lVar75 + 0x80);
                    *(void **)(lVar75 + 0x78) = pvVar115;
                    if ((ulong)uVar37 != 0) {
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3f925d;
                      memcpy(pvVar115,pvVar53,(ulong)uVar37 * 0x14);
                      phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
                      pvVar53 = *(void **)(lVar75 + 0x70);
                      pvVar115 = *(void **)(lVar75 + 0x78);
                    }
                  }
                  else {
                    pvVar115 = pvVar53;
                  }
                }
              }
              lVar75 = *(long *)((long)pphVar97 + 0x10);
              uVar37 = *(uint *)(lVar75 + 0x5c);
              uVar60 = *(uint *)(lVar75 + 100);
              *(undefined4 *)((long)pvVar115 + (ulong)uVar60 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar53 + (ulong)uVar37 * 0x14 + 0x10);
              puVar109 = (undefined8 *)((long)pvVar53 + (ulong)uVar37 * 0x14);
              uVar44 = puVar109[1];
              puVar2 = (undefined8 *)((long)pvVar115 + (ulong)uVar60 * 0x14);
              *puVar2 = *puVar109;
              puVar2[1] = uVar44;
              iVar39 = *(int *)(lVar75 + 100);
            }
            iVar39 = iVar39 + 1;
            *(int *)(lVar75 + 100) = iVar39;
          }
          uVar37 = *(int *)(lVar75 + 0x5c) + 1;
          *(uint *)(lVar75 + 0x5c) = uVar37;
          uVar60 = iVar39 - 1;
          uVar40 = (ulong)uVar60;
          if (iVar39 == 0) {
            uVar40 = 0;
          }
          uVar105 = (uint)*(ushort *)(*(long *)(lVar75 + 0x78) + 0x10 + uVar40 * 0x14);
          if (uVar105 < 0x100) {
            uVar36 = uVar60;
          }
          if ((0x1c00U >> (uVar105 & 0x1f) & 1) == 0) {
            uVar36 = uVar60;
          }
        }
        else {
          iVar39 = *(int *)(*(long *)((long)pphVar97 + 0x10) + 100);
          uVar37 = iVar39 - 1;
          lVar79 = *(long *)(*(long *)((long)pphVar97 + 0x10) + 0x78);
          if (uVar36 != uVar37) {
            if (iVar39 == 0) {
              uVar37 = 0;
            }
            uVar71 = *(ushort *)(lVar79 + 0x10 + (ulong)uVar37 * 0x14);
            uVar110 = uVar71 >> 8;
            if ((0x1c00U >> (uVar71 & 0x1f) & 1) == 0) {
              uVar110 = 0;
            }
            if (uVar111 >> 8 <= uVar110) goto LAB_003f91e0;
          }
          uVar38 = *(undefined4 *)(lVar79 + (ulong)uVar36 * 0x14);
          uVar11 = *(undefined4 *)(lVar75 + (long)ppVar61 * 0x14);
          *(undefined8 *)((long)pphVar97 + -8) = 0x3f90eb;
          cVar34 = (**(code **)((long)pphVar97 + 0xf8))
                             ((undefined1 *)((long)pphVar97 + 0xd0),uVar38,uVar11,
                              (undefined1 *)((long)pphVar97 + 0x240));
          in_XMM1._8_8_ = extraout_XMM1_Qb_33;
          in_XMM1._0_8_ = extraout_XMM1_Qa_23;
          phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
          if (cVar34 == '\0') goto LAB_003f91e0;
          *(undefined4 *)((long)pphVar97 + 0x90) = 0;
          lVar75 = *(long *)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x10);
          if (lVar75 == 0) {
            uVar44 = 0;
          }
          else {
            uVar44 = *(undefined8 *)(lVar75 + 0x10);
          }
          uVar48 = *(undefined8 *)(*(long *)((long)pphVar97 + 8) + 0x98);
          ppVar61 = (pthread_mutex_t *)((long)pphVar97 + 0x90);
          pcVar74 = *(code **)(*(long *)(*(long *)((long)pphVar97 + 8) + 0x90) + 0x30);
          *(undefined8 *)((long)pphVar97 + -8) = 0x3f913f;
          iVar39 = (*pcVar74)(*(long *)((long)pphVar97 + 8),uVar48,
                              *(undefined4 *)((long)pphVar97 + 0x240),ppVar61,uVar44);
          in_XMM1._8_8_ = extraout_XMM1_Qb_34;
          in_XMM1._0_8_ = extraout_XMM1_Qa_24;
          phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
          if (iVar39 == 0) goto LAB_003f91e0;
          phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
          if (phVar123[0x5a] == (hb_buffer_t)0x0) {
            uVar37 = *(uint *)(phVar123 + 100);
          }
          else {
            pvVar115 = *(void **)(phVar123 + 0x78);
            pvVar53 = *(void **)(phVar123 + 0x70);
            iVar39 = *(int *)(phVar123 + 100);
            if ((pvVar115 != pvVar53) || (iVar39 != *(int *)(phVar123 + 0x5c))) {
              uVar37 = iVar39 + 1;
              if ((uVar37 == 0) || (uVar37 < *(uint *)(*(long *)((long)pphVar97 + 0x10) + 0x68))) {
                if (pvVar115 == pvVar53) goto LAB_003f918f;
              }
              else {
                phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
                *(undefined8 *)((long)pphVar97 + -8) = 0x3f933d;
                uVar44 = hb_buffer_t::enlarge(phVar123,uVar37);
                if ((char)uVar44 == '\0') break;
                pvVar53 = *(void **)(phVar123 + 0x70);
                pvVar115 = *(void **)(phVar123 + 0x78);
                if (pvVar115 == pvVar53) {
LAB_003f918f:
                  lVar75 = *(long *)((long)pphVar97 + 0x10);
                  uVar37 = *(uint *)(lVar75 + 100);
                  if (*(int *)(lVar75 + 0x5c) + 1U < uVar37 + 1) {
                    pvVar115 = *(void **)(lVar75 + 0x80);
                    *(void **)(lVar75 + 0x78) = pvVar115;
                    if ((ulong)uVar37 != 0) {
                      *(undefined8 *)((long)pphVar97 + -8) = 0x3f91c9;
                      memcpy(pvVar115,pvVar53,(ulong)uVar37 * 0x14);
                      pvVar53 = *(void **)(lVar75 + 0x70);
                      pvVar115 = *(void **)(lVar75 + 0x78);
                    }
                  }
                  else {
                    pvVar115 = pvVar53;
                  }
                }
              }
              phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
              uVar37 = *(uint *)(phVar123 + 0x5c);
              uVar60 = *(uint *)(phVar123 + 100);
              *(undefined4 *)((long)pvVar115 + (ulong)uVar60 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar53 + (ulong)uVar37 * 0x14 + 0x10);
              puVar109 = (undefined8 *)((long)pvVar53 + (ulong)uVar37 * 0x14);
              uVar44 = puVar109[1];
              puVar2 = (undefined8 *)((long)pvVar115 + (ulong)uVar60 * 0x14);
              *puVar2 = *puVar109;
              puVar2[1] = uVar44;
              iVar39 = *(int *)(phVar123 + 100);
            }
            uVar37 = iVar39 + 1;
            *(uint *)(phVar123 + 100) = uVar37;
          }
          *(int *)(phVar123 + 0x5c) = *(int *)(phVar123 + 0x5c) + 1;
          *(undefined8 *)((long)pphVar97 + -8) = 0x3f92bc;
          hb_buffer_t::merge_out_clusters(phVar123,uVar36,uVar37);
          *(int *)(phVar123 + 100) = *(int *)(phVar123 + 100) + -1;
          lVar75 = *(long *)(phVar123 + 0x78);
          lVar79 = (ulong)uVar36 * 0x14;
          *(undefined4 *)(lVar75 + lVar79) = *(undefined4 *)((long)pphVar97 + 0x240);
          *(undefined4 *)(lVar75 + 0xc + lVar79) = *(undefined4 *)((long)pphVar97 + 0x90);
          lVar75 = *(long *)(phVar123 + 0x78);
          *(undefined8 *)((long)pphVar97 + -8) = 0x3f92ed;
          _hb_glyph_info_set_unicode_props((uint *)(lVar79 + lVar75),(long)phVar123);
          in_XMM1._8_8_ = extraout_XMM1_Qb_35;
          in_XMM1._0_8_ = extraout_XMM1_Qa_25;
          uVar37 = *(uint *)(phVar123 + 0x5c);
          phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
        }
        ppVar61 = (pthread_mutex_t *)(ulong)uVar37;
        if (uVar35 <= uVar37) break;
        lVar75 = *(long *)phVar123;
      } while( true );
    }
    phVar99 = *(hb_buffer_t **)((long)pphVar97 + 0x10);
    *(undefined8 *)((long)pphVar97 + -8) = 0x3f9364;
    hb_buffer_t::sync(phVar99);
    phVar123 = *(hb_buffer_t **)((long)pphVar97 + 0x28);
    in_XMM0 = extraout_XMM0_25;
  }
  goto LAB_003f9369;
code_r0x003faa9d:
  ppVar81 = (pthread_mutex_t *)(ppVar81->__data).__list.__prev;
  if ((ppVar81 == (pthread_mutex_t *)0x0) || (ppVar81 == (pthread_mutex_t *)&_hb_Null_hb_font_t))
  goto joined_r0x003faaaf;
  goto LAB_003faa90;
LAB_003fc117:
  *(undefined8 *)((long)pphVar97 + -8) = 0x3fc12b;
  bVar133 = hb_buffer_t::message
                      (uVar44,auVar162._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_
                       ,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)unaff_R14,unaff_R13,
                       "start fallback kern",ppVar61,param_5,param_6,*(undefined1 *)pphVar97);
  if (bVar133) {
    uVar35 = *(uint *)((long)unaff_R14 + 0x38) & 0xfffffffd;
    *(uint *)((long)pphVar97 + 0x230) = uVar35;
    puVar109 = *(undefined8 **)((long)pphVar97 + 0x48);
    lVar75 = extraout_XMM0_Qa_32;
    if (uVar35 == 5) {
      uVar35 = **(uint **)((long)pphVar97 + 0x38);
      ppVar61 = *(pthread_mutex_t **)((long)pphVar97 + 0x28);
      if (1 < uVar35) {
        ppVar61 = *(pthread_mutex_t **)&ppVar61->__data;
        uVar40 = (ulong)(uVar35 - 1);
        plVar108 = (long *)((long)ppVar61 + uVar40 * 0x14);
        uVar132 = 0;
        do {
          uVar40 = uVar40 - 1;
          *(int *)((long)pphVar97 + 0xe0) = (int)plVar108[2];
          lVar75 = plVar108[1];
          *(long *)((long)pphVar97 + 0xd0) = *plVar108;
          *(long *)((long)pphVar97 + 0xd8) = lVar75;
          *(int *)(plVar108 + 2) = (int)*(long *)((long)ppVar61 + 0x10);
          lVar75 = *(long *)((long)ppVar61 + 8);
          *plVar108 = ppVar61->__align;
          plVar108[1] = lVar75;
          *(undefined4 *)((long)ppVar61 + 0x10) = *(undefined4 *)((long)pphVar97 + 0xe0);
          lVar75 = *(long *)((long)pphVar97 + 0xd0);
          lVar79 = *(long *)((long)pphVar97 + 0xd8);
          ppVar61->__align = lVar75;
          *(long *)((long)ppVar61 + 8) = lVar79;
          uVar132 = uVar132 + 1;
          ppVar61 = (pthread_mutex_t *)((long)ppVar61 + 0x14);
          plVar108 = (long *)((long)plVar108 + -0x14);
        } while (uVar132 < (uVar40 & 0xffffffff));
      }
      if (*(char *)((long)unaff_R14 + 0x5b) != '\0') {
        uVar36 = **(uint **)((long)pphVar97 + 0x38);
        ppVar61 = (pthread_mutex_t *)(ulong)uVar36;
        if (uVar36 < uVar35) {
          uVar35 = uVar36;
        }
        if (1 < uVar35) {
          ppVar61 = (pthread_mutex_t *)*puVar109;
          uVar40 = (ulong)(uVar35 - 1);
          piVar49 = &(ppVar61->__data).__lock + uVar40 * 5;
          uVar132 = 0;
          do {
            uVar40 = uVar40 - 1;
            *(int *)((long)pphVar97 + 0xe0) = piVar49[4];
            lVar75 = *(long *)(piVar49 + 2);
            *(long *)((long)pphVar97 + 0xd0) = *(long *)piVar49;
            *(long *)((long)pphVar97 + 0xd8) = lVar75;
            piVar49[4] = (ppVar61->__data).__kind;
            lVar75 = *(long *)&(ppVar61->__data).__owner;
            *(long *)piVar49 = ppVar61->__align;
            *(long *)(piVar49 + 2) = lVar75;
            (ppVar61->__data).__kind = *(int *)((long)pphVar97 + 0xe0);
            lVar75 = *(long *)((long)pphVar97 + 0xd0);
            uVar44 = *(undefined8 *)((long)pphVar97 + 0xd8);
            ppVar61->__align = lVar75;
            *(int *)((long)&ppVar61->__data + 8) = (int)uVar44;
            *(int *)((long)&ppVar61->__data + 0xc) = (int)((ulong)uVar44 >> 0x20);
            uVar132 = uVar132 + 1;
            ppVar61 = (pthread_mutex_t *)((long)ppVar61 + 0x14);
            piVar49 = piVar49 + -5;
          } while (uVar132 < (uVar40 & 0xffffffff));
        }
      }
    }
    *(undefined4 *)((long)pphVar97 + 0x22c) = *(undefined4 *)((long)unaff_R14 + 0x38);
    *(undefined4 *)((long)pphVar97 + 0x18) = *(undefined4 *)((long)unaff_R15 + 0x100);
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fc279;
    bVar133 = hb_buffer_t::message
                        (lVar75,auVar162._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                         in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)unaff_R14,
                         unaff_R13,"start kern",ppVar61,param_5,param_6,*(undefined1 *)pphVar97);
    auVar260._8_8_ = auVar162._0_8_;
    auVar260._0_8_ = extraout_XMM0_Qa_33;
    if (bVar133) {
      if ((*(byte *)((long)unaff_R14 + 0x18) & 0x40) != 0) {
        uVar35 = *(uint *)((long)unaff_R14 + 0x60);
        *(byte *)((long)unaff_R14 + 0xc0) = *(byte *)((long)unaff_R14 + 0xc0) | 0x20;
        if ((ulong)uVar35 != 0) {
          lVar75 = **(long **)((long)pphVar97 + 0x28);
          if ((ulong)uVar35 - 1 < 3) {
            uVar40 = 0;
          }
          else {
            pbVar119 = (byte *)(lVar75 + 0x40);
            uVar40 = 0;
            do {
              pbVar119[-0x3c] = pbVar119[-0x3c] | 2;
              pbVar119[-0x28] = pbVar119[-0x28] | 2;
              pbVar119[-0x14] = pbVar119[-0x14] | 2;
              *pbVar119 = *pbVar119 | 2;
              uVar40 = uVar40 + 4;
              pbVar119 = pbVar119 + 0x50;
            } while ((uVar35 & 0xfffffffc) != uVar40);
          }
          unaff_R14 = *(uint **)((long)pphVar97 + 0x10);
          unaff_R13 = *(uint **)((long)pphVar97 + 8);
          unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
          if ((ulong)(uVar35 & 3) != 0) {
            lVar79 = 0;
            do {
              pbVar119 = (byte *)(lVar75 + uVar40 * 0x14 + 4 + lVar79);
              *pbVar119 = *pbVar119 | 2;
              lVar79 = lVar79 + 0x14;
            } while ((ulong)(uVar35 & 3) * 0x14 != lVar79);
          }
        }
      }
      param_5 = &_hb_NullPool;
      phVar3 = (hb_ot_apply_context_t *)((long)pphVar97 + 0xd0);
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fc2ae;
      OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                (phVar3,1,(long)unaff_R13,unaff_R14,
                 (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
      *(undefined4 *)((long)pphVar97 + 0x1fc) = *(undefined4 *)((long)pphVar97 + 0x18);
      *(undefined8 *)((long)pphVar97 + 0x218) = 0xffffffff;
      uVar33 = *(undefined1 *)((long)pphVar97 + 0x20f);
      if (*(int *)((long)pphVar97 + 0x158) != 0) {
        uVar33 = 0;
      }
      bVar133 = *(int *)((long)pphVar97 + 0x158) == 1;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = extraout_XMM1_Qa_33;
      auVar259 = auVar24 << 0x40;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = extraout_XMM1_Qa_33;
      *(undefined1 (*) [16])((long)pphVar97 + 0x138) = (undefined1  [16])0x0;
      *(undefined8 *)((long)pphVar97 + 0x148) = 0;
      *(undefined1 *)((long)pphVar97 + 0x131) = 1;
      *(bool *)((long)pphVar97 + 0x132) = bVar133;
      *(undefined4 *)((long)pphVar97 + 0x204) = 8;
      *(hb_ot_apply_context_t **)((long)pphVar97 + 0xe0) = phVar3;
      uVar35 = *(uint *)(*(long *)((long)pphVar97 + 0x170) + 0x60);
      ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
      *(uint *)((long)pphVar97 + 0x110) = uVar35;
      *(undefined1 (*) [16])((long)pphVar97 + 0xf8) = (undefined1  [16])0x0;
      *(undefined8 *)((long)pphVar97 + 0x108) = 0;
      *(undefined4 *)((long)pphVar97 + 0xe8) = 8;
      *(bool *)((long)pphVar97 + 0xf0) = bVar133;
      *(undefined1 *)((long)pphVar97 + 0xf1) = *(undefined1 *)((long)pphVar97 + 0x20e);
      *(bool *)((long)pphVar97 + 0xf2) = bVar133;
      *(bool *)((long)pphVar97 + 0x132) = bVar133;
      *(undefined4 *)((long)pphVar97 + 0xec) = *(undefined4 *)((long)pphVar97 + 0x18);
      *(undefined1 *)((long)pphVar97 + 0xf3) = uVar33;
      *(undefined1 *)((long)pphVar97 + 0xf4) = 0;
      *(hb_ot_apply_context_t **)((long)pphVar97 + 0x120) = phVar3;
      *(uint *)((long)pphVar97 + 0x150) = uVar35;
      *(undefined1 (*) [16])((long)pphVar97 + 0x138) = (undefined1  [16])0x0;
      *(undefined8 *)((long)pphVar97 + 0x148) = 0;
      *(undefined4 *)((long)pphVar97 + 0x128) = 8;
      *(bool *)((long)pphVar97 + 0x130) = bVar133 || *(char *)((long)pphVar97 + 0x20d) != '\0';
      *(undefined1 *)((long)pphVar97 + 0x131) = 1;
      *(undefined4 *)((long)pphVar97 + 300) = 0xffffffff;
      *(undefined1 *)((long)pphVar97 + 0x133) = uVar33;
      *(undefined1 *)((long)pphVar97 + 0x134) = 0;
      iVar39 = *(int *)((long)unaff_R14 + 0x60);
      *(int *)((long)pphVar97 + 0x58) = iVar39;
      auVar261 = auVar27 << 0x40;
      if (iVar39 != 0) {
        *(uint *)((long)pphVar97 + 0x23c) = *(uint *)((long)unaff_R14 + 0x38) & 0xfffffffe;
        *(undefined8 *)((long)pphVar97 + 0x20) = *(undefined8 *)((long)unaff_R14 + 0x70);
        *(undefined8 *)((long)pphVar97 + 0x280) = *(undefined8 *)((long)unaff_R14 + 0x80);
        *(uint *)((long)pphVar97 + 0x22c) = *(uint *)((long)pphVar97 + 0x22c) & 0xfffffffe;
        uVar35 = 0;
        do {
          while( true ) {
            while( true ) {
              uVar40 = (ulong)uVar35;
              ppVar61 = *(pthread_mutex_t **)((long)pphVar97 + 0x20);
              if (((&(ppVar61->__data).__count)[uVar40 * 5] & *(uint *)((long)pphVar97 + 0x18)) != 0
                 ) break;
              uVar35 = uVar35 + 1;
              auVar261 = auVar259;
              if (*(uint *)((long)pphVar97 + 0x58) <= uVar35) goto LAB_003fd203;
            }
            *(uint *)((long)pphVar97 + 0xd8) = uVar35;
            lVar75 = *(long *)((long)pphVar97 + 0xe0);
            ppVar61 = *(pthread_mutex_t **)(lVar75 + 0xa0);
            iVar39 = *(int *)((long)ppVar61 + 0x60);
            *(int *)((long)pphVar97 + 0x110) = iVar39;
            uVar36 = *(uint *)((long)ppVar61 + 0x5c);
            *(ulong *)((long)pphVar97 + 0x88) = uVar40;
            *(ulong *)((long)pphVar97 + 0x68) = uVar40 * 5;
            if (uVar36 == uVar35) {
              uVar33 = *(undefined1 *)(*(long *)((long)ppVar61 + 0x70) + 0xf + uVar40 * 0x14);
            }
            else {
              uVar33 = 0;
            }
            if (*(char *)((long)pphVar97 + 0xf3) == '\0') {
              uVar33 = 0;
            }
            *(undefined1 *)((long)pphVar97 + 0xf4) = uVar33;
            iVar39 = iVar39 + -1;
            if (iVar39 <= (int)uVar35) break;
            uVar36 = uVar35;
LAB_003fc4f0:
            uVar44 = auVar259._8_8_;
            uVar40 = (ulong)(uVar36 + 1);
            *(uint *)((long)pphVar97 + 0xd8) = uVar36 + 1;
            lVar79 = *(long *)((long)ppVar61 + 0x70);
            uVar36 = *(uint *)((long)pphVar97 + 0xe8);
            uVar111 = *(ushort *)(lVar79 + 0xc + uVar40 * 0x14);
            ppVar61 = (pthread_mutex_t *)(ulong)uVar111;
            if ((uVar36 & uVar111 & 0xe) != 0) goto LAB_003fc61a;
            puVar65 = (uint *)(lVar79 + uVar40 * 0x14);
            if ((uVar111 & 8) != 0) {
              if ((uVar36 & 0x10) == 0) {
                if (((uVar36 & 0xff00) == 0) ||
                   (uVar37 = uVar111 & 0xff00, ppVar61 = (pthread_mutex_t *)(ulong)uVar37,
                   (uVar36 & 0xff00) == uVar37)) goto LAB_003fc529;
              }
              else {
                uVar37 = *puVar65;
                paVar50 = *(accelerator_t **)(lVar75 + 0xf8);
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fc67f;
                uVar48 = OT::GDEF::accelerator_t::mark_set_covers(paVar50,uVar36 >> 0x10,uVar37);
                auVar259._8_8_ = uVar44;
                auVar259._0_8_ = extraout_XMM0_Qa_35;
                unaff_R14 = *(uint **)((long)pphVar97 + 0x10);
                if ((char)uVar48 != '\0') goto LAB_003fc529;
              }
LAB_003fc61a:
              uVar36 = *(uint *)((long)pphVar97 + 0xd8);
              if ((int)uVar36 < iVar39) goto code_r0x003fc62a;
              break;
            }
LAB_003fc529:
            lVar75 = lVar79 + uVar40 * 0x14;
            uVar111 = *(ushort *)(lVar79 + 0x10 + uVar40 * 0x14);
            uVar71 = 0;
            bVar133 = false;
            if (((((uVar111 & 0x20) != 0) &&
                 (bVar133 = false, (*(byte *)(lVar75 + 0xc) & 0x10) == 0)) &&
                ((*(char *)((long)pphVar97 + 0xf0) != '\0' ||
                 (bVar133 = false, (uVar111 & 0x21f) != 0x201)))) &&
               ((*(char *)((long)pphVar97 + 0xf1) != '\0' ||
                (bVar133 = false, (uVar111 & 0x11f) != 0x101)))) {
              bVar133 = (uVar111 & 0x40) == 0 || *(char *)((long)pphVar97 + 0xf2) != '\0';
            }
            ppVar61 = *(pthread_mutex_t **)((long)pphVar97 + 0x108);
            if (ppVar61 != (pthread_mutex_t *)0x0) {
              uVar111 = (ushort)(ppVar61->__data).__lock;
              uVar71 = uVar111 << 8 | uVar111 >> 8;
            }
            if (((*(uint *)(lVar79 + 4 + uVar40 * 0x14) & *(uint *)((long)pphVar97 + 0xec)) == 0) ||
               ((*(char *)((long)pphVar97 + 0xf4) != '\0' &&
                (*(char *)((long)pphVar97 + 0xf4) != *(char *)(lVar75 + 0xf))))) {
LAB_003fc60c:
              unaff_R14 = *(uint **)((long)pphVar97 + 0x10);
              if (bVar133) goto LAB_003fc61a;
              break;
            }
            if (*(code **)((long)pphVar97 + 0xf8) == (code *)0x0) {
              unaff_R14 = *(uint **)((long)pphVar97 + 0x10);
              if (bVar133) goto LAB_003fc61a;
            }
            else {
              *(undefined8 *)((long)pphVar97 + -8) = 0x3fc602;
              cVar34 = (**(code **)((long)pphVar97 + 0xf8))
                                 (puVar65,uVar71,*(undefined8 *)((long)pphVar97 + 0x100));
              auVar259._8_8_ = extraout_XMM1_Qa_34;
              auVar259._0_8_ = extraout_XMM0_Qa_34;
              if (cVar34 == '\0') goto LAB_003fc60c;
              ppVar61 = *(pthread_mutex_t **)((long)pphVar97 + 0x108);
              unaff_R14 = *(uint **)((long)pphVar97 + 0x10);
            }
            if (ppVar61 != (pthread_mutex_t *)0x0) {
              *(hb_buffer_t **)((long)pphVar97 + 0x108) = (hb_buffer_t *)(ppVar61->__size + 2);
            }
            uVar36 = *(uint *)((long)pphVar97 + 0xd8);
            uVar40 = (ulong)uVar36;
            uVar38 = *(undefined4 *)
                      (*(long *)((long)pphVar97 + 0x20) + *(long *)((long)pphVar97 + 0x68) * 4);
            uVar11 = *(undefined4 *)(*(long *)((long)pphVar97 + 0x20) + uVar40 * 0x14);
            unaff_R13 = *(uint **)((long)pphVar97 + 8);
            lVar75 = *(long *)((long)unaff_R13 + 0x90);
            if (*(int *)((long)pphVar97 + 0x22c) == 4) {
              if (*(long *)(lVar75 + 0x10) == 0) {
                param_5 = (uint *)0x0;
              }
              else {
                param_5 = *(uint **)(*(long *)(lVar75 + 0x10) + 0x58);
              }
              unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
              uVar44 = *(undefined8 *)((long)unaff_R13 + 0x98);
              pcVar74 = *(code **)(lVar75 + 0x78);
              *(undefined8 *)((long)pphVar97 + -8) = 0x3fc708;
              uVar37 = (*pcVar74)(unaff_R13,uVar44);
              uVar44 = extraout_XMM0_Qa_36;
              uVar48 = extraout_XMM1_Qa_35;
            }
            else {
              if (*(long *)(lVar75 + 0x10) == 0) {
                param_5 = (uint *)0x0;
              }
              else {
                param_5 = *(uint **)(*(long *)(lVar75 + 0x10) + 0x60);
              }
              unaff_R13 = *(uint **)((long)pphVar97 + 8);
              uVar44 = *(undefined8 *)((long)unaff_R13 + 0x98);
              pcVar74 = *(code **)(lVar75 + 0x80);
              *(undefined8 *)((long)pphVar97 + -8) = 0x3fc9a9;
              uVar37 = (*pcVar74)(unaff_R13,uVar44,uVar38,uVar11);
              unaff_R14 = *(uint **)((long)pphVar97 + 0x10);
              unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
              uVar44 = extraout_XMM0_Qa_37;
              uVar48 = extraout_XMM1_Qa_36;
            }
            auVar21._8_8_ = uVar48;
            auVar21._0_8_ = uVar44;
            auVar259._8_8_ = uVar48;
            auVar259._0_8_ = uVar44;
            ppVar61 = (pthread_mutex_t *)(ulong)uVar37;
            if (uVar37 != 0) {
              iVar39 = (int)uVar37 >> 1;
              uVar37 = uVar37 - iVar39;
              ppVar61 = (pthread_mutex_t *)(ulong)uVar37;
              if (*(int *)((long)pphVar97 + 0x23c) == 4) {
                lVar75 = *(long *)((long)pphVar97 + 0x280);
                *(int *)(lVar75 + *(long *)((long)pphVar97 + 0x68) * 4) =
                     *(int *)(lVar75 + *(long *)((long)pphVar97 + 0x68) * 4) + iVar39;
                piVar49 = (int *)(lVar75 + uVar40 * 0x14);
                *piVar49 = *piVar49 + uVar37;
                piVar49 = (int *)(lVar75 + uVar40 * 0x14 + 8);
              }
              else {
                lVar75 = *(long *)((long)pphVar97 + 0x280);
                piVar49 = (int *)(lVar75 + 4 + *(long *)((long)pphVar97 + 0x68) * 4);
                *piVar49 = *piVar49 + iVar39;
                piVar49 = (int *)(lVar75 + 4 + uVar40 * 0x14);
                *piVar49 = *piVar49 + uVar37;
                piVar49 = (int *)(lVar75 + uVar40 * 0x14 + 0xc);
              }
              *piVar49 = *piVar49 + uVar37;
              uVar36 = uVar36 + 1;
              if (**(uint **)((long)pphVar97 + 0x38) < uVar36) {
                uVar36 = **(uint **)((long)pphVar97 + 0x38);
              }
              unaff_R14 = *(uint **)((long)pphVar97 + 0x10);
              unaff_R13 = *(uint **)((long)pphVar97 + 8);
              unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
              auVar259 = auVar21;
              if (1 < uVar36 - uVar35) {
                *(byte *)((long)unaff_R14 + 0xc0) = *(byte *)((long)unaff_R14 + 0xc0) | 0x20;
                lVar75 = *(long *)((long)unaff_R14 + 0x70);
                param_5 = (uint *)0xffffffff;
                if (uVar36 != uVar35) {
                  if (*(int *)(*(long *)((long)pphVar97 + 0x10) + 0x1c) == 2) {
                    if (uVar35 < uVar36) {
                      uVar40 = (ulong)uVar36;
                      uVar132 = uVar40 - *(long *)((long)pphVar97 + 0x88);
                      param_5 = (uint *)0xffffffff;
                      if (8 < uVar132) {
                        uVar127 = (ulong)((uint)uVar132 & 7);
                        if (uVar127 == 0) {
                          uVar127 = 8;
                        }
                        lVar79 = (uVar127 + *(long *)((long)pphVar97 + 0x88)) - uVar40;
                        puVar45 = (undefined4 *)
                                  (lVar75 + *(long *)((long)pphVar97 + 0x68) * 4 + 0x94);
                        auVar150._8_4_ = 0xffffffff;
                        auVar150._0_8_ = 0xffffffffffffffff;
                        auVar150._12_4_ = 0xffffffff;
                        auVar164._8_4_ = 0xffffffff;
                        auVar164._0_8_ = 0xffffffffffffffff;
                        auVar164._12_4_ = 0xffffffff;
                        do {
                          auVar248._12_4_ = puVar45[-0x14];
                          auVar248._8_4_ = puVar45[-0x19];
                          auVar248._4_4_ = puVar45[-0x1e];
                          auVar248._0_4_ = puVar45[-0x23];
                          in_XMM5._12_4_ = *puVar45;
                          in_XMM5._8_4_ = puVar45[-5];
                          in_XMM5._4_4_ = puVar45[-10];
                          in_XMM5._0_4_ = puVar45[-0xf];
                          auVar166 = auVar248 ^ _DAT_006524b0;
                          auVar261 = auVar150 ^ _DAT_006524b0;
                          auVar240._0_4_ = -(uint)(auVar261._0_4_ < auVar166._0_4_);
                          auVar240._4_4_ = -(uint)(auVar261._4_4_ < auVar166._4_4_);
                          auVar240._8_4_ = -(uint)(auVar261._8_4_ < auVar166._8_4_);
                          auVar240._12_4_ = -(uint)(auVar261._12_4_ < auVar166._12_4_);
                          auVar150 = ~auVar240 & auVar248 | auVar150 & auVar240;
                          auVar166 = in_XMM5 ^ _DAT_006524b0;
                          auVar261 = auVar164 ^ _DAT_006524b0;
                          auVar241._0_4_ = -(uint)(auVar261._0_4_ < auVar166._0_4_);
                          auVar241._4_4_ = -(uint)(auVar261._4_4_ < auVar166._4_4_);
                          auVar241._8_4_ = -(uint)(auVar261._8_4_ < auVar166._8_4_);
                          auVar241._12_4_ = -(uint)(auVar261._12_4_ < auVar166._12_4_);
                          auVar164 = ~auVar241 & in_XMM5 | auVar164 & auVar241;
                          puVar45 = puVar45 + 0x28;
                          lVar79 = lVar79 + 8;
                        } while (lVar79 != 0);
                        *(long *)((long)pphVar97 + 0x88) =
                             *(long *)((long)pphVar97 + 0x88) + (uVar132 - uVar127);
                        auVar261 = auVar150 ^ _DAT_006524b0;
                        auVar166 = auVar164 ^ _DAT_006524b0;
                        auVar242._0_4_ = -(uint)(auVar261._0_4_ < auVar166._0_4_);
                        auVar242._4_4_ = -(uint)(auVar261._4_4_ < auVar166._4_4_);
                        auVar242._8_4_ = -(uint)(auVar261._8_4_ < auVar166._8_4_);
                        auVar242._12_4_ = -(uint)(auVar261._12_4_ < auVar166._12_4_);
                        auVar204 = ~auVar242 & auVar164 | auVar150 & auVar242;
                        auVar151._0_8_ = auVar204._8_8_;
                        auVar151._8_4_ = auVar204._8_4_;
                        auVar151._12_4_ = auVar204._12_4_;
                        auVar261 = auVar204 ^ _DAT_006524b0;
                        auVar166 = auVar151 ^ _DAT_006524b0;
                        auVar203._0_4_ = -(uint)(auVar261._0_4_ < auVar166._0_4_);
                        auVar203._4_4_ = -(uint)(auVar261._4_4_ < auVar166._4_4_);
                        auVar203._8_4_ = -(uint)(auVar261._8_4_ < auVar166._8_4_);
                        auVar203._12_4_ = -(uint)(auVar261._12_4_ < auVar166._12_4_);
                        auVar166 = ~auVar203 & auVar151 | auVar204 & auVar203;
                        uVar38 = auVar166._4_4_;
                        auVar152._4_4_ = uVar38;
                        auVar152._0_4_ = uVar38;
                        auVar152._8_4_ = uVar38;
                        auVar152._12_4_ = uVar38;
                        auVar261 = auVar166 ^ _DAT_006524b0;
                        auVar204 = auVar152 ^ _DAT_006524b0;
                        auVar243._0_4_ = -(uint)(auVar261._0_4_ < auVar204._0_4_);
                        auVar243._4_4_ = -(uint)(auVar261._4_4_ < auVar204._4_4_);
                        auVar243._8_4_ = -(uint)(auVar261._8_4_ < auVar204._8_4_);
                        auVar243._12_4_ = -(uint)(auVar261._12_4_ < auVar204._12_4_);
                        in_XMM2 = auVar166 & auVar243;
                        in_XMM3 = ~auVar243 & auVar152 | in_XMM2;
                        param_5 = (uint *)(ulong)in_XMM3._0_4_;
                        in_XMM4 = _DAT_006524b0;
                        in_XMM6 = _DAT_006524b0;
                      }
                      lVar79 = uVar40 - *(long *)((long)pphVar97 + 0x88);
                      puVar65 = (uint *)(lVar75 + *(long *)((long)pphVar97 + 0x88) * 0x14 + 8);
                      do {
                        if (*puVar65 < (uint)param_5) {
                          param_5 = (uint *)(ulong)*puVar65;
                        }
                        puVar65 = puVar65 + 5;
                        lVar79 = lVar79 + -1;
                      } while (lVar79 != 0);
                    }
                  }
                  else {
                    uVar37 = *(uint *)(lVar75 + 8 + *(long *)((long)pphVar97 + 0x68) * 4);
                    uVar60 = *(uint *)(lVar75 + 8 + (ulong)(uVar36 - 1) * 0x14);
                    param_5 = (uint *)(ulong)uVar37;
                    if (uVar60 < uVar37) {
                      param_5 = (uint *)(ulong)uVar60;
                    }
                  }
                }
                unaff_R14 = *(uint **)((long)pphVar97 + 0x10);
                ppVar61 = (pthread_mutex_t *)(ulong)uVar36;
                param_6 = (pthread_mutex_t *)0x3;
                *(undefined8 *)((long)pphVar97 + -8) = 0x3fc9ee;
                auVar259 = hb_buffer_t::_infos_set_glyph_flags
                                     ((hb_buffer_t *)unaff_R14,lVar75,uVar35,uVar36,(uint)param_5,3)
                ;
                unaff_R13 = *(uint **)((long)pphVar97 + 8);
                unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
              }
            }
            uVar35 = *(uint *)((long)pphVar97 + 0xd8);
            auVar261 = auVar259;
            if (*(uint *)((long)pphVar97 + 0x58) <= uVar35) goto LAB_003fd203;
          }
          uVar35 = uVar35 + 1;
          unaff_R13 = *(uint **)((long)pphVar97 + 8);
          unaff_R15 = *(pthread_mutex_t **)((long)pphVar97 + 0x30);
          auVar261 = auVar259;
        } while (uVar35 < *(uint *)((long)pphVar97 + 0x58));
      }
LAB_003fd203:
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fd217;
      hb_buffer_t::message
                (auVar261._0_8_,auVar261._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)unaff_R14,unaff_R13,
                 "end kern",ppVar61,param_5,param_6,*(undefined1 *)pphVar97);
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fd224;
      free(*(void **)((long)pphVar97 + 0x1d8));
      *(undefined8 *)((long)pphVar97 + -8) = 0x3fd231;
      auVar260 = hb_sanitize_context_t::~hb_sanitize_context_t
                           ((hb_sanitize_context_t *)((long)pphVar97 + 0x178));
    }
    uVar44 = auVar260._0_8_;
    plVar108 = *(long **)((long)pphVar97 + 0x48);
    if (*(int *)((long)pphVar97 + 0x230) == 5) {
      uVar35 = **(uint **)((long)pphVar97 + 0x38);
      ppVar61 = *(pthread_mutex_t **)((long)pphVar97 + 0x28);
      if (1 < uVar35) {
        ppVar61 = *(pthread_mutex_t **)&ppVar61->__data;
        uVar40 = (ulong)(uVar35 - 1);
        puVar109 = (undefined8 *)((long)ppVar61 + uVar40 * 0x14);
        uVar132 = 0;
        do {
          uVar40 = uVar40 - 1;
          *(undefined4 *)((long)pphVar97 + 0xe0) = *(undefined4 *)(puVar109 + 2);
          uVar44 = puVar109[1];
          *(undefined8 *)((long)pphVar97 + 0xd0) = *puVar109;
          *(undefined8 *)((long)pphVar97 + 0xd8) = uVar44;
          *(undefined4 *)(puVar109 + 2) = *(undefined4 *)((long)ppVar61 + 0x10);
          uVar44 = *(undefined8 *)((long)ppVar61 + 8);
          *puVar109 = ppVar61->__align;
          puVar109[1] = uVar44;
          *(undefined4 *)((long)ppVar61 + 0x10) = *(undefined4 *)((long)pphVar97 + 0xe0);
          uVar44 = *(undefined8 *)((long)pphVar97 + 0xd0);
          uVar48 = *(undefined8 *)((long)pphVar97 + 0xd8);
          ppVar61->__align = uVar44;
          *(undefined8 *)((long)ppVar61 + 8) = uVar48;
          uVar132 = uVar132 + 1;
          ppVar61 = (pthread_mutex_t *)((long)ppVar61 + 0x14);
          puVar109 = (undefined8 *)((long)puVar109 + -0x14);
        } while (uVar132 < (uVar40 & 0xffffffff));
      }
      if (*(char *)((long)unaff_R14 + 0x5b) != '\0') {
        uVar36 = **(uint **)((long)pphVar97 + 0x38);
        ppVar61 = (pthread_mutex_t *)(ulong)uVar36;
        if (uVar36 < uVar35) {
          uVar35 = uVar36;
        }
        if (1 < uVar35) {
          ppVar61 = (pthread_mutex_t *)*plVar108;
          uVar40 = (ulong)(uVar35 - 1);
          puVar109 = (undefined8 *)((long)ppVar61 + uVar40 * 0x14);
          uVar132 = 0;
          do {
            uVar40 = uVar40 - 1;
            *(undefined4 *)((long)pphVar97 + 0xe0) = *(undefined4 *)(puVar109 + 2);
            uVar44 = puVar109[1];
            *(undefined8 *)((long)pphVar97 + 0xd0) = *puVar109;
            *(undefined8 *)((long)pphVar97 + 0xd8) = uVar44;
            *(undefined4 *)(puVar109 + 2) = *(undefined4 *)((long)ppVar61 + 0x10);
            uVar44 = *(undefined8 *)((long)ppVar61 + 8);
            *puVar109 = ppVar61->__align;
            puVar109[1] = uVar44;
            *(undefined4 *)((long)ppVar61 + 0x10) = *(undefined4 *)((long)pphVar97 + 0xe0);
            uVar44 = *(undefined8 *)((long)pphVar97 + 0xd0);
            uVar48 = *(undefined8 *)((long)pphVar97 + 0xd8);
            ppVar61->__align = uVar44;
            *(undefined8 *)((long)ppVar61 + 8) = uVar48;
            uVar132 = uVar132 + 1;
            ppVar61 = (pthread_mutex_t *)((long)ppVar61 + 0x14);
            puVar109 = (undefined8 *)((long)puVar109 + -0x14);
          } while (uVar132 < (uVar40 & 0xffffffff));
        }
      }
    }
    *(undefined8 *)((long)pphVar97 + -8) = 0x3fd353;
    hb_buffer_t::message
              (uVar44,auVar260._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
               in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)unaff_R14,unaff_R13,"end fallback kern",
               ppVar61,param_5,param_6,*(undefined1 *)pphVar97);
  }
  goto LAB_003fbed1;
code_r0x003fc62a:
  lVar75 = *(long *)((long)pphVar97 + 0xe0);
  ppVar61 = *(pthread_mutex_t **)(lVar75 + 0xa0);
  goto LAB_003fc4f0;
AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_4:
  if ((((ulong)*(uint *)(&UNK_005e02c8 + uVar40) <
        (ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar40))) ||
      (param_5 = (uint *)&UNK_005e02bc,
      (ulong)*(uint *)(&UNK_005e02c8 + uVar40) <
      (ulong)((long)&UNK_005e02bc - *(long *)(&UNK_005e02b8 + uVar40)))) ||
     (*(int *)(&UNK_005e02c0 + uVar40) - 0x5e02bcU < 0x9c7728c3)) goto LAB_003f4fbb;
  iVar39 = *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                           switchdataD_005e02cc + uVar40) + 0x6388d73d;
  *(int *)((long)&Lookup<OT::IntType<unsigned_int,4u>>::sanitize::switchD_003f4fe8::
                  switchdataD_005e02cc + uVar40) = iVar39;
  ppVar61 = (pthread_mutex_t *)0x0;
  if (iVar39 < 1) goto LAB_003f4fbb;
  param_6 = (pthread_mutex_t *)0xffffffff;
  ppVar41 = (pthread_mutex_t *)0x3db1;
  param_3 = (pthread_mutex_t *)0xb13d;
  goto code_r0x003f50cd;
code_r0x003f3f23:
  param_3 = *(pthread_mutex_t **)(*(long *)((long)unaff_R12 + 0x30) + 0x10);
  *(__pthread_mutex_s **)((long)unaff_R12 + 8) = &param_3->__data;
  uVar35 = *(uint *)(*(long *)((long)unaff_R12 + 0x30) + 0x18);
  param_2 = (pthread_mutex_t *)(ulong)uVar35;
  ppVar41 = (pthread_mutex_t *)(param_3->__size + (long)param_2->__size);
  *(__pthread_mutex_s **)((long)unaff_R12 + 0x10) = &ppVar41->__data;
  *(uint *)(unaff_R12->__size + 0x18) = uVar35;
  bVar133 = (uint)param_1 < *(uint *)((long)pphVar85 + 0x74);
  ppVar61 = (pthread_mutex_t *)&((pthread_mutex_t *)0x0)->__data;
  if (bVar133) {
    ppVar61 = unaff_RBP;
  }
  goto code_r0x003f3f52;
code_r0x003f3d5a:
  do {
    *(ulong *)unaff_R14 = *(ulong *)unaff_R14 | (ulong)unaff_RBP;
    *(ulong *)((long)unaff_R14 + 8) = *(ulong *)((long)unaff_R14 + 8) | 1L << ((byte)ppVar41 & 0x3f)
    ;
    uVar35 = (uint)ppVar41 >> 9;
    ppVar41 = (pthread_mutex_t *)(ulong)uVar35;
    *(ulong *)((long)unaff_R14 + 0x10) =
         *(ulong *)((long)unaff_R14 + 0x10) | 1L << ((byte)uVar35 & 0x3f);
    do {
      if ((int)param_1 == (int)param_3) {
        return ppVar41;
      }
      ppVar41 = (pthread_mutex_t *)(ulong)(ushort)(unaff_RBX->__data).__count;
      param_3 = (pthread_mutex_t *)(ulong)((int)param_3 + 1);
LAB_003f3cf0:
      uVar111 = (ushort)ppVar41;
      uVar71 = uVar111 << 8 | uVar111 >> 8;
      ppVar61 = (pthread_mutex_t *)(ulong)uVar71;
      uVar35 = (uint)uVar71;
      iVar39 = 0;
      if (uVar111 != 0) {
code_r0x003f3d03:
        uVar111 = *(ushort *)((long)&(unaff_RBX->__data).__lock + 2);
        uVar35 = (uint)ppVar61;
        iVar39 = -(uint)(*(short *)((long)&(unaff_RBX->__data).__nusers +
                                   (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) *
                                          (uVar35 + (int)param_5))) == -1);
      }
      ppVar41 = param_6;
      if ((uint)param_3 < iVar39 + uVar35) {
        uVar111 = *(ushort *)((long)&(unaff_RBX->__data).__lock + 2);
        ppVar41 = (pthread_mutex_t *)
                  ((long)&(param_2->__data).__lock +
                  (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (uint)param_3));
      }
LAB_003f3d3d:
      uVar111 = (ushort)(ppVar41->__data).__lock;
      ppVar41 = (pthread_mutex_t *)(ulong)uVar111;
    } while (uVar111 == 0xffff);
    uVar111 = uVar111 << 8 | uVar111 >> 8;
    ppVar41 = (pthread_mutex_t *)(ulong)uVar111;
    unaff_RBP = (pthread_mutex_t *)(1L << ((byte)(uVar111 >> 4) & 0x3f));
  } while( true );
LAB_003f379d:
  ppVar41 = (pthread_mutex_t *)(ulong)uVar111;
  param_3 = (pthread_mutex_t *)(ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
code_r0x003f37a6:
  iVar39 = 0;
  if ((short)ppVar41 != 0) {
    uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
    iVar39 = -(uint)(*(short *)((long)&(param_1->__data).__nusers +
                               (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) *
                                      ((int)param_3 + (int)param_5))) == -1);
  }
  ppVar41 = unaff_R15;
  if ((uint)unaff_R12 < (uint)(iVar39 + (int)param_3)) {
    uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
    ppVar41 = (pthread_mutex_t *)
              ((long)unaff_R13 +
              (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (uint)unaff_R12));
  }
  phVar99 = (hb_buffer_t *)(ulong)*(uint *)in_R11;
  phVar123 = (hb_buffer_t *)(ppVar41->__size + (4 - param_6->__align));
  in_R10 = 0;
  bVar133 = phVar123 < phVar99;
  bVar134 = phVar123 == phVar99;
  if (phVar99 < phVar123)
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
code_r0x003f3804:
  if (!bVar133 && !bVar134)
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
code_r0x003f380a:
  uVar111 = *(ushort *)((long)&(ppVar41->__data).__lock + 2);
  ppVar41 = (pthread_mutex_t *)(ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
  param_3 = (pthread_mutex_t *)
            ((long)&(ppVar41->__data).__lock + (long)&(unaff_RBP->__data).__count);
  unaff_RBX = param_3;
code_r0x003f3820:
  if ((ulong)*(uint *)in_R11 < (ulong)((long)param_3 - param_6->__align)) goto LAB_003f312d;
  uVar35 = *(uint *)((long)&(ppVar41->__data).__lock + (long)&unaff_RBP->__data);
  lVar75 = (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                  uVar35 << 0x18) * 4;
  uVar35 = (uint)lVar75;
  if ((((int)((ulong)lVar75 >> 0x20) != 0) ||
      ((ulong)*(uint *)in_R11 < (ulong)((long)unaff_RBX - param_6->__align))) ||
     (((uint)((param_2->__data).__kind - (int)unaff_RBX) < uVar35 ||
      (iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) - uVar35,
      *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39, iVar39 < 1))))
  goto LAB_003f312d;
  if ((int)unaff_R14 == (int)unaff_R12)
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
  ;
  uVar111 = (ushort)(param_1->__data).__count;
  unaff_R12 = (pthread_mutex_t *)(ulong)((int)unaff_R12 + 1);
  goto LAB_003f379d;
LAB_003f34fa:
  phVar99 = (hb_buffer_t *)&_hb_NullPool;
  uVar71 = uVar111 << 8 | uVar111 >> 8;
  iVar39 = 0;
  if (uVar111 != 0) {
    uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
    uVar132 = (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (uVar71 - 1));
    iVar39 = 0;
    if (*(short *)((long)&(param_1->__data).__nusers + uVar132) == -1) {
      iVar39 = -(uint)(*(short *)(phVar123 + uVar132 + 2) == -1);
    }
  }
  if ((uint)uVar40 < iVar39 + (uint)uVar71) {
    uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
    phVar99 = phVar123 + (uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (uint)uVar40;
  }
  if ((hb_buffer_t *)(ulong)*(uint *)in_R11 < phVar99 + (6 - param_6->__align)) goto LAB_003f312d;
  uVar111 = *(ushort *)(phVar99 + 2) << 8 | *(ushort *)(phVar99 + 2) >> 8;
  uVar71 = *(ushort *)phVar99 << 8 | *(ushort *)phVar99 >> 8;
  if ((uVar71 < uVar111) ||
     ((hb_buffer_t *)(ulong)*(uint *)in_R11 < phVar99 + (6 - param_6->__align))) goto LAB_003f312d;
  *(ulong *)((long)puVar65 + -8) = uVar40;
  uVar35 = ((uint)uVar71 - (uint)uVar111) + 1;
  param_3 = (pthread_mutex_t *)(ulong)uVar35;
  if (CARRY4(uVar35,uVar35)) goto LAB_003f312d;
  unaff_R12 = (pthread_mutex_t *)
              (ulong)(ushort)(*(ushort *)(phVar99 + 4) << 8 | *(ushort *)(phVar99 + 4) >> 8);
  unaff_R14 = (uint *)((long)&(param_1->__data).__lock + (long)&unaff_R12->__data);
  if (((ulong)*(uint *)in_R11 < (ulong)((long)unaff_R14 - param_6->__align)) ||
     ((uint)((param_2->__data).__kind - (int)unaff_R14) < uVar35 * 2)) goto LAB_003f312d;
  uVar35 = *(int *)((long)&(param_2->__data).__list.__prev + 4) + uVar35 * -2;
  ppVar41 = (pthread_mutex_t *)(ulong)uVar35;
  *(uint *)((long)&(param_2->__data).__list.__prev + 4) = uVar35;
  pphVar30 = (hb_buffer_t **)puVar65;
code_r0x003f35e9:
  pphVar85 = pphVar30;
  if ((int)ppVar41 < 1) goto LAB_003f312d;
  puVar65 = (uint *)pphVar85;
  if ((int)param_3 != 0) {
    uVar40 = (ulong)param_3 & 0xffffffff;
    param_3 = (pthread_mutex_t *)param_6->__align;
    unaff_RBP = (pthread_mutex_t *)(ulong)*(uint *)in_R11;
    unaff_R15 = (pthread_mutex_t *)(uVar40 * 2);
    unaff_R12 = (pthread_mutex_t *)(unaff_R12->__size + (long)param_5);
    unaff_R13 = (uint *)0x0;
    do {
      if (((ulong)unaff_RBP & 0xffffffff) <
          (ulong)((long)(unaff_R12->__size + (long)unaff_R13) - (long)param_3->__size))
      goto LAB_003f312d;
      uVar111 = *(ushort *)((long)&((__pthread_mutex_s *)unaff_R14)->__lock + (long)unaff_R13);
      ppVar41 = (pthread_mutex_t *)(ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
      puVar100 = *(undefined1 **)((long)pphVar85 + -0x20);
      ppVar61 = (pthread_mutex_t *)(puVar100 + (long)((long)&ppVar41->__align + 4));
      if ((ulong)*(uint *)in_R11 < (ulong)((long)ppVar61 - param_6->__align)) goto LAB_003f312d;
code_r0x003f364d:
      uVar35 = *(uint *)(puVar100 + (long)&(ppVar41->__data).__lock);
      uVar40 = (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                      uVar35 << 0x18) * 4;
      ppVar41 = (pthread_mutex_t *)(uVar40 & 0xffffffff);
      if ((int)(uVar40 >> 0x20) != 0) goto LAB_003f312d;
      param_3 = (pthread_mutex_t *)param_6->__align;
      unaff_RBX = (pthread_mutex_t *)((long)ppVar61 - (long)param_3->__size);
      unaff_RBP = (pthread_mutex_t *)(ulong)*(uint *)in_R11;
code_r0x003f366d:
      if (((unaff_RBP < unaff_RBX) ||
          ((uint)((param_2->__data).__kind - (int)ppVar61) < (uint)ppVar41)) ||
         (iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) - (uint)ppVar41,
         *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39, iVar39 < 1))
      goto LAB_003f312d;
      unaff_R13 = (uint *)((long)&((__pthread_mutex_s *)unaff_R13)->__lock + 2);
      puVar65 = (uint *)pphVar85;
    } while (unaff_R15 != (pthread_mutex_t *)unaff_R13);
  }
  uVar40 = (ulong)((int)*(undefined8 *)((long)puVar65 + -8) + 1U);
  if ((int)*(undefined8 *)((long)puVar65 + -8) + 1U == *(uint *)((long)puVar65 + -0x14))
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
  uVar111 = (ushort)(param_1->__data).__count;
  phVar123 = *(hb_buffer_t **)((long)puVar65 + -0x10);
  goto LAB_003f34fa;
LAB_003f3331:
  param_3 = (pthread_mutex_t *)(ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
  unaff_RBX = (pthread_mutex_t *)0x0;
  bVar134 = uVar111 == 0;
code_r0x003f3342:
  iVar39 = (int)unaff_RBX;
  if (!bVar134) {
    uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
    uVar40 = (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * ((int)param_3 + (int)param_5));
    iVar39 = 0;
    if (*(short *)((long)&(param_1->__data).__nusers + uVar40) == -1) {
      iVar39 = -(uint)(*(short *)((long)&((__pthread_mutex_s *)unaff_R13)->__lock + uVar40 + 2) ==
                      -1);
    }
  }
  ppVar41 = unaff_R15;
  if ((uint)unaff_R12 < (uint)(iVar39 + (int)param_3)) {
    uVar111 = *(ushort *)((long)&(param_1->__data).__lock + 2);
    ppVar41 = (pthread_mutex_t *)
              ((long)&((__pthread_mutex_s *)unaff_R13)->__lock +
              (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (uint)unaff_R12));
  }
  in_R10 = 0;
  if (((hb_buffer_t *)(ulong)*(uint *)in_R11 <
       (hb_buffer_t *)(ppVar41->__size + (6 - param_6->__align))) ||
     ((hb_buffer_t *)(ulong)*(uint *)in_R11 <
      (hb_buffer_t *)(ppVar41->__size + (6 - param_6->__align))))
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
code_r0x003f33ac:
  uVar111 = (ushort)(ppVar41->__data).__count;
  uVar40 = (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
  puVar100 = (undefined1 *)((long)&(unaff_RBP->__data).__count + uVar40);
  if ((ulong)*(uint *)in_R11 < (ulong)((long)puVar100 - param_6->__align)) goto LAB_003f312d;
  uVar35 = *(uint *)((long)&(unaff_RBP->__data).__lock + uVar40);
  lVar75 = (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                  uVar35 << 0x18) * 4;
  uVar35 = (uint)lVar75;
  if (((((int)((ulong)lVar75 >> 0x20) != 0) ||
       ((ulong)*(uint *)in_R11 < (ulong)((long)puVar100 - param_6->__align))) ||
      ((uint)((param_2->__data).__kind - (int)puVar100) < uVar35)) ||
     (iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) - uVar35,
     *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39, iVar39 < 1)) goto LAB_003f312d;
  if ((int)unaff_R14 == (int)unaff_R12)
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
  ;
  uVar111 = (ushort)(param_1->__data).__count;
  unaff_R12 = (pthread_mutex_t *)(ulong)((int)unaff_R12 + 1);
  goto LAB_003f3331;

  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_1
  :
  in_R10 = CONCAT71((int7)(in_R10 >> 8),1);
  goto 
  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  ;
LAB_003f2db7:
  param_5 = (uint *)((ulong)param_3 & 0xffff);
  uVar40 = (ulong)((int)in_R10 - 1);
  in_R11 = (hb_buffer_t *)0x0;
  goto LAB_003f2ddb;
code_r0x003f267c:
  uVar111 = *(ushort *)((long)&(param_1->__data).__lock + (long)&ppVar41->__data);
  if ((uint)param_2 <= (uint)(ushort)(uVar111 << 8 | uVar111 >> 8)) goto LAB_003f2835;
  uVar35 = (int)ppVar61 + 1;
  param_3 = (pthread_mutex_t *)(ulong)uVar35;
  if ((int)in_R11 < (int)uVar35) goto LAB_003f283f;
LAB_003f265f:
  while( true ) {
    uVar35 = (uint)((int)in_R11 + (int)param_3) >> 1;
    ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
    ppVar41 = (pthread_mutex_t *)(in_R10 * (long)ppVar61);
    uVar111 = *(ushort *)
               ((undefined *)((long)&(param_1->__data).__lock + 2) + (long)&ppVar41->__data);
    if ((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) <= (uint)param_2) break;
    uVar35 = uVar35 - 1;
    in_R11 = (hb_buffer_t *)(ulong)uVar35;
    if ((int)uVar35 < (int)param_3) goto LAB_003f283f;
  }
  goto code_r0x003f267c;
code_r0x003eee56:
  unaff_RBX = *(pthread_mutex_t **)((long)unaff_R15 + 0x10);
  unaff_RBP = (pthread_mutex_t *)(unaff_R15->__data).__list.__next;
  *(uint *)((long)pphVar85 + 8) = *(uint *)(*(long *)((long)unaff_R15 + 8) + 0xa0);
  *(uint *)((long)pphVar85 + -8) = 0x3eee7c;
  *(uint *)((long)pphVar85 + -4) = 0;
  bVar133 = hb_buffer_t::message
                      (uVar44,uVar48,uVar171,uVar206,uVar247,uVar249,uVar252,uVar255,
                       (hb_buffer_t *)&unaff_RBP->__data,unaff_RBX,"start kern",uVar40,param_5,
                       param_6,(char)*(uint *)pphVar85);
  in_XMM0 = extraout_XMM0_01;
  if (bVar133) goto code_r0x003eee84;
  goto LAB_003f0ec0;
code_r0x003eee84:
  hVar9 = *(hb_buffer_t *)(unaff_RBP->__size + 0x18);
  *(__pthread_mutex_s **)((long)pphVar85 + 0x20) = &unaff_RBP->__data;
  if (((byte)hVar9 & 0x40) != 0) {
    uVar35 = *(uint *)((long)unaff_RBP + 0x60);
    *(hb_buffer_t *)((long)unaff_RBP + 0xc0) =
         (hb_buffer_t)((byte)*(hb_buffer_t *)((long)unaff_RBP + 0xc0) | 0x20);
    if ((ulong)uVar35 != 0) {
      lVar75 = *(long *)((long)unaff_RBP + 0x70);
      if ((ulong)uVar35 - 1 < 3) {
        uVar40 = 0;
      }
      else {
        pbVar119 = (byte *)(lVar75 + 0x40);
        uVar40 = 0;
        do {
          pbVar119[-0x3c] = pbVar119[-0x3c] | 2;
          pbVar119[-0x28] = pbVar119[-0x28] | 2;
          pbVar119[-0x14] = pbVar119[-0x14] | 2;
          *pbVar119 = *pbVar119 | 2;
          uVar40 = uVar40 + 4;
          pbVar119 = pbVar119 + 0x50;
        } while ((uVar35 & 0xfffffffc) != uVar40);
      }
      unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
      unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + 0x20);
      if ((ulong)(uVar35 & 3) != 0) {
        lVar79 = 0;
        do {
          pbVar119 = (byte *)(lVar75 + uVar40 * 0x14 + 4 + lVar79);
          *pbVar119 = *pbVar119 | 2;
          lVar79 = lVar79 + 0x14;
        } while ((ulong)(uVar35 & 3) * 0x14 != lVar79);
      }
    }
  }
  puVar45 = &_hb_NullPool;
  *(uint *)((long)pphVar85 + -8) = 0x3eeeb2;
  *(uint *)((long)pphVar85 + -4) = 0;
  OT::hb_ot_apply_context_t::hb_ot_apply_context_t
            ((hb_ot_apply_context_t *)((long)pphVar85 + 0x80),1,(long)unaff_RBX,
             (undefined4 *)unaff_RBP,(GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
  uVar35 = *(uint *)((long)pphVar85 + 8);
  param_6 = (pthread_mutex_t *)(ulong)uVar35;
  *(uint *)((long)pphVar85 + 0x1ac) = uVar35;
  *(uint *)((long)pphVar85 + 0x1c8) = 0xffffffff;
  *(uint *)((long)pphVar85 + 0x1cc) = 0;
  *(__pthread_mutex_s **)((long)pphVar85 + 0x48) = &unaff_RBX->__data;
  unaff_RBX = (pthread_mutex_t *)
              CONCAT71((int7)((ulong)unaff_RBX >> 8),*(undefined1 *)((long)pphVar85 + 0x1be));
  uVar33 = *(undefined1 *)((long)pphVar85 + 0x1bf);
  if (*(uint *)((long)pphVar85 + 0x108) != 0) {
    uVar33 = 0;
  }
  auVar25._8_8_ = 0;
  auVar25._0_8_ = extraout_XMM1_Qa_01;
  auVar256 = auVar25 << 0x40;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = extraout_XMM1_Qa_01;
  auVar26 = auVar26 << 0x40;
  *(undefined1 (*) [16])((long)pphVar85 + 0xe8) = (undefined1  [16])0x0;
  *(uint *)((long)pphVar85 + 0xf8) = 0;
  *(uint *)((long)pphVar85 + 0xfc) = 0;
  param_5 = (uint *)CONCAT71((int7)((ulong)puVar45 >> 8),*(char *)((long)pphVar85 + 0x1bd) != '\0');
  bVar133 = *(uint *)((long)pphVar85 + 0x108) == 1;
  *(undefined1 *)((long)pphVar85 + 0xe1) = 1;
  *(bool *)((long)pphVar85 + 0xe2) = bVar133;
  *(uint *)((long)pphVar85 + 0x1b4) = 8;
  *(uint **)((long)pphVar85 + 0x90) = (uint *)((long)pphVar85 + 0x80);
  uVar36 = *(uint *)(*(long *)((long)pphVar85 + 0x120) + 0x60);
  *(uint *)((long)pphVar85 + 0xc0) = uVar36;
  *(undefined1 (*) [16])((long)pphVar85 + 0xa8) = (undefined1  [16])0x0;
  *(uint *)((long)pphVar85 + 0xb8) = 0;
  *(uint *)((long)pphVar85 + 0xbc) = 0;
  *(uint *)((long)pphVar85 + 0x98) = 8;
  *(bool *)((long)pphVar85 + 0xa0) = bVar133;
  *(undefined1 *)((long)pphVar85 + 0xa1) = *(undefined1 *)((long)pphVar85 + 0x1be);
  *(bool *)((long)pphVar85 + 0xa2) = bVar133;
  *(uint *)((long)pphVar85 + 0x9c) = uVar35;
  *(undefined1 *)((long)pphVar85 + 0xa3) = uVar33;
  *(undefined1 *)((long)pphVar85 + 0xa4) = 0;
  *(uint **)((long)pphVar85 + 0xd0) = (uint *)((long)pphVar85 + 0x80);
  *(uint *)((long)pphVar85 + 0x100) = uVar36;
  *(undefined1 (*) [16])((long)pphVar85 + 0xe8) = (undefined1  [16])0x0;
  *(uint *)((long)pphVar85 + 0xf8) = 0;
  *(uint *)((long)pphVar85 + 0xfc) = 0;
  *(bool *)((long)pphVar85 + 0xe2) = bVar133;
  ppVar61 = (pthread_mutex_t *)0xffffffff00000008;
  *(uint *)((long)pphVar85 + 0xd8) = 8;
  *(uint *)((long)pphVar85 + 0xdc) = 0xffffffff;
  *(bool *)((long)pphVar85 + 0xe0) = bVar133 || *(char *)((long)pphVar85 + 0x1bd) != '\0';
  *(undefined1 *)((long)pphVar85 + 0xe1) = 1;
  *(undefined1 *)((long)pphVar85 + 0xe3) = uVar33;
  *(undefined1 *)((long)pphVar85 + 0xe4) = 0;
  uVar35 = *(uint *)((long)unaff_RBP + 0x60);
  *(uint *)((long)pphVar85 + 0x2c) = uVar35;
  if (uVar35 != 0) {
    *(uint *)((long)pphVar85 + 0x60) = *(uint *)((long)unaff_RBP + 0x38) & 0xfffffffe;
    *(undefined8 *)((long)pphVar85 + 0x38) = *(undefined8 *)((long)unaff_RBP + 0x70);
    *(undefined8 *)((long)pphVar85 + 0x50) = *(undefined8 *)((long)unaff_RBP + 0x80);
    unaff_RBX = (pthread_mutex_t *)0x0;
    do {
      iVar39 = (int)unaff_RBX;
      ppVar61 = *(pthread_mutex_t **)((long)pphVar85 + 0x38);
      if (((&(ppVar61->__data).__count)[(long)unaff_RBX * 5] & *(uint *)((long)pphVar85 + 8)) == 0)
      {
        unaff_RBX = (pthread_mutex_t *)(ulong)(iVar39 + 1);
      }
      else {
        *(int *)((long)pphVar85 + 0x88) = iVar39;
        lVar75 = *(long *)((long)pphVar85 + 0x90);
        ppVar61 = *(pthread_mutex_t **)(lVar75 + 0xa0);
        iVar104 = *(int *)((long)ppVar61 + 0x60);
        *(int *)((long)pphVar85 + 0xc0) = iVar104;
        iVar125 = *(int *)((long)ppVar61 + 0x5c);
        *(long *)((long)pphVar85 + 0x40) = (long)unaff_RBX * 5;
        if (iVar125 == iVar39) {
          uVar33 = *(undefined1 *)(*(long *)((long)ppVar61 + 0x70) + 0xf + (long)unaff_RBX * 0x14);
        }
        else {
          uVar33 = 0;
        }
        if (*(char *)((long)pphVar85 + 0xa3) == '\0') {
          uVar33 = 0;
        }
        *(undefined1 *)((long)pphVar85 + 0xa4) = uVar33;
        iVar104 = iVar104 + -1;
        if (iVar39 < iVar104) {
          *(int *)((long)pphVar85 + 0x30) = iVar39;
          ppVar41 = unaff_RBX;
LAB_003f0b30:
          uVar44 = auVar256._8_8_;
          uVar35 = (int)unaff_RBX + 1;
          uVar40 = (ulong)uVar35;
          *(uint *)((long)pphVar85 + 0x88) = uVar35;
          lVar79 = *(long *)((long)ppVar61 + 0x70);
          uVar35 = *(uint *)((long)pphVar85 + 0x98);
          uVar111 = *(ushort *)(lVar79 + 0xc + uVar40 * 0x14);
          ppVar61 = (pthread_mutex_t *)(ulong)uVar111;
          if ((uVar35 & uVar111 & 0xe) != 0) goto LAB_003f0c4e;
          puVar65 = (uint *)(lVar79 + uVar40 * 0x14);
          if ((uVar111 & 8) == 0) {
LAB_003f0b69:
            lVar75 = lVar79 + uVar40 * 0x14;
            uVar111 = *(ushort *)(lVar79 + 0x10 + uVar40 * 0x14);
            uVar71 = 0;
            bVar133 = false;
            if (((((uVar111 & 0x20) != 0) &&
                 (bVar133 = false, (*(byte *)(lVar75 + 0xc) & 0x10) == 0)) &&
                ((*(char *)((long)pphVar85 + 0xa0) != '\0' ||
                 (bVar133 = false, (uVar111 & 0x21f) != 0x201)))) &&
               ((*(char *)((long)pphVar85 + 0xa1) != '\0' ||
                (bVar133 = false, (uVar111 & 0x11f) != 0x101)))) {
              bVar133 = (uVar111 & 0x40) == 0 || *(char *)((long)pphVar85 + 0xa2) != '\0';
            }
            ppVar61 = *(pthread_mutex_t **)((long)pphVar85 + 0xb8);
            if (ppVar61 != (pthread_mutex_t *)0x0) {
              uVar111 = (ushort)(ppVar61->__data).__lock;
              uVar71 = uVar111 << 8 | uVar111 >> 8;
            }
            if (((*(uint *)(lVar79 + 4 + uVar40 * 0x14) & *(uint *)((long)pphVar85 + 0x9c)) != 0) &&
               ((*(char *)((long)pphVar85 + 0xa4) == '\0' ||
                (*(char *)((long)pphVar85 + 0xa4) == *(char *)(lVar75 + 0xf))))) {
              if (*(code **)((long)pphVar85 + 0xa8) == (code *)0x0) {
                if (bVar133) goto LAB_003f0c4e;
              }
              else {
                *(undefined8 *)((long)pphVar85 + -8) = 0x3f0c3d;
                cVar34 = (**(code **)((long)pphVar85 + 0xa8))
                                   (puVar65,uVar71,*(undefined8 *)((long)pphVar85 + 0xb0));
                auVar256._8_8_ = extraout_XMM1_Qa_06;
                auVar256._0_8_ = extraout_XMM0_Qa_04;
                ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar85 + 0x30);
                if (cVar34 == '\0') goto LAB_003f0c45;
                ppVar61 = *(pthread_mutex_t **)((long)pphVar85 + 0xb8);
              }
              uVar44 = auVar256._8_8_;
              if (ppVar61 != (pthread_mutex_t *)0x0) {
                *(hb_buffer_t **)((long)pphVar85 + 0xb8) = (hb_buffer_t *)(ppVar61->__size + 2);
              }
              uVar35 = *(uint *)(*(long *)((long)pphVar85 + 0x38) +
                                *(long *)((long)pphVar85 + 0x40) * 4);
              unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
              ppVar61 = (pthread_mutex_t *)(ulong)(uVar35 >> 4);
              unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + 0x20);
              if ((((*(ulong *)((long)unaff_R15 + 0xb0) >> ((ulong)ppVar61 & 0x3f) & 1) != 0) &&
                  ((*(ulong *)((long)unaff_R15 + 0xb8) >> ((ulong)uVar35 & 0x3f) & 1) != 0)) &&
                 (ppVar61 = (pthread_mutex_t *)(ulong)(uVar35 >> 9),
                 (*(ulong *)((long)unaff_R15 + 0xc0) >> ((ulong)ppVar61 & 0x3f) & 1) != 0)) {
                uVar36 = *(uint *)((long)pphVar85 + 0x88);
                uVar40 = (ulong)uVar36;
                uVar37 = *(uint *)(*(long *)((long)pphVar85 + 0x38) + uVar40 * 0x14);
                ppVar61 = (pthread_mutex_t *)(ulong)(uVar37 >> 4);
                if (((((ulong)unaff_R15[5].__align >> ((ulong)ppVar61 & 0x3f) & 1) != 0) &&
                    ((*(ulong *)((long)unaff_R15 + 0xd0) >> ((ulong)uVar37 & 0x3f) & 1) != 0)) &&
                   (ppVar61 = (pthread_mutex_t *)(ulong)(uVar37 >> 9),
                   (*(ulong *)((long)unaff_R15 + 0xd8) >> ((ulong)ppVar61 & 0x3f) & 1) != 0)) {
                  *(undefined8 *)((long)pphVar85 + -8) = 0x3f0d79;
                  ppVar61 = unaff_R15;
                  uVar35 = KerxSubTableFormat6<AAT::KerxSubTableHeader>::get_kerning
                                     (*(KerxSubTableFormat6<AAT::KerxSubTableHeader> **)
                                       ((long)pphVar85 + 0x58),uVar35,uVar37,(long)unaff_R15);
                  auVar256._8_8_ = uVar44;
                  auVar256._0_8_ = extraout_XMM0_Qa_06;
                  if (uVar35 != 0) {
                    if (*(int *)((long)pphVar85 + 0x60) == 4) {
                      uVar35 = (uint)((ulong)((long)(short)uVar35 *
                                              *(long *)(*(long *)((long)pphVar85 + 0x48) + 0x58) +
                                             0x8000) >> 0x10);
                      if (((ulong)unaff_R13 & 0x40000000) != 0) {
                        ppVar61 = *(pthread_mutex_t **)((long)pphVar85 + 0x50);
                        (&(ppVar61->__data).__nusers)[uVar40 * 5] = uVar35;
                        goto LAB_003f0e28;
                      }
                      uVar37 = (int)uVar35 >> 1;
                      ppVar61 = (pthread_mutex_t *)(ulong)uVar37;
                      lVar75 = *(long *)((long)pphVar85 + 0x50);
                      *(int *)(lVar75 + *(long *)((long)pphVar85 + 0x40) * 4) =
                           *(int *)(lVar75 + *(long *)((long)pphVar85 + 0x40) * 4) + uVar37;
                      piVar49 = (int *)(lVar75 + uVar40 * 0x14);
                      *piVar49 = *piVar49 + (uVar35 - uVar37);
                      piVar49 = (int *)(lVar75 + 8 + uVar40 * 0x14);
                      *piVar49 = *piVar49 + (uVar35 - uVar37);
                    }
                    else {
                      iVar39 = (int)((ulong)((long)(short)uVar35 *
                                             *(long *)(*(long *)((long)pphVar85 + 0x48) + 0x60) +
                                            0x8000) >> 0x10);
                      if (((ulong)unaff_R13 & 0x40000000) == 0) {
                        uVar35 = iVar39 >> 1;
                        ppVar61 = (pthread_mutex_t *)(ulong)uVar35;
                        lVar75 = *(long *)((long)pphVar85 + 0x50);
                        piVar49 = (int *)(lVar75 + 4 + *(long *)((long)pphVar85 + 0x40) * 4);
                        *piVar49 = *piVar49 + uVar35;
                        piVar49 = (int *)(lVar75 + 4 + uVar40 * 0x14);
                        *piVar49 = *piVar49 + (iVar39 - uVar35);
                        piVar49 = (int *)(lVar75 + 0xc + uVar40 * 0x14);
                        *piVar49 = *piVar49 + (iVar39 - uVar35);
                      }
                      else {
                        ppVar61 = *(pthread_mutex_t **)((long)pphVar85 + 0x50);
                        (&(ppVar61->__data).__owner)[uVar40 * 5] = iVar39;
LAB_003f0e28:
                        *(byte *)(*(long *)((long)pphVar85 + 0x20) + 0xc0) =
                             *(byte *)(*(long *)((long)pphVar85 + 0x20) + 0xc0) | 8;
                      }
                    }
                    unaff_R14 = (uint *)(ulong)(uVar36 + 1);
                    unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + 0x20);
                    param_1 = unaff_RBP;
code_r0x003f0e40:
                    *(undefined8 *)((long)pphVar85 + -8) = 0x3f0e4c;
                    auVar256 = hb_buffer_t::unsafe_to_break
                                         ((hb_buffer_t *)&param_1->__data,
                                          *(uint *)((long)pphVar85 + 0x30),(uint)unaff_R14);
                    unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
                  }
                }
              }
              unaff_RBX = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar85 + 0x88);
              goto LAB_003f0aa3;
            }
LAB_003f0c45:
            iVar39 = (int)ppVar41;
            if (bVar133) goto LAB_003f0c4e;
          }
          else {
            if ((uVar35 & 0x10) == 0) {
              if (((uVar35 & 0xff00) == 0) ||
                 (uVar36 = uVar111 & 0xff00, ppVar61 = (pthread_mutex_t *)(ulong)uVar36,
                 (uVar35 & 0xff00) == uVar36)) goto LAB_003f0b69;
            }
            else {
              uVar36 = *puVar65;
              paVar50 = *(accelerator_t **)(lVar75 + 0xf8);
              *(undefined8 *)((long)pphVar85 + -8) = 0x3f0cae;
              uVar48 = OT::GDEF::accelerator_t::mark_set_covers(paVar50,uVar35 >> 0x10,uVar36);
              auVar256._8_8_ = uVar44;
              auVar256._0_8_ = extraout_XMM0_Qa_05;
              ppVar41 = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar85 + 0x30);
              if ((char)uVar48 != '\0') goto LAB_003f0b69;
            }
LAB_003f0c4e:
            iVar39 = (int)ppVar41;
            unaff_RBX = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar85 + 0x88);
            if ((int)*(uint *)((long)pphVar85 + 0x88) < iVar104) goto code_r0x003f0c5e;
          }
        }
        unaff_RBX = (pthread_mutex_t *)(ulong)(iVar39 + 1);
        unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
        unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + 0x20);
      }
LAB_003f0aa3:
      auVar26 = auVar256;
    } while ((uint)unaff_RBX < *(uint *)((long)pphVar85 + 0x2c));
  }
  *(undefined1 **)((long)pphVar85 + -8) = &LAB_003f0e9e;
  hb_buffer_t::message
            (auVar26._0_8_,auVar26._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
             in_XMM6._0_8_,in_XMM7._0_8_,(hb_buffer_t *)&unaff_RBP->__data,
             *(undefined8 *)((long)pphVar85 + 0x48),"end kern",ppVar61,param_5,param_6,
             *(undefined1 *)pphVar85);
  goto LAB_003f0e9e;
code_r0x003f0c5e:
  lVar75 = *(long *)((long)pphVar85 + 0x90);
  ppVar61 = *(pthread_mutex_t **)(lVar75 + 0xa0);
  goto LAB_003f0b30;
code_r0x003ee93f:
  if ((*(byte *)(*(long *)((long)unaff_R15 + 8) + 0xa8) & 1) == 0) goto LAB_003f0ec0;
  unaff_R13 = (uint *)(ulong)(uVar35 << 0x18);
  if ((uVar35 << 0x18 & 0x10000000) != 0) goto LAB_003f0ec0;
  uVar40 = *(ulong *)((long)unaff_R15 + 0x80);
  if ((*(ulong *)((long)unaff_R15 + 0xb0) & uVar40) == 0) goto LAB_003f0ec0;
  if ((*(ulong *)((long)unaff_R15 + 0xb8) & *(ulong *)((long)unaff_R15 + 0x88)) == 0)
  goto LAB_003f0ec0;
  if (((((*(ulong *)((long)unaff_R15 + 0xc0) & *(ulong *)((long)unaff_R15 + 0x90)) == 0) ||
       ((unaff_R15[5].__align & uVar40) == 0)) ||
      ((*(ulong *)((long)unaff_R15 + 0xd0) & *(ulong *)((long)unaff_R15 + 0x88)) == 0)) ||
     ((*(ulong *)((long)unaff_R15 + 0x90) & *(ulong *)((long)unaff_R15 + 0xd8)) == 0))
  goto LAB_003f0ec0;
  unaff_RBX = *(pthread_mutex_t **)((long)unaff_R15 + 0x10);
  unaff_RBP = (pthread_mutex_t *)(unaff_R15->__data).__list.__next;
  *(uint *)((long)pphVar85 + 8) = *(uint *)(*(long *)((long)unaff_R15 + 8) + 0xa0);
  *(uint *)((long)pphVar85 + -8) = 0x3ee9ec;
  *(uint *)((long)pphVar85 + -4) = 0;
  bVar133 = hb_buffer_t::message
                      (uVar44,uVar48,uVar171,uVar206,uVar247,uVar249,uVar252,uVar255,
                       (hb_buffer_t *)&unaff_RBP->__data,unaff_RBX,"start kern",uVar40,param_5,
                       param_6,(char)*(uint *)pphVar85);
  in_XMM0 = extraout_XMM0_00;
  if (!bVar133) goto LAB_003f0ec0;
  hVar9 = *(hb_buffer_t *)(unaff_RBP->__size + 0x18);
  *(__pthread_mutex_s **)((long)pphVar85 + 0x20) = &unaff_RBP->__data;
  if (((byte)hVar9 & 0x40) != 0) {
    uVar35 = *(uint *)&((__pthread_internal_list *)((long)unaff_RBP + 0x60))->__prev;
    *(byte *)&((__pthread_internal_list *)((long)unaff_RBP + 0xc0))->__prev =
         *(byte *)&((__pthread_internal_list *)((long)unaff_RBP + 0xc0))->__prev | 0x20;
    if ((ulong)uVar35 != 0) {
      p_Var47 = ((__pthread_internal_list *)((long)unaff_RBP + 0x70))->__prev;
      if ((ulong)uVar35 - 1 < 3) {
        uVar40 = 0;
      }
      else {
        p_Var52 = p_Var47 + 4;
        uVar40 = 0;
        do {
          pbVar119 = (byte *)((long)&p_Var52[-4].__prev + 4);
          *pbVar119 = *pbVar119 | 2;
          *(byte *)&p_Var52[-3].__next = *(byte *)&p_Var52[-3].__next | 2;
          pbVar119 = (byte *)((long)&p_Var52[-2].__next + 4);
          *pbVar119 = *pbVar119 | 2;
          *(byte *)&p_Var52->__prev = *(byte *)&p_Var52->__prev | 2;
          uVar40 = uVar40 + 4;
          p_Var52 = p_Var52 + 5;
        } while ((uVar35 & 0xfffffffc) != uVar40);
      }
      unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
      unaff_RBP = *(pthread_mutex_t **)((long)pphVar85 + 0x20);
      if ((ulong)(uVar35 & 3) != 0) {
        lVar75 = 0;
        do {
          pbVar119 = (byte *)((long)p_Var47 + lVar75 + uVar40 * 0x14 + 4);
          *pbVar119 = *pbVar119 | 2;
          lVar75 = lVar75 + 0x14;
        } while ((ulong)(uVar35 & 3) * 0x14 != lVar75);
      }
    }
  }
  puVar45 = &_hb_NullPool;
  *(uint *)((long)pphVar85 + -8) = 0x3eea22;
  *(uint *)((long)pphVar85 + -4) = 0;
  OT::hb_ot_apply_context_t::hb_ot_apply_context_t
            ((hb_ot_apply_context_t *)((long)pphVar85 + 0x80),1,(long)unaff_RBX,
             (undefined4 *)unaff_RBP,(GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
  in_XMM1._8_8_ = extraout_XMM1_Qb_00;
  in_XMM1._0_8_ = extraout_XMM1_Qa_00;
  uVar35 = *(uint *)((long)pphVar85 + 8);
  param_6 = (pthread_mutex_t *)(ulong)uVar35;
  *(uint *)((long)pphVar85 + 0x1ac) = uVar35;
  *(uint *)((long)pphVar85 + 0x1c8) = 0xffffffff;
  *(uint *)((long)pphVar85 + 0x1cc) = 0;
  *(__pthread_mutex_s **)((long)pphVar85 + 0x48) = &unaff_RBX->__data;
  uVar33 = *(undefined1 *)((long)pphVar85 + 0x1be);
  unaff_RBX = (pthread_mutex_t *)CONCAT71((int7)((ulong)unaff_RBX >> 8),uVar33);
  ppVar41 = (pthread_mutex_t *)(ulong)*(byte *)((long)pphVar85 + 0x1bf);
  if (*(uint *)((long)pphVar85 + 0x108) != 0) {
    ppVar41 = (pthread_mutex_t *)0x0;
  }
  param_1 = (pthread_mutex_t *)((long)pphVar85 + 0xa8);
  in_XMM0 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)pphVar85 + 0xe8) = (undefined1  [16])0x0;
  *(uint *)((long)pphVar85 + 0xf8) = 0;
  *(uint *)((long)pphVar85 + 0xfc) = 0;
  param_5 = (uint *)CONCAT71((int7)((ulong)puVar45 >> 8),*(char *)((long)pphVar85 + 0x1bd) != '\0');
  bVar134 = *(uint *)((long)pphVar85 + 0x108) == 1;
  *(undefined1 *)((long)pphVar85 + 0xe1) = 1;
  *(bool *)((long)pphVar85 + 0xe2) = bVar134;
  *(uint *)((long)pphVar85 + 0x1b4) = 8;
  *(uint **)((long)pphVar85 + 0x90) = (uint *)((long)pphVar85 + 0x80);
  ppVar61 = (pthread_mutex_t *)(ulong)*(uint *)(*(long *)((long)pphVar85 + 0x120) + 0x60);
  *(uint *)((long)pphVar85 + 0xc0) = *(uint *)(*(long *)((long)pphVar85 + 0x120) + 0x60);
  param_1->__size[0] = '\0';
  param_1->__size[1] = '\0';
  param_1->__size[2] = '\0';
  param_1->__size[3] = '\0';
  param_1->__size[4] = '\0';
  param_1->__size[5] = '\0';
  param_1->__size[6] = '\0';
  param_1->__size[7] = '\0';
  param_1->__size[8] = '\0';
  param_1->__size[9] = '\0';
  param_1->__size[10] = '\0';
  param_1->__size[0xb] = '\0';
  param_1->__size[0xc] = '\0';
  param_1->__size[0xd] = '\0';
  param_1->__size[0xe] = '\0';
  param_1->__size[0xf] = '\0';
  *(uint *)((long)pphVar85 + 0xb8) = 0;
  *(uint *)((long)pphVar85 + 0xbc) = 0;
  *(uint *)((long)pphVar85 + 0x98) = 8;
  *(bool *)((long)pphVar85 + 0xa0) = bVar134;
  *(undefined1 *)((long)pphVar85 + 0xa1) = uVar33;
  *(bool *)((long)pphVar85 + 0xa2) = bVar134;
  param_3 = (pthread_mutex_t *)(ulong)bVar134;
  *(uint *)((long)pphVar85 + 0x9c) = uVar35;
  *(char *)((long)pphVar85 + 0xa3) = (char)ppVar41;
  *(undefined1 *)((long)pphVar85 + 0xa4) = 0;
  *(uint **)((long)pphVar85 + 0xd0) = (uint *)((long)pphVar85 + 0x80);
  pphVar83 = pphVar85;
code_r0x003eeb16:
  *(int *)((long)pphVar83 + 0x100) = (int)ppVar61;
  *(undefined1 (*) [16])((long)param_1 + 0x40) = in_XMM0;
  param_1[2].__align = 0;
  *(bool *)((long)pphVar83 + 0xe2) = bVar134;
  ppVar61 = (pthread_mutex_t *)0xffffffff00000008;
  *(undefined8 *)((long)pphVar83 + 0xd8) = 0xffffffff00000008;
  *(byte *)((long)pphVar83 + 0xe0) = (byte)param_3 | (byte)param_5;
  *(undefined1 *)((long)pphVar83 + 0xe1) = 1;
  *(char *)((long)pphVar83 + 0xe3) = (char)ppVar41;
  *(undefined1 *)((long)pphVar83 + 0xe4) = 0;
  iVar39 = *(int *)((long)unaff_RBP + 0x60);
  *(int *)((long)pphVar83 + 0x2c) = iVar39;
  if (iVar39 != 0) goto code_r0x003eeb74;
  goto LAB_003f0e70;
code_r0x003eeb74:
  *(uint *)((long)pphVar83 + 0x60) = *(uint *)((long)unaff_RBP + 0x38) & 0xfffffffe;
  goto code_r0x003eeb7e;
LAB_003f0554:
  do {
    uVar77 = (uint)((int)in_R11 + iVar39) >> 1;
    lVar79 = (ulong)uVar77 * 6;
    uVar111 = *(ushort *)(in_R10 + 0x1c + lVar79);
    uVar105 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
    if (uVar36 != uVar105) {
      if (uVar105 <= uVar36) goto LAB_003f0590;
LAB_003f0549:
      in_R11 = (hb_buffer_t *)(ulong)(uVar77 - 1);
      if ((int)(uVar77 - 1) < iVar39) break;
      goto LAB_003f0554;
    }
    uVar111 = *(ushort *)(in_R10 + 0x1e + lVar79);
    uVar105 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
    if (uVar60 < uVar105) goto LAB_003f0549;
    if (uVar60 == uVar105) {
      puVar45 = (undefined4 *)(in_R10 + (ulong)uVar77 * 6 + 0x1c);
      goto LAB_003f05af;
    }
LAB_003f0590:
    iVar39 = uVar77 + 1;
  } while (iVar39 <= (int)in_R11);
  puVar45 = &_hb_NullPool;
LAB_003f05af:
  uVar36 = (uint)(short)(*(ushort *)(puVar45 + 1) << 8 | *(ushort *)(puVar45 + 1) >> 8);
  puVar130 = (ushort *)(ulong)uVar36;
  if ((unaff_R15 != (pthread_mutex_t *)0x0) && (uVar60 = *(uint *)(in_R10 + 8), uVar60 != 0)) {
    uVar36 = uVar60 >> 0x18 | (uVar60 & 0xff0000) >> 8 | (uVar60 & 0xff00) << 8 | uVar60 << 0x18;
    if ((CARRY4(uVar36,uVar36)) ||
       (((puVar130 = (ushort *)((long)puVar130 + in_R10),
         (ulong)*(uint *)((long)unaff_R15 + 0x40) <
         (ulong)((long)puVar130 - *(long *)((long)unaff_R15 + 0x30)) ||
         ((uint)(*(int *)((long)unaff_R15 + 0x38) - (int)puVar130) < uVar36 * 2)) ||
        (iVar39 = *(int *)((long)unaff_R15 + 0x44) + uVar36 * -2,
        *(int *)((long)unaff_R15 + 0x44) = iVar39, iVar39 < 1)))) goto LAB_003f05cb;
    uVar36 = (uint)(short)(*puVar130 << 8 | *puVar130 >> 8);
    puVar130 = (ushort *)(ulong)uVar36;
  }
  if (uVar36 == 0) goto LAB_003f05cb;
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
  if (*(int *)((long)pphVar85 + 0x48) == 4) {
    iVar39 = (int)((ulong)((long)(short)puVar130 *
                           *(long *)(*(long *)((long)pphVar85 + 0x40) + 0x58) + 0x8000) >> 0x10);
    if (((ulong)unaff_R13 & 0x40000000) != 0) {
      puVar130 = *(ushort **)((long)pphVar85 + 0x60);
      *(int *)(puVar130 + uVar40 * 10 + 6) = iVar39;
      goto LAB_003f06b1;
    }
    uVar36 = iVar39 >> 1;
    puVar130 = (ushort *)(ulong)uVar36;
    lVar79 = *(long *)((long)pphVar85 + 0x60);
    piVar49 = (int *)(lVar79 + lVar75 * 4);
    *piVar49 = *piVar49 + uVar36;
    piVar49 = (int *)(lVar79 + uVar40 * 0x14);
    *piVar49 = *piVar49 + (iVar39 - uVar36);
    piVar49 = (int *)(lVar79 + 8 + uVar40 * 0x14);
    *piVar49 = *piVar49 + (iVar39 - uVar36);
  }
  else {
    iVar39 = (int)((ulong)((long)(short)puVar130 *
                           *(long *)(*(long *)((long)pphVar85 + 0x40) + 0x60) + 0x8000) >> 0x10);
    if (((ulong)unaff_R13 & 0x40000000) == 0) {
      uVar36 = iVar39 >> 1;
      puVar130 = (ushort *)(ulong)uVar36;
      lVar79 = *(long *)((long)pphVar85 + 0x60);
      piVar49 = (int *)(lVar79 + 4 + lVar75 * 4);
      *piVar49 = *piVar49 + uVar36;
      piVar49 = (int *)(lVar79 + 4 + uVar40 * 0x14);
      *piVar49 = *piVar49 + (iVar39 - uVar36);
      piVar49 = (int *)(lVar79 + 0xc + uVar40 * 0x14);
      *piVar49 = *piVar49 + (iVar39 - uVar36);
    }
    else {
      puVar130 = *(ushort **)((long)pphVar85 + 0x60);
      *(int *)(puVar130 + uVar40 * 10 + 4) = iVar39;
LAB_003f06b1:
      *(byte *)(*(long *)((long)pphVar85 + 0x20) + 0xc0) =
           *(byte *)(*(long *)((long)pphVar85 + 0x20) + 0xc0) | 8;
    }
  }
  *(undefined8 *)((long)pphVar85 + -8) = 0x3f06ca;
  auVar261 = hb_buffer_t::unsafe_to_break
                       (*(hb_buffer_t **)((long)pphVar85 + 0x20),uVar35,uVar37 + 1);
  in_XMM1._0_8_ = auVar261._8_8_;
  in_XMM0._0_8_ = auVar261._0_8_;
  in_XMM1._8_8_ = extraout_XMM1_Qb_07;
  in_XMM0._8_8_ = extraout_XMM0_Qb_05;
  unaff_R15 = *(pthread_mutex_t **)((long)pphVar85 + 0x10);
LAB_003f05cb:
  unaff_RBX = (pthread_mutex_t *)(ulong)*(uint *)((long)pphVar85 + 0x88);
LAB_003f0254:
  uVar44 = in_XMM1._0_8_;
  uVar48 = in_XMM0._0_8_;
  if (*(uint *)((long)pphVar85 + 0x2c) <= (uint)unaff_RBX) goto LAB_003f0e56;
  goto LAB_003f025e;
LAB_003f0e56:
  *(undefined8 *)((long)pphVar85 + -8) = 0x3f0e6e;
  hb_buffer_t::message
            (uVar48,uVar44,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,in_XMM6._0_8_,
             in_XMM7._0_8_,*(hb_buffer_t **)((long)pphVar85 + 0x20),
             *(undefined8 *)((long)pphVar85 + 0x40),"end kern",puVar130,param_5,param_6,
             *(undefined1 *)pphVar85);
  goto LAB_003f0e9e;
LAB_003ea310:
  if (*(char *)((long)&p_Var47[5].__next + 2) == '\0') goto LAB_003ea340;
  p_Var52 = p_Var47[7].__next;
  p_Var128 = p_Var47[7].__prev;
  uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
  if ((p_Var52 == p_Var128) && (uVar35 == uVar36)) {
    phStack_238 = (hb_buffer_t *)CONCAT44(phStack_238._4_4_,uVar60);
    uVar35 = uVar36;
    goto LAB_003ea3d9;
  }
  uVar35 = uVar35 + 1;
  if ((uVar35 == 0) || (uVar35 < *(uint *)&p_Var47[6].__next)) {
    if (p_Var52 != p_Var128) goto LAB_003ea3ab;
    goto LAB_003ea35c;
  }
  uVar44 = hb_buffer_t::enlarge((hb_buffer_t *)p_Var47,uVar35);
  if ((char)uVar44 == '\0') {
    phStack_238 = (hb_buffer_t *)CONCAT44(phStack_238._4_4_,uVar60);
    uVar37 = (uint)uVar111;
    cVar34 = *(char *)&p_Var47[5].__next;
    goto joined_r0x003e999c;
  }
  p_Var52 = *(__pthread_internal_list **)&ppStack_210->__data;
  p_Var128 = *(__pthread_internal_list **)&ppStack_228->__data;
  if (p_Var52 == p_Var128) {
LAB_003ea35c:
    uVar37 = (uint)uVar111;
    uVar35 = *(uint *)((long)&p_Var47[6].__prev + 4);
    if (*(int *)((long)&p_Var47[5].__next + 4) + 1U < uVar35 + 1) {
      p_Var52 = p_Var47[8].__prev;
      p_Var47[7].__next = p_Var52;
      phStack_238 = (hb_buffer_t *)CONCAT44(phStack_238._4_4_,uVar60);
LAB_003ea37d:
      if (uVar35 != 0) {
        memcpy(p_Var52,p_Var128,(ulong)uVar35 * 0x14);
        p_Var128 = *(__pthread_internal_list **)&ppStack_228->__data;
        p_Var52 = *(__pthread_internal_list **)&ppStack_210->__data;
      }
      goto LAB_003ea3af;
    }
    p_Var52 = p_Var128;
  }
LAB_003ea3ab:
  uVar37 = (uint)uVar111;
  phStack_238 = (hb_buffer_t *)CONCAT44(phStack_238._4_4_,uVar60);
  goto LAB_003ea3af;
LAB_003ea340:
  phStack_238 = (hb_buffer_t *)CONCAT44(phStack_238._4_4_,uVar60);
  goto LAB_003ea3e2;
LAB_003e84a0:
  uVar36 = uVar35;
  goto LAB_003e8c0e;
LAB_003e8bd0:
  p_Var128 = p_Var52;
  goto LAB_003e8be0;
code_r0x003f809d:
  do {
    ppVar61 = (pthread_mutex_t *)((long)ppVar61 + -1);
  } while (ppVar61 != (pthread_mutex_t *)0x0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x003f3b06:
  while( true ) {
    uVar35 = (uint)ppVar61 & 0xffff;
    iVar39 = 0;
    if ((short)ppVar41 != 0) {
      uVar111 = *(ushort *)((long)&(unaff_RBX->__data).__lock + 2);
      uVar40 = (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (uVar35 + (int)param_1));
      iVar39 = 0;
      if (*(short *)((long)&(unaff_RBX->__data).__nusers + uVar40) == -1) {
        iVar39 = -(uint)(*(short *)((long)&(unaff_R12->__data).__lock + uVar40 + 2) == -1);
      }
    }
    uVar36 = (uint)unaff_RBP;
    ppVar41 = unaff_R15;
    if (uVar36 < iVar39 + uVar35) {
      uVar111 = *(ushort *)((long)&(unaff_RBX->__data).__lock + 2);
      ppVar41 = (pthread_mutex_t *)
                ((long)&(unaff_R12->__data).__lock +
                (ulong)((ushort)(uVar111 << 8 | uVar111 >> 8) * uVar36));
    }
    uVar111 = *(ushort *)((long)&(ppVar41->__data).__lock + 2);
    if (uVar111 != 0xffff) {
      uVar71 = (ushort)(ppVar41->__data).__lock;
      *(undefined8 *)((long)pphVar86 + -8) = 0x3f3b7c;
      ppVar41 = (pthread_mutex_t *)
                hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                             *)unaff_R14,(uint)(ushort)(uVar111 << 8 | uVar111 >> 8),
                            (uint)(ushort)(uVar71 << 8 | uVar71 >> 8));
      param_1 = (pthread_mutex_t *)0xffffffff;
    }
    bVar133 = (uint)unaff_R13 == uVar36;
code_r0x003f3b84:
    if (bVar133) break;
    ppVar41 = (pthread_mutex_t *)(ulong)(ushort)(unaff_RBX->__data).__count;
    unaff_RBP = (pthread_mutex_t *)(ulong)((int)unaff_RBP + 1);
    pphVar85 = pphVar86;
LAB_003f3b00:
    ppVar61 = (pthread_mutex_t *)(ulong)(ushort)((ushort)ppVar41 << 8 | (ushort)ppVar41 >> 8);
    pphVar86 = pphVar85;
  }
  return ppVar41;
  while( true ) {
    uVar111 = *(ushort *)((long)&(param_1->__data).__count + (long)unaff_R12 * 2 + 2);
    uVar40 = (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8);
    unaff_RBP = (pthread_mutex_t *)((long)&((__pthread_mutex_s *)unaff_R13)->__count + uVar40);
    if ((ulong)*(uint *)in_R11 < (ulong)((long)unaff_RBP - param_6->__align)) goto LAB_003f312d;
    uVar35 = *(uint *)((long)&((__pthread_mutex_s *)unaff_R13)->__lock + uVar40);
    uVar40 = (ulong)(uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                    uVar35 << 0x18) * ((ulong)unaff_R14 & 0xffffffff);
    ppVar41 = (pthread_mutex_t *)(uVar40 & 0xffffffff);
    if ((int)(uVar40 >> 0x20) != 0) goto LAB_003f312d;
code_r0x003f3958:
    param_3 = (pthread_mutex_t *)param_6->__align;
    unaff_RBX = (pthread_mutex_t *)(ulong)*(uint *)in_R11;
    if (((unaff_RBX < (pthread_mutex_t *)((long)unaff_RBP - (long)param_3->__size)) ||
        ((uint)((param_2->__data).__kind - (int)unaff_RBP) < (uint)ppVar41)) ||
       (iVar39 = *(int *)((long)&(param_2->__data).__list.__prev + 4) - (uint)ppVar41,
       *(int *)((long)&(param_2->__data).__list.__prev + 4) = iVar39, iVar39 < 1))
    goto LAB_003f312d;
    unaff_R12 = (pthread_mutex_t *)(unaff_R12->__size + 1);
code_r0x003f398e:
    param_5 = (uint *)((long)param_5 + 2);
    if (unaff_R15 == unaff_R12) break;
LAB_003f3910:
    if (((ulong)unaff_RBX & 0xffffffff) < (ulong)((long)param_5 - (long)param_3->__size))
    goto LAB_003f312d;
  }

  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_sanitize_switchD_003f3170_caseD_a
  :
  return (pthread_mutex_t *)(in_R10 & 0xffffffff);
code_r0x003f2dd3:
  while (uVar40 = (ulong)param_3 & 0xffffffff, (int)in_R11 <= (int)param_3) {
LAB_003f2ddb:
    while( true ) {
      uVar35 = (uint)((int)uVar40 + (int)in_R11) >> 1;
      uVar111 = *(ushort *)((long)&(param_1->__data).__nusers + (long)param_6 * (ulong)uVar35 + 2);
      uVar36 = (uint)param_2;
      if (uVar36 < (ushort)(uVar111 << 8 | uVar111 >> 8)) break;
      uVar111 = (ushort)*(uint *)((long)&(param_1->__data).__nusers + (long)param_6 * (ulong)uVar35)
      ;
      if (uVar36 <= (ushort)(uVar111 << 8 | uVar111 >> 8)) {
        uVar40 = (ulong)(uVar35 * (int)param_5);
        uVar111 = *(ushort *)((long)&(param_1->__data).__nusers + uVar40 + 2);
        uVar35 = (uint)(ushort)(uVar111 << 8 | uVar111 >> 8);
        if ((uVar36 < uVar35) ||
           (uVar111 = *(ushort *)((long)&(param_1->__data).__nusers + uVar40),
           (ushort)(uVar111 << 8 | uVar111 >> 8) < uVar36)) {
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
          return (pthread_mutex_t *)0x0;
        }
        uVar111 = *(ushort *)((long)&(param_1->__data).__kind + uVar40);
        return (pthread_mutex_t *)
               ((long)&(param_1->__data).__lock +
               (ulong)(uVar36 - uVar35) * 2 + (ulong)(ushort)(uVar111 << 8 | uVar111 >> 8));
      }
      in_R11 = (hb_buffer_t *)(ulong)(uVar35 + 1);
      if ((int)uVar40 < (int)(uVar35 + 1)) {
        return ppVar41;
      }
    }
    param_3 = (pthread_mutex_t *)(ulong)(uVar35 - 1);
  }

  AAT_Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>_get_value_switchD_003f2ba5_caseD_1
  :
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
  return ppVar41;
  while( true ) {
    cVar34 = pcVar56[uVar132 + 1];
    uVar132 = uVar132 + 1;
    if (cVar34 == '\0') break;
LAB_0041f420:
    *(char *)((long)pphVar85 + uVar132 + 0x2c) = cVar34;
    if (uVar40 - 1 == uVar132) goto LAB_0041f438;
  }
  uVar40 = uVar132 & 0xffffffff;
LAB_0041f438:
  if ((uint)uVar40 < 4) {
    *(uint *)((long)pphVar85 + -8) = 0x41f45f;
    *(uint *)((long)pphVar85 + -4) = 0;
    memset((void *)((long)pphVar85 + uVar40 + 0x2c),0x20,(ulong)(3 - (uint)uVar40) + 1);
    pcVar56 = *(char **)((long)pphVar85 + 8);
  }
  uVar35 = *(uint *)((long)pphVar85 + 0x2c);
  uVar60 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18;
LAB_0041f46d:
  uVar40 = (ulong)_ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0;
  if ((_ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0 < uVar36) &&
     (*(uint *)(pcVar57 + uVar40 * 8) == uVar60)) {
LAB_0041f485:
    _ZZL24hb_ot_tags_from_languagePKcS0_PjS1_E12last_tag_idx_0 = (uint)uVar40;
    uVar35 = *(uint *)pphVar85;
    do {
      uVar37 = (uint)uVar40;
      if (uVar37 == 0) {
        uVar37 = 0;
        if (uVar36 == 0) goto LAB_0041f563;
        goto LAB_0041f4d3;
      }
      lVar75 = uVar40 * 8;
      uVar40 = (ulong)(uVar37 - 1);
    } while (*(int *)(pcVar57 + lVar75) == *(int *)(pcVar57 + (ulong)(uVar37 - 1) * 8));
    bVar133 = uVar37 <= uVar36;
    uVar36 = uVar36 - uVar37;
    bVar134 = uVar36 != 0;
    if (!bVar133) {
      uVar36 = 0;
    }
    if (bVar133 && bVar134) {
LAB_0041f4d3:
      uVar40 = (ulong)uVar37;
      if (*(uint *)(pcVar57 + uVar40 * 8 + 4) == 0) {
        uVar36 = 0;
      }
      else {
        uVar60 = 0;
        if (*(int *)(pcVar57 + uVar40 * 8) == *(int *)(pcVar57 + uVar40 * 8)) {
          *(uint *)((long)pphVar85 + 0x14) = *(uint *)(pcVar57 + uVar40 * 8 + 4);
          if (uVar36 != 1) {
            if (*(uint *)(pcVar57 + (ulong)(uVar37 + 1) * 8 + 4) == 0) {
              uVar36 = 1;
            }
            else {
              uVar60 = 1;
              if (*(int *)(pcVar57 + (ulong)(uVar37 + 1) * 8) != *(int *)(pcVar57 + uVar40 * 8))
              goto LAB_0041f560;
              *(uint *)((long)pphVar85 + 0x18) = *(uint *)(pcVar57 + (ulong)(uVar37 + 1) * 8 + 4);
              if (uVar36 != 2) {
                if (*(uint *)(pcVar57 + (ulong)(uVar37 + 2) * 8 + 4) == 0) {
                  uVar36 = 2;
                }
                else {
                  uVar60 = 2;
                  if (*(int *)(pcVar57 + (ulong)(uVar37 + 2) * 8) != *(int *)(pcVar57 + uVar40 * 8))
                  goto LAB_0041f560;
                  *(uint *)((long)pphVar85 + 0x1c) =
                       *(uint *)(pcVar57 + (ulong)(uVar37 + 2) * 8 + 4);
                  uVar36 = 3;
                }
              }
            }
          }
        }
        else {
LAB_0041f560:
          uVar36 = uVar60;
        }
      }
    }
  }
  else {
    uVar35 = *(uint *)pphVar85;
    if (!bVar133) {
      iVar39 = uVar36 - 1;
      iVar104 = 0;
      do {
        while( true ) {
          uVar37 = (uint)(iVar39 + iVar104) >> 1;
          uVar40 = (ulong)uVar37;
          if (uVar60 < *(uint *)(pcVar57 + uVar40 * 8)) break;
          if (uVar60 <= *(uint *)(pcVar57 + uVar40 * 8)) goto LAB_0041f485;
          iVar104 = uVar37 + 1;
          if (iVar39 < iVar104) goto LAB_0041fa27;
        }
        iVar39 = uVar37 - 1;
      } while (iVar104 <= iVar39);
    }
LAB_0041fa27:
    if (pcVar55 == (char *)0x0) {
      *(uint *)((long)pphVar85 + -8) = 0x41fa36;
      *(uint *)((long)pphVar85 + -4) = 0;
      sVar58 = strlen(*(char **)((long)pphVar85 + 8));
      pcVar56 = *(char **)((long)pphVar85 + 8);
      pcVar55 = pcVar56 + sVar58;
    }
    uVar36 = 0;
    if ((long)pcVar55 - (long)pcVar56 == 3) {
      *(uint *)((long)pphVar85 + -8) = 0x41fa5c;
      *(uint *)((long)pphVar85 + -4) = 0;
      uVar36 = hb_tag_from_string(pcVar56);
      *(uint *)((long)pphVar85 + 0x14) = uVar36 & 0xdfdfdfff;
      uVar36 = 1;
    }
  }
LAB_0041f563:
  cVar34 = *(char *)((long)pphVar85 + 7);
joined_r0x0041f32f:
  unaff_R12 = (pthread_mutex_t *)0x0;
  if (cVar34 == '\0') goto LAB_0041f6da;
LAB_0041f56e:
  if ((int)uVar35 < 0x4d6c796d) {
    if ((int)uVar35 < 0x47756a72) {
      uVar37 = 0x626e6732;
      if (uVar35 != 0x42656e67) {
        if (uVar35 != 0x44657661) goto LAB_0041f64c;
        uVar37 = 0x64657632;
      }
    }
    else if (uVar35 == 0x47756a72) {
      uVar37 = 0x676a7232;
    }
    else if (uVar35 == 0x47757275) {
      uVar37 = 0x67757232;
    }
    else {
      if (uVar35 != 0x4b6e6461) goto LAB_0041f64c;
      uVar37 = 0x6b6e6432;
    }
LAB_0041f620:
    *(uint *)((long)pphVar85 + 0x4c) = uVar37 | 0x33;
    unaff_R12 = (pthread_mutex_t *)0x1;
    if (*(uint *)((long)pphVar85 + 0x28) < 2) {
      *(uint *)((long)pphVar85 + 0x28) = 1;
      goto LAB_0041f6da;
    }
LAB_0041f636:
    uVar40 = (ulong)unaff_R12 & 0xffffffff;
    uVar60 = (int)unaff_R12 + 1;
    unaff_R12 = (pthread_mutex_t *)(ulong)uVar60;
    *(uint *)((long)pphVar85 + (uVar40 + 0x13) * 4) = uVar37;
    if (uVar60 < *(uint *)((long)pphVar85 + 0x28)) goto LAB_0041f64c;
  }
  else {
    if (0x4f727960 < (int)uVar35) {
      if (uVar35 == 0x4f727961) {
        uVar37 = 0x6f727932;
      }
      else if (uVar35 == 0x54616d6c) {
        uVar37 = 0x746d6c32;
      }
      else {
        if (uVar35 != 0x54656c75) goto LAB_0041f64c;
        uVar37 = 0x74656c32;
      }
      goto LAB_0041f620;
    }
    if (uVar35 == 0x4d6c796d) {
      uVar37 = 0x6d6c6d32;
      goto LAB_0041f620;
    }
    uVar37 = 0x6d796d32;
    if (uVar35 == 0x4d796d72) goto LAB_0041f636;
LAB_0041f64c:
    uVar60 = (uint)unaff_R12;
    if ((int)uVar35 < 0x4e6b6f6f) {
      if (uVar35 == 0) goto LAB_0041f6d5;
      if (uVar35 == 0x48697261) {
        uVar37 = 0x6b616e61;
      }
      else {
        if (uVar35 != 0x4c616f6f) goto LAB_0041f6ad;
        uVar37 = 0x6c616f20;
      }
    }
    else if ((int)uVar35 < 0x59696969) {
      if (uVar35 == 0x4e6b6f6f) {
        uVar37 = 0x6e6b6f20;
      }
      else {
        if (uVar35 != 0x56616969) goto LAB_0041f6ad;
        uVar37 = 0x76616920;
      }
    }
    else if (uVar35 == 0x59696969) {
      uVar37 = 0x79692020;
    }
    else {
      uVar37 = 0x6d617468;
      if (uVar35 != 0x5a6d7468) {
LAB_0041f6ad:
        uVar37 = uVar35 | 0x20000000;
      }
    }
    uVar60 = uVar60 + 1;
    *(uint *)((long)pphVar85 + (((ulong)unaff_R12 & 0xffffffff) + 0x13) * 4) = uVar37;
  }
LAB_0041f6d5:
  *(uint *)((long)pphVar85 + 0x28) = uVar60;
LAB_0041f6da:
  uVar35 = *(uint *)((long)pphVar85 + 0x28);
  *(uint *)((long)pphVar85 + -8) = 0x41f6fe;
  *(uint *)((long)pphVar85 + -4) = 0;
  uVar44 = hb_ot_layout_table_select_script
                     ((long)unaff_R14,0x47535542,uVar35,(long)((long)pphVar85 + 0x4c),
                      (uint *)((long)unaff_R15 + 0x38),(undefined4 *)((long)unaff_R15 + 0x2c));
  *(bool *)((long)unaff_R15 + 0x34) = (int)uVar44 != 0;
  lVar75 = unaff_R15->__align;
  uVar37 = *(uint *)((long)unaff_R15 + 0x38);
  *(uint *)((long)pphVar85 + -8) = 0x41f722;
  *(uint *)((long)pphVar85 + -4) = 0;
  hb_ot_layout_script_select_language2
            (lVar75,0x47535542,uVar37,uVar36,(long)((long)pphVar85 + 0x14),
             (uint *)((long)unaff_R15 + 0x40));
  lVar75 = unaff_R15->__align;
  *(uint *)((long)pphVar85 + -8) = 0x41f73e;
  *(uint *)((long)pphVar85 + -4) = 0;
  uVar44 = hb_ot_layout_table_select_script
                     (lVar75,0x47504f53,uVar35,(long)((long)pphVar85 + 0x4c),
                      (uint *)((long)unaff_R15 + 0x3c),(undefined4 *)((long)unaff_R15 + 0x30));
  *(bool *)((long)unaff_R15 + 0x35) = (int)uVar44 != 0;
  lVar75 = unaff_R15->__align;
  uVar35 = *(uint *)((long)unaff_R15 + 0x3c);
  *(uint *)((long)pphVar85 + -8) = 0x41f762;
  *(uint *)((long)pphVar85 + -4) = 0;
  ppVar41 = (pthread_mutex_t *)
            hb_ot_layout_script_select_language2
                      (lVar75,0x47504f53,uVar35,uVar36,(long)((long)pphVar85 + 0x14),
                       (uint *)((long)unaff_R15 + 0x44));
  return ppVar41;
LAB_003f2835:
  param_6 = (pthread_mutex_t *)(param_1->__size + (uint)((int)ppVar61 * (int)param_5));
LAB_003f283f:
  ppVar41 = (pthread_mutex_t *)&(param_6->__data).__count;
  if (param_6 == (pthread_mutex_t *)0x0) {
    ppVar41 = (pthread_mutex_t *)0x0;
  }
  return ppVar41;
LAB_003f4fbb:
  in_R11 = (hb_buffer_t *)0x0;
AAT_Lookup<OT::IntType<unsigned_int,4u>>_sanitize_switchD_003f4fe8_caseD_1:
  return (pthread_mutex_t *)((ulong)in_R11 & 0xffffffff);
code_r0x003f3c06:
  while( true ) {
    uVar35 = (uint)ppVar61 & 0xffff;
    iVar39 = 0;
    if ((short)ppVar41 != 0) {
      uVar111 = *(ushort *)((long)&(unaff_RBX->__data).__lock + 2);
      uVar40 = (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (uVar35 + (int)param_1));
      iVar39 = 0;
      if (*(short *)((long)&(unaff_RBX->__data).__nusers + uVar40) == -1) {
        iVar39 = -(uint)(*(short *)((long)&(unaff_R12->__data).__lock + uVar40 + 2) == -1);
      }
    }
    ppVar41 = unaff_R15;
    if ((uint)unaff_RBP < iVar39 + uVar35) {
      uVar111 = *(ushort *)((long)&(unaff_RBX->__data).__lock + 2);
      ppVar41 = (pthread_mutex_t *)
                ((long)&(unaff_R12->__data).__lock +
                (ulong)((uint)(ushort)(uVar111 << 8 | uVar111 >> 8) * (uint)unaff_RBP));
    }
    uVar111 = *(ushort *)((long)&(ppVar41->__data).__lock + 2);
    if (uVar111 != 0xffff) {
      uVar71 = (ushort)(ppVar41->__data).__lock;
      *(undefined8 *)((long)pphVar87 + -8) = 0x3f3c7c;
      ppVar41 = (pthread_mutex_t *)
                hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                ::add_range((hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
                             *)unaff_R14,(uint)(ushort)(uVar111 << 8 | uVar111 >> 8),
                            (uint)(ushort)(uVar71 << 8 | uVar71 >> 8));
      param_1 = (pthread_mutex_t *)0xffffffff;
    }
LAB_003f3c81:
    if ((int)unaff_R13 == (int)unaff_RBP) break;
    ppVar41 = (pthread_mutex_t *)(ulong)(ushort)(unaff_RBX->__data).__count;
    unaff_RBP = (pthread_mutex_t *)(ulong)((int)unaff_RBP + 1);
LAB_003f3c00:
    ppVar61 = (pthread_mutex_t *)(ulong)(ushort)((ushort)ppVar41 << 8 | (ushort)ppVar41 >> 8);
  }
code_r0x003f3df8:
                    /* WARNING: Read-only address (ram,0x005de020) is written */
                    /* WARNING: Read-only address (ram,0x005de080) is written */
                    /* WARNING: Read-only address (ram,0x005e00f9) is written */
                    /* WARNING: Read-only address (ram,0x005e00fb) is written */
                    /* WARNING: Read-only address (ram,0x005e0170) is written */
                    /* WARNING: Read-only address (ram,0x005e0181) is written */
                    /* WARNING: Read-only address (ram,0x005e01d8) is written */
                    /* WARNING: Read-only address (ram,0x005e02b0) is written */
                    /* WARNING: Read-only address (ram,0x006524b0) is written */
  return ppVar41;
}


