/*
 *      Copyright 2017 Particle Industries, Inc.
 *
 *      Licensed under the Apache License, Version 2.0 (the "License");
 *      you may not use this file except in compliance with the License.
 *      You may obtain a copy of the License at
 *
 *          http://www.apache.org/licenses/LICENSE-2.0
 *
 *      Unless required by applicable law or agreed to in writing, software
 *      distributed under the License is distributed on an "AS IS" BASIS,
 *      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *      See the License for the specific language governing permissions and
 *      limitations under the License.
 *
 */

#define SONG_COUNT                          4

#define SONG_JOYTOTHEWORLD                  0
#define SONG_WEWHISHYOUAMERRYXMAS           1
#define SONG_RUDOLFTHEREDNOSEDREINDEER      2
#define SONG_JINGLEBELLS                    3

/*
 *      Credit:
 *          Midi to Arduino Converter
 *              - Andy Tran (extramaster), 2015
 *          https://www.extramaster.net/tools/midiToArduino/
 *
 *      The songs are gernerated from:
 *          https://www.extramaster.net/tools/midiToArduino/processFile/?url=http://www.jump-gate.com/christmas/music/midi/joyworld.mid&track=1
 *          https://www.extramaster.net/tools/midiToArduino/processFile/?url=http://www.jump-gate.com/christmas/music/midi/wewishu2.mid&track=3
 *          https://www.extramaster.net/tools/midiToArduino/processFile/?url=http://www.jump-gate.com/christmas/music/midi/rudolf.mid&track=1
 *          https://www.extramaster.net/tools/midiToArduino/processFile/?url=http://www.jump-gate.com/christmas/music/midi/jingbell.mid&track=1
 */

/* Song List */
String songList = "Joy To The World, We Wish You A Merry X'mas, Rudolf the Red Nosed Reindeer, Jingle Bells";

/* An indicator to exit the current song */
bool changeSong = false;

bool delaySong(unsigned duration)
{
    while (duration > 0 && !changeSong) {
        unsigned thisDelay = duration > 100 ? 100 : duration;
        delay(thisDelay);
        duration -= thisDelay;
    }
  
    return changeSong;
}

/*
 *
 *      Joy To The World
 *
 *      More information:
 *          https://en.wikipedia.org/wiki/Joy_to_the_World
 *
 */

#define NOTE_COUNT_JOYTOTHEWORLD   57

const float notes_joyToTheWorld[] = {
    // Note, Duration, Delay
    587, 450.0, 500,
    554, 337.5, 375,
    493, 112.5, 125, 
    440, 675.0, 750,
    391, 225.0, 250, 
    369, 450.0, 500,
    329, 450.0, 500,
    293, 675.0, 750.0,  
    440, 225.0, 250.0,  
    493, 670.3125, 744.791666667 + 5.20833333333,  
    493, 225.0, 250.0,  
    554, 670.3125, 744.791666667 + 5.20833333333,  
    554, 225.0, 250.0,  
    587, 670.3125, 744.791666667 + 5.20833333333,  
    587, 220.3125, 244.791666667 + 5.20833333333,  
    587, 225.0, 250.0,  
    554, 225.0, 250.0,  
    493, 225.0, 250.0,  
    440, 220.3125, 244.791666667 + 5.20833333333,  
    440, 337.5, 375.0,  
    391, 112.5, 125.0,  
    369, 225.0, 250.0,  
    587, 220.3125, 244.791666667 + 5.20833333333,
    587, 225.0, 250.0,  
    554, 225.0, 250.0,  
    493, 225.0, 250.0,  
    440, 220.3125, 244.791666667 + 5.20833333333,  
    440, 337.5, 375.0,  
    391, 112.5, 125.0,  
    369, 220.3125, 244.791666667 + 5.20833333333,  
    369, 220.3125, 244.791666667 + 5.20833333333,  
    369, 220.3125, 244.791666667 + 5.20833333333,
    369, 220.3125, 244.791666667 + 5.20833333333,  
    369, 220.3125, 244.791666667 + 5.20833333333,  
    369, 112.5, 125.0,  
    391, 112.5, 125.0,  
    440, 675.0, 750.0,  
    391, 112.5, 125.0,  
    369, 112.5, 125.0,  
    329, 220.3125, 244.791666667 + 5.20833333333,  
    329, 220.3125, 244.791666667 + 5.20833333333,  
    329, 220.3125, 244.791666667 + 5.20833333333,  
    329, 112.5, 125.0,  
    369, 112.5, 125.0,  
    391, 675.0, 750.0,  
    369, 112.5, 125.0,  
    329, 112.5, 125.0,  
    293, 225.0, 250.0,  
    587, 450.0, 500.0,  
    493, 225.0, 250.0,  
    440, 337.5, 375.0,  
    391, 112.5, 125.0,  
    369, 225.0, 250.0,  
    391, 225.0, 250.0,  
    369, 450.0, 500.0,  
    329, 450.0, 500.0, 
    293, 450.0, 500.0,
};


