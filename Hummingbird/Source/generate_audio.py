import torch
from riffusion.riffusion_pipeline import RiffusionPipeline

def generate_audio(bpm: int, chords: str, genre: str, output_path="output.wav"):
    prompt = f"{genre} music with a BPM of {bpm} and chord progression {chords}"
    model = RiffusionPipeline()
    audio = model.generate(prompt)
    audio.save(output_path)
    return output_path
