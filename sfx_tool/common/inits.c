
void sound_bank_init( void ) {
    
    byte counter = sizeof( sound_bank ) / sizeof( SFX );

    for(int i=0; i<counter; i++ ) {

        sound_bank.sfx[ i ].note  = 0;
        sound_bank.sfx[ i ].pwm   = 0;
        sound_bank.sfx[ i ].wave  = 0;
        sound_bank.sfx[ i ].ad    = 0;
        sound_bank.sfx[ i ].sr    = 0;
        sound_bank.sfx[ i ].dfreq = 0;
        sound_bank.sfx[ i ].dpwm  = 0;
        sound_bank.sfx[ i ].time1 = 0;
        sound_bank.sfx[ i ].time0 = 0;

    }

}