/*
 *
 *      We Wish You A Merry X'mas
 *
 *      More information:
 *          https://en.wikipedia.org/wiki/We_Wish_You_a_Merry_Christmas
 *
 */

#define NOTE_COUNT_WEWISHYOUAMERRYXMAS   52

const float notes_weWishYouAMerryXmas[] = {
    // Note, Duration, Delay
    311, 312.4995, 347.221666667,
    415, 312.4995, 347.221666667,
    415, 156.24975, 173.610833333,  
    466, 156.24975, 173.610833333,  
    415, 156.24975, 173.610833333,  
    391, 156.24975, 173.610833333,  
    349, 312.4995, 347.221666667,  
    349, 234.374625, 260.41625 + 86.8054166667, 
    349, 312.4995, 347.221666667,  
    466, 312.4995, 347.221666667,  
    466, 156.24975, 173.610833333,  
    523, 156.24975, 173.610833333,  
    466, 156.24975, 173.610833333,  
    415, 156.24975, 173.610833333,  
    391, 312.4995, 347.221666667,  
    311, 234.374625, 260.41625 + 86.8054166667,
    311, 312.4995, 347.221666667,  
    523, 312.4995, 347.221666667, 
    523, 156.24975, 173.610833333,  
    554, 156.24975, 173.610833333,  
    523, 156.24975, 173.610833333,  
    466, 156.24975, 173.610833333,  
    415, 312.4995, 347.221666667,  
    349, 234.374625, 260.41625 + 86.8054166667,
    311, 156.24975, 173.610833333,
    311, 156.24975, 173.610833333,
    349, 234.374625, 260.41625 + 86.8054166667,
    466, 234.374625, 260.41625 + 86.8054166667,  
    391, 234.374625, 260.41625 + 86.8054166667,
    415, 546.874125, 607.637916667 + 86.8054166667,
    311, 312.4995, 347.221666667,  
    415, 312.4995, 347.221666667,  
    415, 312.4995, 347.221666667,  
    415, 312.4995, 347.221666667,  
    391, 624.999, 694.443333333,  
    391, 312.4995, 347.221666667,  
    415, 312.4995, 347.221666667,  
    391, 312.4995, 347.221666667,  
    349, 312.4995, 347.221666667,
    311, 546.874125, 607.637916667 + 86.8054166667,  
    466, 312.4995, 347.221666667,  
    523, 312.4995, 347.221666667,  
    466, 312.4995, 347.221666667,  
    415, 312.4995, 347.221666667,  
    622, 312.4995, 347.221666667,  
    311, 312.4995, 347.221666667,  
    311, 156.24975, 173.610833333,  
    311, 156.24975, 173.610833333,
    349, 234.374625, 260.41625 + 86.8054166667, 
    466, 234.374625, 260.41625 + 86.8054166667,
    391, 234.374625, 260.41625 + 86.8054166667, 
    415, 546.874125, 607.637916667, 
};

