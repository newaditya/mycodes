from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

room = [
    {'id' : 1, 'name':'Lets learn python!'},
    {'id' : 2, 'name':'Design with me!'},
    {'id' : 3, 'name':'Javascript!'},
    {'id' : 4, 'name':'Front End developer!'},
]

def home(request):
    return render(request, 'home.html')
    
def room(request):
    return render(request, 'room.html')
