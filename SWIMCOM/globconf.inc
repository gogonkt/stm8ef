; STM8EF Global Configuration File
; STM8S003F3P6 generic SWIM single pin communication
; Clock: HSI (no crystal)

        STM8S003F3       = 1 

        HALF_DUPLEX      = 1    ; Use EMIT/?KEY in half duplex mode
        HAS_TXUART       = 0    ; No UART TXD, word TX!
        HAS_RXUART       = 0    ; No UART RXD, word ?RX
        HAS_TXSIM        = 1    ; Enable TxD via GPIO/TIM4, word TXGP!
        HAS_RXSIM        = 1    ; Enable RxD via GPIO/TIM4, word ?RXGP
        PSIM     = PORTD        ; Port for UART simulation
        PNRX             = 1    ; Port GPIO# for HAS_RXDSIM
        PNTX             = 1    ; Port GPIO# for HAS_TXDSIM

        EMIT_BG  = DROP         ; 7S-LED background EMIT vector
        QKEY_BG  = ZERO         ; Board keys background QKEY vector
          
        HAS_LED7SEG      = 0    ; no 
        HAS_KEYS         = 0    ; no
        HAS_OUTPUTS      = 0    ; no
        HAS_ADC          = 1    ; Analog input words
        
        HAS_BACKGROUND   = 1    ; Background Forth task (TIM2 ticker)
        HAS_CPNVM        = 1    ; Can compile to Flash, always interpret to RAM 
        HAS_DOES         = 1    ; CREATE-DOES> extension
        HAS_DOLOOP       = 1    ; DO .. LOOP extension: DO LEAVE LOOP +LOOP


        CASEINSENSITIVE  = 1    ; Case insensitive dictionary search
        SPEEDOVERSIZE    = 0    ; Speed-over-size in core words: ROT - = < 
        BAREBONES        = 0    ; Remove or unlink some more: hi HERE .R U.R SPACES @EXECUTE AHEAD CALL, EXIT COMPILE [COMPILE]

        WORDS_LINKINTER  = 0    ; Link interpreter words: ACCEPT QUERY TAP kTAP hi 'BOOT tmp >IN 'TIB #TIB eval CONTEXT pars PARSE NUMBER? DIGIT? WORD TOKEN NAME> SAME? find ABORT aborq $INTERPRET INTER? .OK ?STACK EVAL PRESET QUIT $COMPILE
        WORDS_LINKCOMP   = 0    ; Link compiler words: cp last OVERT $"| ."| $,n 
        WORDS_LINKRUNTI  = 0    ; Link runtime words: doLit do$ doVAR donxt dodoes ?branch branch 
        WORDS_LINKCHAR   = 1    ; Link char out words: DIGIT <# # #S SIGN #> str hld HOLD 
        WORDS_LINKMISC   = 0    ; Link composing words of SEE DUMP WORDS: >CHAR _TYPE dm+ .ID >NAME  

        WORDS_EXTRASTACK = 0    ; Link/include stack core words: rp@ rp! sp! sp@ DEPTH 
        WORDS_EXTRADEBUG = 0    ; Extra debug words: SEE
        WORDS_EXTRACORE  = 1    ; Extra core words: =0 I
        WORDS_EXTRAMEM   = 1    ; Extra memory words: B! 2C@ 2C!
        WORDS_EXTRAEEPR  = 1    ; Extra EEPROM lock/unlock words: LOCK ULOCK ULOCKF LOCKF 
        WORDS_HWREG      = 1    ; Peripheral Register words