/*
 *
 *      Rudolf The Red Nosed Reindeer
 *
 *      More Information:
 *          https://en.wikipedia.org/wiki/Rudolph_the_Red-Nosed_Reindeer_(song)
 *
 */

#define NOTE_COUNT_RUDOLFTHEREDNOSEDREINDEER   110

const float notes_rudolfTheRedNosedReindeer[] = {
    // Note, Duration, Delay
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 323.7405, 359.711666667, 
    329, 323.7405, 359.711666667, 
    523, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    391, 967.849203125, 1075.38800347 + 3.74699652778, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 323.7405, 359.711666667, 
    523, 323.7405, 359.711666667, 
    493, 1294.962, 1438.84666667, 
    349, 161.87025, 179.855833333, 
    391, 161.87025, 179.855833333, 
    349, 323.7405, 359.711666667, 
    293, 323.7405, 359.711666667, 
    493, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    391, 967.849203125, 1075.38800347 + 3.74699652778, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    329, 1294.962, 1438.84666667, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 323.7405, 359.711666667, 
    329, 323.7405, 359.711666667, 
    523, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    391, 967.849203125, 1075.38800347 + 3.74699652778, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 323.7405, 359.711666667, 
    523, 323.7405, 359.711666667, 
    493, 1294.962, 1438.84666667, 
    349, 161.87025, 179.855833333, 
    391, 161.87025, 179.855833333, 
    349, 323.7405, 359.711666667, 
    293, 323.7405, 359.711666667, 
    493, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    391, 967.849203125, 1075.38800347 + 3.74699652778, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 323.7405, 359.711666667, 
    587, 323.7405, 359.711666667, 
    523, 1294.962, 1438.84666667, 
    440, 320.368203125, 355.964670139 + 3.74699652778, 
    440, 323.7405, 359.711666667, 
    523, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    391, 323.7405, 359.711666667, 
    329, 323.7405, 359.711666667, 
    391, 647.481, 719.423333333, 
    349, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    391, 323.7405, 359.711666667, 
    349, 323.7405, 359.711666667, 
    329, 1294.962, 1438.84666667, 
    293, 323.7405, 359.711666667, 
    329, 323.7405, 359.711666667, 
    391, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    493, 320.368203125, 355.964670139 + 3.74699652778, 
    493, 320.368203125, 355.964670139 + 3.74699652778, 
    493, 647.481, 719.423333333, 
    523, 320.368203125, 355.964670139 + 3.74699652778, 
    523, 323.7405, 359.711666667, 
    493, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    391, 323.7405, 359.711666667, 
    349, 161.87025, 179.855833333, 
    293, 809.35125, 899.279166667, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 323.7405, 359.711666667, 
    329, 323.7405, 359.711666667, 
    523, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    391, 967.849203125, 1075.38800347 + 3.74699652778, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 323.7405, 359.711666667, 
    523, 323.7405, 359.711666667, 
    493, 1294.962, 1438.84666667, 
    349, 161.87025, 179.855833333, 
    391, 161.87025, 179.855833333, 
    349, 323.7405, 359.711666667, 
    293, 323.7405, 359.711666667, 
    493, 323.7405, 359.711666667, 
    440, 323.7405, 359.711666667, 
    391, 967.849203125, 1075.38800347 + 3.74699652778, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 161.87025, 179.855833333, 
    440, 161.87025, 179.855833333, 
    391, 323.7405, 359.711666667, 
    587, 323.7405, 359.711666667, 
    523, 971.2215, 359.711666667, 
};
    

/*
 *
 *      Jingle Bells
 *
 *      More information:
 *        https://en.wikipedia.org/wiki/Jingle_Bells
 *
 */

#define NOTE_COUNT_JINGLEBELLS   53

