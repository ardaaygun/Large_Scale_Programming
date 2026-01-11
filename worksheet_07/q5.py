from abc import ABC, abstractmethod

class Playable(ABC):

    @abstractmethod
    def play(self):pass
    @abstractmethod
    def stop(self):pass



class MP3Player(Playable):
    def play(self):
        print("Playing MP3 music...")

    def stop(self):
        print("Stopping MP3 music...")


class VideoPlayer(Playable):
    def play(self):
        print("Playing Video file...")

    def stop(self):
        print("Stopping Video playback...")



players = [MP3Player(), VideoPlayer()]

for p in players:
    p.play()
