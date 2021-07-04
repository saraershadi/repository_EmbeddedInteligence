
c1m2.out:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64 
    1004:	48 83 ec 08          	sub    $0x8,%rsp
    1008:	48 8b 05 d9 2f 00 00 	mov    0x2fd9(%rip),%rax        # 3fe8 <__gmon_start__>
    100f:	48 85 c0             	test   %rax,%rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	callq  *%rax
    1016:	48 83 c4 08          	add    $0x8,%rsp
    101a:	c3                   	retq   

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 9a 2f 00 00    	pushq  0x2f9a(%rip)        # 3fc0 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	f2 ff 25 9b 2f 00 00 	bnd jmpq *0x2f9b(%rip)        # 3fc8 <_GLOBAL_OFFSET_TABLE_+0x10>
    102d:	0f 1f 00             	nopl   (%rax)
    1030:	f3 0f 1e fa          	endbr64 
    1034:	68 00 00 00 00       	pushq  $0x0
    1039:	f2 e9 e1 ff ff ff    	bnd jmpq 1020 <.plt>
    103f:	90                   	nop

Disassembly of section .plt.got:

0000000000001040 <__cxa_finalize@plt>:
    1040:	f3 0f 1e fa          	endbr64 
    1044:	f2 ff 25 ad 2f 00 00 	bnd jmpq *0x2fad(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    104b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

0000000000001050 <putchar@plt>:
    1050:	f3 0f 1e fa          	endbr64 
    1054:	f2 ff 25 75 2f 00 00 	bnd jmpq *0x2f75(%rip)        # 3fd0 <putchar@GLIBC_2.2.5>
    105b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000001060 <_start>:
    1060:	f3 0f 1e fa          	endbr64 
    1064:	31 ed                	xor    %ebp,%ebp
    1066:	49 89 d1             	mov    %rdx,%r9
    1069:	5e                   	pop    %rsi
    106a:	48 89 e2             	mov    %rsp,%rdx
    106d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    1071:	50                   	push   %rax
    1072:	54                   	push   %rsp
    1073:	4c 8d 05 86 03 00 00 	lea    0x386(%rip),%r8        # 1400 <__libc_csu_fini>
    107a:	48 8d 0d 0f 03 00 00 	lea    0x30f(%rip),%rcx        # 1390 <__libc_csu_init>
    1081:	48 8d 3d c1 00 00 00 	lea    0xc1(%rip),%rdi        # 1149 <main>
    1088:	ff 15 52 2f 00 00    	callq  *0x2f52(%rip)        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    108e:	f4                   	hlt    
    108f:	90                   	nop

0000000000001090 <deregister_tm_clones>:
    1090:	48 8d 3d 79 2f 00 00 	lea    0x2f79(%rip),%rdi        # 4010 <__TMC_END__>
    1097:	48 8d 05 72 2f 00 00 	lea    0x2f72(%rip),%rax        # 4010 <__TMC_END__>
    109e:	48 39 f8             	cmp    %rdi,%rax
    10a1:	74 15                	je     10b8 <deregister_tm_clones+0x28>
    10a3:	48 8b 05 2e 2f 00 00 	mov    0x2f2e(%rip),%rax        # 3fd8 <_ITM_deregisterTMCloneTable>
    10aa:	48 85 c0             	test   %rax,%rax
    10ad:	74 09                	je     10b8 <deregister_tm_clones+0x28>
    10af:	ff e0                	jmpq   *%rax
    10b1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    10b8:	c3                   	retq   
    10b9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000010c0 <register_tm_clones>:
    10c0:	48 8d 3d 49 2f 00 00 	lea    0x2f49(%rip),%rdi        # 4010 <__TMC_END__>
    10c7:	48 8d 35 42 2f 00 00 	lea    0x2f42(%rip),%rsi        # 4010 <__TMC_END__>
    10ce:	48 29 fe             	sub    %rdi,%rsi
    10d1:	48 89 f0             	mov    %rsi,%rax
    10d4:	48 c1 ee 3f          	shr    $0x3f,%rsi
    10d8:	48 c1 f8 03          	sar    $0x3,%rax
    10dc:	48 01 c6             	add    %rax,%rsi
    10df:	48 d1 fe             	sar    %rsi
    10e2:	74 14                	je     10f8 <register_tm_clones+0x38>
    10e4:	48 8b 05 05 2f 00 00 	mov    0x2f05(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable>
    10eb:	48 85 c0             	test   %rax,%rax
    10ee:	74 08                	je     10f8 <register_tm_clones+0x38>
    10f0:	ff e0                	jmpq   *%rax
    10f2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    10f8:	c3                   	retq   
    10f9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001100 <__do_global_dtors_aux>:
    1100:	f3 0f 1e fa          	endbr64 
    1104:	80 3d 05 2f 00 00 00 	cmpb   $0x0,0x2f05(%rip)        # 4010 <__TMC_END__>
    110b:	75 2b                	jne    1138 <__do_global_dtors_aux+0x38>
    110d:	55                   	push   %rbp
    110e:	48 83 3d e2 2e 00 00 	cmpq   $0x0,0x2ee2(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    1115:	00 
    1116:	48 89 e5             	mov    %rsp,%rbp
    1119:	74 0c                	je     1127 <__do_global_dtors_aux+0x27>
    111b:	48 8b 3d e6 2e 00 00 	mov    0x2ee6(%rip),%rdi        # 4008 <__dso_handle>
    1122:	e8 19 ff ff ff       	callq  1040 <__cxa_finalize@plt>
    1127:	e8 64 ff ff ff       	callq  1090 <deregister_tm_clones>
    112c:	c6 05 dd 2e 00 00 01 	movb   $0x1,0x2edd(%rip)        # 4010 <__TMC_END__>
    1133:	5d                   	pop    %rbp
    1134:	c3                   	retq   
    1135:	0f 1f 00             	nopl   (%rax)
    1138:	c3                   	retq   
    1139:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001140 <frame_dummy>:
    1140:	f3 0f 1e fa          	endbr64 
    1144:	e9 77 ff ff ff       	jmpq   10c0 <register_tm_clones>

0000000000001149 <main>:
    1149:	f3 0f 1e fa          	endbr64 
    114d:	55                   	push   %rbp
    114e:	48 89 e5             	mov    %rsp,%rbp
    1151:	48 83 ec 10          	sub    $0x10,%rsp
    1155:	be 0a 00 00 00       	mov    $0xa,%esi
    115a:	48 8d 3d b7 2e 00 00 	lea    0x2eb7(%rip),%rdi        # 4018 <buffer>
    1161:	e8 f2 01 00 00       	callq  1358 <clear_all>
    1166:	48 8d 05 b3 2e 00 00 	lea    0x2eb3(%rip),%rax        # 4020 <buffer+0x8>
    116d:	ba 02 00 00 00       	mov    $0x2,%edx
    1172:	be 2b 00 00 00       	mov    $0x2b,%esi
    1177:	48 89 c7             	mov    %rax,%rdi
    117a:	e8 93 01 00 00       	callq  1312 <set_all>
    117f:	ba 61 00 00 00       	mov    $0x61,%edx
    1184:	be 00 00 00 00       	mov    $0x0,%esi
    1189:	48 8d 3d 88 2e 00 00 	lea    0x2e88(%rip),%rdi        # 4018 <buffer>
    1190:	e8 0c 01 00 00       	callq  12a1 <set_value>
    1195:	be 09 00 00 00       	mov    $0x9,%esi
    119a:	48 8d 3d 77 2e 00 00 	lea    0x2e77(%rip),%rdi        # 4018 <buffer>
    11a1:	e8 4e 01 00 00       	callq  12f4 <get_value>
    11a6:	88 45 fb             	mov    %al,-0x5(%rbp)
    11a9:	0f b6 45 fb          	movzbl -0x5(%rbp),%eax
    11ad:	83 c0 27             	add    $0x27,%eax
    11b0:	0f be c0             	movsbl %al,%eax
    11b3:	89 c2                	mov    %eax,%edx
    11b5:	be 09 00 00 00       	mov    $0x9,%esi
    11ba:	48 8d 3d 57 2e 00 00 	lea    0x2e57(%rip),%rdi        # 4018 <buffer>
    11c1:	e8 db 00 00 00       	callq  12a1 <set_value>
    11c6:	ba 37 00 00 00       	mov    $0x37,%edx
    11cb:	be 03 00 00 00       	mov    $0x3,%esi
    11d0:	48 8d 3d 41 2e 00 00 	lea    0x2e41(%rip),%rdi        # 4018 <buffer>
    11d7:	e8 c5 00 00 00       	callq  12a1 <set_value>
    11dc:	ba 58 00 00 00       	mov    $0x58,%edx
    11e1:	be 01 00 00 00       	mov    $0x1,%esi
    11e6:	48 8d 3d 2b 2e 00 00 	lea    0x2e2b(%rip),%rdi        # 4018 <buffer>
    11ed:	e8 af 00 00 00       	callq  12a1 <set_value>
    11f2:	ba 32 00 00 00       	mov    $0x32,%edx
    11f7:	be 04 00 00 00       	mov    $0x4,%esi
    11fc:	48 8d 3d 15 2e 00 00 	lea    0x2e15(%rip),%rdi        # 4018 <buffer>
    1203:	e8 99 00 00 00       	callq  12a1 <set_value>
    1208:	be 01 00 00 00       	mov    $0x1,%esi
    120d:	48 8d 3d 04 2e 00 00 	lea    0x2e04(%rip),%rdi        # 4018 <buffer>
    1214:	e8 db 00 00 00       	callq  12f4 <get_value>
    1219:	88 45 fb             	mov    %al,-0x5(%rbp)
    121c:	ba 79 00 00 00       	mov    $0x79,%edx
    1221:	be 02 00 00 00       	mov    $0x2,%esi
    1226:	48 8d 3d eb 2d 00 00 	lea    0x2deb(%rip),%rdi        # 4018 <buffer>
    122d:	e8 6f 00 00 00       	callq  12a1 <set_value>
    1232:	0f b6 45 fb          	movzbl -0x5(%rbp),%eax
    1236:	83 e8 0c             	sub    $0xc,%eax
    1239:	0f be c0             	movsbl %al,%eax
    123c:	89 c2                	mov    %eax,%edx
    123e:	be 07 00 00 00       	mov    $0x7,%esi
    1243:	48 8d 3d ce 2d 00 00 	lea    0x2dce(%rip),%rdi        # 4018 <buffer>
    124a:	e8 52 00 00 00       	callq  12a1 <set_value>
    124f:	ba 5f 00 00 00       	mov    $0x5f,%edx
    1254:	be 05 00 00 00       	mov    $0x5,%esi
    1259:	48 8d 3d b8 2d 00 00 	lea    0x2db8(%rip),%rdi        # 4018 <buffer>
    1260:	e8 3c 00 00 00       	callq  12a1 <set_value>
    1265:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    126c:	eb 1c                	jmp    128a <main+0x141>
    126e:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1271:	48 8d 15 a0 2d 00 00 	lea    0x2da0(%rip),%rdx        # 4018 <buffer>
    1278:	0f b6 04 10          	movzbl (%rax,%rdx,1),%eax
    127c:	0f be c0             	movsbl %al,%eax
    127f:	89 c7                	mov    %eax,%edi
    1281:	e8 ca fd ff ff       	callq  1050 <putchar@plt>
    1286:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    128a:	83 7d fc 09          	cmpl   $0x9,-0x4(%rbp)
    128e:	76 de                	jbe    126e <main+0x125>
    1290:	bf 0a 00 00 00       	mov    $0xa,%edi
    1295:	e8 b6 fd ff ff       	callq  1050 <putchar@plt>
    129a:	b8 00 00 00 00       	mov    $0x0,%eax
    129f:	c9                   	leaveq 
    12a0:	c3                   	retq   

00000000000012a1 <set_value>:
    12a1:	f3 0f 1e fa          	endbr64 
    12a5:	55                   	push   %rbp
    12a6:	48 89 e5             	mov    %rsp,%rbp
    12a9:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    12ad:	89 75 f4             	mov    %esi,-0xc(%rbp)
    12b0:	89 d0                	mov    %edx,%eax
    12b2:	88 45 f0             	mov    %al,-0x10(%rbp)
    12b5:	8b 55 f4             	mov    -0xc(%rbp),%edx
    12b8:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    12bc:	48 01 c2             	add    %rax,%rdx
    12bf:	0f b6 45 f0          	movzbl -0x10(%rbp),%eax
    12c3:	88 02                	mov    %al,(%rdx)
    12c5:	90                   	nop
    12c6:	5d                   	pop    %rbp
    12c7:	c3                   	retq   

00000000000012c8 <clear_value>:
    12c8:	f3 0f 1e fa          	endbr64 
    12cc:	55                   	push   %rbp
    12cd:	48 89 e5             	mov    %rsp,%rbp
    12d0:	48 83 ec 10          	sub    $0x10,%rsp
    12d4:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    12d8:	89 75 f4             	mov    %esi,-0xc(%rbp)
    12db:	8b 4d f4             	mov    -0xc(%rbp),%ecx
    12de:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    12e2:	ba 00 00 00 00       	mov    $0x0,%edx
    12e7:	89 ce                	mov    %ecx,%esi
    12e9:	48 89 c7             	mov    %rax,%rdi
    12ec:	e8 b0 ff ff ff       	callq  12a1 <set_value>
    12f1:	90                   	nop
    12f2:	c9                   	leaveq 
    12f3:	c3                   	retq   

00000000000012f4 <get_value>:
    12f4:	f3 0f 1e fa          	endbr64 
    12f8:	55                   	push   %rbp
    12f9:	48 89 e5             	mov    %rsp,%rbp
    12fc:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    1300:	89 75 f4             	mov    %esi,-0xc(%rbp)
    1303:	8b 55 f4             	mov    -0xc(%rbp),%edx
    1306:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    130a:	48 01 d0             	add    %rdx,%rax
    130d:	0f b6 00             	movzbl (%rax),%eax
    1310:	5d                   	pop    %rbp
    1311:	c3                   	retq   

0000000000001312 <set_all>:
    1312:	f3 0f 1e fa          	endbr64 
    1316:	55                   	push   %rbp
    1317:	48 89 e5             	mov    %rsp,%rbp
    131a:	48 83 ec 20          	sub    $0x20,%rsp
    131e:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    1322:	89 f0                	mov    %esi,%eax
    1324:	89 55 e0             	mov    %edx,-0x20(%rbp)
    1327:	88 45 e4             	mov    %al,-0x1c(%rbp)
    132a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    1331:	eb 19                	jmp    134c <set_all+0x3a>
    1333:	0f be 55 e4          	movsbl -0x1c(%rbp),%edx
    1337:	8b 4d fc             	mov    -0x4(%rbp),%ecx
    133a:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    133e:	89 ce                	mov    %ecx,%esi
    1340:	48 89 c7             	mov    %rax,%rdi
    1343:	e8 59 ff ff ff       	callq  12a1 <set_value>
    1348:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    134c:	8b 45 fc             	mov    -0x4(%rbp),%eax
    134f:	3b 45 e0             	cmp    -0x20(%rbp),%eax
    1352:	72 df                	jb     1333 <set_all+0x21>
    1354:	90                   	nop
    1355:	90                   	nop
    1356:	c9                   	leaveq 
    1357:	c3                   	retq   

0000000000001358 <clear_all>:
    1358:	f3 0f 1e fa          	endbr64 
    135c:	55                   	push   %rbp
    135d:	48 89 e5             	mov    %rsp,%rbp
    1360:	48 83 ec 10          	sub    $0x10,%rsp
    1364:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    1368:	89 75 f4             	mov    %esi,-0xc(%rbp)
    136b:	8b 55 f4             	mov    -0xc(%rbp),%edx
    136e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1372:	be 00 00 00 00       	mov    $0x0,%esi
    1377:	48 89 c7             	mov    %rax,%rdi
    137a:	e8 93 ff ff ff       	callq  1312 <set_all>
    137f:	90                   	nop
    1380:	c9                   	leaveq 
    1381:	c3                   	retq   
    1382:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    1389:	00 00 00 
    138c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000001390 <__libc_csu_init>:
    1390:	f3 0f 1e fa          	endbr64 
    1394:	41 57                	push   %r15
    1396:	4c 8d 3d 1b 2a 00 00 	lea    0x2a1b(%rip),%r15        # 3db8 <__frame_dummy_init_array_entry>
    139d:	41 56                	push   %r14
    139f:	49 89 d6             	mov    %rdx,%r14
    13a2:	41 55                	push   %r13
    13a4:	49 89 f5             	mov    %rsi,%r13
    13a7:	41 54                	push   %r12
    13a9:	41 89 fc             	mov    %edi,%r12d
    13ac:	55                   	push   %rbp
    13ad:	48 8d 2d 0c 2a 00 00 	lea    0x2a0c(%rip),%rbp        # 3dc0 <__do_global_dtors_aux_fini_array_entry>
    13b4:	53                   	push   %rbx
    13b5:	4c 29 fd             	sub    %r15,%rbp
    13b8:	48 83 ec 08          	sub    $0x8,%rsp
    13bc:	e8 3f fc ff ff       	callq  1000 <_init>
    13c1:	48 c1 fd 03          	sar    $0x3,%rbp
    13c5:	74 1f                	je     13e6 <__libc_csu_init+0x56>
    13c7:	31 db                	xor    %ebx,%ebx
    13c9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    13d0:	4c 89 f2             	mov    %r14,%rdx
    13d3:	4c 89 ee             	mov    %r13,%rsi
    13d6:	44 89 e7             	mov    %r12d,%edi
    13d9:	41 ff 14 df          	callq  *(%r15,%rbx,8)
    13dd:	48 83 c3 01          	add    $0x1,%rbx
    13e1:	48 39 dd             	cmp    %rbx,%rbp
    13e4:	75 ea                	jne    13d0 <__libc_csu_init+0x40>
    13e6:	48 83 c4 08          	add    $0x8,%rsp
    13ea:	5b                   	pop    %rbx
    13eb:	5d                   	pop    %rbp
    13ec:	41 5c                	pop    %r12
    13ee:	41 5d                	pop    %r13
    13f0:	41 5e                	pop    %r14
    13f2:	41 5f                	pop    %r15
    13f4:	c3                   	retq   
    13f5:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
    13fc:	00 00 00 00 

0000000000001400 <__libc_csu_fini>:
    1400:	f3 0f 1e fa          	endbr64 
    1404:	c3                   	retq   

Disassembly of section .fini:

0000000000001408 <_fini>:
    1408:	f3 0f 1e fa          	endbr64 
    140c:	48 83 ec 08          	sub    $0x8,%rsp
    1410:	48 83 c4 08          	add    $0x8,%rsp
    1414:	c3                   	retq   