const float notes_jingleBells[] = {
    493, 208.33275, 231.480833333,
    493, 208.33275, 231.480833333,
    493, 416.6655, 462.961666667,
    493, 208.33275, 231.480833333,
    493, 208.33275, 231.480833333,
    493, 416.6655, 462.961666667,
    493, 208.33275, 231.480833333,
    587, 208.33275, 231.480833333,
    391, 312.499125, 347.22125,
    440, 104.166375, 115.740416667,
    493, 833.331, 925.923333333,
    523, 208.33275, 231.480833333,
    523, 208.33275, 231.480833333,
    523, 312.499125, 347.22125,
    523, 104.166375, 115.740416667,
    523, 208.33275, 231.480833333,
    493, 208.33275, 231.480833333,
    493, 208.33275, 231.480833333,
    493, 104.166375, 115.740416667,
    493, 104.166375, 115.740416667,
    493, 208.33275, 231.480833333,
    440, 208.33275, 231.480833333,
    440, 208.33275, 231.480833333,
    493, 208.33275, 231.480833333,
    440, 416.6655, 462.961666667,
    587, 416.6655, 462.961666667,
    493, 208.33275, 231.480833333,
    493, 208.33275, 231.480833333,
    493, 416.6655, 462.961666667,
    493, 208.33275, 231.480833333,
    493, 208.33275, 231.480833333,
    493, 416.6655, 462.961666667,
    493, 208.33275, 231.480833333,
    587, 208.33275, 231.480833333,
    391, 312.499125, 347.22125,
    440, 104.166375, 115.740416667,
    493, 833.331, 925.923333333,
    523, 208.33275, 231.480833333,
    523, 208.33275, 231.480833333,
    523, 312.499125, 347.22125,
    523, 104.166375, 115.740416667,
    523, 208.33275, 231.480833333,
    493, 208.33275, 231.480833333,
    493, 208.33275, 231.480833333,
    493, 104.166375, 115.740416667,
    493, 104.166375, 115.740416667,
    587, 208.33275, 231.480833333,
    587, 208.33275, 231.480833333,
    523, 208.33275, 231.480833333,
    440, 208.33275, 231.480833333,
    391, 208.33275, 231.480833333,
    587, 208.33275, 231.480833333,
    783, 208.33275, 231.480833333,
};


/*
 *
 *      Xmas Songs
 *
 */

void joyToTheWorld()
{
    int noteCount = NOTE_COUNT_JOYTOTHEWORLD;
    
    for (int i = 0; i < noteCount * 3; i += 3) {
        if (changeSong)
            return;
            
        tone(PIN_BUZZER, notes_joyToTheWorld[i], notes_joyToTheWorld[i+1]);
        delay(notes_joyToTheWorld[i+2]);
    }

    if (!repeatSong)
        nextSong();
}

void weWishYouAMerryXmas()
{
    int noteCount = NOTE_COUNT_WEWISHYOUAMERRYXMAS;

    for (int i = 0; i < noteCount * 3; i += 3) {
        if (changeSong)
            return;
            
        tone(PIN_BUZZER, notes_weWishYouAMerryXmas[i], notes_weWishYouAMerryXmas[i+1]);
        delay(notes_weWishYouAMerryXmas[i+2]);
    }

    if (!repeatSong)
        nextSong();
}

void rudolfTheRedNosedReindeer()
{
    int noteCount = NOTE_COUNT_RUDOLFTHEREDNOSEDREINDEER;

    for (int i = 0; i < noteCount * 3; i += 3) {
        if (changeSong)
            return;

        tone(PIN_BUZZER, notes_rudolfTheRedNosedReindeer[i], notes_rudolfTheRedNosedReindeer[i+1]);
        delay(notes_rudolfTheRedNosedReindeer[i+2]);
    }
    
    if (!repeatSong)
        nextSong();
}

void jingleBells()
{
    int noteCount = NOTE_COUNT_JINGLEBELLS;

    for (int i = 0; i < noteCount * 3; i += 3) {
        if (changeSong)
            return;

        tone(PIN_BUZZER, notes_jingleBells[i], notes_jingleBells[i+1]);
        delay(notes_jingleBells[i+2]);
    }
    
    if (!repeatSong)
        nextSong();
}

