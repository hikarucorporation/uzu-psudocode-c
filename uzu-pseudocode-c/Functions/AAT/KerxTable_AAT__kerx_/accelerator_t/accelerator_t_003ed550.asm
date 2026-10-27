; Function : accelerator_t
; Namespace: AAT:KerxTable_AAT__kerx_:accelerator_t
; Entry    : 003ed550
; Body     : 003ed550 - 003edf89

003ed550  55   PUSH RBP
003ed551  41 57   PUSH R15
003ed553  41 56   PUSH R14
003ed555  41 55   PUSH R13
003ed557  41 54   PUSH R12
003ed559  53   PUSH RBX
003ed55a  48 81 ec 08 01 00 00   SUB RSP,0x108
003ed561  0f 57 c0   XORPS XMM0,XMM0
003ed564  0f 11 07   MOVUPS xmmword ptr [RDI],XMM0
003ed567  48 89 7c 24 60   MOV qword ptr [RSP + 0x60],RDI
003ed56c  48 c7 47 10 00 00 00 00   MOV qword ptr [RDI + 0x10],0x0
003ed574  c7 44 24 20 00 00 00 00   MOV dword ptr [RSP + 0x20],0x0
003ed57c  c7 44 24 4c 00 00 00 00   MOV dword ptr [RSP + 0x4c],0x0
003ed584  48 c7 44 24 50 00 00 00 00   MOV qword ptr [RSP + 0x50],0x0
003ed58d  0f 11 44 24 28   MOVUPS xmmword ptr [RSP + 0x28],XMM0
003ed592  0f 11 44 24 38   MOVUPS xmmword ptr [RSP + 0x38],XMM0
003ed597  c6 44 24 48 00   MOV byte ptr [RSP + 0x48],0x0
003ed59c  c7 44 24 58 00 00 01 00   MOV dword ptr [RSP + 0x58],0x10000
003ed5a4  66 c7 44 24 5c 00 00   MOV word ptr [RSP + 0x5c],0x0
003ed5ab  8b 46 18   MOV EAX,dword ptr [RSI + 0x18]
003ed5ae  83 f8 ff   CMP EAX,-0x1
003ed5b1  0f 84 4b 08 00 00   JZ 0x003ede02
003ed5b7  89 44 24 58   MOV dword ptr [RSP + 0x58],EAX
003ed5bb  c6 44 24 5c 01   MOV byte ptr [RSP + 0x5c],0x1
003ed5c0  48 8b 4e 20   MOV RCX,qword ptr [RSI + 0x20]
003ed5c4  48 8d 1d 75 71 20 00   LEA RBX,[0x5f4740]
003ed5cb  48 85 c9   TEST RCX,RCX
003ed5ce  48 89 74 24 10   MOV qword ptr [RSP + 0x10],RSI
003ed5d3  0f 84 11 08 00 00   JZ 0x003eddea
003ed5d9  48 8b 56 28   MOV RDX,qword ptr [RSI + 0x28]
003ed5dd  48 89 f7   MOV RDI,RSI
003ed5e0  be 78 72 65 6b   MOV ESI,0x6b657278
003ed5e5  ff d1   CALL RCX
003ed5e7  49 89 c4   MOV R12,RAX
003ed5ea  48 85 c0   TEST RAX,RAX
003ed5ed  0f 84 f7 07 00 00   JZ 0x003eddea
003ed5f3  41 8b 04 24   MOV EAX,dword ptr [R12]
003ed5f7  41 8b 04 24   MOV EAX,dword ptr [R12]
003ed5fb  85 c0   TEST EAX,EAX
003ed5fd  74 06   JZ 0x003ed605
003ed5ff  f0 41 83 04 24 01   ADD.LOCK dword ptr [R12],0x1
003ed605  4c 89 64 24 50   MOV qword ptr [RSP + 0x50],R12
003ed60a  31 c0   XOR EAX,EAX
003ed60c  41 bd 40 00 00 00   MOV R13D,0x40
003ed612  4c 8d 7c 24 20   LEA R15,[RSP + 0x20]
003ed617  4c 8b 35 22 7f 32 00   MOV R14,qword ptr [0x00715540]
003ed61e  4c 89 e1   MOV RCX,R12
003ed621  eb 2f   JMP 0x003ed652
003ed623  41 c7 44 24 1c 02 00 00 00   MOV dword ptr [R12 + 0x1c],0x2
003ed62c  0f 1f 40 00   NOP dword ptr [RAX]
003ed630  49 8b 44 24 10   MOV RAX,qword ptr [R12 + 0x10]
003ed635  48 89 44 24 28   MOV qword ptr [RSP + 0x28],RAX
003ed63a  48 01 c3   ADD RBX,RAX
003ed63d  48 89 5c 24 30   MOV qword ptr [RSP + 0x30],RBX
003ed642  48 85 c0   TEST RAX,RAX
003ed645  0f 84 ed 01 00 00   JZ 0x003ed838
003ed64b  b0 01   MOV AL,0x1
003ed64d  48 8b 4c 24 50   MOV RCX,qword ptr [RSP + 0x50]
003ed652  88 44 24 48   MOV byte ptr [RSP + 0x48],AL
003ed656  48 8b 59 10   MOV RBX,qword ptr [RCX + 0x10]
003ed65a  48 89 5c 24 28   MOV qword ptr [RSP + 0x28],RBX
003ed65f  8b 49 18   MOV ECX,dword ptr [RCX + 0x18]
003ed662  89 c8   MOV EAX,ECX
003ed664  41 f7 e5   MUL R13D
003ed667  0f 90 c2   SETO DL
003ed66a  3d 01 40 00 00   CMP EAX,0x4001
003ed66f  73 05   JNC 0x003ed676
003ed671  b8 00 40 00 00   MOV EAX,0x4000
003ed676  48 89 cf   MOV RDI,RCX
003ed679  48 01 df   ADD RDI,RBX
003ed67c  be ff ff ff 3f   MOV ESI,0x3fffffff
003ed681  3d ff ff ff 3f   CMP EAX,0x3fffffff
003ed686  72 05   JC 0x003ed68d
003ed688  b8 ff ff ff 3f   MOV EAX,0x3fffffff
003ed68d  48 89 7c 24 30   MOV qword ptr [RSP + 0x30],RDI
003ed692  89 4c 24 38   MOV dword ptr [RSP + 0x38],ECX
003ed696  84 d2   TEST DL,DL
003ed698  75 02   JNZ 0x003ed69c
003ed69a  89 c6   MOV ESI,EAX
003ed69c  89 74 24 3c   MOV dword ptr [RSP + 0x3c],ESI
003ed6a0  c7 44 24 4c 00 00 00 00   MOV dword ptr [RSP + 0x4c],0x0
003ed6a8  c7 44 24 20 00 00 00 00   MOV dword ptr [RSP + 0x20],0x0
003ed6b0  c7 44 24 44 00 00 00 00   MOV dword ptr [RSP + 0x44],0x0
003ed6b8  48 85 db   TEST RBX,RBX
003ed6bb  0f 84 1a 07 00 00   JZ 0x003edddb
003ed6c1  48 89 df   MOV RDI,RBX
003ed6c4  4c 89 fe   MOV RSI,R15
003ed6c7  e8 34 67 00 00   CALL 0x003f3e00
003ed6cc  8b 4c 24 4c   MOV ECX,dword ptr [RSP + 0x4c]
003ed6d0  84 c0   TEST AL,AL
003ed6d2  0f 85 b0 00 00 00   JNZ 0x003ed788
003ed6d8  31 db   XOR EBX,EBX
003ed6da  85 c9   TEST ECX,ECX
003ed6dc  0f 84 66 01 00 00   JZ 0x003ed848
003ed6e2  80 7c 24 48 00   CMP byte ptr [RSP + 0x48],0x0
003ed6e7  0f 85 5b 01 00 00   JNZ 0x003ed848
003ed6ed  41 8b 44 24 04   MOV EAX,dword ptr [R12 + 0x4]
003ed6f2  41 8b 5c 24 18   MOV EBX,dword ptr [R12 + 0x18]
003ed6f7  85 c0   TEST EAX,EAX
003ed6f9  0f 84 2b 01 00 00   JZ 0x003ed82a
003ed6ff  48 85 db   TEST RBX,RBX
003ed702  0f 84 1b ff ff ff   JZ 0x003ed623
003ed708  41 8b 44 24 1c   MOV EAX,dword ptr [R12 + 0x1c]
003ed70d  83 f8 02   CMP EAX,0x2
003ed710  0f 84 1a ff ff ff   JZ 0x003ed630
003ed716  83 f8 03   CMP EAX,0x3
003ed719  75 09   JNZ 0x003ed724
003ed71b  41 c7 44 24 1c 01 00 00 00   MOV dword ptr [R12 + 0x1c],0x1
003ed724  48 89 df   MOV RDI,RBX
003ed727  e8 24 0f d7 ff   CALL 0x0015e650
003ed72c  48 85 c0   TEST RAX,RAX
003ed72f  0f 84 f5 00 00 00   JZ 0x003ed82a
003ed735  48 89 c5   MOV RBP,RAX
003ed738  49 8b 74 24 10   MOV RSI,qword ptr [R12 + 0x10]
003ed73d  48 89 c7   MOV RDI,RAX
003ed740  48 89 da   MOV RDX,RBX
003ed743  e8 08 dd d6 ff   CALL 0x0015b450
003ed748  49 8b 44 24 28   MOV RAX,qword ptr [R12 + 0x28]
003ed74d  48 85 c0   TEST RAX,RAX
003ed750  74 0c   JZ 0x003ed75e
003ed752  49 8b 7c 24 20   MOV RDI,qword ptr [R12 + 0x20]
003ed757  ff d0   CALL RAX
003ed759  41 8b 5c 24 18   MOV EBX,dword ptr [R12 + 0x18]
003ed75e  41 c7 44 24 1c 02 00 00 00   MOV dword ptr [R12 + 0x1c],0x2
003ed767  49 89 6c 24 10   MOV qword ptr [R12 + 0x10],RBP
003ed76c  49 89 6c 24 20   MOV qword ptr [R12 + 0x20],RBP
003ed771  4d 89 74 24 28   MOV qword ptr [R12 + 0x28],R14
003ed776  48 89 6c 24 28   MOV qword ptr [RSP + 0x28],RBP
003ed77b  48 01 dd   ADD RBP,RBX
003ed77e  48 89 6c 24 30   MOV qword ptr [RSP + 0x30],RBP
003ed783  e9 c3 fe ff ff   JMP 0x003ed64b
003ed788  85 c9   TEST ECX,ECX
003ed78a  0f 84 b6 00 00 00   JZ 0x003ed846
003ed790  c7 44 24 4c 00 00 00 00   MOV dword ptr [RSP + 0x4c],0x0
003ed798  48 8d 74 24 20   LEA RSI,[RSP + 0x20]
003ed79d  48 89 df   MOV RDI,RBX
003ed7a0  e8 5b 66 00 00   CALL 0x003f3e00
003ed7a5  83 7c 24 4c 00   CMP dword ptr [RSP + 0x4c],0x0
003ed7aa  0f 84 16 06 00 00   JZ 0x003eddc6
003ed7b0  48 8b 5c 24 50   MOV RBX,qword ptr [RSP + 0x50]
003ed7b5  48 85 db   TEST RBX,RBX
003ed7b8  74 50   JZ 0x003ed80a
003ed7ba  8b 03   MOV EAX,dword ptr [RBX]
003ed7bc  8b 03   MOV EAX,dword ptr [RBX]
003ed7be  85 c0   TEST EAX,EAX
003ed7c0  74 48   JZ 0x003ed80a
003ed7c2  f0 83 2b 01   SUB.LOCK dword ptr [RBX],0x1
003ed7c6  75 42   JNZ 0x003ed80a
003ed7c8  c7 03 53 21 ff ff   MOV dword ptr [RBX],0xffff2153
003ed7ce  48 8b 6b 08   MOV RBP,qword ptr [RBX + 0x8]
003ed7d2  48 85 ed   TEST RBP,RBP
003ed7d5  74 1c   JZ 0x003ed7f3
003ed7d7  48 8d 7d 28   LEA RDI,[RBP + 0x28]
003ed7db  48 89 ee   MOV RSI,RBP
003ed7de  e8 6d 2e fe ff   CALL 0x003d0650
003ed7e3  48 89 ef   MOV RDI,RBP
003ed7e6  e8 ad 23 d7 ff   CALL 0x0015fb98
003ed7eb  48 c7 43 08 00 00 00 00   MOV qword ptr [RBX + 0x8],0x0
003ed7f3  48 8b 43 28   MOV RAX,qword ptr [RBX + 0x28]
003ed7f7  48 85 c0   TEST RAX,RAX
003ed7fa  74 06   JZ 0x003ed802
003ed7fc  48 8b 7b 20   MOV RDI,qword ptr [RBX + 0x20]
003ed800  ff d0   CALL RAX
003ed802  48 89 df   MOV RDI,RBX
003ed805  e8 8e 23 d7 ff   CALL 0x0015fb98
003ed80a  48 c7 44 24 50 00 00 00 00   MOV qword ptr [RSP + 0x50],0x0
003ed813  0f 57 c0   XORPS XMM0,XMM0
003ed816  48 8d 44 24 28   LEA RAX,[RSP + 0x28]
003ed81b  0f 11 00   MOVUPS xmmword ptr [RAX],XMM0
003ed81e  c7 40 10 00 00 00 00   MOV dword ptr [RAX + 0x10],0x0
003ed825  e9 af 00 00 00   JMP 0x003ed8d9
003ed82a  48 c7 44 24 28 00 00 00 00   MOV qword ptr [RSP + 0x28],0x0
003ed833  48 89 5c 24 30   MOV qword ptr [RSP + 0x30],RBX
003ed838  31 db   XOR EBX,EBX
003ed83a  4c 8b 7c 24 50   MOV R15,qword ptr [RSP + 0x50]
003ed83f  4d 85 ff   TEST R15,R15
003ed842  75 0e   JNZ 0x003ed852
003ed844  eb 60   JMP 0x003ed8a6
003ed846  b3 01   MOV BL,0x1
003ed848  4c 8b 7c 24 50   MOV R15,qword ptr [RSP + 0x50]
003ed84d  4d 85 ff   TEST R15,R15
003ed850  74 54   JZ 0x003ed8a6
003ed852  41 8b 07   MOV EAX,dword ptr [R15]
003ed855  41 8b 07   MOV EAX,dword ptr [R15]
003ed858  85 c0   TEST EAX,EAX
003ed85a  74 4a   JZ 0x003ed8a6
003ed85c  f0 41 83 2f 01   SUB.LOCK dword ptr [R15],0x1
003ed861  75 43   JNZ 0x003ed8a6
003ed863  41 c7 07 53 21 ff ff   MOV dword ptr [R15],0xffff2153
003ed86a  49 8b 6f 08   MOV RBP,qword ptr [R15 + 0x8]
003ed86e  48 85 ed   TEST RBP,RBP
003ed871  74 1c   JZ 0x003ed88f
003ed873  48 8d 7d 28   LEA RDI,[RBP + 0x28]
003ed877  48 89 ee   MOV RSI,RBP
003ed87a  e8 d1 2d fe ff   CALL 0x003d0650
003ed87f  48 89 ef   MOV RDI,RBP
003ed882  e8 11 23 d7 ff   CALL 0x0015fb98
003ed887  49 c7 47 08 00 00 00 00   MOV qword ptr [R15 + 0x8],0x0
003ed88f  49 8b 47 28   MOV RAX,qword ptr [R15 + 0x28]
003ed893  48 85 c0   TEST RAX,RAX
003ed896  74 06   JZ 0x003ed89e
003ed898  49 8b 7f 20   MOV RDI,qword ptr [R15 + 0x20]
003ed89c  ff d0   CALL RAX
003ed89e  4c 89 ff   MOV RDI,R15
003ed8a1  e8 f2 22 d7 ff   CALL 0x0015fb98
003ed8a6  48 c7 44 24 50 00 00 00 00   MOV qword ptr [RSP + 0x50],0x0
003ed8af  0f 57 c0   XORPS XMM0,XMM0
003ed8b2  48 8d 44 24 28   LEA RAX,[RSP + 0x28]
003ed8b7  0f 11 00   MOVUPS xmmword ptr [RAX],XMM0
003ed8ba  c7 40 10 00 00 00 00   MOV dword ptr [RAX + 0x10],0x0
003ed8c1  84 db   TEST BL,BL
003ed8c3  74 14   JZ 0x003ed8d9
003ed8c5  41 8b 44 24 04   MOV EAX,dword ptr [R12 + 0x4]
003ed8ca  85 c0   TEST EAX,EAX
003ed8cc  74 71   JZ 0x003ed93f
003ed8ce  41 c7 44 24 04 00 00 00 00   MOV dword ptr [R12 + 0x4],0x0
003ed8d7  eb 66   JMP 0x003ed93f
003ed8d9  41 8b 04 24   MOV EAX,dword ptr [R12]
003ed8dd  41 8b 04 24   MOV EAX,dword ptr [R12]
003ed8e1  48 8d 2d 58 6e 20 00   LEA RBP,[0x5f4740]
003ed8e8  85 c0   TEST EAX,EAX
003ed8ea  74 50   JZ 0x003ed93c
003ed8ec  f0 41 83 2c 24 01   SUB.LOCK dword ptr [R12],0x1
003ed8f2  75 48   JNZ 0x003ed93c
003ed8f4  41 c7 04 24 53 21 ff ff   MOV dword ptr [R12],0xffff2153
003ed8fc  49 8b 5c 24 08   MOV RBX,qword ptr [R12 + 0x8]
003ed901  48 85 db   TEST RBX,RBX
003ed904  74 1d   JZ 0x003ed923
003ed906  48 8d 7b 28   LEA RDI,[RBX + 0x28]
003ed90a  48 89 de   MOV RSI,RBX
003ed90d  e8 3e 2d fe ff   CALL 0x003d0650
003ed912  48 89 df   MOV RDI,RBX
003ed915  e8 7e 22 d7 ff   CALL 0x0015fb98
003ed91a  49 c7 44 24 08 00 00 00 00   MOV qword ptr [R12 + 0x8],0x0
003ed923  49 8b 44 24 28   MOV RAX,qword ptr [R12 + 0x28]
003ed928  48 85 c0   TEST RAX,RAX
003ed92b  74 07   JZ 0x003ed934
003ed92d  49 8b 7c 24 20   MOV RDI,qword ptr [R12 + 0x20]
003ed932  ff d0   CALL RAX
003ed934  4c 89 e7   MOV RDI,R12
003ed937  e8 5c 22 d7 ff   CALL 0x0015fb98
003ed93c  49 89 ec   MOV R12,RBP
003ed93f  48 8b 44 24 60   MOV RAX,qword ptr [RSP + 0x60]
003ed944  4c 89 20   MOV qword ptr [RAX],R12
003ed947  4d 85 e4   TEST R12,R12
003ed94a  48 8d 1d ef 6d 20 00   LEA RBX,[0x5f4740]
003ed951  4c 0f 44 e3   CMOVZ R12,RBX
003ed955  4d 8b 7c 24 10   MOV R15,qword ptr [R12 + 0x10]
003ed95a  41 8b 6c 24 18   MOV EBP,dword ptr [R12 + 0x18]
003ed95f  48 8b 7c 24 10   MOV RDI,qword ptr [RSP + 0x10]
003ed964  8b 47 18   MOV EAX,dword ptr [RDI + 0x18]
003ed967  89 44 24 08   MOV dword ptr [RSP + 0x8],EAX
003ed96b  83 f8 ff   CMP EAX,-0x1
003ed96e  0f 84 ac 04 00 00   JZ 0x003ede20
003ed974  83 fd 08   CMP EBP,0x8
003ed977  4c 0f 42 fb   CMOVC R15,RBX
003ed97b  41 8b 47 04   MOV EAX,dword ptr [R15 + 0x4]
003ed97f  85 c0   TEST EAX,EAX
003ed981  0f 84 fa 03 00 00   JZ 0x003edd81
003ed987  0f c8   BSWAP EAX
003ed989  49 83 c7 08   ADD R15,0x8
003ed98d  83 f8 02   CMP EAX,0x2
003ed990  b9 01 00 00 00   MOV ECX,0x1
003ed995  0f 43 c8   CMOVNC ECX,EAX
003ed998  89 8c 24 b4 00 00 00   MOV dword ptr [RSP + 0xb4],ECX
003ed99f  31 c0   XOR EAX,EAX
003ed9a1  31 ed   XOR EBP,EBP
003ed9a3  45 31 f6   XOR R14D,R14D
003ed9a6  31 ff   XOR EDI,EDI
003ed9a8  31 f6   XOR ESI,ESI
003ed9aa  31 c9   XOR ECX,ECX
003ed9ac  31 db   XOR EBX,EBX
003ed9ae  45 31 ed   XOR R13D,R13D
003ed9b1  66 2e 0f 1f 84 00 00 00 00 00   NOP word ptr CS:[RAX + RAX*0x1]
003ed9bb  0f 1f 44 00 00   NOP dword ptr [RAX + RAX*0x1]
003ed9c0  48 89 5c 24 68   MOV qword ptr [RSP + 0x68],RBX
003ed9c5  48 89 84 24 a8 00 00 00   MOV qword ptr [RSP + 0xa8],RAX
003ed9cd  89 6c 24 1c   MOV dword ptr [RSP + 0x1c],EBP
003ed9d1  48 89 bc 24 b8 00 00 00   MOV qword ptr [RSP + 0xb8],RDI
003ed9d9  48 89 4c 24 10   MOV qword ptr [RSP + 0x10],RCX
003ed9de  89 74 24 0c   MOV dword ptr [RSP + 0xc],ESI
003ed9e2  0f 57 c9   XORPS XMM1,XMM1
003ed9e5  0f 29 8c 24 90 00 00 00   MOVAPS xmmword ptr [RSP + 0x90],XMM1
003ed9ed  48 c7 84 24 a0 00 00 00 00 00 00 00   MOV qword ptr [RSP + 0xa0],0x0
003ed9f9  0f 57 c0   XORPS XMM0,XMM0
003ed9fc  0f 29 4c 24 70   MOVAPS xmmword ptr [RSP + 0x70],XMM1
003eda01  48 c7 84 24 80 00 00 00 00 00 00 00   MOV qword ptr [RSP + 0x80],0x0
003eda0d  41 8b 47 04   MOV EAX,dword ptr [R15 + 0x4]
003eda11  c1 e8 18   SHR EAX,0x18
003eda14  3c 06   CMP AL,0x6
003eda16  0f 87 84 01 00 00   JA 0x003edba0
003eda1c  48 8d 0d b5 27 1f 00   LEA RCX,[0x5e01d8]
003eda23  48 63 04 81   MOVSXD RAX,dword ptr [RCX + RAX*0x4]
003eda27  48 01 c8   ADD RAX,RCX
003eda2a  ff e0   JMP RAX
003edba0  48 8b 4c 24 10   MOV RCX,qword ptr [RSP + 0x10]
003edba5  44 8d 61 01   LEA R12D,[RCX + 0x1]
003edba9  8b 74 24 0c   MOV ESI,dword ptr [RSP + 0xc]
003edbad  39 f1   CMP ECX,ESI
003edbaf  7d 0f   JGE 0x003edbc0
003edbb1  48 8b 9c 24 a8 00 00 00   MOV RBX,qword ptr [RSP + 0xa8]
003edbb9  41 89 d8   MOV R8D,EBX
003edbbc  eb 1e   JMP 0x003edbdc
003edbc0  85 f6   TEST ESI,ESI
003edbc2  48 8b 84 24 a8 00 00 00   MOV RAX,qword ptr [RSP + 0xa8]
003edbca  0f 88 75 01 00 00   JS 0x003edd45
003edbd0  44 39 e6   CMP ESI,R12D
003edbd3  0f 82 e0 00 00 00   JC 0x003edcb9
003edbd9  41 89 c0   MOV R8D,EAX
003edbdc  89 c8   MOV EAX,ECX
003edbde  48 8d 04 40   LEA RAX,[RAX + RAX*0x2]
003edbe2  48 c1 e0 04   SHL RAX,0x4
003edbe6  48 8b 8c 24 80 00 00 00   MOV RCX,qword ptr [RSP + 0x80]
003edbee  49 89 4c 06 28   MOV qword ptr [R14 + RAX*0x1 + 0x28],RCX
003edbf3  0f 28 44 24 70   MOVAPS XMM0,xmmword ptr [RSP + 0x70]
003edbf8  41 0f 11 44 06 18   MOVUPS xmmword ptr [R14 + RAX*0x1 + 0x18],XMM0
003edbfe  0f 28 84 24 90 00 00 00   MOVAPS XMM0,xmmword ptr [RSP + 0x90]
003edc06  41 0f 11 04 06   MOVUPS xmmword ptr [R14 + RAX*0x1],XMM0
003edc0b  48 8b 8c 24 a0 00 00 00   MOV RCX,qword ptr [RSP + 0xa0]
003edc13  49 89 4c 06 10   MOV qword ptr [R14 + RAX*0x1 + 0x10],RCX
003edc18  4c 89 f7   MOV RDI,R14
003edc1b  44 89 e1   MOV ECX,R12D
003edc1e  4c 89 f3   MOV RBX,R14
003edc21  44 89 e5   MOV EBP,R12D
003edc24  41 8b 07   MOV EAX,dword ptr [R15]
003edc27  0f c8   BSWAP EAX
003edc29  49 01 c7   ADD R15,RAX
003edc2c  41 83 c5 01   ADD R13D,0x1
003edc30  44 89 c0   MOV EAX,R8D
003edc33  44 3b ac 24 b4 00 00 00   CMP R13D,dword ptr [RSP + 0xb4]
003edc3b  0f 85 7f fd ff ff   JNZ 0x003ed9c0
003edc41  e9 44 01 00 00   JMP 0x003edd8a
003edcb9  89 f2   MOV EDX,ESI
003edcbb  48 8b ac 24 b8 00 00 00   MOV RBP,qword ptr [RSP + 0xb8]
003edcc3  89 d0   MOV EAX,EDX
003edcc5  d1 e8   SHR EAX,0x1
003edcc7  01 c2   ADD EDX,EAX
003edcc9  83 c2 08   ADD EDX,0x8
003edccc  44 39 e2   CMP EDX,R12D
003edccf  72 f2   JC 0x003edcc3
003edcd1  81 fa 55 55 55 05   CMP EDX,0x5555555
003edcd7  77 68   JA 0x003edd41
003edcd9  85 d2   TEST EDX,EDX
003edcdb  74 2c   JZ 0x003edd09
003edcdd  89 d0   MOV EAX,EDX
003edcdf  48 c1 e0 04   SHL RAX,0x4
003edce3  48 8d 34 40   LEA RSI,[RAX + RAX*0x2]
003edce7  48 89 ef   MOV RDI,RBP
003edcea  48 89 d3   MOV RBX,RDX
003edced  e8 2e d8 d6 ff   CALL 0x0015b520
003edcf2  48 85 c0   TEST RAX,RAX
003edcf5  74 30   JZ 0x003edd27
003edcf7  49 89 c6   MOV R14,RAX
003edcfa  89 de   MOV ESI,EBX
003edcfc  48 8b 4c 24 10   MOV RCX,qword ptr [RSP + 0x10]
003edd01  49 89 d8   MOV R8,RBX
003edd04  e9 d3 fe ff ff   JMP 0x003edbdc
003edd09  48 89 ef   MOV RDI,RBP
003edd0c  48 89 d3   MOV RBX,RDX
003edd0f  e8 84 1e d7 ff   CALL 0x0015fb98
003edd14  49 89 d8   MOV R8,RBX
003edd17  45 31 f6   XOR R14D,R14D
003edd1a  44 89 c6   MOV ESI,R8D
003edd1d  48 8b 4c 24 10   MOV RCX,qword ptr [RSP + 0x10]
003edd22  e9 b5 fe ff ff   JMP 0x003edbdc
003edd27  48 89 6c 24 68   MOV qword ptr [RSP + 0x68],RBP
003edd2c  8b 74 24 0c   MOV ESI,dword ptr [RSP + 0xc]
003edd30  39 f3   CMP EBX,ESI
003edd32  48 8b 4c 24 10   MOV RCX,qword ptr [RSP + 0x10]
003edd37  48 8b 9c 24 a8 00 00 00   MOV RBX,qword ptr [RSP + 0xa8]
003edd3f  76 38   JBE 0x003edd79
003edd41  f7 d6   NOT ESI
003edd43  89 f0   MOV EAX,ESI
003edd45  8b 6c 24 1c   MOV EBP,dword ptr [RSP + 0x1c]
003edd49  48 8b 5c 24 68   MOV RBX,qword ptr [RSP + 0x68]
003edd4e  0f 57 c0   XORPS XMM0,XMM0
003edd51  0f 29 05 48 f0 32 00   MOVAPS xmmword ptr [0x0071cda0],XMM0
003edd58  0f 29 05 31 f0 32 00   MOVAPS xmmword ptr [0x0071cd90],XMM0
003edd5f  0f 29 05 1a f0 32 00   MOVAPS xmmword ptr [0x0071cd80],XMM0
003edd66  41 89 c0   MOV R8D,EAX
003edd69  41 89 ec   MOV R12D,EBP
003edd6c  48 8b bc 24 b8 00 00 00   MOV RDI,qword ptr [RSP + 0xb8]
003edd74  e9 ab fe ff ff   JMP 0x003edc24
003edd79  41 89 d8   MOV R8D,EBX
003edd7c  e9 5b fe ff ff   JMP 0x003edbdc
003edd81  45 31 c0   XOR R8D,R8D
003edd84  45 31 e4   XOR R12D,R12D
003edd87  45 31 f6   XOR R14D,R14D
003edd8a  48 8b 44 24 60   MOV RAX,qword ptr [RSP + 0x60]
003edd8f  83 78 08 00   CMP dword ptr [RAX + 0x8],0x0
003edd93  44 89 40 08   MOV dword ptr [RAX + 0x8],R8D
003edd97  44 89 60 0c   MOV dword ptr [RAX + 0xc],R12D
003edd9b  48 8b 78 10   MOV RDI,qword ptr [RAX + 0x10]
003edd9f  4c 89 70 10   MOV qword ptr [RAX + 0x10],R14
003edda3  74 05   JZ 0x003eddaa
003edda5  e8 ee 1d d7 ff   CALL 0x0015fb98
003eddaa  48 8d 7c 24 20   LEA RDI,[RSP + 0x20]
003eddaf  e8 0c 28 fe ff   CALL 0x003d05c0
003eddb4  48 81 c4 08 01 00 00   ADD RSP,0x108
003eddbb  5b   POP RBX
003eddbc  41 5c   POP R12
003eddbe  41 5d   POP R13
003eddc0  41 5e   POP R14
003eddc2  41 5f   POP R15
003eddc4  5d   POP RBP
003eddc5  c3   RET
003eddc6  89 c3   MOV EBX,EAX
003eddc8  4c 8b 7c 24 50   MOV R15,qword ptr [RSP + 0x50]
003eddcd  4d 85 ff   TEST R15,R15
003eddd0  0f 85 7c fa ff ff   JNZ 0x003ed852
003eddd6  e9 cb fa ff ff   JMP 0x003ed8a6
003edddb  48 8d 7c 24 20   LEA RDI,[RSP + 0x20]
003edde0  e8 4b 2e fe ff   CALL 0x003d0c30
003edde5  e9 55 fb ff ff   JMP 0x003ed93f
003eddea  49 89 dc   MOV R12,RBX
003edded  41 8b 04 24   MOV EAX,dword ptr [R12]
003eddf1  41 8b 04 24   MOV EAX,dword ptr [R12]
003eddf5  85 c0   TEST EAX,EAX
003eddf7  0f 85 02 f8 ff ff   JNZ 0x003ed5ff
003eddfd  e9 03 f8 ff ff   JMP 0x003ed605
003ede02  48 89 f3   MOV RBX,RSI
003ede05  48 8b 46 78   MOV RAX,qword ptr [RSI + 0x78]
003ede09  48 85 c0   TEST RAX,RAX
003ede0c  74 44   JZ 0x003ede52
003ede0e  48 89 c5   MOV RBP,RAX
003ede11  83 7d 18 06   CMP dword ptr [RBP + 0x18],0x6
003ede15  48 89 de   MOV RSI,RBX
003ede18  72 14   JC 0x003ede2e
003ede1a  48 8b 45 10   MOV RAX,qword ptr [RBP + 0x10]
003ede1e  eb 15   JMP 0x003ede35
003ede20  e8 0b 27 fe ff   CALL 0x003d0530
003ede25  89 44 24 08   MOV dword ptr [RSP + 0x8],EAX
003ede29  e9 46 fb ff ff   JMP 0x003ed974
003ede2e  48 8d 05 0b 69 20 00   LEA RAX,[0x5f4740]
003ede35  0f b7 40 04   MOVZX EAX,word ptr [RAX + 0x4]
003ede39  89 c1   MOV ECX,EAX
003ede3b  66 c1 c1 08   ROL CX,0x8
003ede3f  31 d2   XOR EDX,EDX
003ede41  66 85 c0   TEST AX,AX
003ede44  0f 44 ca   CMOVZ ECX,EDX
003ede47  0f b7 c1   MOVZX EAX,CX
003ede4a  89 46 18   MOV dword ptr [RSI + 0x18],EAX
003ede4d  e9 65 f7 ff ff   JMP 0x003ed5b7
003ede52  4c 8d a4 24 c8 00 00 00   LEA R12,[RSP + 0xc8]
003ede5a  48 8d 2d df 68 20 00   LEA RBP,[0x5f4740]
003ede61  4c 8d b4 24 c0 00 00 00   LEA R14,[RSP + 0xc0]
003ede69  48 8b 7b 68   MOV RDI,qword ptr [RBX + 0x68]
003ede6d  48 85 ff   TEST RDI,RDI
003ede70  74 9f   JZ 0x003ede11
003ede72  c7 84 24 c0 00 00 00 00 00 00 00   MOV dword ptr [RSP + 0xc0],0x0
003ede7d  0f 57 c0   XORPS XMM0,XMM0
003ede80  41 0f 11 44 24 10   MOVUPS xmmword ptr [R12 + 0x10],XMM0
003ede86  41 0f 11 04 24   MOVUPS xmmword ptr [R12],XMM0
003ede8b  41 c6 44 24 20 00   MOV byte ptr [R12 + 0x20],0x0
003ede91  c6 84 24 fd 00 00 00 00   MOV byte ptr [RSP + 0xfd],0x0
003ede99  41 0f 11 44 24 24   MOVUPS xmmword ptr [R12 + 0x24],XMM0
003ede9f  c6 84 24 fc 00 00 00 01   MOV byte ptr [RSP + 0xfc],0x1
003edea7  48 8b 4f 20   MOV RCX,qword ptr [RDI + 0x20]
003edeab  48 89 e8   MOV RAX,RBP
003edeae  48 85 c9   TEST RCX,RCX
003edeb1  74 14   JZ 0x003edec7
003edeb3  48 8b 57 28   MOV RDX,qword ptr [RDI + 0x28]
003edeb7  be 70 78 61 6d   MOV ESI,0x6d617870
003edebc  ff d1   CALL RCX
003edebe  48 85 c0   TEST RAX,RAX
003edec1  0f 84 b3 00 00 00   JZ 0x003edf7a
003edec7  4c 89 f7   MOV RDI,R14
003edeca  48 89 c6   MOV RSI,RAX
003edecd  e8 5e 29 fe ff   CALL 0x003d0830
003eded2  49 89 c5   MOV R13,RAX
003eded5  4c 89 f7   MOV RDI,R14
003eded8  e8 e3 26 fe ff   CALL 0x003d05c0
003ededd  4d 85 ed   TEST R13,R13
003edee0  0f 84 82 00 00 00   JZ 0x003edf68
003edee6  31 c0   XOR EAX,EAX
003edee8  f0 4c 0f b1 6b 78   CMPXCHG.LOCK qword ptr [RBX + 0x78],R13
003edeee  0f 84 8e 00 00 00   JZ 0x003edf82
003edef4  4d 85 ed   TEST R13,R13
003edef7  74 5d   JZ 0x003edf56
003edef9  49 39 ed   CMP R13,RBP
003edefc  74 58   JZ 0x003edf56
003edefe  41 8b 45 00   MOV EAX,dword ptr [R13]
003edf02  41 8b 45 00   MOV EAX,dword ptr [R13]
003edf06  85 c0   TEST EAX,EAX
003edf08  74 4c   JZ 0x003edf56
003edf0a  f0 41 83 6d 00 01   SUB.LOCK dword ptr [R13],0x1
003edf10  75 44   JNZ 0x003edf56
003edf12  41 c7 45 00 53 21 ff ff   MOV dword ptr [R13],0xffff2153
003edf1a  4d 8b 7d 08   MOV R15,qword ptr [R13 + 0x8]
003edf1e  4d 85 ff   TEST R15,R15
003edf21  74 1c   JZ 0x003edf3f
003edf23  49 8d 7f 28   LEA RDI,[R15 + 0x28]
003edf27  4c 89 fe   MOV RSI,R15
003edf2a  e8 21 27 fe ff   CALL 0x003d0650
003edf2f  4c 89 ff   MOV RDI,R15
003edf32  e8 61 1c d7 ff   CALL 0x0015fb98
003edf37  49 c7 45 08 00 00 00 00   MOV qword ptr [R13 + 0x8],0x0
003edf3f  49 8b 45 28   MOV RAX,qword ptr [R13 + 0x28]
003edf43  48 85 c0   TEST RAX,RAX
003edf46  74 06   JZ 0x003edf4e
003edf48  49 8b 7d 20   MOV RDI,qword ptr [R13 + 0x20]
003edf4c  ff d0   CALL RAX
003edf4e  4c 89 ef   MOV RDI,R13
003edf51  e8 42 1c d7 ff   CALL 0x0015fb98
003edf56  48 8b 43 78   MOV RAX,qword ptr [RBX + 0x78]
003edf5a  48 85 c0   TEST RAX,RAX
003edf5d  0f 85 ab fe ff ff   JNZ 0x003ede0e
003edf63  e9 01 ff ff ff   JMP 0x003ede69
003edf68  49 89 ed   MOV R13,RBP
003edf6b  31 c0   XOR EAX,EAX
003edf6d  f0 4c 0f b1 6b 78   CMPXCHG.LOCK qword ptr [RBX + 0x78],R13
003edf73  74 0d   JZ 0x003edf82
003edf75  e9 7a ff ff ff   JMP 0x003edef4
003edf7a  48 89 e8   MOV RAX,RBP
003edf7d  e9 45 ff ff ff   JMP 0x003edec7
003edf82  4c 89 ed   MOV RBP,R13
003edf85  e9 87 fe ff ff   JMP 0x003ede11
